	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc"  scale(1.2))
	{props "t3485_44" "medium" "vision_lev04" "muzzle_85mm_93mm" "diesel"}
	{extension "t3485_44.mdl"}
	(include "t3485_44.ext")
	{targetclass "tank_medium"}
	{targetSelector "tank_medium"}
	{PatherId "t34-85"}

	{extender "enumerator"
		{digit_folder "ru1"}
	}
	{sensor
		{visor "main"
			{vision "tank_range_TSH17"}
		}
		{Visor "driver"
			{vision "tank_driver_T34"}
		}
		{Visor "around"
			{vision "tank_cupola_T34"}
		}
	}

	("crew_5_human_extended")
	;("commander_visible")

	{boarder
		{anm "driver"
			{forward {begin "board_t34_driver"} {end "seat_gunner_stand"} {base "open_driver"}}
			{reverse {end "emit_t34_hold"} {base "close_driver"}}
		}
		{anm "left"
			{forward {begin "board_Is-2"} {end "seat_commander_hatch"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "right"
			{forward {begin "board_Is-2"} {end "seat_commander_hatch"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "armor"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_2"}}
		}
		{anm "armor1"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_body"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor1))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor1))

	{extender "shield" {on}}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "85mm_zis53" filling "bulletrus_85 aphebc" 1}
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.25)
			)
		}
		{place "mgun2"
			{type "coaxial"}
			{weapon "dt" filling "ammo mgun_rus dt" 63}
			{foresight "foresight5"}
			{gunner "gunner"}
			{charger "charger"}
			("abm_mgun")
			{basic}
		}
		{place "mgun1"
			{type "hull"}
			{weapon "dt" filling "ammo mgun_rus dt" 63}
			{foresight "foresight4"}
			{gunner "gunner3"}
			{charger "gunner3"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
		{##place "mgun"
			{type "commander"}
			{weapon "commander_vision"}
			{foresight "vision_rot"}
			{gunner "commander"}
			{basic}
			{ai_in_manual}
		}
	}

	{mass 32000}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.52) len(0.7))
		("mobility_spearhead"
			speed(55)			;Max speed when fully accelerated on road, km/h.
			reverse(8.12)		;Max speed in reverse on road, km/h.
			mass(32.0)			;Mass, in metric tons.
			power(500) 			;Engine Power
			contact(3.85)		;Track-ground contact length, in m
			wheelbase(2.45)		;Distance between center of left and right side roadwheels, in m
			pressure(0.87)		;Ground pressure on road, in kg/cm^2
			coeff_accel(6)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(3)	;Modifier for steering, (0,10]
			fuel(545)	 		;Fuel capacity in Litres.
			type(diesel)		;Fuel type. (diesel OR fuel)
			range(200) 			;Range in km, off-road.
			maxslope(70)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -5 20}
		{speed2 5}
	}
	{bone "turret" 
		("turret_medium" power_traverse(21))
	}
	{##bone "commander_rot"
		{speed2 180}
	}