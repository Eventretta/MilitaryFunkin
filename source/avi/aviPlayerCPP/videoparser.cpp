#include "videoparser.h"

char VideoParser::TestFile(char * name){
	printf( "Attempting to open %s\n", name );
	unsigned long dwActual;
	HANDLE file = CreateFile(name, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	if ( INVALID_HANDLE_VALUE == file ){
		printf( "Unable to open specified file\n");
		return FILE_INVALID;
	}
	long size = GetFileSize( file, NULL );
	if ( size == -1 ){
		printf("File does not exist\n");
		return FILE_INVALID;
	}
	
	char buffer[32];
	if ( size >= 32 ){
		ReadFile(file, &buffer, 32, &dwActual, NULL);
		if ( (*(long *)buffer !='FFIR' || *(long *)&buffer[8] !=' IVA')) { // not an avi file
			bool mislabled=false;
			if ( *(long *)&name[strlen( name )-4] == 'iva.' || *(long *)&name[strlen( name )-4] == 'IVA.'){
				printf( "File extention is incorrect\n");
				mislabled = true;
			}
			if (*(long *)&buffer[0]==0xb3010000 || *(long *)&buffer[0] == 0xba010000 )
				printf( "This file is an MPEG file\n");
			const static unsigned char asf_sig[]={
				0x30, 0x26, 0xb2, 0x75, 0x8e, 0x66, 0xcf, 0x11,
				0xa6, 0xd9, 0x00, 0xaa, 0x00, 0x62, 0xce, 0x6c
			};
			if (!memcmp(&buffer, asf_sig, 16) )
				printf("This file is an ASF file\n");
			if ( *(long *)&buffer[8] == 'AXDC' )
				printf( "This file is a VideoCD stream that Windows has wrapped in a RIFF/CDXA file\n");
			if (*(long *)&buffer[0]=='SggO'){
				if ( mislabled )
					printf( "This file is a Ogg media file.\n");
				CloseHandle( file );
				return OGM_VALID;
			}
			CloseHandle( file );
			return FILE_INVALID; 
		}
		if ( size < 40000 ){
			printf("File does not contain enough data to play.\n");
			CloseHandle( file );
			return FILE_INVALID;
		}

		// compare the size of the avi to the expected size
		#ifdef _DEBUG
		if ( size < *(long *)&buffer[4] )
			printf( "File size = %d, value = %d, diff = %d\n", size, *(long *)&buffer[4], size - *(long *)&buffer[4] );
		#endif

		if ( size < *(long *)&buffer[4] ){
			CloseHandle( file );
			return AVI_INCOMPLETE;
		}
	}
	CloseHandle( file );
	return AVI_VALID;
}

//**************************************************************

char * VideoParser::GetVideoBuffer(){
	return (char *)uncompressedVideoData;
}

//***************************************************************

char * VideoParser::GetAudioBuffer(){
	return (char *)uncompressedAudioData;
}

//***************************************************************

long VideoParser::GetTotalFrames(){
	return lastVideoFrame;
}

//**************************************************************

long VideoParser::GetTotalAudioFrames(){
	return lastAudioFrame;
}

//**************************************************************

float VideoParser::GetAudioPerFrame(){
	return lastAudioFrame/(float)lastVideoFrame;
}

//***************************************************************

int VideoParser::GetHeight(){
	return targetVideoFormat.bmiHeader.biHeight;
}

//***************************************************************

int VideoParser::GetWidth(){
	return targetVideoFormat.bmiHeader.biWidth;
}

//***************************************************************

int VideoParser::GetSamplesPerSec(){
	return targetAudioFormat.nSamplesPerSec;
}

//***************************************************************

int VideoParser::GetChannels(){
	return targetAudioFormat.nChannels;
}

//***************************************************************

int VideoParser::GetBitsPerSample(){
	return targetAudioFormat.wBitsPerSample;
}
