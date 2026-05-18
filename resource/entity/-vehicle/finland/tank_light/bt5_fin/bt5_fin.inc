
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle_elongated.inc" scale(1.1))
	{props "bt5_fin" "light" "vision_lev03" "muzzle_37mm_47mm" "detect_tank_light" "bt5"}
	{extension "bt5_fin.mdl"}
	(include "bt5.ext")
	{targetclass "tank_light"}
	{targetSelector "tank_light"}
	{patherId "bt5"}
	{collider "tank.light"}

	("crew_3_human_2_extended")

	{boarder
		{anm "driver"
			{forward {begin "board_t26_driver"} {end "pose_t26_driver"} {base "open_driver"}}
			{reverse {end "board_t26_driver" -1} {base "open_driver" -1}}
		}
		{anm "left"
			{forward {begin "board_kv"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "armor"
			{forward {begin "board_MiddleArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_1"}}
		}
		{anm "armor1"
			{forward {begin "board_MiddleArmor"} {end "pose_seat_armor_2"}}
			{reverse {end "emit_body"}}
		}
	}

	{extender "shield" {on}}

	("seat_human" place(seat1) bone(seat01) door(emit4) animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit5) animation(armor1))
	("seat_human" place(seat3) bone(seat03) door(emit6) animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit7) animation(armor))

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
		{place "mgun"
			{type "coaxial"}
			{weapon "dt" filling "ammo mgun_rus dt" 63}
			{foresight "foresight3"}
			{gunner "gunner"}
			{charger "commander"}
			("abm_mgun")
			{basic}
		}
	}

	{mass 11900}
	{Chassis
		("tank_trace" fx("tracks_sm") step(0.3) len(1.15))
		("mobility_spearhead"
			speed(54.76)		;Max speed when fully accelerated on road, km/h.
			reverse(10.47)		;Max speed in reverse on road, km/h.
			mass(11.9)			;Mass, in metric tons.
			power(400) 			;Engine Power
			contact(3.6)		;Track-ground contact length, in m
			wheelbase(1.96)		;Distance between center of left and right side roadwheels, in m
			pressure(0.65)		;Ground pressure on road, in kg/cm^2
			coeff_accel(8)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(6)	;Modifier for steering, (0,10]
			coeff_steer_eff(5)	;Modifier for steering, (0,10]
			fuel(400) 			;Fuel capacity in Litres.
			type(diesel)		;Fuel type. (diesel OR fuel)
			range(120) 			;Range in km, off-road.
			maxslope(90)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -8 25}
		{speed2 8}
	}
	{bone "turret"
		("turret_light" power_traverse(0)) ;// manual
	}
