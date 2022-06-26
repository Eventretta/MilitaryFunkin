#include "aviparser.h"

// just create an empty object with all the variables at their default value
AviParser::AviParser() : //filehandle(NULL), 
	VideoDecompressor(NULL), sourceVideoData(NULL), sourceAudioData(NULL), 
	uncompressedVideoData(NULL), uncompressedAudioData(NULL), ACMstreamHandle(NULL),
	sourceAudioFormat(NULL), audioData(NULL), frameData(NULL), moviPos(0),
	lastAudioFrame(0), lastVideoFrame(0), totalKeys(0) ,keyFrames(NULL) {
}

AviParser::~AviParser(){
	CloseAvi();
}

bool AviParser::UsePavi( char * file ){

	/*PAVISTREAM video;
	PAVISTREAM audio;
	AVISTREAMINFO info; 
	BITMAPINFO videoFormat;
	int size;
	AVIFileInit();
	if (AVIStreamOpenFromFile(&video, file, streamtypeVIDEO, 0, OF_READ, NULL))
		return false;
	if (AVIStreamInfo( video, &info,sizeof(info)) )
		return false;

	// AVISTREAMINFO contains more data than AVIStreamHeader, and in a slightly different order...
	VideoStreamHeader.fccType = info.fccType;
    VideoStreamHeader.fccHandler = info.fccHandler;
    VideoStreamHeader.dwFlags = info.dwFlags; 
    VideoStreamHeader.wPriority = info.wPriority;
    VideoStreamHeader.wLanguage = info.wLanguage;
    VideoStreamHeader.dwInitialFrames = info.dwInitialFrames; 
    VideoStreamHeader.dwScale = info.dwScale;	
    VideoStreamHeader.dwRate = info.dwRate;
    VideoStreamHeader.dwStart = info.dwStart;
    VideoStreamHeader.dwLength = info.dwLength;
    VideoStreamHeader.dwSuggestedBufferSize = info.dwSuggestedBufferSize;
    VideoStreamHeader.dwQuality = info.dwQuality;
    VideoStreamHeader.dwSampleSize = info.dwSampleSize;
    VideoStreamHeader.rcFrame = info.rcFrame; 
	FileHeader.dwTotalFrames = info.dwLength;

	PAVIFILE avifile;
	if (AVIFileOpen( &avifile, file, OF_SHARE_DENY_NONE, NULL ))
		return false;

	AVIFILEINFO header;
	if (AVIFileInfo(avifile, &header, sizeof(header)))
		return false;

    FileHeader.dwMaxBytesPerSec = header.dwMaxBytesPerSec;
    FileHeader.dwFlags = header.dwFlags;
    FileHeader.dwStreams = header.dwStreams;
    FileHeader.dwSuggestedBufferSize = header.dwSuggestedBufferSize;
    FileHeader.dwWidth = header.dwWidth;
    FileHeader.dwHeight = header.dwHeight;

	if ( FileHeader.dwStreams > 1 ) {
		if ( AVIStreamOpenFromFile(&audio, file, streamtypeAUDIO, 0, OF_READ, NULL))
			return false;
		if ( AVIStreamInfo(audio, &info, sizeof(info)) )
			return false;

		AudioStreamHeader.fccType = info.fccType;
		AudioStreamHeader.fccHandler = info.fccHandler;
		AudioStreamHeader.dwFlags = info.dwFlags; 
		AudioStreamHeader.wPriority = info.wPriority;
		AudioStreamHeader.wLanguage = info.wLanguage;
		AudioStreamHeader.dwInitialFrames = info.dwInitialFrames; 
		AudioStreamHeader.dwScale = info.dwScale;	
		AudioStreamHeader.dwRate = info.dwRate;
		AudioStreamHeader.dwStart = info.dwStart;
		AudioStreamHeader.dwLength = info.dwLength;
		AudioStreamHeader.dwSuggestedBufferSize = info.dwSuggestedBufferSize;
		AudioStreamHeader.dwQuality = info.dwQuality;
		AudioStreamHeader.dwSampleSize = info.dwSampleSize;
		AudioStreamHeader.rcFrame = info.rcFrame;

		if (AVIStreamReadFormat(audio, AVIStreamStart(audio), NULL, &size))
			return false;
		sourceAudioFormat = (WAVEFORMATEX *)malloc(size);
		if (AVIStreamReadFormat(audio, AVIStreamStart(audio), sourceAudioFormat, &size) )
			return false;
	}
	size = sizeof(sourceVideoFormat);
	if (AVIStreamReadFormat(video, AVIStreamStart(video), &sourceVideoFormat, &size))
		return false;

	AVIStreamRelease(video); // Release The Stream
	AVIStreamRelease(audio);
	avifile->Release();
	AVIFileExit();*/ // Release The File*/
	return true;
}

//***************************************************************

/*	This function reads in the index at the end of the file. The index is neccisary for
	efficent random access; since the size of each audio and video frame is variable,
	to access them fast the player needs to know where each one starts and how long they
	are. This is what the index does. The function also splits the index into 2 smaller 
	indexes, one for video and 1 for audio */
char AviParser::ReadIndex( char * name, long indexPos){

	bool found = false;
	long idx1Pos, indexLength;

	unsigned long dwActual;
	char temp[1003];
	// if there is an index, it will at least have 1 index per frame

	if ( indexPos ){
		
		SetFilePointer(filehandle, indexPos-4, NULL ,FILE_BEGIN);
		ReadFile(filehandle, &temp[0], 4, &dwActual, NULL);
	}
	if (*(long *)&temp[0] == '1xdi' ){
		idx1Pos = indexPos;
		found = true;
		printf("Using suggested index position\n");
	} else {
		printf("Not using suggested index position\n");
		long pos = FileHeader.dwTotalFrames * 16;

		// the index is at the back of the file, so start searching for the
		// idx1 tag at the back of the file and work forward untill 4% of the
		// file has been read or it has been found
		for ( ; (pos < fileSize/19) ; pos +=1000 ){
			SetFilePointer(filehandle, -pos, NULL ,FILE_END);
			ReadFile(filehandle,&temp[0], 1003, &dwActual, NULL);
			for ( int i =0; i < 1000; i++ ){
				if (*(long *)&temp[i] == '1xdi' ){
					found = true;
					idx1Pos = fileSize-pos+i;
					printf( "Index found at %d bytes, suggested at %d\n", idx1Pos+4, indexPos);
					break;
				}
			}
			if ( found ) 
				break;
		}
		idx1Pos+=4;
	}
	
	if ( !found ) {
		printf("\nAvi index not found.\n");
		return AVI_INCOMPLETE;
	} 

	// the 1st 2 bytes represent the stream number (00 for video, 01 for audio)
	// the next 2 bytes tell what kind of data it is:
	// ##db = RGB DIB bits, typically indicates a keyframes if used
	// ##dc = compressed DIB bits
	// ##wb = waveform audio bytes
	unsigned long dcFrameTag = *((long *)"00dc");
	unsigned long dbFrameTag = *((long *)"00db");
	unsigned long audioTag   = *((long *)"01wb");
	
	// skip any junk between idx1 (index) tag and acual indexes
	SetFilePointer(filehandle, idx1Pos, NULL ,FILE_BEGIN);
	ReadFile(filehandle, &temp[0], 1003, &dwActual, NULL );
	for ( int p = 0; p < 1000; p++){
		if ( *(long *)(&temp[p]) == dcFrameTag || *(long *)(&temp[p]) == dbFrameTag || *(long *)(&temp[p]) == audioTag){
			idx1Pos+=p;
			indexLength = *(long *)&temp[0];
			break;
		}
	}
	//set up an index array to hold all the indexes
	//indexLength = (VideoStreamHeader.dwLength + AudioStreamHeader.dwLength/AudioStreamHeader.dwScale) *16;
	Index *indexChunks = (Index *)malloc( indexLength );
	if ( indexChunks == NULL ){
		printf( "Unable to allocate index array\n");
		return false;
	}
	
	// load the all the index entries into the index array
	SetFilePointer(filehandle, idx1Pos, NULL ,FILE_BEGIN);
	ReadFile(filehandle, indexChunks, indexLength, &dwActual, NULL );

	#ifdef _DEBUG
	printf( "First 4 bytes of index array = %c%c%c%c\n", ((char *)indexChunks)[0], ((char *)indexChunks)[1], ((char *)indexChunks)[2], ((char *)indexChunks)[3]);
	#endif

	indexLength/=16;
	long framePos = 0;
	long C;

	// allocate memory for the frame indexes
	lastVideoFrame = FileHeader.dwTotalFrames;
	frameData = (unsigned long *)malloc( sizeof(unsigned long ) * lastVideoFrame );

	// copy the frame indexes from the general index.
	totalKeys = 0;
	for ( C =0; C < indexLength && framePos < lastVideoFrame; C++ ){
		if ( indexChunks[C].ckid == dcFrameTag || indexChunks[C].ckid == dbFrameTag){
			#ifdef _DEBUG
			if ( indexChunks[C].dwFlags > 255 )
				printf( "Large flag: %d\n", indexChunks[C].dwFlags);
			if( indexChunks[C].dwFlags != 16 && indexChunks[C].dwFlags != 0)
				printf( "flag == %d\n", indexChunks[C].dwFlags);
			if( indexChunks[C].ckid == dbFrameTag )
				printf("00db tag\n");
			#endif
			if ( indexChunks[C].dwFlags & AVIIF_KEYFRAME )
				totalKeys++;
			frameData[framePos] = indexChunks[C].dwChunkLength?indexChunks[C].dwChunkOffset:0;
			framePos++;
		}
	}

	lastVideoFrame = framePos;

	#ifdef _DEBUG
	if ( framePos != lastVideoFrame )
		printf("\nFramePos != lastVideo frame: %d, %d\n\n", framePos, lastVideoFrame);
	#endif

	// if it is uncompressed ("DIB ") or losslessly compressed with huffman yuv ("hfyu","HFYU")
	// every frame is a key frame, so no need to index them
	if ( VideoStreamHeader.fccHandler != ' BID' && VideoStreamHeader.fccHandler != 'uyfh' && VideoStreamHeader.fccHandler != 'UYFH'){
		long keyPos=0;
		framePos =0;
		keyFrames = (unsigned long *)malloc( sizeof(unsigned long) * totalKeys);
		for ( C =0; C < indexLength && framePos < lastVideoFrame; C++ ){
			if ( (indexChunks[C].ckid == dcFrameTag || indexChunks[C].ckid == dbFrameTag) ){
				if (indexChunks[C].dwFlags & AVIIF_KEYFRAME)
					keyFrames[keyPos++] = framePos;
				framePos++;
			}
		}
	}

	// If the video buffer size is not specified, the largest frame also
	// must be found here since the size data will be discarded.
	if ( !VideoStreamHeader.dwSuggestedBufferSize ){
		long bufferSize = 0;
		for ( C =0; C < indexLength && framePos <= lastVideoFrame; C++ ){
			if ( (indexChunks[C].ckid == dcFrameTag || indexChunks[C].ckid == dbFrameTag) && indexChunks[C].dwChunkLength > bufferSize)
				bufferSize = indexChunks[C].dwChunkLength;
		}
		VideoStreamHeader.dwSuggestedBufferSize = bufferSize;
	}

	framePos = 0;

	if ( indexLength-lastVideoFrame > 0 || FileHeader.dwStreams == 1){
		// allocate space for the audio indexes
		audioData = (AudioIndex *)malloc( sizeof(AudioIndex ) * (indexLength-lastVideoFrame)  );
		
		// copy the audio indexes from the general index
		for ( C =0; C < indexLength && framePos < (indexLength-lastVideoFrame) ; C++ ){
			if ( indexChunks[C].ckid == audioTag ){
				#ifdef _DEBUG
				if ( indexChunks[C].dwFlags != 16 && indexChunks[C].dwFlags != 0 )
					printf( "Non 16 or 0 audio flag: %d\n", indexChunks[C].dwFlags );
				#endif
				audioData[framePos].dwChunkOffset = indexChunks[C].dwChunkOffset;
				audioData[framePos].dwChunkLength = indexChunks[C].dwChunkLength;
				framePos++;
			}
		}
	}

	lastAudioFrame = framePos;

	#ifdef _DEBUG
	printf( "Audio frames == %d\n", framePos);
	#endif

	audioRate = ((float)framePos)/GetTotalFrames();
	if ( audioRate >= .998 && audioRate <= 1.002 )
		audioRate = 1.0;
	free( indexChunks ); // no longer needed
	
	return AVI_VALID;
}

/*	This function must be called before any other member functions. Failing to do so
	will almost certainly cause the program to crash. This function reads in the avi
	and stream headers, as well as the stream formats. It also calls readIndex() to 
	set up the audio and video indexes */

int AviParser::InitFile( char * file ){

	bool found = false;
	unsigned long dwActual;
	char buffer[32];

	filehandle = CreateFile(file, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	if ( INVALID_HANDLE_VALUE == filehandle ){
		printf( "Unable to open specified file\n");
		return FILE_INVALID;
	}
		// no further error checking for the file is done, since it was checked by VideoParser::TestFile,
		// so as long as it is still there it should be fine

	fileSize=GetFileSize(filehandle,NULL);

	if ( true ){//!UsePavi(file) ){
		//printf("PAVI not used for finding stream headers\n");

		ReadFile(filehandle, &buffer, 32, &dwActual, NULL);

		// read in the avi file header
		ReadFile(filehandle, &FileHeader, sizeof(FileHeader), &dwActual, NULL);
		ReadFile(filehandle, &buffer[0], 20, &dwActual, NULL);

		// read in the video stream header
		ReadFile(filehandle, &VideoStreamHeader, *(long *)&buffer[16], &dwActual, NULL);
		ReadFile(filehandle, &buffer[0], 8, &dwActual, NULL);

		// read in the video format
		int tempRead = *(long *)&buffer[4];
		if ( tempRead < sizeof( BITMAPINFO))
			sourceVideoFormat = (BITMAPINFO *)malloc (sizeof( BITMAPINFO));
		else 
			sourceVideoFormat = (BITMAPINFO *)malloc(tempRead);
		//printf("Specifided source video format size is %d bytes greater than the size of BITMAPINFO, truncating the format\n", tempRead-sizeof( sourceVideoFormat));
		ReadFile(filehandle, sourceVideoFormat, tempRead, &dwActual, NULL);
		sourceVideoFormat->bmiHeader.biSize= tempRead>sizeof( BITMAPINFO)?tempRead:sizeof( BITMAPINFO);
		//SetFilePointer(filehandle, tempRead-sizeof( sourceVideoFormat), NULL, FILE_CURRENT);
		//} else {
		//	ReadFile(filehandle,  &sourceVideoFormat, tempRead, &dwActual, NULL);
		//}

		if ( FileHeader.dwStreams > 1 ){
			// find the next stream ( audio )
			while ( !found ){
				moviPos +=4;
				if ( moviPos >= fileSize/20 ) {
					printf( "Unable to find the audio stream header\n");
					return FILE_INVALID;
				}
				ReadFile(filehandle, &buffer, 4, &dwActual, NULL);
				#ifdef _DEBUG
				if ( *(long *)&buffer[0] == 'drts')
					printf("\nstrd found\n\n");
				#endif

				if ( *(long *)&buffer[0] == 'lrts')
					found = true;
			}
		
			ReadFile(filehandle,  &buffer[0], 8, &dwActual, NULL);

			// read audio stream header
			ReadFile(filehandle, &AudioStreamHeader, *(long *)&buffer[4], &dwActual, NULL);
			audioBytesPerFrame = (float)AudioStreamHeader.dwScale*AudioStreamHeader.dwLength/VideoStreamHeader.dwLength;

			ReadFile(filehandle, &buffer[0], 8, &dwActual, NULL);
			// read the audio format
			printf( "Reading audio format...");
			sourceAudioFormat = (WAVEFORMATEX *)malloc( *(long *)&buffer[4]);
			if ( sourceAudioFormat == NULL ){
				printf( "\nError reading format.\n");
				return FILE_INVALID;
			}
			ReadFile(filehandle,  sourceAudioFormat, *(long *)&buffer[4], &dwActual, NULL);
			MPEGLAYER3WAVEFORMAT tempDebug;
			memcpy(&tempDebug,sourceAudioFormat,30);
			
			printf( " format header requires %d bytes\n",*(long *)&buffer[4]);
			if ( sourceAudioFormat->wFormatTag == WAVE_FORMAT_PCM )
				printf( "\nAudio is uncompressed PCM, %d KBps\n", sourceAudioFormat->nAvgBytesPerSec/1000);
		} else {
			printf( "No audio stream\n");
		}
	} // done reading in header information
	// check the standard 'movi' tag position
	SetFilePointer(filehandle, 10244, NULL ,FILE_BEGIN);
	ReadFile(filehandle, &buffer[0], 8, &dwActual, NULL );

	long indexPos = 10252 + *(long *)&buffer[0];
	if ( *(long *)&buffer[4] != 'ivom' ){
		found = false;
	
		SetFilePointer(filehandle, moviPos, NULL ,FILE_BEGIN);
		char temp[500];
		bool half=false;
		
		// find the byte position of the 'movi' tag
		while ( !found && moviPos < 40000 ){
			indexPos = *(long *)&temp[496];
			ReadFile(filehandle, &temp, 500, &dwActual, NULL);
			if ( half ){
				if ( *((short*)temp) == 'iv' ){
					found = true;
					moviPos-=2;
					break;
				}
			}
			for ( int a =0; a < 498; a+=2){
				if ( *(long *)&temp[a] == 'ivom'){
					found = true;
					moviPos-=496-a;
					if ( a )
						indexPos = *(long *)&temp[a-4] + moviPos+500;
					break;
				}
			}
			if ( *((short*)&temp[498])=='om' )
				half = true;
			else
				half = false;
			moviPos +=500;
		}
		if ( !found ){
			#ifdef _DEBUG
			printf( "\n\n*******************************************\nmovi pos not found\n*******************************************\n\n");
			#endif
			moviPos = 4;
			indexPos = 0;
		}
		#ifdef _DEBUG
		printf( "\nmovi pos does not equal 10252. Pos = %d\n\n", moviPos);
		#endif
	} else {
		moviPos = 10252;
	}

	char indexResults = ReadIndex(file, indexPos);
	//bufferedRead.SetBufferState(true);
	//bufferedRead.StartBufferAt(moviPos);
	return indexResults;
	
}

//***************************************************************


// set up the video decompressor and test if it gives us valid data
bool AviParser::InitVideoDecompressor(){

	// the video buffer size is checked when the index is loaded, so this
	// will a valid size.
	long size = VideoStreamHeader.dwSuggestedBufferSize;

	sourceVideoData = (unsigned char *)malloc(size );
	if ( VideoStreamHeader.fccHandler != ' BID' ){
		uncompressedVideoData = (unsigned char *)malloc(sourceVideoFormat->bmiHeader.biWidth * sourceVideoFormat->bmiHeader.biHeight * 3 +1);
		if ( uncompressedVideoData == NULL || sourceVideoData ==NULL){
			printf( "Unable to allocate memory for uncompressed video buffer\n");
			return false;
		}
	} else {
		uncompressedVideoData = sourceVideoData;
		targetVideoFormat = *sourceVideoFormat; 
		GetVideoFrame(0);
		return true;
	}
	
	LongChar bicomp;
	bicomp.value = sourceVideoFormat->bmiHeader.biCompression;
	printf( "Video format bi-compresssion = %c%c%c%c\n", bicomp.bytes[0], bicomp.bytes[1], bicomp.bytes[2], bicomp.bytes[3]);
	printf( "Video stream ffc handler = %c%c%c%c\n", ((char *)&VideoStreamHeader.fccHandler)[0], ((char *)&VideoStreamHeader.fccHandler)[1], ((char *)&VideoStreamHeader.fccHandler)[2], ((char *)&VideoStreamHeader.fccHandler)[3] );

	VideoDecompressor = ICLocate(ICTYPE_VIDEO, VideoStreamHeader.fccHandler, &sourceVideoFormat->bmiHeader, 0, ICMODE_DECOMPRESS);
	
	if (  VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using ICLocate and the fccHandler\n");
		return true;
	}

	VideoDecompressor = ICLocate(ICTYPE_VIDEO, sourceVideoFormat->bmiHeader.biCompression, &sourceVideoFormat->bmiHeader, 0, ICMODE_DECOMPRESS);

	if (  VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using ICLocate and the biCompression\n");
		return true;
	}

	VideoDecompressor = ICOpen(ICTYPE_VIDEO, VideoStreamHeader.fccHandler, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using fcchandler\n");
		return true;
	}
	VideoDecompressor = ICOpen(ICTYPE_VIDEO, sourceVideoFormat->bmiHeader.biCompression, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf( "Video decompressor set up using bicompresion tag\n");
		return true;
	}

	// if the player was unable to find a valid decompressor, it tries all divx decompressors
	printf( "Unable to obtain a valid video decompressor tag based based on fcchandler or bicompression\n");
	printf( "Trying to use anouther divx decompressor...\n");


	LongChar divx;
	divx.value = *(long *)"divx";
	long xvid  = *(long *)"xvid";
	long divx5 = *(long *)"DX50";

	// try divx 5
	sourceVideoFormat->bmiHeader.biCompression = divx5;
	VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat->bmiHeader.biCompression, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using Divx 5.0\n");
		return true;
	}
	
	// try divx, div3, and div4
	for ( int i = 0; i < 3; i++){
		sourceVideoFormat->bmiHeader.biCompression = divx.value;
		VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat->bmiHeader.biCompression, ICMODE_DECOMPRESS);
		if ( VideoDecompressor != NULL && TestDecompressor() ){
			printf("Video decompressor set up using Div%c\n", divx.bytes[3]);
			return true;
		}
		divx.bytes[3] = i+'3';
	} 

	// try xvid
	sourceVideoFormat->bmiHeader.biCompression = xvid;
	VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat->bmiHeader.biCompression, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using Xvid\n");
		return true;
	}

	return false;
}

//***************************************************************

// see if the video decompressor actually gives us good data
bool AviParser::TestDecompressor(){
	if ( ICERR_OK != ICDecompressGetFormat(VideoDecompressor, sourceVideoFormat, &targetVideoFormat)) {
		printf( "Unable to get a valid uncompressed format, attempting to work around\n");
		targetVideoFormat = *sourceVideoFormat;
		targetVideoFormat.bmiHeader.biBitCount = 24;
		targetVideoFormat.bmiHeader.biCompression = BI_RGB;
		//targetVideoFormat.bmiHeader.biSizeImage = 0;
	}
	if ( targetVideoFormat.bmiHeader.biCompression != BI_RGB || targetVideoFormat.bmiHeader.biBitCount != 24){
		targetVideoFormat.bmiHeader.biBitCount = 24;
		targetVideoFormat.bmiHeader.biCompression = BI_RGB;
	}
	#ifdef _DEBUG
	if ( VideoDecompressor == NULL )
		printf("\nVideo decompressor nulled in test decompressor\n\n");
	#endif
	DWORD error = ICDecompressBegin( VideoDecompressor, sourceVideoFormat, &targetVideoFormat);
	if ( error != ICERR_OK ) 
		return false;

	if ( GetVideoFrame(0) )
		return true;
	else
		return false;
}

//***************************************************************

// set up the audio decompressor for the avi audio stream
bool AviParser::InitAudioDecompressor(){

	unsigned long sourceSize = AudioStreamHeader.dwSuggestedBufferSize;

	// if the suggested buffer size is not set, find the largest
	// chunk size and set the buffer size to that.
	// PCM audio also appears to not have correct buffers at times...
	if ( sourceSize < 1 || sourceAudioFormat->wFormatTag == WAVE_FORMAT_PCM ){

		if ( sourceSize < 1 )
			printf( "Source audio buffer size not specified in stream header\n");
		sourceSize = 0;
		for ( long f = 0; f < lastAudioFrame; f++ ){
			if ( audioData[f].dwChunkLength > sourceSize )
				sourceSize = audioData[f].dwChunkLength;
		}
		if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM  ) 
			printf( "Setting source audio buffer size to %d\n", sourceSize);
	}
	sourceAudioData = (unsigned char *)malloc( sourceSize );
	if ( sourceAudioData == NULL ){
		printf( "Unable to allocate memory for source audio buffer\n");
		return false;
	}
	if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM ){

		if ( sourceAudioFormat->nBlockAlign == 1152 && sourceAudioFormat->wFormatTag == WAVE_FORMAT_MPEGLAYER3 ){
			printf( "\nThis file contains a VBR MP3 stream\n");
			printf(	"This may cause problems with video sync after fast\n");
			printf( "forwarding or rewinding.\n\n");
		}

		// the audio is compressed, so it needs to be converted to pcm to play
		targetAudioFormat.wFormatTag = WAVE_FORMAT_PCM;
		#ifdef _DEBUG
		printf("wBitsPerSample = %d\n", sourceAudioFormat->wBitsPerSample);
		#endif
		unsigned long Flags = ACM_FORMATSUGGESTF_WFORMATTAG;
		if ( !sourceAudioFormat->wBitsPerSample ){
			Flags = ACM_FORMATSUGGESTF_WFORMATTAG;
			targetAudioFormat.wBitsPerSample = 8;
		}
		DWORD maxSize;

		//unsigned long bytes;
		//HANDLE output = CreateFile( "C:\\Documents and Settings\\Lags\\Desktop\\audiohdr.lag", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_NEW, 0, NULL);
		//WriteFile(output, sourceAudioFormat,sizeof(WAVEFORMATEX)+sourceAudioFormat->cbSize,&bytes,NULL);
		//CloseHandle(output);

		// obtain an uncompressed format and open a conversion stream
		acmMetrics(NULL, ACM_METRIC_MAX_SIZE_FORMAT, (LPVOID)&maxSize);
		if ( acmFormatSuggest(NULL, sourceAudioFormat, &targetAudioFormat, maxSize, ACM_FORMATSUGGESTF_WFORMATTAG ) ){
			printf( "Failed to obtain a valid uncompressed audio format\n");
			printf( "Attempting to work around...\n");
			targetAudioFormat.nChannels = sourceAudioFormat->nChannels;
			targetAudioFormat.wBitsPerSample = 8;
			targetAudioFormat.nBlockAlign = targetAudioFormat.nChannels;
			targetAudioFormat.nSamplesPerSec = sourceAudioFormat->nSamplesPerSec;
			targetAudioFormat.nAvgBytesPerSec = targetAudioFormat.nChannels*targetAudioFormat.nSamplesPerSec;
			if ( acmStreamOpen( &ACMstreamHandle, NULL, sourceAudioFormat, &targetAudioFormat, NULL, 0, 0, ACM_STREAMOPENF_NONREALTIME) ){
				targetAudioFormat.wBitsPerSample = 16;
				targetAudioFormat.nBlockAlign = 2*targetAudioFormat.nChannels;
				targetAudioFormat.nAvgBytesPerSec = targetAudioFormat.nBlockAlign*targetAudioFormat.nSamplesPerSec;
				if ( acmStreamOpen( &ACMstreamHandle, NULL, sourceAudioFormat, &targetAudioFormat, NULL, 0, 0, ACM_STREAMOPENF_NONREALTIME) ){
					printf("Unable to obtain valid uncompressed audio format.\n");
					return false;
				}
			}
		}  else {
			if ( acmStreamOpen( &ACMstreamHandle, NULL, sourceAudioFormat, &targetAudioFormat, NULL, 0, 0, ACM_STREAMOPENF_NONREALTIME) ){
				printf("Failed to open ACM conversion stream\n");
				return false;
			}
		}
		unsigned long uncompressedSize;
		if ( acmStreamSize( ACMstreamHandle, sourceSize, &uncompressedSize, ACM_STREAMSIZEF_SOURCE ) && uncompressedSize > sourceSize){
			printf ("Unable to obtain buffer sizes for uncompressed audio, attempting to work around\n");
			unsigned long initSize=0;
			uncompressedSize = (targetAudioFormat.nSamplesPerSec*targetAudioFormat.nBlockAlign/GetFramesPerSec()/GetAudioPerFrame());
			for (; initSize < sourceSize; uncompressedSize++)
				acmStreamSize( ACMstreamHandle, uncompressedSize, &initSize, ACM_STREAMSIZEF_DESTINATION );

			printf ( "Setting uncompressed buffer size to %d bytes\n", uncompressedSize);
		}
		if ( audioRate < .5 )
			uncompressedSize*=1.1;
		uncompressedAudioData = (unsigned char *)malloc(uncompressedSize);

		// set up the acm stream header
		acmHeader.fdwStatus		= 0;
		acmHeader.cbStruct		= sizeof(ACMSTREAMHEADER);
		acmHeader.pbSrc			= (LPBYTE)sourceAudioData;
		acmHeader.cbSrcLength	= sourceSize;
		acmHeader.pbDst			= (LPBYTE)uncompressedAudioData;
		acmHeader.cbDstLength	= uncompressedSize;

		// prepare the header
		if (acmStreamPrepareHeader( ACMstreamHandle, &acmHeader, 0)){
			printf("Error preparing audio stream conversion header\n");
			return false;
		}

		acmHeader.cbDstLengthUsed = 0;
		acmHeader.cbSrcLengthUsed = 0;

	} else { // the avi data is already pcm, just stream it
		uncompressedAudioData = sourceAudioData;
		targetAudioFormat = *sourceAudioFormat;
	}
	printf("Audio decompression set up\n");
	return true;
}

//***************************************************************

char * AviParser::GetVideoBuffer(){
	return (char *)uncompressedVideoData;
}

//***************************************************************

char * AviParser::GetAudioBuffer(){
	return (char *)uncompressedAudioData;
}

//***************************************************************

// fill the uncompressedVideoData array with the uncompressed video data
// for the specified frame
bool AviParser::GetVideoFrame(long frame ){
	unsigned long bytesRead; 
	// if the ofset is set to 0, the frame has a size of 0 and is simply a place-holder
	if ( frameData[frame] ){
		unsigned long bytes;
		SetFilePointer(filehandle,frameData[frame] + moviPos,NULL, FILE_BEGIN);
		ReadFile(filehandle,&bytesRead, 4, &bytes, NULL);
		ReadFile(filehandle,sourceVideoData, bytesRead, &bytes, NULL);
		//bufferedRead.BufferedRead(frameData[frame] + moviPos, &bytesRead, 4);
		//bufferedRead.BufferedRead(frameData[frame] + moviPos+4, sourceVideoData, bytesRead);

		// if the video is compressed, uncompress it
		if ( VideoStreamHeader.fccHandler != ' BID' ){
			try {
				if ( long error = ICDecompress( VideoDecompressor, 0, &(sourceVideoFormat->bmiHeader), sourceVideoData, &(targetVideoFormat.bmiHeader), uncompressedVideoData)){     
					#ifdef _DEBUG
					switch ( error ){
						case ICERR_UNSUPPORTED: printf("ICERR_UNSUPPORTED"); break;
						case ICERR_BADFORMAT: printf("ICERR_BADFORMAT  "); break;
						case ICERR_INTERNAL: printf(" ICERR_INTERNAL "); break;
						case ICERR_BADFLAGS : printf(" ICERR_BADFLAGS   "); break;
						case ICERR_BADPARAM: printf("ICERR_BADPARAM  "); break;
						case ICERR_BADSIZE: printf(" ICERR_BADSIZE "); break;
						case ICERR_BADHANDLE : printf(" ICERR_BADHANDLE  "); break;
						case ICERR_ABORT: printf("  ICERR_ABORT"); break;
						case ICERR_BADBITDEPTH: printf(" ICERR_BADBITDEPTH "); break;
						case ICERR_BADIMAGESIZE: printf(" ICERR_BADIMAGESIZE "); break;
						case ICERR_GOTOKEYFRAME: printf(" ICERR_GOTOKEYFRAME "); break;
						default: printf("Video decompression error: frame %d\n", frame); break;
					}
					#endif
					return false;
				}

			// handle any decompressor exceptions
			} catch ( ... ) {
				printf("Exception thrown in GetVideoFrame by ICDecompress. Ignoring\n");
				return false;
			}
		}
	}
	/*unsigned char * in = uncompressedVideoData;
	int length = targetVideoFormat.bmiHeader.biHeight*targetVideoFormat.bmiHeader.biWidth*2;
	int pos = length*1.5-1;
	for ( int a =0; a < length/2; a+=4 ){
		int y,u,v;
		int r,g,b;
		y = in[a];
		u = in[a+1];
		v = in[a+3];
		y-=16;
		u-=128;
		v-=128;
		r = 1.164383 * y + 1.596027 * v;
		g = 1.164383 * y - (0.391762 * u) - (0.812968 * v);
		b = 1.164383 * y +  2.017232 * u;
		r=r>255?255:r;
		b=b>255?255:b;
		g=g>255?255:g;
		r=r<0?0:r;
		g=g<0?0:g;
		b=b<0?0:b;
		in[pos--]=r;
		in[pos--]=g;
		in[pos--]=b;
		y=in[a+2];
		y-=16;
		r = 1.164383 * y + 1.596027 * v;
		g = 1.164383 * y - (0.391762 * u) - (0.812968 * v);
		b = 1.164383 * y +  2.017232 * u;
		r=r>255?255:r;
		b=b>255?255:b;
		g=g>255?255:g;
		r=r<0?0:r;
		g=g<0?0:g;
		b=b<0?0:b;
		in[pos--]=r;
		in[pos--]=g;
		in[pos--]=b;
	}*/
	return true;
}

//***************************************************************

// return a frame of uncompressed audio
long AviParser::GetAudioFrame(long frame){
	unsigned long bytes;
	long value;
	SetFilePointer(filehandle, audioData[frame].dwChunkOffset + moviPos, NULL, FILE_BEGIN);
	ReadFile(filehandle, &value, 4, &bytes, NULL );
	ReadFile(filehandle, sourceAudioData, audioData[frame].dwChunkLength, &bytes, NULL );
	//bufferedRead.BufferedRead( audioData[frame].dwChunkOffset + moviPos, &value, 4 );
	bytes = audioData[frame].dwChunkLength;
	//bufferedRead.BufferedRead( audioData[frame].dwChunkOffset + moviPos+4, sourceAudioData, audioData[frame].dwChunkLength );
	
	if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM ){
		acmHeader.cbSrcLength = bytes;
		acmHeader.cbSrcLengthUsed = 0;
		if ( acmStreamConvert(ACMstreamHandle, &acmHeader, ACM_STREAMCONVERTF_BLOCKALIGN ) ){
			printf("Error decompressing audio frame %d\n", frame);	
		}
		bytes = acmHeader.cbDstLengthUsed;
		acmHeader.cbDstLengthUsed = 0;

	}
	return bytes;
}  

//***************************************************************

long AviParser::GetTotalFrames(){
	return lastVideoFrame;
}

//**************************************************************

long AviParser::GetTotalAudioFrames(){
	return lastAudioFrame;
}

//***************************************************************

float AviParser::GetFramesPerSec(){
	return VideoStreamHeader.dwRate/(float)VideoStreamHeader.dwScale;
}

//**************************************************************

float AviParser::GetAudioPerFrame(){
	return lastAudioFrame/(float)lastVideoFrame;
}

//***************************************************************

/* attempt to find a key frame searching forward or backward from the
   frame passed in. If no frame is found, the frame passed in is returned */

long AviParser::GetKeyFrame( long startFrame, bool forward){

	// if it is uncompressed ("DIB ") or losslessly compressed with huffman yuv ("hfyu')
	// every frame is a key frame
	if ( VideoStreamHeader.fccHandler == ' BID' || VideoStreamHeader.fccHandler == 'uyfh' ){
		if ( startFrame < 0 ){
			return 0;
		}
		if ( startFrame > lastVideoFrame ){
			return lastVideoFrame - 1;
		}
	}

	// use a binary search to find the nearest key frame
	int i = startFrame;	
	unsigned int times = totalKeys/2;
	unsigned int pos = times;
	while ( times > 1 ){
		times/=2;
		if ( keyFrames[pos] < startFrame )
			pos+=times;
		 else 
			pos-=times;	
	}

	if ( startFrame < 0 ){
		return 0;
	}
	if ( startFrame > lastVideoFrame ){
		return lastVideoFrame - 1;
		}

	if ( keyFrames[pos] < startFrame && forward){
		return keyFrames[pos+1];
	}

	if ( keyFrames[pos] > startFrame && !forward){
		return keyFrames[pos-1];
	}
	return keyFrames[pos];
}

//***************************************************************

int AviParser::GetHeight(){
	return targetVideoFormat.bmiHeader.biHeight;
}

//***************************************************************

int AviParser::GetWidth(){
	return targetVideoFormat.bmiHeader.biWidth;
}

//***************************************************************

int AviParser::GetSamplesPerSec(){
	return targetAudioFormat.nSamplesPerSec;
}

//***************************************************************

int AviParser::GetChannels(){
	return targetAudioFormat.nChannels;
}

//***************************************************************

int AviParser::GetBitsPerSample(){
	return targetAudioFormat.wBitsPerSample;
}

//**************************************************************

int AviParser::GetAudioByteDelay(){
	int samples = 0;
	if (sourceAudioFormat->wFormatTag == WAVE_FORMAT_MPEGLAYER3) {
		samples = ((MPEGLAYER3WAVEFORMAT *)sourceAudioFormat)->nCodecDelay;
		samples *= targetAudioFormat.wBitsPerSample/8;
		samples *= targetAudioFormat.nChannels;
	}
	return samples;
}

//***************************************************************

void AviParser::GetAudioPos( long &videoFrame, long &audioFrame){	
		
	// if the file has the nBlockAlign set to 1152, it was encoded 
	// in nandub and may be a VBR mp3 audio stream >_<
	if ( sourceAudioFormat->nBlockAlign == 1152 && sourceAudioFormat->wFormatTag == WAVE_FORMAT_MPEGLAYER3 ){

		unsigned long samples = (videoFrame)*((sourceAudioFormat->nSamplesPerSec)/(VideoStreamHeader.dwRate/(float)VideoStreamHeader.dwScale));
		unsigned long samples2=0;
		int neko =0;
		for( ; samples2< samples; neko++)
			samples2+=1152;
		if ( samples2-samples > 576)
			neko--;
		audioFrame = neko;
		return;

	}

	// if the audio is a constant bit rate, the average bytes per frame is used
	// to determine what audio frame the player should be on

	long bytePos = videoFrame*audioBytesPerFrame;
	long place = 0;
	long size=0;

	for ( ; bytePos > size; place++)
		size+= audioData[place].dwChunkLength;
	audioFrame = place;
	videoFrame -= (int)(bytePos-size+audioData[place].dwChunkLength)/audioBytesPerFrame+.5;
}
	
//***************************************************************

void AviParser::CloseAvi(){
	// This releases any allocated memory and nulls the pointers. 
	try { 
		acmStreamUnprepareHeader( ACMstreamHandle, &acmHeader, 0); // free our acm header
		if ( ACMstreamHandle != NULL ){
			acmStreamClose(ACMstreamHandle,0);	// Release the acm conversion stream
			ACMstreamHandle = NULL;
		}
		try {
			ICClose( VideoDecompressor );		// Release the video decompressor
			VideoDecompressor = NULL;
		} catch (...){}							// catch any errors so everything else is deallocated
	
		if ( sourceAudioData != NULL && sourceAudioData != uncompressedAudioData ){
			free(sourceAudioData);			
		}
		if ( sourceVideoData != NULL && uncompressedVideoData != sourceVideoData ){
			free(sourceVideoData);	
		}
		if ( uncompressedAudioData != NULL ){
			free(uncompressedAudioData);
			uncompressedAudioData = NULL;
			sourceAudioData = NULL;
		}
		if ( uncompressedVideoData != NULL ){
			free(uncompressedVideoData);  
			uncompressedVideoData = NULL;
			sourceVideoData = NULL;
		}
		if ( sourceAudioFormat != NULL ){
			free(sourceAudioFormat);
			sourceAudioFormat = NULL;
		}
		if ( frameData!= NULL ){
			free(frameData);
			frameData = NULL;
		}
		if (audioData != NULL ){
			free(audioData);
			audioData = NULL;
		}
		if ( keyFrames != NULL ){
			free(keyFrames);
			keyFrames = NULL;
		}
		//if ( filehandle != NULL ) {
		//	CloseHandle( filehandle );
		//	filehandle = NULL;
		//}
	} catch (...){
		// ignore all unsightly exceptions since the player should be exiting 
		#ifdef _DEBUG
		printf( "Exception caught in AviParser::CloseAvi()\n");
		_sleep(10000);
		#endif
	}
}