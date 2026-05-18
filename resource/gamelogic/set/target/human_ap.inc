{selector
	{unit "human" "rocketlauncher"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class car}}
		{sort {in_range 85}}	;// the maximum range is 70m Panzershreck, 60m bazooka
	}
}

{selector
	{unit "human" "at_rifle"}	;// (at_rifle = at rifles and rifle grenades)

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class tank_light}}
		{sort {class tank_medium}}
		{sort {class tank_heavy}}
		{sort {class car}}
		{sort {in_range 120}}
	}
}

{selector
	{unit "human" "ap"}	;// (ap = molotov grenades, AT grenade launchers, Rocketlaunchers, AT rifles)

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class car}}
		{sort {in_range 30}}
	}
}