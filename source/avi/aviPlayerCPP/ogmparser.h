#ifndef OGM_PARSER
#define OGM_PARSER
/*
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <windows.h>
#include <vfw.h>
#include <msacm.h>
#include "videoparser.h"

#pragma comment( lib, "vfw32.lib" ) 
#pragma comment( lib, "msacm32.lib" ) */

// 1/nth of an Ogm packet (equivilent to an avi frame)
// multiple Ogm frames may need to be read to get the packet
// the offset is the byte location in the file, and length is 
// the length of the data in bytes
struct OgmFrame{
	unsigned long offset;
	unsigned short length;
};

// Data about a stream in the Ogm file
// Ogm can have multiple streams of a given type, as well
// as streams for a wide variaty of media, such as video, audio,
// and text. 
struct OgmStream{
	OgmFrame * indexes; // contains all of the Ogm frames for all packets
	long * frames;		// position in the indexes array that a packet begins on
	long Isize;			// indexes array size
	long Ipos;			// last used index pos + 1
	long Fsize;			// frames array size
	long Fpos;			// last used frame pos + 1
	char * header;		// the header data for the stream
};

class OgmParser : public VideoParser {
public: 	OgmParser();
			~OgmParser();
		virtual int InitFile( char *file );
		virtual bool InitVideoDecompressor();
	 	virtual bool InitAudioDecompressor();
		virtual char * GetVideoBuffer();
		virtual char * GetAudioBuffer();
		virtual bool GetVideoFrame(long frame);
		virtual long GetAudioFrame(long frame);
		virtual long GetTotalFrames();
		virtual long GetTotalAudioFrames();
		virtual float GetFramesPerSec();
		virtual float GetAudioPerFrame();
		virtual void GetAudioPos( long &videoFrame, long &audioFrame);
		virtual long GetKeyFrame( long startFrame, bool forward);
		virtual int GetHeight();
		virtual int GetWidth();
		virtual int GetSamplesPerSec();
		virtual int GetChannels();
		virtual int GetBitsPerSample();
		virtual void CloseAvi();

protected:
		void BuildIndex(void * name);
		unsigned int GetVideoPacket( void * pointer);
		unsigned int GetAudioPacket( long frame, unsigned char * pointer);
		bool TestDecompressor();

		// data members
		bool resizing;
		long lastAudioFrame;
		long lastVideoFrame;
		float audioRate;
		float frameRate;
		HANDLE filehandle;
		BITMAPINFO sourceVideoFormat;
		BITMAPINFO targetVideoFormat;
		WAVEFORMATEX *sourceAudioFormat;
		WAVEFORMATEX targetAudioFormat;
		HIC VideoDecompressor;
		unsigned char *sourceVideoData;
		unsigned char *sourceAudioData;
		unsigned char *uncompressedVideoData;
		unsigned char *uncompressedAudioData;
		HACMSTREAM ACMstreamHandle;
		ACMSTREAMHEADER acmHeader;
		AVIStreamHeader VideoStreamHeader;
		long * keyFrames;
		long totalKeys;
		OgmStream * streams;
		int videoStream;
		int audioStream;
		int	 textStream;
}; 
#endif