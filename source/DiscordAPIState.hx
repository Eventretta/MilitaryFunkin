package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import lime.app.Application;
import flixel.addons.transition.FlxTransitionableState;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class DiscordAPIState extends MusicBeatState
{
	public static var leftState:Bool = false;

	var warnText:FlxText;
	override function create()
	{
		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLUE);
		add(bg);

		warnText = new FlxText(0, 0, FlxG.width,
			"Hi bro! Add the bot to your server so"
			+ " your friends can see what you are doing in this mod!"
			+ " Press ENTER to open authentication page, or "
			+ "press ESCAPE to do it later.",
			32);
		warnText.setFormat("VCR OSD Mono", 32, FlxColor.WHITE, CENTER);
		warnText.screenCenter(Y);
		add(warnText);
	}

	override function update(elapsed:Float)
	{
		if(!leftState) {
			if (controls.ACCEPT || controls.BACK) {
				if (controls.ACCEPT)
				{
					CoolUtil.browserLoad('https://discord.com/oauth2/authorize?&client_id=944552025092390912&scope=bot&permissions=8');
					MainMenuState.discord = true;
				}

				FlxG.switchState(new MainMenuState());
			}
		}
		super.update(elapsed);
	}
}
