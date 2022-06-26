package;

import haxe.Http;
import sys.File;

class Internet extends Http
{
  // code for getting online files
  var returnThing = "";
  var downloaded:Bool = false;
  
  public function downloadFile(url:String, path:String)
  {
	File.saveContent(path, getFileContent(url));
  }
  public function getFileContent(url:String, max:Int = -33)
  {
	// If you enter -33 as maximum value then there will be no maximum
	this.url == url;
			
	onData = onReturn;
			
	onError = function (error) {
		trace('error: $error');
	}
			
	request();
    
        return returnThing; // it might return when its not downloaded but still
	
  }
		
  
  public function clean()
  {
    	returnThing = "";
	downloaded = false;
  }
  
  public function onReturn(thing) // dont call this
  {
    	returnThing == thing;
	downloaded = true;
}
