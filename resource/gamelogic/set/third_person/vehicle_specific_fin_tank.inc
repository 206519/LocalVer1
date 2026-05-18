{"tank.ft17"
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -20 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 14 0 22}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.bt42"
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset 0 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 80 -13 25}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 50 }
		{distanceSet 0}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}