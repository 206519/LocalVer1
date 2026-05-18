	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc" scale(1.2))
	{props "panzer5a" "medium" "vision_lev04" "muzzle_85mm_93mm_sides" "shield" "smoke" "nvw" "detect_tank_heavy"}
	{extension "panzer5a.mdl"}
	(include "panzer5a.ext")
	{PatherId "panther"}
	{targetclass "tank_heavy"}
	{targetSelector "tank_heavy"}

	{##extender "enumerator"
		{digit_folder "ger"}
	}

	{sensor
		{visor "main"
			{vision "tank_range_TZF12"}
		}
		{visor "around"
			{vision "tank_cupola_DPanther"}
		}
		{visor "driver"
			{vision "tank_driver_PzV"}
		}
	}

	("crew_5_human_extended")
	("commander_visible")

	{boarder
		{anm "driver"
			{forward {begin "board_pz4_driver"} {end "pose_mgun_pz6"} {base "open_driver"}}
			{reverse {end "board_pz4_driver" -1} {base "open_driver" -1}}
		}
		{anm "left"
			{forward {begin "board_cromwell"} {end "seat_commander_hatch"}}
			{reverse {end "board_cromwell" -1}}
		}
		{anm "right"
			{forward {begin "board_cromwell"} {end "seat_commander_hatch"}}
			{reverse {end "board_cromwell" -1}}
		}
		{anm "armor"
			{forward {begin "board_HighArmor"} 	{end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor))

	{extender "shield" {on}}

	{extender "smokescreen"
		{cooldown 5}
		{itemTags "grenade nbks"}
	}

	{##extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "bulletger_75_l70 apcbche" 38} 	; 79 rounds
			{item "bulletger_75_l70 he" 40}
			;{item "bulletger_75_l70 apcr" 2}
			{item "ammo mgun_ger belt" 4800}		; 34 belts (150 rounds each)
			;{item "mg34_drum" filled {user "mgun"}}
			{item "geballteladung_3kg" 1}
			{item "nbks grenade" 6}
		}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "75mm_kwk42" filling "bulletger_75_l70 apcbche" 1}
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.25)
			)
		}
		{place "mgun2"
			{type "coaxial"}
			{weapon "mg34_tank" filled}
			{foresight "foresight5"}
			{gunner "gunner"}
			{charger "charger"}
			("abm_mgun")
			{basic}
		}
		{place "mgun1"
			{type "hull"}
			{weapon "mg34_tank" filled}
			{foresight "foresight4"}
			{gunner "gunner3"}
			{charger "gunner3"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
		{place "mgun"
			{type "commander"}
			{weapon "commander_vision"}
			{foresight "vision_rot"}
			{gunner "commander"}
			{basic}
			{ai_in_manual}
		}
	}

	{mass 45500}
	{Chassis
		("tank_trace" fx("tracks_big") step(0.47) len(0.94))
		("mobility_spearhead"
			speed(45.8)			;Max speed when fully accelerated on road, km/h.
			reverse(3.3)		;Max speed in reverse on road, km/h.
			mass(45.5)			;Mass, in metric tons.
			power(600) 			;Engine Power (governed to 2500 rpm starting November 1943)
			contact(3.92)		;Track-ground contact length, in m
			wheelbase(2.61)		;Distance between center of left and right side roadwheels, in m
			pressure(0.88)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(6)	;Modifier for steering rate, (0,10]
			coeff_steer_eff(5)	;Modifier for steering efficiency, (0,10]
			fuel(730) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(100) 			;Range in km, off-road.
			maxslope(70)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -8 18}
		{speed2 4}
	}
	{bone "turret"
		("turret_medium" power_traverse(20))
	}
	{##bone "commander_rot"
		{speed2 180}
	}