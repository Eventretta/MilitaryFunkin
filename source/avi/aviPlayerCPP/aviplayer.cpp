/* Programmed by Ben Greenwood (brg0853@rit.edu, "slr lagsalot" on aim )
   
Credits: Initially, most of the code for handling the video was copied from
Jeff Molofee's avi tutorial (http://nehe.gamedev.net). Since then, I have
replaced all of the code with my own, but his tutorial was invaluable
when I was getting started, and also responsible for planting the idea of 
coding an avi player in my head. Also, the source code for VirtualDub
(www.virtualdub.org), written by Avery Lee, was a big help when I was working
on getting the audio decompression to work. VirtualDub is a great general 
video editing program, you should check it out if you haven't. Finally, the 
"OpenGL Programming Guide" was an excellent guide when I was learning OpenGL.
Some snippets of code from the examples in the book may be present. */

//#define MK // enable mortal kombat mode

#include "aviplayer.h"

// Updates the display
void Display(){

	if ( maintainAspect )
		glClear(GL_COLOR_BUFFER_BIT);
	//if ( deinterlace )
	//	Deinterlace();
	//else 
		glDrawPixels(width-cropLX-cropRX, height-cropBY-cropTY, GL_BGR_EXT, GL_UNSIGNED_BYTE, video);
	if ( guiActive )
		DrawGui(); 
	else if ( mouseX > 2 && mouseX < winWidth -2 && mouseY > 2 && mouseY < winHeight-2 )
		glutSetCursor( GLUT_CURSOR_NONE );

	glutSwapBuffers();
}

// Loads a new frame of audio into the audio play buffer
void StreamAudio(){
	ALuint BufferID;
	// remove a played buffer
	alSourceUnqueueBuffers(Sources[0], 1, &BufferID);
	// see if there is enough data in the sourceAudioBuffer
	if ( bytePos + (bytesPerFrame * 1.1) <= audioSize ){
		// if so, buffer part of it
		alBufferData(BufferID, alFormat, &audio[bytePos], bytesPerFrame, samplesPerSec);
		bytePos+=bytesPerFrame;
		audioBytesRead+= bytesPerFrame;
	} else {
		// otherwise, buffer what there is, and get the next frame
		#ifdef _DEBUG
		if ( audioSize < 1 )
			printf( "audioSize = %d, stream audio\n", audioSize );
		if ( bytePos >= audioSize ){
			printf( "error: bytePos >= audioSize, stream size\n");
			printf( "bytePos = %d, audioSize = %d\n", bytePos, audioSize);
		}
		#endif

		alBufferData(BufferID, alFormat, &audio[bytePos], audioSize - bytePos, samplesPerSec);
		audioBytesRead+= (audioSize - bytePos);
		bytePos = 0;
		audioSize = videoObj->GetAudioFrame(audioFrame);

		audioFrame++;
		while ( !audioSize && audioFrame < lastAudioFrame ){
			audioSize = videoObj->GetAudioFrame(audioFrame);
			audioFrame++;
		}
		int alError;
		if ( (alError = alGetError()) != AL_NO_ERROR)
			printf("AL ERROR\n");
	}
	// load the buffer back into the play queue
	alSourceQueueBuffers(Sources[0], 1, &BufferID); 
	processed--;
}

// loads the audio play buffer at start up or after position changes
void BufferAudio(){

	// create the buffers
	alGenBuffers(NUMBUFFERS, &Buffers[0]);

	//read the previous frame, in case it has header data, etc that is needed for this frame
	if ( audioFrame ){
		videoObj->GetAudioFrame(audioFrame-1);
	}
	while ( !audioSize && audioFrame < lastAudioFrame){
		audioSize = videoObj->GetAudioFrame(audioFrame);
		audioFrame++;
	}

	for (int i =0; i < NUMBUFFERS; i++) {
		// see if there is enough data in the sourceAudioBuffer
		if ( bytePos + bytesPerFrame * 1.05<= audioSize ){
			// if so, buffer part of it
			alBufferData(Buffers[i], alFormat, &audio[bytePos], bytesPerFrame, samplesPerSec);
			bytePos+=bytesPerFrame;
			audioBytesRead+= bytesPerFrame; 
		} else {
			// otherwise, buffer what there is and load the next frame
			if ( audioSize < 1 )
				printf( "audioSize = %d, buffer audio\n", audioSize );
			if ( bytePos >= audioSize )
				printf( "error: bytePos >= audioSize, buffer audio\n");
			alBufferData(Buffers[i], alFormat, &audio[bytePos], audioSize - bytePos, samplesPerSec);
			audioBytesRead+= (audioSize - bytePos);
			bytePos = 0;
			audioSize = videoObj->GetAudioFrame(audioFrame);
			audioFrame++;
			while ( !audioSize && audioFrame < lastAudioFrame){
				audioSize = videoObj->GetAudioFrame(audioFrame);
				audioFrame++;
			}
		}
		int alError;
		if ( (alError = alGetError()) != AL_NO_ERROR)
			printf("AL ERROR\n");
	}
	// queue the buffers on the source
	alSourceQueueBuffers(Sources[0], NUMBUFFERS, &Buffers[0]);
}


// called by glut when the window dimensions are changed
void Reshape(GLsizei w, GLsizei h) {
	if ( lastAudioFrame )
		alSourceStop(Sources[0]);
    glViewport(0, 0, w, h);
	winWidth = w;
	winHeight = h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

	// maintain the aspect ratio if desired,
	// and account for any cropping
	unsigned int H = height-cropTY-cropBY;
	unsigned int W = width-cropRX-cropLX;
	if ( maintainAspect ){
		float magnify = winWidth/(float)(W);
		if ( magnify * H > winHeight )
			magnify = winHeight/(float)H;
		float x = (winWidth-W*magnify)/2.0;
		float y = (winHeight-H*magnify)/2.0;
		glRasterPos2f(x, y);
		glPixelZoom(magnify, magnify);	
	} else {
		glPixelZoom(winWidth/(float)(W), winHeight/(float)(H));
	}
	glutPostRedisplay();
}

// initilizes openAL to play the audio
void InitAudio(){
	
	ALCdevice *Device;
	ALCcontext *Context;

	Device = alcOpenDevice((ALubyte*)"DirectSound3D");
	Context=alcCreateContext(Device, NULL);
	alcMakeContextCurrent(Context);
	alListenerf(AL_GAIN, 1);

	if ( videoObj->GetChannels() == 2){
		if ( videoObj->GetBitsPerSample() == 16 ) // 16 bit stereo sound
			alFormat = AL_FORMAT_STEREO16;
		else								 // 8 bit stereo sound
			alFormat = AL_FORMAT_STEREO8;
	} else {
		if ( videoObj->GetBitsPerSample() == 16 ) // 16 bit mono sound
			alFormat = AL_FORMAT_MONO16;
		else								 // 8 bit mono sound
			alFormat = AL_FORMAT_MONO8;
	}

	alGenSources(2, &Sources[0]);
	alSourcef(Sources[0], AL_GAIN, 1);
	alSourcei(Sources[0], AL_LOOPING, AL_FALSE);
}

#ifdef MK 
#include <al\alut.h>
#pragma comment( lib, "alut.lib" )

char * mkstring;

void MortalKombatMode( void *){
	static bool mode = false;
	static ALuint buffer=0;
	static ALuint source=0;
	static end;
	if ( !mode ){
		mode = true;
		end = false;
		if ( !buffer ){
			alGenSources(1, &source);
			alGenBuffers(1, &buffer);
			ALint format;
			ALuint size, freq;
			ALvoid	*data;
			char loop;
			alutLoadWAVFile(mkstring,&format,&data,&size,&freq,&loop);
			if ( size < 100 ){
				printf( "Cannot read %s\n", mkstring);
				return;
			}
			alBufferData(buffer,format,data,size,freq);
			alutUnloadWAV(format,data,size,freq);
			alSourcei(source, AL_BUFFER, buffer);
		}
		alSourcePlay(source);

		alSourcef( Sources[0], AL_GAIN, .0001);

		dBytesPerFrame *=.8;
		audioBytesRead = dBytesPerFrame*videoFrame;

		int value;
		alGetSourcei(Sources[0], AL_SOURCE_STATE, &value); 
		while ( value == AL_PLAYING && !end){
			_sleep(100);
			alGetSourcei(source, AL_SOURCE_STATE, &value); 
		}
		alSourcef( Sources[0], AL_GAIN, 1.0);
		dBytesPerFrame = samplesPerSec/framesPerSec * (videoObj->GetChannels() * videoObj->GetBitsPerSample()/8);
		Key('p',0,0);
		positionChanged = true;
		Key('p',0,0);

		mode = false;
	} else 
		end = true;
}
#endif

// called by glut when a 'special' key (such as an arrow key) is pressed
void SpecialKey( int Key, int a, int b){

	if ( time > 2050)
		time -=2050;
	if ( time > 560 )
		time = 560;
	if ( !guiActive){
		_beginthread(GuiTimerThread, 0, NULL );
		guiActive=true;
	}

	switch( Key) {
		case GLUT_KEY_UP: 
			if ( volume < 1 && lastAudioFrame ){	
				volume+=.05;
				alListenerf( AL_GAIN, volume);
			}
			break;
		case GLUT_KEY_DOWN: 
			if ( volume > 0 && lastAudioFrame ){
				volume-=.05;
				alListenerf( AL_GAIN, volume);
			}
			break;	
		case GLUT_KEY_LEFT:  // attempt to rewind
			videoFrame = videoObj->GetKeyFrame( videoFrame - 100, false );
			paused = true;
			if ( lastAudioFrame )
				alSourcePause(Sources[0]);
			if ( videoFrame < 0 ) 
				videoFrame = 0;
			
			videoObj->GetVideoFrame(videoFrame);
			Display();
									 
			finished = false;
			positionChanged = true;
			break;
		case GLUT_KEY_RIGHT: // attempt to fastforward
			videoFrame = videoObj->GetKeyFrame( videoFrame + 100, true );
			paused = true;
			if ( lastAudioFrame )
				alSourcePause(Sources[0]);
			if ( videoFrame >= lastVideoFrame)
				videoFrame = lastVideoFrame-1;

			videoObj->GetVideoFrame(videoFrame);
			Display();

			positionChanged = true;

	 		break;
		default: break;
	} 
}

// called by glut when a normal key is pressed
void Key( unsigned char key, int a, int b){
	if ( key == 'p' || key == 'P' ){  // pause/play the video
		if ( !paused ){
			if ( lastAudioFrame )
				alSourcePause(Sources[0]);
			paused = true;
			Display();
		} else {
			if ( positionChanged && lastAudioFrame ){
				long oldframe = videoFrame;
				if ( videoFrame == 0 )
					audioFrame = 0;
				else
					videoObj->GetAudioPos( oldframe, audioFrame );

				audioBytesRead = dBytesPerFrame * videoFrame - dBytesPerFrame*(videoFrame-oldframe);
				bytePos = 0;
				long comp = audioBytesRead/dBytesPerFrame;
				audioSize =0;
				alSourceStop(Sources[0]);
				alDeleteSources(1, &Sources[0]);
				alDeleteBuffers(NUMBUFFERS, &Buffers[0]);
				alGenSources(1, &Sources[0]);
				alSourcei(Sources[0], AL_LOOPING, AL_FALSE);
				BufferAudio();

				positionChanged = false;
			}
			paused = false;
		}
	}
	if ( key == 27 ) { // Esc is being pressed
		if( lastAudioFrame )
			alSourceStop(Sources[0]);
		Exit(0);
	}else if ( (key == 'x' || key == 'X') && lastAudioFrame  ){
		alSourcePause(Sources[0]);
		bytePos = 0;
		audioBytesRead = 0;
		audioFrame = 0;

		long size;
		for ( ; audioBytesRead / dBytesPerFrame < videoFrame; audioFrame++ ){
			size = videoObj->GetAudioFrame( audioFrame );
			audioBytesRead += size;
		}
	}	else if ( key == 'f' || key == 'F' ){
		static short oldWidth, oldHeight, oldPosX, oldPosY;

		if ( !fullScreen ){
			oldWidth = winWidth;
			oldHeight = winHeight;
			oldPosX = glutGet( GLUT_WINDOW_X );
			oldPosY = glutGet( GLUT_WINDOW_Y );
			glutFullScreen();
		} else {
			glutReshapeWindow(oldWidth, oldHeight);
			glutPositionWindow(oldPosX, oldPosY);
		}
		fullScreen = !fullScreen;

		if ( fullScreen)
			glutChangeToMenuEntry(1, "Windowed", 1);
		else 
			glutChangeToMenuEntry(1, "Full Screen", 1);
	} 
#ifdef MK
	else if ( key == 'm' || key == 'M'){
		_beginthread( MortalKombatMode, 0, NULL);
	}
#endif

}

//**********************************************************************

// called by glut when ever glut is idle
void PlayVideoAudio(){
	// check if a new frame needs to be displayed
	if ( !paused && !finished ){
		if ( (audioBytesRead / dBytesPerFrame) > (videoFrame + frameLag) ){
			videoFrame++;
			if ( videoFrame < lastVideoFrame ){
				videoObj->GetVideoFrame( videoFrame );
			} else {
				paused = true;
				videoFrame =0;
				if ( lastAudioFrame ){
					audioFrame =0;
					audioBytesRead=0;
					alSourceStop( Sources[0]);
					alDeleteBuffers(NUMBUFFERS, &Buffers[0]);
					BufferAudio();
				}
				videoObj->GetVideoFrame(0);
			}
			Display();
		} 
		// make sure there are no al errors
		int value;
		alGetSourcei(Sources[0], AL_SOURCE_STATE, &value); 
		int alError;
		if ( (alError = alGetError()) != AL_NO_ERROR){
			printf("AL ERROR\n");
		} else {
			// make sure the audio is playing if it is supposed to be
			if ( value != AL_PLAYING ){
				ALint remainingBuffers;
				alGetSourcei( Sources[0], AL_BUFFERS_PROCESSED, &remainingBuffers);
				while( remainingBuffers > NUMBUFFERS/2 && audioFrame < lastAudioFrame -1){
					StreamAudio();
					remainingBuffers--;
				}
				alSourcePlay(Sources[0]); 
				_sleep(25);
			}
			alGetSourcei(Sources[0], AL_BUFFERS_PROCESSED, &processed);
			
			// see if more audio needs to be buffered
			if ( processed ){
				if ( audioFrame < lastAudioFrame ){
					StreamAudio();
				} else {
					if ( audioSize > bytePos + bytesPerFrame*1.1 ){
						StreamAudio();
					} else {
						frameLag--;
						ALint remainingBuffers;
						alGetSourcei( Sources[0], AL_BUFFERS_QUEUED, &remainingBuffers);
						if ( remainingBuffers > 0 ){
							ALuint temp;
							alSourceUnqueueBuffers(Sources[0], 1, &temp);
							if ( remainingBuffers == 1 ){
								alSourceStop( Sources[0] );
								paused = true;
								finished = true;
							}
						}
					}
				}
			} else {
				_sleep(1);
			}
		}	
	} else{
		_sleep(40);
		Display();
	}
}

void PlayVideoOnly( int value){
	glutTimerFunc( (int)(1000/framesPerSec), PlayVideoOnly,1);
	if ( !paused ){
		if ( videoFrame < lastVideoFrame ){
			videoFrame++;
			videoObj->GetVideoFrame( videoFrame);
		}
		Display();
	}
	//if ( videoFrame == 300)
	//	Exit(0);
}

void DelayExit(){
	printf( "Exiting program in 10 seconds...");
	_sleep( 10000);
	return;
}

int main( int argc, char** argv){
	#ifdef MK
	{
		mkstring = (char *)malloc( strlen( argv[0] ) + 17);
		int p;
		for (p = strlen( argv[0]); p > 0 && argv[0][p] !='\\'; p-- );
		for( int k =0; k <= p; k++ ){
			mkstring[k]=argv[0][k];
			mkstring[k+1]='\0';
		}
		char m[] = "Mortal Kombat.wav";
		for( int q = 0; q < strlen(m); q++){
			int t = strlen(mkstring);
			mkstring[t]=m[q];
			mkstring[t+1]='\0';
		}
	}
	#endif 

	if ( argc > 1 ){
		fileName = argv[1];
	}else {
		#ifndef _DEBUG
		printf( "Drag and drop an avi file on the executable to play it\n");
		DelayExit();
		return 0;
		#else
		
		//fileName = "f:\\anime2\\Armitage Dual-Matrix.ogm";
		fileName = "C:\\Documents and Settings\\Lags\\desktop\\test.ogm";
		//fileName = "C:\\Documents and Settings\\Lags\\desktop\\test.avi";
		//fileName = "C:\\Documents and Settings\\Lags\\my documents\\anime\\amvs, misc\\Jesmaster_-_Pizza_Matrix.avi";
		//fileName = "C:\\Documents and Settings\\Lags\\my documents\\anime\\amvs, misc\\Hellsing - E Nomine [Vader Unser].avi";
		#endif
	} 

	#ifdef _DEBUG
	printf( "Debug version\n");
	#endif
	
	if ( int type = videoObj->TestFile( fileName ) ){
		if ( type == AVI_VALID )
			videoObj = new AviParser();
		else if ( type == AVI_INCOMPLETE )
			videoObj = new IncompleteAviParser();

		else if ( type == OGM_VALID ) 
			videoObj = new OgmParser();
	} else {
		printf( "Failed to initilize the file\n");
		DelayExit();
	}

	// set up the video object, and make sure everything went well.
	{
		Ev1l_L4bl3:
		int value = videoObj->InitFile( fileName);
		if ( value == FILE_INVALID ){
			printf( "Failed to initilize the file\n");
			videoObj->CloseAvi();
			DelayExit();
			return 1;
		} else if ( value == AVI_INCOMPLETE ) {
			delete videoObj;
			videoObj= new IncompleteAviParser();

			// from hell's heart, i goto thee!
			goto Ev1l_L4bl3;
		} 
		
	}
//	videoBuffer = videoObj->GetBuffer();
	if ( !videoObj->InitVideoDecompressor() ){
		printf("Failed to intitilize the video decompression\n");
		videoObj->CloseAvi();
		DelayExit();
		return 1;
	}
	if ( lastAudioFrame = videoObj->GetTotalAudioFrames() ){
		if ( !videoObj->InitAudioDecompressor() ){
			printf( "Failed to intitilize the audio decompression\n");
			printf( "No audio will be played\n");
			lastAudioFrame = 0;
			_sleep(1000);
		}

	} else {
		printf( "No audio stream for this file\n");
	}

	// set the values for several global variables
	width = videoObj->GetWidth();
	height = videoObj->GetHeight();
	video = videoObj->GetVideoBuffer();
	framesPerSec = videoObj->GetFramesPerSec();
	if ( lastAudioFrame ){
		audio = videoObj->GetAudioBuffer();
		samplesPerSec = videoObj->GetSamplesPerSec();
		bytesPerFrame = dBytesPerFrame = samplesPerSec/framesPerSec * (videoObj->GetChannels() * videoObj->GetBitsPerSample()/8);
		bytesPerFrame -= bytesPerFrame% (videoObj->GetChannels() * (videoObj->GetBitsPerSample()/8));
		printf( "Audio samples per second = %d\n", samplesPerSec);
		printf( "Audio bits per sample = %d\n", videoObj->GetBitsPerSample() );
		printf( "Audio channels = %d\n", videoObj->GetChannels());
		printf( "Calculated Audio bytes per frame = %f\n", (float)dBytesPerFrame); 
		printf( "Playing audio in chunks of <= %d bytes.\n", bytesPerFrame);
	}
	printf( "Frame rate = %f frames per second\n", framesPerSec);
	printf( "Audio rate = %f chunks per frame\n", audioPerFrame = videoObj->GetAudioPerFrame());
	lastVideoFrame = videoObj->GetTotalFrames();

	// create the glut window
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA );
	glutInitWindowPosition (50, 50);
	glutInitWindowSize(width, height);
	glutCreateWindow(fileName);

	// set up various openGL settings
	glEnable(GL_TEXTURE_2D);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);
	glEnable(GL_BLEND);
	glDisable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);
	glDisable(GL_POLYGON_SMOOTH);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glShadeModel(GL_SMOOTH);

	// calculate vertexes for the buttons
	LoadGuiButtonVertexes();

	// tell glut what functions to call for various events
	glutReshapeFunc(Reshape);
	glutDisplayFunc(Display);
	glutSpecialFunc(SpecialKey);
	glutKeyboardFunc(Key);
	glutMouseFunc(MouseClick);
	glutPassiveMotionFunc(MouseMove);

	if ( lastAudioFrame )
		glutIdleFunc(PlayVideoAudio);
	else 
		glutTimerFunc( (int)(1000.0/framesPerSec), PlayVideoOnly,0);
	// set up the menu
	glutCreateMenu(Menu);
	glutAddMenuEntry("Fullscreen", 1);
	glutAddMenuEntry("Ignore aspect ratio", 2);
	glutAddMenuEntry("Zoom 200%", 3);
	glutAddMenuEntry("Zoom 100%", 4);
	glutAddMenuEntry("Zoom 50%", 5);
	glutAddMenuEntry("Brighten 5%", 6);
	glutAddMenuEntry("Darken 5%", 7);
	glutAddMenuEntry("Increase Contrast 5%", 8);
	glutAddMenuEntry("Decrease Contrast 5%", 9);
	glutAddMenuEntry("Crop Video", 10);
	//glutAddMenuEntry("Slow Motion", 11);

	LoadSupportedFilters();

	glutAttachMenu(GLUT_RIGHT_BUTTON); 
	//Menu(13);
	
	if ( lastAudioFrame ){
		// prepare openAL to play the audio
		InitAudio();
		BufferAudio();

		// delay the video to account for the audio read into the buffer but not played
		frameLag = (audioBytesRead/dBytesPerFrame );
		printf( "Delaying video by %d frames\n", frameLag);

		alSourcePlay(Sources[0]);
	}
	//char* extensionsList = (char*) glGetString(GL_EXTENSIONS);
	//for (int a =0; a < strlen(extensionsList); a++){
	//	if (extensionsList[a] == ' ')
	//		extensionsList[a] = '\n';
	//}
	//printf( "%s\n", extensionsList);

	//glPixelTransformParameter(GLenum, GLint, GLint) = NULL;
	//glPixelTransformParameteriEXT  =(void (APIENTRY *) (GLenum, GLint, GLint)wglGetProcAddress("glCopyTexSubImage3DEXT");
	//glPixelTransformParameteriEXT(0x8330, 0x8331, 0x8334 );

	// wglSwapIntervalEXT specifies the minimum number of video frame periods
    // per buffer swap. Setting this to 1 ( at least 1 refresh per buffer swap)
	// reduces image tearing
	//extgl_Initialize();
	//if ( wglSwapIntervalEXT != NULL )
	//	wglSwapIntervalEXT(0);

	// hand the main thread off to glut. This will call Loop and other functions
	// as nessisary. The video begins to play here.
	glutMainLoop(); 

	// should never get here....
	Exit( 0 );
	return 0;
}

// properly close all files/devices and free memory before exiting
void Exit( int value ){
	try {
		if ( lastAudioFrame ){
			alSourceStop(Sources[0]);
			alDeleteSources(1, &Sources[0]);
			ALCdevice *Device;
			ALCcontext *Context;
			alDeleteBuffers(NUMBUFFERS, &Buffers[0]);
			Context=alcGetCurrentContext();
			Device=alcGetContextsDevice(Context);
			alcMakeContextCurrent(NULL);
			alcDestroyContext(Context);
			alcCloseDevice(Device);
		}
		videoObj->CloseAvi();
	// ignore exceptions since the program is exiting
	} catch (...){
		#ifdef _DEBUG
		printf( "Exception caught in Aviplayer::Exit(%d", value);
		printf( ")\n");
		_sleep(10000);
		#endif
	}
	#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
	#endif
	exit( value );
}

void debugthread( void * required){
}