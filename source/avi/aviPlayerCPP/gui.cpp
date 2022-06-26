#ifndef GUI
#define GUI

bool sliderMove = false;
unsigned short sliderPos=0;
#define time TiMeTHaTDoesNoTConFilict
unsigned short time=0;
unsigned short mouseX=0;
unsigned short mouseY=0;
float vertexes[72];



/* A standard avi file has 24-30 fps. For every frame that the gui is displayed,
 * there are 72 sinf and 72 cosf functions per round button. Thus, there is
 * usually 6900 - 8600 trig function calls per second when the gui is active if
 * each vertex is calculated on the spot. Instead, the values are precalculated
 * and loaded into an array. So 288 bytes of memory are used instead of lots of 
 * function calls. (OpenGL display lists were not practical since the alpha level 
 * doesn't remain constant)
 */
void LoadGuiButtonVertexes(){
	for ( short theta = 0; theta < 360; theta += 5)
		vertexes[ theta/5] = 15 * sinf( (float)0.0174533 * (theta+90));
}

// called to draw the GUI
void DrawGui(){

	// fade in, fade out...
	float alpha = .95;
	if ( time < 500 )
		alpha = (float)time/555.56;
	if (time > 3100 )
		alpha = .9-(float)(time-3100)/1000.0;
	if ( time > 3980 && mouseX > 2 && mouseX < winWidth -2 && mouseY > 2 && mouseY < winHeight-2 )
		glutSetCursor( GLUT_CURSOR_NONE );
	glColor4f(.5,.5,.55,alpha);

	// taskbar background
	glRecti (0, winHeight, winWidth, winHeight - 55);
	glBegin(GL_QUADS);
		glVertex2i(0,winHeight-55);
		glVertex2i(winWidth,winHeight-55);	
		glColor4f(.1,.1,.1,alpha);
		glVertex2i(winWidth,winHeight-59);
		glVertex2i(0,winHeight-59);
	glEnd();
	
	// play/pause button
	char point;
	glBegin( GL_POLYGON );
		for ( point =0; point < 72; point++){
			glColor4ub( (unsigned char)255*(point/72.0), (unsigned char)255*(point/72.0), (unsigned char)255*(point/72.0), (unsigned char)(255*alpha) );
			glVertex2f( vertexes[point]+35, -vertexes[(18-point)<0?(90-point):(18-point)]+winHeight-27);
		}
	glEnd();

	// play/pause symbol
	glColor4f(0,1,0, alpha*.7);
	if ( paused ){
		glBegin(GL_TRIANGLES);
			glVertex2i(32, winHeight-32);
			glVertex2i(42, winHeight-27);
			glVertex2i(32, winHeight-22);
		glEnd();
	} else {
		glLineWidth(2);
		glBegin( GL_LINES );
			glVertex2i(33, winHeight-22);
			glVertex2i(33, winHeight-32);
			glVertex2i(37, winHeight-22);
			glVertex2i(37, winHeight-32);
		glEnd();
	}
	
	// stop button
	glBegin( GL_POLYGON );
		for ( point =0; point < 72; point++){
			glColor4ub( (unsigned char)255*(point/72.0), (unsigned char)255*(point/72.0), (unsigned char)255*(point/72.0), (unsigned char)(255*alpha) );
			glVertex2f( vertexes[point]+75, -vertexes[(18-point)<0?(90-point):(18-point)]+winHeight-27);
		}
	glEnd();

	// stop symbol
	glColor4f(1,0,0, alpha);
	glBegin( GL_QUADS );
		glVertex2i(71, winHeight-23);
		glVertex2i(79, winHeight-23);
		glVertex2i(79, winHeight-31);
		glVertex2i(71, winHeight-31);
	glEnd();

	// slide bar
	glColor4f(0,1,0, alpha);
	if ( winWidth > 160 ){
		glLineWidth(4);

		// slider line
		glBegin(GL_LINES);
			glVertex2i(105, winHeight-25);
			glVertex2i(winWidth - 20, winHeight-25 );
		glEnd();

		// draw the pentagon on the slider bar
		glColor4f(1, 1, 1, alpha+.1);
		glBegin( GL_POLYGON );
			short pos = ((winWidth - 125)* (float)videoFrame/lastVideoFrame)+105;
			glColor4f(.7,.7,.9, alpha+.2);
			glVertex2i( pos, winHeight-30);
			glColor4f(.5,.5,.5, alpha+.2);
			glVertex2i( pos+3, winHeight-26);
			glColor4f(.2,.2,.2, alpha+.2);
			glVertex2i( pos+3, winHeight-19);
			glVertex2i( pos-4, winHeight-19);
			glColor4f(.5,.5,.5, alpha+.2);
			glVertex2i( pos-4, winHeight-27);
		glEnd();

		// draw the pentagon outline
		glDisable(GL_LINE_SMOOTH);
		glLineWidth(1.0);
		glBegin( GL_LINE_LOOP );
			glColor4f(0,0,0, alpha);
			glVertex2i( pos-1, winHeight-30);
			glVertex2i( pos+3, winHeight-26);
			glVertex2i( pos+3, winHeight-19);
			glVertex2i( pos-5, winHeight-19);
			glVertex2i( pos-4, winHeight-27);
		glEnd();
		glEnable(GL_LINE_SMOOTH);
	}

}

// simple timer thread to track how long has passed since the gui was last activated
void GuiTimerThread( void * params){
	while ( time < 4000 ){
		time+=5;
		_sleep(5);
	}
	guiActive = false;
	time = 0;
}


// called by glut when the mouse is moved
void MouseMove( int x, int y){
	if ( abs( x - mouseX ) > 3 || abs( y - mouseY ) > 3 ){
		glutSetCursor( GLUT_CURSOR_INHERIT );
		if ( time > 2050)
			time -=2050;
		if ( time > 560 )
			time = 560;
		if ( !guiActive){
			_beginthread(GuiTimerThread, 0, NULL );
			guiActive=true;
		}
	} 
	mouseX = x;
	mouseY = y;
}

// called by glut when the mouse is clicked
void MouseClick(int button, int state, int x, int y){

	glutSetCursor( GLUT_CURSOR_INHERIT );
	if ( time > 2050)
		time -=2050;
	if ( time > 560 )
		time = 560;
	if ( !guiActive){
		_beginthread(GuiTimerThread, 0, NULL );
		guiActive=true;
	}

	if ( button == GLUT_LEFT_BUTTON ){
		if ( state == GLUT_DOWN ){
			// if it is clicked on the task bar
			if ( y < 70 ){
				// if it is on the play/pause button
				if ( (x - 35)*(x - 35) + (y-27)*(y-27) < 226 ){
					Key('p',0,0);

				// if it is on the stop button
				} else if ( (x - 75)*(x - 75) + (y-27)*(y-27) < 226 ){
					paused = true;
					videoFrame =0;
					if ( lastAudioFrame ){
						audioFrame =0;
						audioBytesRead=0;
						alSourceStop( Sources[0]);
						positionChanged=true;
					}
					videoObj->GetVideoFrame(0);
					Display();
				
				// if it is on the slider bar
				} else if ( x > 100 && winWidth >160 && y > 16 && y < 31 ){
					sliderMove = paused = positionChanged = true;
					if ( lastAudioFrame )
						alSourcePause(Sources[0]);
					long pos = ((x - 100.0)/(winWidth - 120.0 )* lastVideoFrame);
					videoFrame = videoObj->GetKeyFrame( pos, videoFrame < pos  );
					videoObj->GetVideoFrame( videoFrame);
				}
			}
		} else {
			
			// if it is released on the task bar
			if ( x > 100 && winWidth >160 && y > 16 && y < 31 && sliderMove ) {
				positionChanged = true;
				long pos = ((x - 100.0)/(winWidth - 120.0 )* lastVideoFrame);
				videoFrame = videoObj->GetKeyFrame( pos, videoFrame < pos  );
				videoObj->GetVideoFrame( videoFrame);
				if ( paused ) 
					Key('p', 0, 0);
				sliderMove = false;
			}
		}

	} 
}

void Menu( int item ){
	switch (item){
		case 1: Key('f',0,0); break;
		case 2:
			maintainAspect = !maintainAspect;
			if ( maintainAspect ){
				glutChangeToMenuEntry(2, "Ignore Aspect Ratio", 2);

				unsigned short H = height-cropTY-cropBY;
				unsigned short W = width-cropRX-cropLX;
				float magnify = winWidth/(float)(W);
				if ( magnify * H > winHeight )
					magnify = winHeight/(float)H;
				float x = (winWidth-W*magnify)/2.0;
				float y = (winHeight-H*magnify)/2.0;
				glRasterPos2f(x, y);
				glPixelZoom(magnify, magnify);

			}else {
				glutChangeToMenuEntry(2, "Maintain Aspect Ratio", 2);
				glPixelZoom(winWidth/(float)(width-cropLX-cropRX), winHeight/(float)(height-cropTY-cropBY));
				glRasterPos2f(0, 0);
			}
			break;
		case 3: glutReshapeWindow(width*2, height*2); break;
		case 4: glutReshapeWindow(width, height); break;
		case 5: glutReshapeWindow(width/2, height/2); break;
		case 6: AdjustContrast( true ); break;
		case 7: AdjustContrast(false); break;
		case 8: AdjustBrightness(true); break;
		case 9: AdjustBrightness(false); break;
		case 10:glutKeyboardFunc(Cropping); break;
		/*case 11:
			if ( lastAudioFrame ){
				Key('p',0,0);
				positionChanged = true;
				samplesPerSec*=.55;
				Key('p',0,0);
			} else {
				framesPerSec*=.55;
			}*/
		case 12: if ( deinterlace ){
					 glutChangeToMenuEntry(12, "Enable Deinterlacing",12);
					 CloseDeinterlace();
				 } else {
					 glutChangeToMenuEntry(12, "Disable Deinterlacing",12);
					 InitDeinterlace();
				 }
				 break;
		/*case 13: if ( denoise ){
					 glutChangeToMenuEntry(13, "Enable Video Noise Reduction",13);
					 CloseDenoise();
				 } else {
					 glutChangeToMenuEntry(13, "Disable Video Noise Reduction",13);
					 InitDenoise();
				 }
				 break;

		default: break;*/
	};
	glutPostRedisplay();
}
#endif
