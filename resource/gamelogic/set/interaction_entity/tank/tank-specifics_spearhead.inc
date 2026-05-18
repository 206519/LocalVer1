
{"t3476_43_ger tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
}
{"t3485_44_ger tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
}
{"panzer5a_sov tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG34")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"m4_75_late_ger tank"
	("m4_sherman_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
	}
	{on spawn
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Rubber/"}
	}
	{on "commander_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
}