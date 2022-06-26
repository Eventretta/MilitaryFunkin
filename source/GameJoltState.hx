package;

#if desktop
import Discord.DiscordClient;
#end
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxCamera;
import flixel.addons.transition.FlxTransitionableState;
import flixel.effects.FlxFlicker;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.addons.ui.FlxInputText;
import lime.app.Application;
import Achievements;
import editors.MasterEditorMenu;
import flixel.input.keyboard.FlxKey;
import flash.printing.PrintJob;
import flixel.system.FlxBasePreloader;
import openfl.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.BlendMode;
import flash.display.Sprite;
import flash.Lib;
import flixel.FlxG;
import openfl.utils.Assets;
import flash.events.KeyboardEvent;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.addons.api.FlxGameJolt;
import flixel.addons.ui.FlxUI9SliceSprite;
import flixel.addons.ui.FlxUI;
import flixel.addons.ui.FlxUICheckBox;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.ui.FlxUINumericStepper;
import flixel.addons.ui.FlxUITabMenu;
import flixel.addons.ui.FlxUITooltip.FlxUITooltipStyle;

using StringTools;

class GameJoltState extends MusicBeatState
{
	var email:FlxInputText;
	var password:FlxInputText;
	var gamejolt:FlxText;
	var login:FlxButton;
	var nologin:FlxButton;
	var passenabled:FlxUICheckBox;

	override function create()
	{
		FlxGameJolt.init(696680, '8e57545ea1499e7f17d5c11fda29dddf');
		FlxG.mouse.visible = true;

		try {
			FlxGameJolt.authUser(FlxG.save.data.joltEmail, FlxG.save.data.joltPass, function (authresult) {
				trace(authresult);
				if (authresult) {
					MainMenuState.gamejoltthings = [email.text,password.text];
					MainMenuState.gamejolto = true;
					remove(email);
					remove(password);
					remove(login);
					remove(gamejolt);
					remove(nologin);
					remove(passenabled);
					add(new FlxText(0,0,'Welcome, ${FlxGameJolt.username}!').screenCenter());
					new flixel.util.FlxTimer().start(3, function (lol) { 
						FlxG.switchState(new MainMenuState());
					});
				}
			});
		}
		catch (e) {
			trace('save data error: $e');
		}

		email = new FlxInputText(0,0,500);
		email.screenCenter();
		add(email);

		password = new FlxInputText(0,email.y + 20,500);
		password.screenCenter(X);
		password.passwordMode = true;
		add(password);

		gamejolt = new FlxText(0,email.y - 200,"ENTER GAMEJOLT USERNAME AND TOKEN");
		gamejolt.screenCenter(X);
		add(gamejolt);

		login = new FlxButton(0,email.y + 100,"Login",function () {
			FlxGameJolt.authUser(email.text, password.text, function (authresult) {
				trace(authresult);
				if (authresult) {
					MainMenuState.gamejoltthings = [email.text,password.text];
					FlxG.save.data.joltMail == email.text;
					FlxG.save.data.joltPass == password.text;
					FlxG.save.data.logged = true;
					MainMenuState.gamejolto = true;
					FlxGameJolt.addTrophy(160928);
					remove(email);
					remove(password);
					remove(login);
					remove(gamejolt);
					remove(nologin);
					remove(passenabled);
					add(new FlxText(0,0,'Welcome, ${FlxGameJolt.username}!\nYour credentials are saved in savedata for future use.').screenCenter());
					new flixel.util.FlxTimer().start(3, function (lol) { 
						FlxG.switchState(new MainMenuState());
					});
				}
				else {
					remove(gamejolt);
					gamejolt = new FlxText(0,email.y - 200,"An error occurred. Try again.");
					gamejolt.screenCenter(X);
					add(gamejolt);
				}
			});
		});
		passenabled = new FlxUICheckBox(0, login.y - 30, null, null, "Hide Password Box", 100);
		passenabled.screenCenter(X);
		passenabled.callback = function()
		{
			if (passenabled.checked)
			{
				FlxTween.tween(password, {alpha: 0}, {ease: FlxEase.quadInOut});
			}
			else
			{
				FlxTween.tween(password, {alpha: 1}, {ease: FlxEase.quadInOut});
			}
		};
		add(passenabled);

		login.screenCenter(X);
		add(login);

		nologin = new FlxButton(0,email.y + 180,"Not now",function () {
			FlxG.switchState(new MainMenuState());
		});
		nologin.screenCenter(X);
		add(nologin);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
