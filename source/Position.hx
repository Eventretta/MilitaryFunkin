package;

import flixel.text.FlxText;
import flixel.FlxG;
import flixel.FlxSprite;

class Position extends MusicBeatState 
{
    var pos:FlxText;
    var cubes:Int = 0;
    var el:Float = 0;
    var cubA:Array<FlxSprite> = [];
    var daPos:Array<Array<Float>> = [[30, 40], [100,100]];
    override function create()
    {
        super.create();

        add(new FlxSprite().makeGraphic(FlxG.width * 10, FlxG.height * 10, flixel.util.FlxColor.GRAY));

        FlxG.sound.playMusic(Paths.music('offsetSong'));

        FlxG.mouse.visible = true;

        pos = new FlxText(20,20,"0,0\nMove the mouse to see the coordinates\nand click to add a cube");
        pos.screenCenter(X);
        add(pos);
    }

    override function update(elapsed:Float)
    {
        el += elapsed * 100;
        super.update(elapsed);
        remove(pos);
        pos = new FlxText(20,20,FlxG.mouse.x + ' , ' + FlxG.mouse.y + '\nMove the mouse to see the coordinates\nand click to add a cube\nThere are ${cubes} cubes.');
        pos.screenCenter(X);
        add(pos);
        if (FlxG.keys.justPressed.ENTER) MusicBeatState.switchState(new MainMenuState());
        if (FlxG.mouse.pressed) {
            cubes += 1;
            cubA.push(new FlxSprite(FlxG.mouse.x,FlxG.mouse.y).makeGraphic(10,10,flixel.util.FlxColor.BLACK));
            add(new FlxSprite(FlxG.mouse.x,FlxG.mouse.y).makeGraphic(10,10,flixel.util.FlxColor.BLACK));
        }
        if (FlxG.keys.pressed.T && FlxG.keys.pressed.E)
        {
            lime.app.Application.current.window.alert(("" + el).split('')[0], "DEBUG");
        }
    }
}