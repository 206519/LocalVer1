
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "t26_33_fin" "light" "vision_lev03" "muzzle_37mm_47mm" "detect_tank_light" "t26_33"}
	{extension "t26_33_fin.mdl"}
	(include "t26_33.ext")
	{targetclass "tank_light"}
	{targetSelector "tank_light"}
	{patherId "t26"}
	{collider "tank.light"}

	{extender "enumerator"
		{digit_folder "ru1"}
	}

	("crew_3_human_2_extended")

	{boarder
		{anm "left"
			{forward {begin "board_tank_left"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "driver"
			{forward {begin "board_t26_driver"} {end "pose_t26_driver"} {base "open_driver"}}
			{reverse {end "board_t26_driver" -1} {base "open_driver" -1}}
		}
		{anm "armor1"
			{forward {begin "board_LowArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat1) door(emit3)  animation(armor1))
	("seat_human" place(seat2) bone(seat2) door(emit4)  animation(armor1))

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{gunner "gunner"}
			{charger "commander"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.20)
			)
		}
		{place "mgun2"
			{type "coaxial"}
			{weapon "dt" filling "ammo mgun_rus dt" 63}
			{foresight "foresight5"}
			{gunner "gunner"}
			{charger "commander"}
			("abm_mgun")
			{basic}
		}
	}

	{mass 9400}
	{Chassis
		("tank_trace" fx("tracks_sm2") step(0.2) len(0.37))
		("mobility_spearhead"
			speed(30)			;Max speed when fully accelerated on road, km/h.
			reverse(3.1)		;Max speed in reverse on road, km/h.
			mass(9.4)			;Mass, in metric tons.
			power(91) 			;Engine Power
			contact(2.97)		;Track-ground contact length, in m
			wheelbase(2.0)		;Distance between center of left and right side roadwheels, in m
			pressure(0.68)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(4)	;Modifier for steering, (0,10]
			fuel(292) 			;Fuel capacity in Litres.
			type(diesel)		;Fuel type. (diesel OR fuel)
			range(140) 			;Range in km, off-road.
			maxslope(58)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -10 40}
		{speed2 8}
	}
	{bone "turret"
		("turret_light" power_traverse(0)) ;// manual
	}
