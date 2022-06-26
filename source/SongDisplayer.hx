package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import Song.SwagSong;

class SongDisplayer extends FlxSprite
{
    public function new(leSong:SwagSong)
    {
      loadGraphic(Paths.image('songsDisplay/${leSong.song}'));
      screenCenter(X);
      y == -1000;
    }
  
    public function start(baro)
    {
      FlxTween.tween(this, {y: baro.y - 50}, {ease: FlxEase.quadIn, onComplete: function (tdr) {
        new flixel.util.FlxTimer().start(4, function (s) {
          this.visible = false;
        }
      }});
    }
}
       
       
