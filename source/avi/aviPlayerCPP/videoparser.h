#ifndef VIDEO_PARSER
#define VIDEO_PARSER

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <windows.h>
#include <vfw.h>
#include <msacm.h>
//#include "filebuffer.cpp"

#pragma comment( lib, "vfw32.lib" ) 
#pragma comment( lib, "msacm32.lib" ) 

#define FILE_INVALID	0
#define AVI_VALID		1
#define AVI_INCOMPLETE	2
#define OGM_VALID		3

// standard avi file index entry
struct Index {
    DWORD  ckid;
    DWORD  dwFlags;
    DWORD  dwChunkOffset;
    DWORD  dwChunkLength;
};

// 8 bytes per audio frame, vs 16 in the avi index
struct AudioIndex { 
    DWORD  dwChunkOffset;
    DWORD  dwChunkLength;
};

union LongChar{
	long value;
	char bytes[4];
};

/* Basic usage:
	Call VideoParser::TestFile( ) with the file name of the target to determin its type if not known.
	Create a new object of the needed type, and call that objects InitFile() with the file name as a parameter
	Call the objects InitVideoDecompression() and InitAudioDecompression() so that the object is prepared to 
	decompress them, then use GetAudioBuffer()/GetVideoBuffer to get an array that will contain the uncompressed 
	audio/video data. Calling GetAudioFrame( x )/ GetVideoFrame(x) will decompress that frame and put the data in
	the uncompressed buffer. When the program is done with the file, call CloseAvi() to release the memory and
	handles that the object owns. The additional functions can be called after InitFile() has been executed to
	obtain information about the audio and video streams of the file.*/

class VideoParser {
public: 	
		static int VideoParser::TestFile(char * file);
		virtual int InitFile( char *file ) PURE;
		virtual bool InitVideoDecompressor() PURE;
	 	virtual bool InitAudioDecompressor() PURE;
		virtual char * GetVideoBuffer() PURE;
		virtual char * GetAudioBuffer() PURE;
		virtual bool GetVideoFrame(long frame) PURE;
		virtual long GetAudioFrame(long frame) PURE;
		virtual long GetTotalFrames() PURE;
		virtual long GetTotalAudioFrames() PURE;
		virtual float GetFramesPerSec() PURE;
		virtual float GetAudioPerFrame() PURE;
		virtual void GetAudioPos( long &videoFrame, long &audioFrame) PURE;
		virtual long GetKeyFrame( long startFrame, bool forward) PURE;
		virtual int GetHeight() PURE;
		virtual int GetWidth() PURE;
		virtual int GetSamplesPerSec() PURE;
		virtual int GetChannels() PURE;
		virtual int GetBitsPerSample() PURE;
		virtual void CloseAvi() PURE;
}; 

// this is the only method implemented for this class

int VideoParser::TestFile(char * name){
	printf( "Attempting to open %s\n", name );
	unsigned long dwActual;
	HANDLE file = CreateFile(name, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	if ( INVALID_HANDLE_VALUE == file || file == NULL){
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
			const unsigned char asf_sig[]={
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
		if ( strcmp( name + strlen(name)-8, "antifrag") == 0 ){
			CloseHandle( file );
			return AVI_INCOMPLETE;
		}
	}
	CloseHandle( file );
	return AVI_VALID;
}

#endif