package;

/*
 * Gravity for HaxeFlixel by Eventy
 * My balls cracked after this D:
*/

class Gravity {
    var pot:Float = 1;
    var remainedPot:Float = 1;
    function jump(originalX:Float, obj:FlxSprite)
    {
        obj.y = obj.y + (1 * pot - (remainedPot * 0.3442);
        remainedPot -= 0.52;
    }
    function actualize(originalX:Float, obj:FlxSprite)
    {
        if (remainedPot < 0)
        {
            obj.y = obj.y - (1 * pot - (remainedPot * 0.3442);
        }
    }
}