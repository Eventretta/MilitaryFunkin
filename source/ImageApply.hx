package;
import flixel.ui.FlxButton;
import flixel.addons.api.FlxGameJolt;
import flixel.addons.ui.FlxUI9SliceSprite;
import flixel.addons.ui.FlxUI;
import flixel.addons.ui.FlxUICheckBox;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.ui.FlxUINumericStepper;
import flixel.addons.ui.FlxUITabMenu;
import flixel.addons.ui.FlxUITooltip.FlxUITooltipStyle;
import flixel.FlxG;

class ImageApply extends MusicBeatState 
{
    var textI:FlxUIInputText;
    var apply:FlxButton;
    var slash:FlxButton;
    override function create()
    {
        super.create();
        textI = new FlxUIInputText(0,0,400);
        textI.screenCenter();
        add(textI);

        apply = new FlxButton(textI.x, textI.y + 200,'Apply Image from Path',function () {
            applyImage(sys.io.File.getContent(textI.text));
        });
        apply.screenCenter(X);
        add(apply);

        slash = new FlxButton(textI.x, textI.y + 300,'Add Slash',function () {
            textI.text += '/';
        });

        add(slash);

        FlxG.mouse.visible = true;
    }

    function applyImage(content)
    {
        FlxG.save.data = content;
        lime.app.Application.current.window.alert('Image was applied.','Done');
        Sys.exit(0);
    }
}