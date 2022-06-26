#include "incaviparser.h"
#include "reindex.cpp"

IncompleteAviParser::IncompleteAviParser(): hasKeyFrames(false) {}

IncompleteAviParser::~IncompleteAviParser(){}

char IncompleteAviParser::ReadIndex(char * name, long indexPos){

	printf("\nThe file appears to be incomplete.\n");
	
	printf("Attempting to use the file data to build an index.\n\n");
	
	IncompleteAviObject * reference;
	reference = (IncompleteAviObject *)malloc( sizeof(IncompleteAviObject));
	reference->aviObjPtr = this;
	reference->fileName = name;
	reference->handle = &indexThread;
	_beginthread( IncompleteTimerThread, 0, reference );

	// wait for a few seconds of frame data to be indexed
	for( unsigned char bot =0; bot < 255 && lastVideoFrame < 200 && lastVideoFrame < FileHeader.dwTotalFrames; bot++)
		_sleep(10);

	// if there is not a specified buffer size, load some more frames before 
	// so the calculated video buffer size is more accurate
	if ( !VideoStreamHeader.dwSuggestedBufferSize )
		_sleep(500);

	return true;
}

long IncompleteAviParser::GetKeyFrame(long startFrame, bool forward ){
	if ( hasKeyFrames)
		return AviParser::GetKeyFrame(startFrame, forward);
	return startFrame;
}

//***************************************************************

void IncompleteAviParser::BuildIndex( void * fileName ){
	/* this spawns a seperate thread that will scan the avi file while the 
	 * player plays the avi. This thread will build the index for files that
	 * are incomplete and/or being downloaded.
	 */

	long totalFrames = FileHeader.dwTotalFrames;
	long currAudioFrame = 0;
	long currVideoFrame = 0;
	long filePos = moviPos;
	long pos = 4;
	long size = 0;
	bool videoFrame = false;
	char data[8];
	DWORD dwActual;
	HANDLE file;

	// give it its own copy of the avi file handle, so it won't interfere
	// with its parent's reading
	file = CreateFile((char *)fileName, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	fileSize = GetFileSize( file, NULL );

	frameData = (unsigned long *)malloc( sizeof(unsigned long) * totalFrames );
	keyFrames = (unsigned long *)malloc( sizeof(unsigned long) * totalFrames/40);
	if ( frameData == NULL ){
		printf( "Unable to allocate memory for the frame index\n");
		_sleep(10000);
		exit(1);
	}
	audioData = (AudioIndex *)malloc( sizeof(AudioIndex ) * totalFrames * 2 );
	if ( audioData == NULL ){
		printf( "Unable to allocate memory for the audio index\n");
		_sleep(10000);
		exit(1);
	}
	
	SetFilePointer( file, filePos, NULL ,FILE_BEGIN);
	ReadFile( file, data, 8, &dwActual, NULL );

	while( true ){
		// if the file size has changed, or if it is a .antifrag file
		// attempt to read more frames every 30 seconds
		while ( filePos+8 < fileSize || ( strcmp( (char *)fileName + strlen((char *)fileName)-8, "antifrag") == 0 ) ){
			if ( *(long *)data == 'bw10' ) {
				audioData[currAudioFrame].dwChunkOffset = filePos+4 - moviPos;
				audioData[currAudioFrame].dwChunkLength = *(long *)&data[4];
				currAudioFrame++;
				lastAudioFrame++;
				filePos+= *(long *)&data[4]+8 + *(long *)&data[4]%2 ;
			} else if ( *(long *)data == 'cd00' || *(long *)data == 'bd00' ){
				if ( *(long *)data == 'bd00' ){
					#ifdef _DEBUG
					if ( !hasKeyFrames )
						printf( "File uses '00db' frame tags. Marking those frames as key frames\n");
					#endif
					keyFrames[totalKeys] = currVideoFrame;
					hasKeyFrames = true;
					totalKeys++;
				}
				frameData[currVideoFrame] = filePos+4 - moviPos;
				// In case the video buffer size is not set
				if ( *(unsigned long *)&data[4] > VideoStreamHeader.dwSuggestedBufferSize)
					VideoStreamHeader.dwSuggestedBufferSize = *(long *)&data[4];
				currVideoFrame++;
				lastVideoFrame++;
				filePos+= *(long *)&data[4]+8 + *(long *)&data[4]%2;
			} else if( *(long *)data == '1xdi' ){
				return;
				
			}
			SetFilePointer( file, filePos, NULL ,FILE_BEGIN);
			ReadFile( file, data, 8, &dwActual, NULL );
		}
		if ( lastVideoFrame )
			audioRate = lastAudioFrame/lastVideoFrame;

		// sleep for a minute, then see if the file size has changed.
		// if so, more of the file is indexed.
		_sleep(30000);
		fileSize = GetFileSize( file, NULL );
	}
}

void IncompleteAviParser::GetAudioPos( long &videoFrame,long &audioFrame){

	// if the desired audio frame has not been indexed yet, move back the video frame by the 
	// same percentage as the audio frame; this should result in a valid audio frame.
	AviParser::GetAudioPos(videoFrame,audioFrame);
	while( audioFrame > lastAudioFrame ){
		#ifdef _DEBUG
		printf("Position corrisponds to an audio frame that has not been indexed: frame %d requested, last is %d\n", audioFrame, lastAudioFrame);
		#endif
		float percent = lastAudioFrame/(float)audioFrame;
		videoFrame*=percent;
		videoFrame--;
		audioFrame=lastAudioFrame;
		AviParser::GetAudioPos(videoFrame,audioFrame);
	}
}
//***************************************************************

void IncompleteAviParser::CloseAvi(){
	// kill the reindex thread so that it cannot attempt to
	// access memory after it has been freed by CloseAvi()
	TerminateThread( indexThread, 0);
	// free the resources used
	AviParser::CloseAvi();
}
