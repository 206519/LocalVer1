
	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc" scale(1.2))
	{props "bt7" "light" "turret_rotator" "vision_lev03" "muzzle_37mm_47mm" "diesel" "detect_tank_light"}
	{extension "bt7.mdl"}
	(include "bt7.ext")
	{targetclass "tank_light"}
	{targetSelector "tank_light"}
	{patherId "bt7"}
	{collider "tank.light"}

	("crew_3_human_2_extended")

	{sensor
		{visor "main"
			{vision "tank_range_TMFD"}
		}
		{Visor "driver"
			{vision "tank_driver_BT7"}
		}
		{Visor "around"
			{vision "tank_slit_BT"}
		}
	}

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
			{weapon "45mm_20k" filling "bulletrus_45 aphebc" 1}
			{gunner "gunner"}
			{charger "commander"}
			("abm_dymamic_td"
				zeroing(5.0)
				dispersion(0.20)
			)
		}
		{place "mgun"
			{type "coaxial"}
			{weapon "dt" filling "ammo mgun_rus dt api" 63}
			{foresight "foresight3"}
			{gunner "gunner"}
			{charger "commander"}
			("abm_mgun")
			{basic}
		}
	}

	{mass 13800}
	{Chassis
		("tank_trace" fx("tracks_sm") step(0.3) len(1.15))
		("mobility_spearhead"
			speed(56.64)		;Max speed when fully accelerated on road, km/h.
			reverse(11.14)		;Max speed in reverse on road, km/h.
			mass(13.8)			;Mass, in metric tons.
			power(400) 			;Engine Power - gross power 
			contact(3.6)		;Track-ground contact length, in m
			wheelbase(1.96)		;Distance between center of left and right side roadwheels, in m
			pressure(0.76)		;Ground pressure on road, in kg/cm^2
			coeff_accel(8)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(5)	;Modifier for steering, (0,10]
			fuel(650) 			;Fuel capacity in Litres.	
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(280) 			;Range in km, off-road.
			maxslope(90)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -6 25}
		{speed2 5}
	}
	{bone "turret"
		("turret_light" power_traverse(6)) ;// manual
	}