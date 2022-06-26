package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxSound;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 200;

	var stepSound:FlxSound;

	public var takingInputs:Bool = true;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		makeGraphic(10,10,flixel.util.FlxColor.BLUE);

		drag.x = drag.y = 1600;
		setSize(8, 8);
		offset.set(4, 4);

		//stepSound = FlxG.sound.load(AssetPaths.step__wav);
	}

	override function update(elapsed:Float)
	{
		updateMovement();
		super.update(elapsed);
	}

	function updateMovement()
	{
		var up:Bool = false;
		var down:Bool = false;
		var left:Bool = false;
		var right:Bool = false;

		#if FLX_KEYBOARD
		up = FlxG.keys.anyPressed([UP, W]);
		down = FlxG.keys.anyPressed([DOWN, S]);
		left = FlxG.keys.anyPressed([LEFT, A]);
		right = FlxG.keys.anyPressed([RIGHT, D]);
		#end

		#if mobile
		var virtualPad = PlayState.virtualPad;
		up = up || virtualPad.buttonUp.pressed;
		down = down || virtualPad.buttonDown.pressed;
		left = left || virtualPad.buttonLeft.pressed;
		right = right || virtualPad.buttonRight.pressed;
		#end

		if (up && down)
			up = down = false;
		if (left && right)
			left = right = false;

		if (up || down || left || right && takingInputs)
		{
			var newAngle:Float = 0;
			if (up)
			{
				newAngle = -90;
				if (left)
					newAngle -= 45;
				else if (right)
					newAngle += 45;
				facing = UP;
			}
			else if (down)
			{
				newAngle = 90;
				if (left)
					newAngle += 45;
				else if (right)
					newAngle -= 45;
				facing = DOWN;
			}
			else if (left)
			{
				newAngle = 180;
				facing = LEFT;
			}
			else if (right)
			{
				newAngle = 0;
				facing = RIGHT;
			}

			// determine our velocity based on angle and speed
			velocity.set(SPEED, 0);
			velocity.rotate(FlxPoint.weak(0, 0), newAngle);

			// if the player is moving (velocity is not 0 for either axis), we need to change the animation to match their facing
			if ((velocity.x != 0 || velocity.y != 0) && touching == NONE)
			{
				//stepSound.play();
				/*

				switch (facing)
				{
					case LEFT, RIGHT:
						animation.play("lr");
					case UP:
						animation.play("u");
					case DOWN:
						animation.play("d");
					case _:
				}
				*/
			}
		}
	}
}
