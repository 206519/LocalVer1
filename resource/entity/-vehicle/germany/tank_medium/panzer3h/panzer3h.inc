
	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle.inc"  scale(1.1))
	{props "medium" "vision_lev04" "muzzle_50mm_57mm" "shield"}
	{extension "panzer3h.mdl"}
	(include "panzer3h.ext")
	{PatherId "panzer3j"}
	{targetclass "tank_medium"}
	{targetSelector "tank_medium"}
	{extender "enumerator"
		{digit_folder "ger"}
	}

	("crew_5_human")
	;("commander_visible")
	
	{sensor
		{visor "main"
			{vision "tank_range_TZF5"}
		}
		{Visor "driver"
			{vision "tank_driver_PzIII"}
		}
		{Visor "around"
			{vision "tank_cupola_Pz34"}
		}
	}

	{boarder
		{anm "left"
			{forward	{begin	"board_tank_right"} {end "seat_commander_hatch"}}
			{reverse 	{end	"emit_tank_2_hold"}}
		}
		{anm "right"
			{forward	{begin	"board_tank_left"} {end "seat_commander_hatch"}}
			{reverse 	{end	"emit_tank_2_hold"}}
		}
		{anm "armor"
			{forward	{begin	"board_MiddleArmor"} 	{end "pose_seat_armor_2"}}
			{reverse 	{end	"emit_tank_1"}}
		}
		{anm "armor1"
			{forward	{begin	"board_MiddleArmor"} {end "pose_seat_armor_1"}}
			{reverse 	{end	"emit_tank_1"}}
		}
		{anm "armor2"
			{forward	{begin	"board_MiddleArmor"} {end "seat_armor"}}
			{reverse 	{end	"emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor2))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor1))

	{extender "shield" {on}}
	
	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "50mm_kwk38" filling "bulletger_50_l42 apche" 1}
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.20)
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
		{##place "mgun"
			{type "commander"}
			{weapon "commander_vision"}
			{foresight "vision_rot"}
			{gunner "commander"}
			{basic}
			{ai_in_manual}
		}
	}

	{mass 21500}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.52) len(0.53))
		("mobility_spearhead"
			speed(40.0)			;Max speed when fully accelerated on road, km/h.
			reverse(5.5)		;Max speed in reverse on road, km/h.
			mass(21.5)			;Mass, in metric tons.
			power(272) 			;Engine Power
			contact(2.86)		;Track-ground contact length, in m
			wheelbase(2.51)		;Distance between center of left and right side roadwheels, in m
			pressure(1.0)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(4)	;Modifier for steering, (0,10]
			fuel(320) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(95) 			;Range in km, off-road.
			maxslope(58)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -10 20}
		{speed2 8}
	}
	{bone "turret"
		("turret_medium" power_traverse(0)) ;// manual
	}
	{##bone "commander_rot"
		{speed2 180}
	}
