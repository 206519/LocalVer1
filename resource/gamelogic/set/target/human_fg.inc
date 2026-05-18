{selector
	{unit "human" "fg"} ;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{ignore {class airborne}}
		{sort {class tank_heavy} {in_range 25}}
		{sort {class tank_medium} {in_range 25}}
		{sort {class tank_light} {in_range 25}}
		{sort {class armoredcar} {in_range 25}}
		{sort {class armoredcar_l} {in_range 25}}
		{sort {class howitzer} {in_range 25}}
		{sort {class tank_bullet} {in_range 25}}
		{sort {class cannon_big} {in_range 25}}
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort distance}
	}
	
	{group
		{sort {class human}}
		{sort {attacking}}
		{sort distance}
	}
}