/* This file requires the processor pack to be installed before this can be
   compiled in Microsoft Visual C++. The processor pack can be downloaded from
   msdn, along with the MSVCPP service pack. Together, it is about a 130MB 
   download. If you do not want to do that, uncomment NO_ASM to disable the
   assembly code. This will disable all features that use assembly*/

//#define NO_ASM

unsigned char * frame;
unsigned char * denoiseFrame;
unsigned char * prevFrame;

void AdjustContrast( bool increase){
	static float contrast = 1.0;
	if ( increase ) 
		contrast +=.05;
	else 
		contrast -=.05;
	glPixelTransferf(GL_RED_SCALE,  contrast);
	glPixelTransferf(GL_BLUE_SCALE, contrast);
	glPixelTransferf(GL_GREEN_SCALE,contrast);
}

void AdjustBrightness( bool increase){
	static float brightness = 0.0;
	if ( increase ) 
		brightness +=.05;
	else 
		brightness -=.05;
	glPixelTransferf(GL_RED_BIAS,  brightness);
	glPixelTransferf(GL_BLUE_BIAS, brightness);
	glPixelTransferf(GL_GREEN_BIAS,brightness);
}

void Cropping(unsigned char key, int a, int b){
	if ( key < '0' || key > '9' ){
		Key( key, 0, 0);
		glutKeyboardFunc(Key);
		return;
	}
	static char side=0;
	if ( key != '5' )
		side = key;
	if ( side == '2' ){
		if ( key == '2')
			cropBY++;
		if (key == '5' && cropBY)
			cropBY--;
	}
	if ( side == '4' ){
		if ( key == '4')
			cropLX++;
		if (key == '5' && cropLX)
			cropLX--;
	}
	if ( side == '8' ){
		if ( key == '8')
			cropTY++;
		if (key == '5' && cropTY)
			cropTY--;
	}
	if ( side == '6' ){
		if ( key == '6')
			cropRX++;
		if (key == '5' && cropRX)
			cropRX--;
	}
	
	glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
	glPixelStorei(GL_UNPACK_SKIP_ROWS, cropBY);
	glPixelStorei(GL_UNPACK_SKIP_PIXELS, cropLX);
	Reshape(winWidth, winHeight);
}

void InitDeinterlace(){
	if ( frame==NULL)
		frame = (unsigned char *)malloc(width*height*3);
	if ( prevFrame == NULL )
		prevFrame = (unsigned char *)malloc(width*height*3);
	memcpy( frame, video, width*height*3);
	memcpy(prevFrame,video, width*height*3);
	deinterlace=true;
}

void CloseDeinterlace(){
	if ( frame )
		free(frame);
	frame = NULL;
	if ( prevFrame )
		free(prevFrame);
	prevFrame = NULL;
	deinterlace=false;
}

void Deinterlace(){
	#ifndef NO_ASM
	/* General method: compare every other pixel on even lines to the corisponding
	   pixel in the previous frame. If one or more of the color channels has
	   changed by more than the tolerance, replace the pixel with the average of
	   the pixels above and below it. */

	static const unsigned __int64 mask = 0xFEFEFEFEFEFEFEFE;
	if ( !paused ){
		memcpy(frame, video, width*height*3);
		__asm{	
			pusha
			// esi = byte width of a horizontal line
			push		esi
			xor			esi,esi
			mov			si,word ptr [width]
			imul        esi,esi,3
					
			// edx = pointer to current pixel in the current video frame
			xor			edx,edx
			mov			edx,dword ptr [frame]
			add			edx,esi
			
			// ebx = pointer to current pixel in the previous frame
			xor			ebx,ebx
			xor			eax,eax
			mov			ebx,dword ptr [prevFrame]
			add			ebx,esi
		 
			push		ebp
			push		edi
			xor			ebp,ebp
			xor			edi,edi
			// ebp = counter for outside loop
			mov			bp,word ptr [height]
			sub			ebp,3
			shr			ebp,1

			mov			ecx,10101010h
			movd		mm2,ecx // tolerance, +- 15 per color
			movq		mm3,mask//'and'ed to remove lsb on pixels for blending
			Vertical_Loop:
			
				mov			eax,edx
				add			edx,esi
				add			ebx,esi
				//	edi = inner loop counter
				mov			edi,esi
				shr			edi,3

				Horizontal_Loop:
					
					// compare 4 color channels (1 1/3 pixels)
					movd        mm0,dword ptr [ebx]
					movq		mm4,mm0
					movd        mm1,dword ptr [edx]
					movd		dword ptr[ebx],mm1
					psubb       mm0,mm1
		
					pcmpgtb     mm0,mm2
					movd		ecx,mm0
					cmp			ecx,0
					ja			Motion

					psubb		mm1,mm4
					pcmpgtb		mm1,mm2
					movd		ecx,mm1
					jecxz		Fixed
						
						// blend 8 color values (2 2/3 pixels)
						Motion:
						movq		mm0,qword ptr [eax]
						pand		mm0,mm3
						movq		mm1,qword ptr [edx+esi]
						pand		mm1,mm3
						psrlq		mm0,1
						psrlq		mm1,1
						paddusb		mm0,mm1
						movq		qword ptr [edx],mm0

					Fixed:
					add			edx,8
					add			ebx,8
					add			eax,8
					dec			edi
				jnz			Horizontal_Loop
				dec			ebp
			jnz			Vertical_Loop
			emms
			pop			edi
			pop			ebp
			pop			esi
			popa
		}
	}
	#endif
	glDrawPixels(width-cropLX-cropRX, height-cropBY-cropTY, GL_BGR_EXT, GL_UNSIGNED_BYTE, frame);
}
// returns true if the pixels are within a tolerance of each other
bool PixComp(unsigned char *a, unsigned char *b ){
	unsigned int tol = 6;
	if ( (*a > *b && *a-*b > tol) || (*b>*a && *b-*a > tol ))
		return false;
	a++, b++;
	if ( (*a > *b && *a-*b > tol) || (*b>*a && *b-*a > tol ))
		return false;
	a++, b++;
	if ( (*a > *b && *a-*b > tol) || (*b>*a && *b-*a > tol ))
		return false;
	return true;
}

void InitDenoise(){
	if ( denoiseFrame ==NULL)
		denoiseFrame = (unsigned char *)malloc( winWidth*winHeight*3+width*3);
	denoise = true;
}

void CloseDenoise(){
	if ( denoiseFrame!= NULL )
		free( denoiseFrame );
	denoiseFrame = NULL;
	denoise = false;
}

void NoiseReduction(){
	/*
	static unsigned char * tempFrame;
	if ( !tempFrame )
		tempFrame = (unsigned char *)malloc(width*height*4);

	// horizontal scan, vertical lines
	unsigned char * source = (unsigned char *)video;
	unsigned char * dest = denoiseFrame+3;
	unsigned char * end = denoiseFrame+width*height*3-3;
	unsigned int size = width *3;
	/*while ( dest < end ) {
		if ( PixComp( source+=3, source) ){
			*dest++ = 255;
			*dest++ = 255;
			*dest++ = 255;
		} else {
			*dest++ = 0;
			*dest++ = 0;
			*dest++ = 0;
		}
	}

	// vertical scan, horizontal lines
	source = (unsigned char *)video;
	dest = denoiseFrame;
	end = denoiseFrame+width*height*3-size;
	while ( dest < end ) {
		if ( PixComp( source, source+size) ){
			dest+=3;
		} else {
			*dest++ = 0;
			*dest++ = 0;
			*dest++ = 0;
		}
		source+=3;
	}

	// vertical line removal
	dest = denoiseFrame;
	while ( dest < end ) {
		if ( ! *(dest+3) ){
			if ( *dest && *(dest+6) ){
				*(dest+3)=255;
				*(dest+4)=255;
				*(dest+5)=255;
			}
		}	
		dest+=3;
	}

	// horizontal line removal
	dest = denoiseFrame;
	size+=3;
	while ( dest < end ) {
		if ( ! *(dest+size) ){
			if ( *dest && *(dest+size*2) ){
				*(dest+size)=255;
				*(dest+size+1)=255;
				*(dest+size+2)=255;
			}
		}	
		dest+=3;
	}
	
	// vertical line removal
	source = (unsigned char *)video;
	dest = tempFrame+6;
	end = tempFrame + width*height*3-6;
	while ( dest < end ){
		unsigned int total = *source + *(source+3) + *(source+6);
		total/=3;
		*dest = total;
		dest++;
		source++;
	}*/
	static int w=0, h = 0;
	if ( w != winWidth || h != winHeight){
		w=winWidth;
		h = winHeight;
		if ( denoiseFrame )
			free(denoiseFrame);
		denoiseFrame = (unsigned char *)malloc(w*h*3);
	}
	gluScaleImage ( GL_RGB, width,height, GL_UNSIGNED_BYTE, video, winWidth,winHeight, GL_UNSIGNED_BYTE, denoiseFrame);
	glPixelZoom(1, 1);
		
	glDrawPixels(winWidth, winHeight, GL_BGR_EXT, GL_UNSIGNED_BYTE, denoiseFrame);
}

void LoadSupportedFilters(){
	try {
	#ifndef NO_ASM
		_asm {
			mov			eax,1
			cpuid		
			mov			CPU_FLAGS,edx
		}
	#else
		CPU_FLAGS = 0;
	#endif
	} catch (...){
		CPU_FLAGS = 0;
	}
	if ( CPU_FLAGS & 0x00800000 ){
		glutAddMenuEntry("Enable Deinterlacing", 12);
	//	glutAddMenuEntry("Software resizing",13);
	}
}