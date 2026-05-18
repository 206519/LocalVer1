	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc" scale(1.2))
	{props "is2_44" "heavy" "vision_lev05" "muzzle_122mm_128mm_sides" "diesel" "detect_tank_heavy"}
	{extension "is2_44.mdl"}
	(include "is2_44.ext")
	{targetclass "tank_heavy"}
	{targetSelector "tank_heavy"}
	{PatherId "is"}
	{collider "tank.heavy"}

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
			{vision "tank_cupolaP_IS"}
		}
		{visor "back"
			{vision "tank_back"}
			{bone "foresight6"}
		}
	}

	("crew_4_human")

	;("gunner_visible")
	("crew_human" place(charger) door(emit1) door2(emit2) visor(back))

	{boarder
		{anm "left"
			{forward {begin "board_Kv-85"} {end "seat_m7_mgunner"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "right"
			{forward {begin "board_Is-2"} {end "seat_m7_mgunner"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "armor"
			{forward {begin "board_HighArmor"} {end "seat_armor"}}
			{reverse {end "emit_tank_2"}}
		}
		{anm "armor1"
			{forward {begin "board_HighArmor"} {end "seat_armor"}}
			{reverse {end "emit_body"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3) animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit4) animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5) animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6) animation(armor1))

	{extender "shield" {on}}

	{##extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "bulletrus_122_l48 aphebc" 9}		;28 rounds
			{item "bulletrus_122_l48 he" 18}
			{item "ammo mgun_rus dt" 3276}			;55 drums|
			{item "satchel_charge_rus" 1}
		}
	}

	{##Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "122mm_d25" filling "bulletrus_122_l48 aphebc" 1}
			{gunner "gunner"}
			{charger "charger"}
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
		{place "mgun3"
			{type "rear"}
			{weapon "dt" filling "ammo mgun_rus dt" 63}
			{foresight "foresight6"}
			{gunner "charger"}
			{charger "charger"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
	}

	{mass 47500}
	{Chassis
		("tank_trace" fx("tracks_big") step(0.47) len(0.98))
		("mobility_spearhead"
			speed(37.7)			;Max speed when fully accelerated on road, km/h.
			reverse(17.96)		;Max speed in reverse on road, km/h.
			mass(47.5)			;Mass, in metric tons.
			power(520) 			;Engine Power
			contact(4.36)		;Track-ground contact length, in m
			wheelbase(2.41)		;Distance between center of left and right side roadwheels, in m
			pressure(0.83)		;Ground pressure on road, in kg/cm^2
			coeff_accel(6)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering rate, (0,10]
			coeff_steer_eff(5)	;Modifier for steering efficiency, (0,10]
			fuel(790) 			;Fuel capacity in Litres.
			type(diesel)		;Fuel type. (diesel OR fuel)
			range(160) 			;Range in km, off-road.
			maxslope(73)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -3 20}
		{speed2 4}
	}
	{bone "turret"
		("turret_heavy" power_traverse(12))
	}