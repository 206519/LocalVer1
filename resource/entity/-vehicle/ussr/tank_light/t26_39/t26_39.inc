
	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "t26_39" "light" "vision_lev03" "muzzle_37mm_47mm" "detect_tank_light"}
	{extension "t26_39.mdl"}
	(include "t26_39.ext")
	{targetclass "tank_light"}
	{targetSelector "tank_light"}
	{patherId "t26"}
	{collider "tank.light"}
	("tank_light_tier1")
	{extender "enumerator"
		{digit_folder "ru1"}
	}

	("crew_3_human_2_extended")
	
	{sensor
		{visor "main"
			{vision "tank_range_TMFD"}
		}
		{Visor "driver"
			{vision "tank_driver_T26"}
		}
		{Visor "around"
			{vision "tank_slit_BT"}
		}
	}

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
	("seat_human" place(seat3) bone(seat3) door(emit5)  animation(armor1))
	("seat_human" place(seat4) bone(seat4) door(emit6)  animation(armor1))
	("seat_human" place(seat5) bone(seat5) door(emit7)  animation(armor1))
	("seat_human" place(seat6) bone(seat6) door(emit8)  animation(armor1))
	
	{##extender "inventory"
		{box
			{item "bulletrus_45 aphebc" 41}		;165 rounds
			{item "bulletrus_45 he2" 124}
			{item "ammo mgun_rus dt" 3024}		;49 drums
			{item "satchel_charge_rus" 1}
		}
	}

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

	{mass 10250}
	{Chassis
		("tank_trace" fx("tracks_sm2") step(0.2) len(0.37))
		("mobility_spearhead"
			speed(30)			;Max speed when fully accelerated on road, km/h.
			reverse(3.1)		;Max speed in reverse on road, km/h.
			mass(10.25)			;Mass, in metric tons.
			power(91) 			;Engine Power
			contact(2.97)		;Track-ground contact length, in m
			wheelbase(2.0)		;Distance between center of left and right side roadwheels, in m
			pressure(0.7)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(4)	;Modifier for steering, (0,10]
			fuel(182) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(80) 			;Range in km, off-road.
			maxslope(62)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -6 25}
		{speed2 5}
	}
	{bone "turret"
		("turret_light" power_traverse(6)) ;// manual
	}