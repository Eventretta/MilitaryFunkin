#ifndef FILE_READER
#define FILE_READER

#include <gl\glut.h>
#include <AL\al.h>   
#include <AL\alc.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <windows.h>
#include <process.h>

// use the debug versions of malloc and enable memory leak detection
// the #ifdef/#endif are not strictly needed
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

#pragma comment( lib, "opengl32.lib" )
#pragma comment( lib, "glu32.lib" ) 
#pragma comment( lib, "openal32.lib" )

#pragma warning(disable:4731) // stop warnings about the frame pointer ebp
							  // being modified in inline assembly code
#pragma warning(disable:4018) // stop signed/unsigned warnings

#define NUMBUFFERS 20 // number of audio buffers used

long lastVideoFrame;
// lastAudioFrame also servers to tell if there is an audio stream. If it is set to 
// 0, only the video is played.
long lastAudioFrame;

#include "videoparser.h"
#include "aviparser.cpp"
#include "incaviparser.cpp"
#include "ogmparser.cpp"

VideoParser * videoObj;
long audioFrame = 0;
long videoFrame=0;
char frameLag=0;
float audioPerFrame;
float framesPerSec;
unsigned long audioBytesRead=0;
float volume = 1; 
bool paused = false;
bool finished = false;
bool positionChanged=false;
bool guiActive=false;
bool fullScreen = false;
bool maintainAspect = true;
bool deinterlace=false;
bool denoise=false;
char *video;
char *audio;
char *fileName;
long bytePos=0;
long audioSize=0;
short bytesPerFrame;	// rounded down to the nearest full audio sample
short cropLX=0, cropTY=0, cropRX=0, cropBY=0;
float dBytesPerFrame;	// precise amount of audio bytes per frame
short width, height;
short winWidth, winHeight;
ALuint alFormat;
ALuint samplesPerSec;
ALuint Sources[1];
ALuint Buffers[NUMBUFFERS];
int processed=0;

unsigned int CPU_FLAGS;

void Display();
void StreamAudio();
void BufferAudio();
void Reshape(GLsizei w, GLsizei h);
void SpecialKey( int Key, int a, int b);
void Key( unsigned char key, int a, int b);
void PlayVideoAudio();
void PlayVideoOnly( int value);
void DelayExit();
void Exit( int value );
void debugthread( void * required);

#include "filters.cpp"
#include "gui.cpp"

#endif