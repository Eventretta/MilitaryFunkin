package;

import flixel.FlxG;

class LoadingScreen extends MusicBeatState
{
    override function create()
    {
        add(new Character(0,0,'military').screenCenter(Y));
        add(new Alphabet(0,0,"LOADING..",true).screenCenter());
        FlxG.sound.cacheAll();
        
        FlxG.switchState(LoadingState.getNextState(new PlayState(), true));
    }

    override function update(elapsed:Float)
    {
        super.update(elapsed);
    }
}