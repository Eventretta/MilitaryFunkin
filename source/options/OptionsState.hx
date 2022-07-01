package options;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
// STUFF FOR SAVEDATA EXPORTING
import openfl.net.FileReference;
import openfl.events.Event;
import openfl.events.IOErrorEvent;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import Controls;

using StringTools;

class OptionsState extends MusicBeatState
{
	public static var isFromPause:Bool = false;
	var options:Array<String> = ['Note Colors', 'Controls', 'Adjust Delay and Combo', 'Graphics', 'Visuals and UI', 'Gameplay','Audio & Video','Export Savedata'];
	private var grpOptions:FlxTypedGroup<Alphabet>;
	private static var curSelected:Int = 0;
	public static var menuBG:FlxSprite;
	public var versionShit:FlxText;
	var _file:FileReference;

	public var txtThingie:Int = 0;
	public var txtArrayThingie:Array<String> = ['Import','Export'];
	public var saveTxt:Alphabet;

	function openSelectedSubstate(label:String) {
		switch(label) {
			case 'Note Colors':
				openSubState(new options.NotesSubState());
			case 'Controls':
				openSubState(new options.ControlsSubState());
			case 'Graphics':
				openSubState(new options.GraphicsSettingsSubState());
			case 'Visuals and UI':
				openSubState(new options.VisualsUISubState());
			case 'Gameplay':
				openSubState(new options.GameplaySettingsSubState());
			case 'Adjust Delay and Combo':
				LoadingState.loadAndSwitchState(new options.NoteOffsetState());
			case 'Export Savedata':
						_file = new FileReference();
						_file.addEventListener(Event.COMPLETE, onSaveComplete);
						_file.addEventListener(Event.CANCEL, onSaveCancel);
						_file.addEventListener(IOErrorEvent.IO_ERROR, onSaveError);
						_file.save(FlxG.save.data, "savedata_" + Date.now().getHours() + ":" + Date.now().getMinutes() + ',' + Date.now().getSeconds() + ".flixelsave");
		}
	}

	var selectorLeft:Alphabet;
	var selectorRight:Alphabet;

	function onSaveComplete(_):Void
		{
			_file.removeEventListener(Event.COMPLETE, onSaveComplete);
			_file.removeEventListener(Event.CANCEL, onSaveCancel);
			_file.removeEventListener(IOErrorEvent.IO_ERROR, onSaveError);
			_file = null;
			trace('complete');
		}
	
		/**
		 * Called when the save file dialog is cancelled.
		 */
		function onSaveCancel(_):Void
		{
			_file.removeEventListener(Event.COMPLETE, onSaveComplete);
			_file.removeEventListener(Event.CANCEL, onSaveCancel);
			_file.removeEventListener(IOErrorEvent.IO_ERROR, onSaveError);
			_file = null;
			trace('cancelled');
		}
	
		/**
		 * Called if there is an error while saving the gameplay recording.
		 */
		function onSaveError(_):Void
		{
			_file.removeEventListener(Event.COMPLETE, onSaveComplete);
			_file.removeEventListener(Event.CANCEL, onSaveCancel);
			_file.removeEventListener(IOErrorEvent.IO_ERROR, onSaveError);
			_file = null;
			trace('error');
		}

	override function create() {
		#if desktop
		DiscordClient.changePresence("Options Menu", null);
		#end

		var bg:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menuDesat'));
		bg.color = 0xFFea71fd;
		bg.setGraphicSize(Std.int(bg.width * 1.1));
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = ClientPrefs.globalAntialiasing;
		add(bg);

		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		for (i in 0...options.length)
		{
			var optionText:Alphabet = new Alphabet(0, 0, options[i], true, false);
			optionText.screenCenter();
			optionText.y += (100 * (i - (options.length / 2))) + 50;
			grpOptions.add(optionText);
		}

		selectorLeft = new Alphabet(0, 0, '>', true, false);
		add(selectorLeft);
		selectorRight = new Alphabet(0, 0, '<', true, false);
		add(selectorRight);

		changeSelection();
		ClientPrefs.saveSettings();

		versionShit = new FlxText(12, FlxG.height - 24, 0, "USE LEFT AND RIGHT FOR ADJUSTING VOLUME AND PRESS ENTER FOR VIDEO OPTIONS", 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);

		versionShit.visible = (curSelected == 6);

		super.create();
	}

	override function closeSubState() {
		super.closeSubState();
		ClientPrefs.saveSettings();
	}

	override function update(elapsed:Float) {
		versionShit.visible = (curSelected == 6);
		if (curSelected == 6)
		{
			var keys:Array<Bool> = [FlxG.keys.justPressed.LEFT, FlxG.keys.justPressed.RIGHT];
			if (keys[0]) FlxG.sound.volume -= 0.1;
			else if (keys[1]) FlxG.sound.volume += 0.1;
		}

		super.update(elapsed);

		if (controls.UI_UP_P) {
			changeSelection(-1);
		}
		if (controls.UI_DOWN_P) {
			changeSelection(1);
		}

		if (controls.BACK) {
			FlxG.sound.play(Paths.sound('cancelMenu'));
			if (!isFromPause) MusicBeatState.switchState(new MainMenuState());
			else LoadingState.loadAndSwitchState(new PlayState(), true);
		}

		if (controls.ACCEPT) {
			openSelectedSubstate(options[curSelected]);
		}
	}
	
	function changeSelection(change:Int = 0) {
		curSelected += change;
		if (curSelected < 0)
			curSelected = options.length - 1;
		if (curSelected >= options.length)
			curSelected = 0;

		var bullShit:Int = 0;

		for (item in grpOptions.members) {
			item.targetY = bullShit - curSelected;
			bullShit++;

			item.alpha = 0.6;
			if (item.targetY == 0) {
				item.alpha = 1;
				selectorLeft.x = item.x - 63;
				selectorLeft.y = item.y;
				selectorRight.x = item.x + item.width + 15;
				selectorRight.y = item.y;
			}
		}
		FlxG.sound.play(Paths.sound('scrollMenu'));
	}
}