package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.FlxState;
import flixel.util.FlxTimer;
/*
 * if you dont want spoilers dont look into lines 57< part of the code, it contains most spoilers for the ARG
*/
class MenuElevator extends MusicBeatState
{
    var plan:Int = 0;
    var alp:Alphabet;
    var thething:FlxSprite;
    var to:Array<Dynamic> = [];
    var opt:Array<MusicBeatState> = [new MainMenuState()];
    var selected:Bool = false;
    var dial:FlxSprite;
    var dials:Int = 3;
    var curdial:Int = 0;
    var complaintcode:Int = 0; // ARG
    var specialDial:Bool = false;
    var nextEnd:Bool = false;
    override function create()
    {
        add(new FlxSprite().makeGraphic(FlxG.width, FlxG.height, flixel.util.FlxColor.fromString('#575656')).screenCenter());

        thething = new FlxSprite(0,0).makeGraphic(FlxG.width, 150, flixel.util.FlxColor.BLACK);
        thething.screenCenter();
        thething.alpha = 0.5;
        add(thething);

        alp = new Alphabet(0,0,'< $plan >',true);
        alp.screenCenter();
        add(alp);

        dial = new FlxSprite(0,-1000).loadGraphic(Paths.image('sealPNG/0'));
        dial.screenCenter(X);
        add(dial);
        //dial.visible = false;
    }
    override function update(elapsed:Float)
    {
        super.update(elapsed);
        var keys:Array<Bool> = [FlxG.keys.justPressed.LEFT, FlxG.keys.justPressed.RIGHT, FlxG.keys.justPressed.ENTER, FlxG.keys.justPressed.UP, FlxG.keys.justPressed.DOWN];
        if (keys[0] && !selected) plan -= 1;
        else if (keys[1] && !selected) plan += 1;

        if (keys[3]) complaintcode += 1;
        else if (keys[4]) complaintcode -= 1;

        remove(alp);
        alp = new Alphabet(0,0,'< $plan >',true);
        alp.screenCenter();
        add(alp);

        if (keys[2] && !selected)
        {
            switch (plan)
            {
                case 0:
                    FlxG.switchState(new MainMenuState());
                case 1:
                    Sys.command('open file://${Sys.getCwd()}assets/images/bonus/damememan.png');
                case 2:
                    Sys.command('open file://${Sys.getCwd()}assets/images/bonus/sens.jpg');
                case 3:
                    //FlxG.switchState(new WebCam());
                case 44:
                    if (complaintcode == 4)
                    {
                        Sys.command('open file://${Sys.getCwd()}assets/images/fakecomplaint.png');
                    }
                    else
                    {
                        doDef(true);
                    }
                default:
                    doDef(false);
            }
        }

        if (keys[2] && selected)
        {
            curdial += 1;
            if (curdial != 4 && !nextEnd)
            {
                remove(dial);
                dial.loadGraphic(Paths.image('sealPNG/$curdial' + (specialDial && curdial == 1 ? '-special' : '')));
                add(dial);
                if (curdial == 1 && specialDial) nextEnd = true;
            }
            else
            {
                specialDial = false;
                nextEnd = false;
                curdial = 0;
                remove(dial);
                dial = new FlxSprite(0,0).loadGraphic(Paths.image('sealPNG/0'));
                dial.screenCenter(X);
                add(dial);
                FlxTween.tween(dial, {y: -1000}, 1, {ease: FlxEase.quadInOut});
                //dial.visible = false;
                selected = false;
                //FlxTween.tween(thething, {scale.y: thething.height - 100}, {ease: FlxEase.quadInOut});
            }
        }
    }
    function doDef(isSpecial:Bool)
    {
        specialDial == isSpecial;
        FlxG.camera.flash(FlxColor.WHITE, 0.1);
                    FlxG.camera.shake(0.03, 0.1);
                    new FlxTimer().start(1, function (lele) {
                        //FlxTween.tween(thething, {scale.y: thething.height + 100}, {ease: FlxEase.quadInOut});
                        FlxTween.tween(dial, {y: 0}, 1, {ease: FlxEase.quadInOut});
                        selected = true;
                    });
    }
}