#ifndef AVI_PARSER
#define AVI_PARSER

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <windows.h>
#include <vfw.h>
#include <msacm.h>
#include "videoparser.h"

#pragma comment( lib, "vfw32.lib" ) 
#pragma comment( lib, "msacm32.lib" ) 

class AviParser : public VideoParser {
public: 	AviParser();
			~AviParser();
		static char AviParser::TestFile(char * file);
		virtual int InitFile( char *file );
		virtual bool InitVideoDecompressor();
	 	virtual bool InitAudioDecompressor();
		char * GetVideoBuffer();
		char * GetAudioBuffer();
		bool GetVideoFrame(long frame);
		long GetAudioFrame(long frame);
		long GetTotalFrames();
		long GetTotalAudioFrames();
		float GetFramesPerSec();
		float GetAudioPerFrame();
		void GetAudioPos( long &videoFrame, long &audioFrame);
		virtual long GetKeyFrame( long startFrame, bool forward);
		int GetHeight();
		int GetWidth();
		int GetSamplesPerSec();
		int GetChannels();
		int GetAudioByteDelay();
		int GetBitsPerSample();
		//FileBuffer * GetBuffer();
		virtual void CloseAvi();

protected:
		bool UsePavi( char * file);
		virtual char ReadIndex(char * name, long indexPos);
		bool TestDecompressor();

		// data members
		unsigned long *frameData;
		AudioIndex *audioData;
		long lastAudioFrame;
		long lastVideoFrame;
		long moviPos;
		unsigned long fileSize;
		unsigned long * keyFrames;
		unsigned short totalKeys;
		float audioRate;
		float audioBytesPerFrame;
		HANDLE filehandle;
		MainAVIHeader FileHeader; 
		AVIStreamHeader VideoStreamHeader;
		AVIStreamHeader AudioStreamHeader;
		BITMAPINFO * sourceVideoFormat;
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
		//FileBuffer bufferedRead;

}; 
#endif