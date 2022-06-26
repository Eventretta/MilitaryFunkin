package;

import aviPlayerCPP.aviplayer;


// The Haxe was made by me lol

@:include('aviplayer.cpp');

class AVIState
{
  @:native("LibVLC::create")
	public static function create():LibVLC;
}
