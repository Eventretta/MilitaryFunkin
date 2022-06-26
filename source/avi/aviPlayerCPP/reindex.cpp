#ifndef REINDEX
#define REINDEX

/* These functions are used by the avi parser class to generate new threads
 * to reindex incomplete avi files. To generate a new thread using _beginthread
 * the function call must be a _cdecl function. Unfortunatly that does not 
 * seem to mix with member functions, so they are created as globals.
 */

struct IncompleteAviObject{
	IncompleteAviParser * aviObjPtr;
	char * fileName;
	HANDLE *handle;
};

// this function simply provides a _cdec wrapper for the avi build index function. 
void StartThread( void * aviObjStruct ){
	// should never return
	((IncompleteAviObject *)aviObjStruct)->aviObjPtr->BuildIndex( ((IncompleteAviObject *)aviObjStruct)->fileName);
}

// If the file is incomplete, this file updates the last audio/video frame number
// as well as updates the avi index periodicly, in case the file is still
// being downloaded.
void IncompleteTimerThread( void * aviObjStruct ){
	*(unsigned long*)(((IncompleteAviObject*)aviObjStruct)->handle) = _beginthread( StartThread, 0, aviObjStruct );
	_sleep(2000);

	//lower the priority after it has indexed part of the file so that it is 
	//less likely to interfere with the main thread
	SetThreadPriority( *(((IncompleteAviObject*)aviObjStruct)->handle), THREAD_PRIORITY_BELOW_NORMAL);
	while( true ){
		#ifdef FILE_READER
		lastVideoFrame = ((IncompleteAviObject *)aviObjStruct)->aviObjPtr->GetTotalFrames();
		lastAudioFrame = ((IncompleteAviObject *)aviObjStruct)->aviObjPtr->GetTotalAudioFrames();
		#endif
		_sleep(2000);
	}
}
#endif