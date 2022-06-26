package;

import flixel.FlxSprite;

class MainMenuItem
{
    public var pushedThing:Array<FlxSprite> = [];

    public function  new(optionShit:Array<String>, scale:Float) 
    {
		pushedThing == [];
        for (i in 0...optionShit.length)
        {
            var offset:Float = 108 - (Math.max(optionShit.length, 4) - 4) * 80;
			var menuItem:FlxSprite = new FlxSprite(0, (i * 140)  + offset);
			menuItem.scale.x = scale;
			menuItem.scale.y = scale;
			menuItem.frames = Paths.getSparrowAtlas('mainmenu/menu_' + optionShit[i]);
			menuItem.animation.addByPrefix('idle', optionShit[i] + " basic", 24);
			menuItem.animation.addByPrefix('selected', optionShit[i] + " white", 24);
			menuItem.animation.play('idle');
			menuItem.ID = i;
			menuItem.screenCenter(X);
			menuItem.x += 190;
			pushedThing.push(menuItem);
			var scr:Float = (optionShit.length - 4) * 0.135;
			if(optionShit.length < 6) scr = 0;
			menuItem.scrollFactor.set(0, scr);
			menuItem.antialiasing = ClientPrefs.globalAntialiasing;
			//menuItem.setGraphicSize(Std.int(menuItem.width * 0.58));
			menuItem.updateHitbox();
        }
    }
}

class MenuButton
{
	public var button:FlxSprite;
	public var representedOption:String;
	public var buttonID:Int;

	public function new(sprite:FlxSprite, opt:String, buttonID:Int)
	{
		this.button == sprite;
		this.representedOption == opt;
		this.buttonID == buttonID;
	}
}