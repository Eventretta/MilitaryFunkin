package ;
 
import flixel.system.FlxBasePreloader;
import openfl.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.BlendMode;
import flash.display.Sprite;
import flash.Lib;
import flixel.FlxG;
import openfl.text.TextField;
import openfl.text.TextFormat;
 
@:bitmap("art/militaryLoading.png") class LogoImage extends BitmapData { }

// I am not going to modify this a lot because also a little something bad can crash the game
// but eventy
 
class Preloader extends FlxBasePreloader
{
    public function new(MinDisplayTime:Float=3, ?AllowedURLs:Array<String>) 
    {
        super(MinDisplayTime, AllowedURLs);
    }
     
    var logo:Sprite;
    var ratio:Float;
     
    override function create():Void 
    {
        this._width = Lib.current.stage.stageWidth;
        this._height = Lib.current.stage.stageHeight;
         
        ratio = this._width / 2560; //This allows us to scale assets depending on the size of the screen.
         
        logo = new Sprite();
        logo.addChild(new Bitmap(new LogoImage(0,0))); //Sets the graphic of the sprite to a Bitmap object, which uses our embedded BitmapData class.
        addChild(logo); //Adds the graphic to the NMEPreloader's buffer.

        addChild(new FPS(10, 3, 0xFFFFFF));

        // thanks richard oliver 
        super.create();
    }
     
    override function update(Percent:Float):Void 
    {        
        super.update(Percent);

        trace(Percent * 100 + "% Complete");

        
    }
}