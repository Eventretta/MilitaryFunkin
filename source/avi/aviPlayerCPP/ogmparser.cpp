#include "ogmparser.h"

// just create an empty object with all the variables at their default value
OgmParser::OgmParser() :
	VideoDecompressor(NULL), sourceVideoData(NULL), sourceAudioData(NULL), 
	uncompressedVideoData(NULL), uncompressedAudioData(NULL), ACMstreamHandle(NULL),
	sourceAudioFormat(NULL),
	lastAudioFrame(0), lastVideoFrame(0) {
}

OgmParser::~OgmParser(){
	CloseAvi();
}

/*	This function must be called before any other member functions. Failing to do so
	will almost certainly cause the program to crash. This function reads in the OGM
	stream headers, as well as the stream formats. It also calls BuildIndex() to 
	set up the audio and video indexes */

int OgmParser::InitFile( char * file ){

	filehandle = CreateFile(file, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	// the file will have already been verified by VideoParser::TestFile
	// so error checking would be redundant.

	BuildIndex( file );

	videoStream =0;
	char * buffer = streams[videoStream].header;
	// read in the video header
	if( *(long*)&buffer[1] == 'ediv' && buffer[5]=='o'){
		printf( "video tag found\n");	
		printf( "Compression = %c%c%c%c\n", buffer[9], buffer[10], buffer[11], buffer[12]);
		__int64 time = *(__int64 *)(buffer+17);
		__int64 samplesPerTime = *(__int64*)(buffer+25);
		frameRate = 10000000.0/(time/(float)samplesPerTime);
		unsigned long length = *(unsigned long*)(buffer+33);
		unsigned long bufferSize = *(unsigned long*)(buffer+37);
		unsigned short bitspersample = *(unsigned short *)(buffer+41);
		unsigned long width = *(unsigned long *)(buffer+45);
		unsigned long height = *(unsigned long *)(buffer+49);
		printf( "Width = %d\nHeight = %d\n", width, height);

		// set up the sourceVideoFormat
		sourceVideoFormat.bmiHeader.biBitCount = bitspersample;
		sourceVideoFormat.bmiHeader.biCompression = *(long*)(buffer+9);
		sourceVideoFormat.bmiHeader.biHeight=height;
		sourceVideoFormat.bmiHeader.biPlanes =1;
		sourceVideoFormat.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
		sourceVideoFormat.bmiHeader.biWidth = width;
		VideoStreamHeader.fccHandler = sourceVideoFormat.bmiHeader.biCompression;

		// read in the audio header
		//ReadFile(filehandle, buffer, 28, &bytes, NULL);
		//ReadFile(filehandle, buffer, buffer[27], &bytes, NULL);
		audioStream = 1;
	}
	
	//free(buffer);

	return OGM_VALID;
	
}

//***************************************************************

bool OgmParser::InitVideoDecompressor(){

	// the video buffer size is checked when the index is loaded, so this
	// will a valid size.
	unsigned long bytes;
	//HANDLE in = CreateFile("C:\\Documents and Settings\\Lags\\desktop\\data.lag", GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	//ReadFile(in, &VideoStreamHeader, sizeof(VideoStreamHeader), &bytes, NULL);
	//BITMAPINFO tem = sourceVideoFormat;
	sourceVideoFormat.bmiHeader.biSizeImage=sourceVideoFormat.bmiHeader.biWidth * sourceVideoFormat.bmiHeader.biHeight * 3;
	/*sourceVideoFormat.bmiHeader.biXPelsPerMeter=0;
	sourceVideoFormat.bmiHeader.biYPelsPerMeter=0;
	sourceVideoFormat.bmiHeader.biClrUsed=0;
	sourceVideoFormat.bmiHeader.biClrImportant=0;
	ReadFile(in, &sourceVideoFormat, sizeof(sourceVideoFormat), &bytes, NULL);*/
	//ReadFile(in, &targetVideoFormat, sizeof(targetVideoFormat), &bytes, NULL);
	//CloseHandle(in);

	long size = 200000;//VideoStreamHeader.dwSuggestedBufferSize;

	sourceVideoData = (unsigned char *)malloc(size );
	if ( sourceVideoFormat.bmiHeader.biCompression != ' BID' && sourceVideoFormat.bmiHeader.biCompression != 0){
		uncompressedVideoData = (unsigned char *)malloc(sourceVideoFormat.bmiHeader.biWidth * sourceVideoFormat.bmiHeader.biHeight * 3 +1);
		if ( uncompressedVideoData == NULL || sourceVideoData ==NULL){
			printf( "Unable to allocate memory for uncompressed video buffer\n");
			return false;
		}
	} else {
		uncompressedVideoData = sourceVideoData+1;
		targetVideoFormat = sourceVideoFormat; 
		GetVideoFrame(0);
		return true;
	}
	
	LongChar bicomp;
	bicomp.value = sourceVideoFormat.bmiHeader.biCompression;
	printf( "Video format bi-compresssion = %c%c%c%c\n", bicomp.bytes[0], bicomp.bytes[1], bicomp.bytes[2], bicomp.bytes[3]);
	printf( "Video stream ffc handler = %c%c%c%c\n", ((char *)&VideoStreamHeader.fccHandler)[0], ((char *)&VideoStreamHeader.fccHandler)[1], ((char *)&VideoStreamHeader.fccHandler)[2], ((char *)&VideoStreamHeader.fccHandler)[3] );

	VideoDecompressor = ICLocate(ICTYPE_VIDEO, VideoStreamHeader.fccHandler, &sourceVideoFormat.bmiHeader, 0, ICMODE_DECOMPRESS);
	
	if (  VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using ICLocate and the fccHandler\n");
		return true;
	}

	VideoDecompressor = ICLocate(ICTYPE_VIDEO, sourceVideoFormat.bmiHeader.biCompression, &sourceVideoFormat.bmiHeader, 0, ICMODE_DECOMPRESS);

	if (  VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using ICLocate and the biCompression\n");
		return true;
	}

	VideoDecompressor = ICOpen(ICTYPE_VIDEO, VideoStreamHeader.fccHandler, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using fcchandler\n");
		return true;
	}
	VideoDecompressor = ICOpen(ICTYPE_VIDEO, sourceVideoFormat.bmiHeader.biCompression, ICMODE_DECOMPRESS);
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
	sourceVideoFormat.bmiHeader.biCompression = divx5;
	VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat.bmiHeader.biCompression, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using Divx 5.0\n");
		return true;
	}
	
	// try divx, div3, and div4
	for ( int i = 0; i < 3; i++){
		sourceVideoFormat.bmiHeader.biCompression = divx.value;
		VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat.bmiHeader.biCompression, ICMODE_DECOMPRESS);
		if ( VideoDecompressor != NULL && TestDecompressor() ){
			printf("Video decompressor set up using Div%c\n", divx.bytes[3]);
			return true;
		}
		divx.bytes[3] = i+'3';
	} 

	// try xvid
	sourceVideoFormat.bmiHeader.biCompression = xvid;
	VideoDecompressor = ICOpen(ICTYPE_VIDEO,  sourceVideoFormat.bmiHeader.biCompression, ICMODE_DECOMPRESS);
	if ( VideoDecompressor != NULL && TestDecompressor() ){
		printf("Video decompressor set up using Xvid\n");
		return true;
	}

	return false;
}

bool OgmParser::TestDecompressor(){
	if ( ICERR_OK != ICDecompressGetFormat(VideoDecompressor, &sourceVideoFormat, &targetVideoFormat)) {
		printf( "Unable to get a valid uncompressed format, attempting to work around\n");
		targetVideoFormat = sourceVideoFormat;
		targetVideoFormat.bmiHeader.biBitCount = 24;
		targetVideoFormat.bmiHeader.biCompression = BI_RGB;
		targetVideoFormat.bmiHeader.biSizeImage = 0;
	}
	#ifdef _DEBUG
	if ( VideoDecompressor == NULL )
		printf("\nVideo decompressor nulled in test decompressor\n\n");
	#endif
	DWORD error = ICDecompressBegin( VideoDecompressor, &sourceVideoFormat, &targetVideoFormat);
	if ( error != ICERR_OK ) 
		return false;

	if ( GetVideoFrame(0) )
		return true;
	else
		return false;
}

bool OgmParser::InitAudioDecompressor(){
	return false;/*  not operational at this time

	unsigned char * buffer = (unsigned char *)streams[audioStream].header;
	unsigned long sourceSize = *(unsigned long*)(buffer+37) * 8;//AudioStreamHeader.dwSuggestedBufferSize;

	// if the suggested buffer size is not set, find the largest
	// chunk size and set the buffer size to that.
	// PCM audio also appears to not have correct buffers at times...
	/*if ( sourceSize < 1 || sourceAudioFormat->wFormatTag == WAVE_FORMAT_PCM ){

		if ( sourceSize < 1 )
			printf( "Source audio buffer size not specified in stream header\n");
		sourceSize = 0;
		for ( long f = 0; f < lastAudioFrame; f++ ){
			if ( audioData[f].dwChunkLength > sourceSize )
				sourceSize = audioData[f].dwChunkLength;
		}
		if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM  ) 
			printf( "Setting source audio buffer size to %d\n", sourceSize);
	}*/ /*
	if ( sourceAudioData)
		free(sourceAudioData);
	sourceAudioData = (unsigned char *)malloc( sourceSize );
	if ( sourceAudioData == NULL ){
		printf( "Unable to allocate memory for source audio buffer\n");
		return false;
	}

	sourceAudioFormat = (WAVEFORMATEX *)malloc( sizeof(WAVEFORMATEX));
	//printf( "Audio tag found\n");
	//long size = *(long*)(buffer+13);
	long tag=(buffer[10]-'0')*256; 
	tag+=(buffer[11]-'0')*16;
	tag+=(buffer[12]-'0');
	//printf("tag == %d\n", tag);

	sourceAudioFormat->wFormatTag =tag;

	__int64 time2 = *(__int64 *)(buffer+17);
	__int64 samplesPerTime2 = *(__int64*)(buffer+25);
	time2 = 10000000/time2;
	sourceAudioFormat->nSamplesPerSec=samplesPerTime2/time2;
	//long length2 = *(long*)(buffer+33);
	//long bufSize = *(long*)(buffer+37);

	// set up the sourceAudioFormat
	short bits = *(short*)(buffer+41);
	sourceAudioFormat->wBitsPerSample=bits;
	short channels = *(short*)(buffer+45);
	sourceAudioFormat->nChannels = channels;
	sourceAudioFormat->cbSize = 0;
	sourceAudioFormat->nBlockAlign = (bits+1)*channels/8.;
	if ( !sourceAudioFormat->nBlockAlign )
		sourceAudioFormat->nBlockAlign =1;
	sourceAudioFormat->nAvgBytesPerSec = sourceAudioFormat->nBlockAlign*sourceAudioFormat->nSamplesPerSec;

	unsigned long bytes;
	WAVEFORMATEX * sourceAudioFormat2 = (WAVEFORMATEX*)malloc(sizeof(WAVEFORMATEX)+12);
	HANDLE input = CreateFile( "C:\\Documents and Settings\\Lags\\Desktop\\audiohdr.lag", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	ReadFile(input, sourceAudioFormat2,sizeof(WAVEFORMATEX)+12,&bytes,NULL);
	CloseHandle(input);
	sourceAudioFormat = sourceAudioFormat2;

	if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM ){

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
	return true;*/
}

char * OgmParser::GetVideoBuffer(){
	return (char*)uncompressedVideoData;
}

char * OgmParser::GetAudioBuffer(){
	return (char*)uncompressedAudioData;
}

//***************************************************************

bool OgmParser::GetVideoFrame(long frame){
	OgmStream stream = streams[videoStream];
	int pages = stream.frames[frame+1]-stream.frames[frame];
	int initalpage = stream.frames[frame];
	unsigned long bytes;
	int offset = 0;
	for ( int a =0; a < pages; a++){
		SetFilePointer(filehandle, stream.indexes[initalpage+a].offset, NULL, FILE_BEGIN);
		ReadFile(filehandle, sourceVideoData+offset,stream.indexes[initalpage+a].length, &bytes, NULL);
		offset+=bytes;
	}

	if ( offset && sourceVideoFormat.bmiHeader.biCompression != 0 ){
		try {
			if ( long error = ICDecompress( VideoDecompressor, 0, &(sourceVideoFormat.bmiHeader), sourceVideoData+1, &(targetVideoFormat.bmiHeader), uncompressedVideoData)){     
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
				//return false;
			}

		// handle any decompressor exceptions
		} catch ( ... ) {
			printf("Exception thrown in GetVideoFrame by ICDecompress. Ignoring\n");
			//return false;
		}
	}
	return true;
}

//***************************************************************

long OgmParser::GetAudioFrame( long frame ){
	unsigned long bytes;
	OgmStream stream = streams[audioStream];
	int pages = stream.frames[frame+1]-stream.frames[frame];
	int initalpage = stream.frames[frame];
	int offset = 0;
	for ( int a =0; a < pages; a++){
		if ( a){
			SetFilePointer(filehandle, stream.indexes[initalpage+a].offset, NULL, FILE_BEGIN);
			ReadFile(filehandle, sourceAudioData+offset,stream.indexes[initalpage+a].length, &bytes, NULL);
		}else{
			SetFilePointer(filehandle, stream.indexes[initalpage+a].offset+3, NULL, FILE_BEGIN);
			ReadFile(filehandle, sourceAudioData+offset,stream.indexes[initalpage+a].length-3, &bytes, NULL);
		}
		offset+=bytes;
	}
	

	//long value;

	if ( sourceAudioFormat->wFormatTag != WAVE_FORMAT_PCM ){
		acmHeader.cbSrcLength = offset;
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

long OgmParser::GetTotalAudioFrames(){
	return streams[audioStream].Fpos;
}

//***************************************************************

long OgmParser::GetTotalFrames(){
	return streams[videoStream].Fpos;
}

//***************************************************************

float OgmParser::GetFramesPerSec(){
	return frameRate;
}

//***************************************************************

float OgmParser::GetAudioPerFrame(){
	return 0.0;
}

void OgmParser::GetAudioPos( long &videoFrame, long &audioFrame){
}

long OgmParser::GetKeyFrame( long startFrame, bool forward){
	return startFrame;
}

//***************************************************************

int OgmParser::GetHeight(){
	return sourceVideoFormat.bmiHeader.biHeight;
}

//***************************************************************

int OgmParser::GetWidth(){
	return sourceVideoFormat.bmiHeader.biWidth;
}

//***************************************************************

int OgmParser::GetSamplesPerSec(){
	return targetAudioFormat.nSamplesPerSec;
}

//***************************************************************

int OgmParser::GetChannels(){
	return targetAudioFormat.nChannels;
}

//***************************************************************

int OgmParser::GetBitsPerSample(){
	return targetAudioFormat.wBitsPerSample;
}

//***************************************************************

/* this function is executed as a seperate thread. It runs through the file
 * and builds an index of audio and video frames. This function is simmilar to 
 * the BuildIndex function in incomplete avi parser, except that this is done
 * for all OGM files, while the other is just for incomplete files. This is
 * because OGM files have no general index of frames, so it must be constructed
 * from the file.
 */
void OgmParser::BuildIndex( void * name ){
	unsigned long bytes;
	int c = SetFilePointer(filehandle, 0, NULL, FILE_CURRENT);
	unsigned char * neko = (unsigned char *)malloc(255);
	unsigned char * pheader = (unsigned char *)malloc(27);
	int fileSize = -1000;
	fileSize+= GetFileSize( filehandle, NULL );

	streams = (OgmStream *)malloc(20*sizeof(OgmStream));
	/*for ( int a = 0; a < 20; a++ ){
		//streams[a].frames = (long*)malloc(100*4);
		streams[a].indexes= NULL;
		//streams[a].Ipos=0;
		//streams[a].Isize=0;
		//streams[a].Fpos=0;
		//streams[a].Fsize=0;
	}*/

	//unsigned char * buffer = (unsigned char *)malloc(28);

	while ( c < fileSize ){
		ReadFile(filehandle, pheader, 27, &bytes, NULL);
		ReadFile( filehandle, neko,pheader[26], &bytes, NULL); 

		OgmStream &stream = streams[pheader[14]];

		// if this is a packet that contains data
		// (data packets have to occure after a header, so
		// the stream will be allocated already)
		int move=0;
		if ( !(pheader[5] & 2) ){
			if ( !(pheader[5]%2) ){ // new packet
				stream.frames[stream.Fpos++] = stream.Ipos;
			}
			int offset = SetFilePointer(filehandle,0,NULL, FILE_CURRENT);

			stream.indexes[stream.Ipos].offset = offset;

			int length =0;
			for ( unsigned char i =0; i < pheader[26]; i++ ){
				length+=neko[i];
				move += neko[i];
				if ( neko[i]!=255){
					stream.frames[stream.Fpos++] = stream.Ipos+1;
					stream.indexes[stream.Ipos++].length = length-1;
					if ( i < pheader[26]-1 )
						stream.indexes[stream.Ipos].offset = stream.indexes[stream.Ipos-1].offset +length;
					length =0;
				}
			}
			stream.indexes[stream.Ipos++].length = length;
			if ( stream.Ipos > stream.Isize - 50 ){
				stream.Isize+=5000;
				stream.indexes = (OgmFrame *)realloc(stream.indexes, stream.Isize*sizeof(OgmFrame));
			}
			if ( stream.Fpos > stream.Fsize - 50 ){
				stream.Fsize+=5000;
				stream.frames = (long *)realloc(stream.frames, stream.Fsize*sizeof(long));
			}
		} else if ( pheader[5] & 2 ){
			int length=0;
			for ( int a =0; a < pheader[26]; a++ )
				length+=neko[a];
			stream.header = (char*)malloc(length);
			ReadFile(filehandle, stream.header, length, &bytes, NULL);
			stream.indexes = (OgmFrame *)malloc(5000*sizeof(OgmFrame));
			stream.frames = (long*)malloc(5000*sizeof(long));
			stream.Isize = 5000;
			stream.Ipos = 0;
			stream.Fsize = 5000;
			stream.Fpos =0;
			move = 0;
			c+=bytes;
		}

		c+=27+move+pheader[26];
		int filepos = SetFilePointer(filehandle, move, NULL, FILE_CURRENT);		
	}

	/*for ( int b = 0; b < 20; b++ ){
		OgmStream &stream = streams[b];
		stream.frames[stream.Fpos++]=stream.Ipos;
	}*/

	free(neko);
	free(pheader);
	//free(buffer);
}

//***************************************************************

void OgmParser::CloseAvi(){
}