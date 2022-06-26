#ifndef INCOMPLETE_AVI_PARSER
#define INCOMPLETE_AVI_PARSER

#include "aviparser.h"
#include <process.h>

class IncompleteAviParser : public AviParser {
public:
		IncompleteAviParser();
		~IncompleteAviParser();
		virtual void CloseAvi();
		virtual long GetKeyFrame( long startFrame, bool forward);
		virtual void GetAudioPos( long &videoFrame,long &audioFrame);
		void BuildIndex( void * fileName);

private:
		virtual char ReadIndex(char * name, long indexPos);
		bool hasKeyFrames;
		HANDLE indexThread;
};

#endif
