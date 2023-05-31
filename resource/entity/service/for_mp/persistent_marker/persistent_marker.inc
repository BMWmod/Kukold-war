{actor
	{Simulation {Able 1}}
	{props "obstacle_ignore_height"}
	{lodclass "vehicle_small"}
	{mass 1}
	{Extension "persistent_marker.mdl"}
	{PatherID "airborne"}
	{collider "nothing"}
	{props "vehicle" "mp_target_marker"}
	{obstacleID "nothing"}
	{able "select" "minimap"}
	{Volume "sensor" {Thickness 1} {able clear {blast 1} {obstacle 1}}}
	{autooperatable 1}
       {placer
          {crew 0}
          {place "driver" remove}
       }
	{brain "vehicle"
		{state "vehicle"}
		{const "crush/min_danger_zone_time" 	0.1}
		{const "crush/min_danger_zone_length"	0.1}
	}
	{targetSelector "none"}
	{extender "inventory"
		{box
		}
	}
;	{Placer
;		{place "tester_link"
;			{entity "persistent_marker_tester"}
;			{Linkbone "Basis"}
;			{handlebone "Basis"}
;			{obstacle disable}
;		}
;	}
{Chassis "track"
	{Locomotion
	   {MaxSpeed		10000}
		{maxSpeedAtMaxTurn	10000}
		{StartTime		0.001}
		{BrakeTime		0.001}
		{StopTime		0.001}
		{TurnTime		0.001}
		{TurnStart		0.001}
		{TurnRadius		0.001}
		{TurnStop		0.001}
		{Gears			0.12 1}
		{RearGears		1}
		{GearSwitchDelay	0.001}	
	}
	{FuelBag
		{volume 10 }	; liters
		{remain 10 }
		{rate 0.001}
		{fuel "fuel"}
	}
	{speed
		{Slow	10000	}	; km/h
		{Normal	10000	}
		{Fast	10000	}
	}
}

	{NoGetShadows}
	{SpriteView
		{Sprite "pointer.ebm"
			{Visibility
				{Peak
					{min 0}
					{max 1}
				}
			}
			{scale
				{Linear
					{min 1.6}
					{max 0.4}
				}
			}
			{Timer
				{Mode play loop}
				{Duration 1}
			}
		}
		{ground }
		{layer grounddynamic}
		{Offset 0 0 1}
	}
	{SpriteView
		{Sprite "pointer_light.ebm"
			{Light
				{Peak
					{min 0}
					{max 0.8}
				}
			}
			{Highlight 0x00FF0000}
			{scale
				{Linear
					{min 1.6}
					{max 0.4}
				}
			}
			{Timer
				{Mode play loop}
				{Duration 1}
			}
		}
		{ground }
		{layer grounddynamic}
		{Offset 0 0 1}
	}
	
}

