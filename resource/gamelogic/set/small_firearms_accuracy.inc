;(include "small_firearms_reticles.inc")

;/*----------------------*/

	(define "velocity"				;// muzzle velocity in meters per second
		{speed (* 0.70 %mps)}
	)
	(define "fire rate"				;// rate of fire in rounds per minute 
		{recoveryTime (/ 60 (* %rpm 1.07))}
	)
	(define "reload time"			;// reload time for magazine or shell
		{rechargeTime %seconds}
	)
	(define "human health"
		{healthDamage (* 1.0 %damage)}
	)
	(define "armor health"
		{minimumDamageModifier (* 1.0 %damage)}
	)

;/*----------------------*/

	(define "accuracy_pistol"
		("pistol_range"  r1(0.9) r2(1.72) globalaccuracy(1.00))
	)

;/*----------------------*/

	(define "accuracy_smg"
		("smg_range"  r1(0.9) r2(1.72) globalaccuracy(0.9))
	)

;/*----------------------*/


	(define "accuracy_rifle"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_rifle_sniper"
		("sniper_range" r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_rifle_auto"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_rifle_auto_sniper"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_battle_rifle"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_assault_rifle"
		("rifle_range"	r0(0.5) r1(0.97) r2(1.29) r3(1.58) globalaccuracy(0.95))
	)
	(define "accuracy_shotgun"
		("rifle_range"	r0(0.5) r1(1.4) r2(0.9) r3(1.25) globalaccuracy(0.9))
	)
	(define "accuracy_rifle_at"
		("hmg_range"	r1(0.7) r2(1.1) r3(1.85) globalaccuracy(0.9))
	)

;/*----------------------*/

	(define "accuracy_mg"
		("mg_range" r1(0.7) r2(1.1) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_mgn"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_mgstand"
		("rifle_range"	r0(0.5) r1(0.86) r2(1.29) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_hmg"
		("hmg_range" r1(0.7) r2(1.1) r3(1.58) globalaccuracy(0.9))
	)
	(define "accuracy_hmg_tank"
		("hmg_range" r1(0.7) r2(1.1) r3(1.58) globalaccuracy(0.80))
	)

	(define "accuracy_mg_plane"
		("plane_range" r1(2.0) globalaccuracy(1.00))
	)

;/*----------------------*/
	;// new ammunition specific defines
;/*----------------------*/
	;// radii go to 600m equivalent

;// new SMG
	(define "accuracy_Tokarev"
		("Nsmg_range"  r0(0.5) r1(1.0) r2(1.73) globalaccuracy(0.9))
	)
	(define "accuracy_Para"
		("Nsmg_range"  r0(0.5) r1(1.0) r2(1.85) globalaccuracy(0.9))
	)
	(define "accuracy_45acp"
		("Nsmg_range"  r0(0.5) r1(1.2) r2(2.10) globalaccuracy(0.9))
	)
	;// for now, Tokarev trades 30m for dispersion over that
	
;// new rifle rounds



;/*=========================Curves======================*/


 	(define "pistol_range"
		{spreading
			{radiusTable {0 0.02} {60 (* %globalaccuracy %r1)} {110 (* %globalaccuracy %r2)}}
		}
	)
	(define "smg_range"
		{spreading
			{radiusTable {0 0.02} {60 (* %globalaccuracy %r1)} {110 (* %globalaccuracy %r2)}}
		}
	)
	
	(define "Nsmg_range"
		{spreading
			{radiusTable {0 0.02} {30 %r0} {60 (* %globalaccuracy %r1)} {110 (* %globalaccuracy %r2)}}
		}
	)
	
 	(define "rifle_range"
		{spreading
			{radiusTable {0 0.05} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {130 (* %globalaccuracy %r3)} {150 (* 1.1 (* %globalaccuracy %r3))} {180 5}}
		}
	)
	(define "sniper_range"
		{spreading
			{radiusTable {0 0.02} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {130 (* %globalaccuracy %r3)} {150 (* 1.1 (* %globalaccuracy %r3))} {180 5}}
		}
	)
	(define "mg_range"
		{spreading
			{radiusTable {0 0.02} {40 (* %globalaccuracy %r1)} {80 (* %globalaccuracy %r2)} {130 (* %globalaccuracy %r3)} {150 (* 1.1 (* %globalaccuracy %r3))} {180 5}}
		}
	)
	(define "hmg_range"
		{spreading
			{radiusTable {0 0.02} {45 (* %globalaccuracy %r1)} {90 (* %globalaccuracy %r2)} {150 (* %globalaccuracy %r3)} {150 (* 1.1 (* %globalaccuracy %r3))} {200 5}}
		}
	)
	(define "plane_range"
		{spreading
			{radiusTable {0 1} {100 (* 3 (* %globalaccuracy %r1))} {200 (* 5 (* %globalaccuracy %r1))} {300 (* 8 (* %globalaccuracy %r1))} {400 (* 10 (* %globalaccuracy %r1))}}
		}
	)


;/*====================Slope Multiplier==================*/


	(define "ap_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		0.96		0.0637	}
			{5		0.96297		0.0637	}
			{10		0.98297		0.0637	}
			{15		1.00066		0.0969	}
			{20		1.0361		0.13561	}
			{25		1.1116		0.16164	}
			{30		1.2195		0.19702	}
			{35		1.3771		0.22546	}
			{40		1.6263		0.26313	}
			{45		2.0033		0.34717	}
			{50		2.6447		0.57353	}
			{55		3.231		0.69075	}
			{60		4.0708		0.81826	}
			{65		6.2655		0.9192	}
			{70		8.6492		1.00539	}
			{75		13.7512		1.074	}
			{80		21.8713		1.17973	}
			{85		34.4862		1.28631	}
			{90		99.0000		0.00000	}
		}
	)
	(define "ap_7_62_slope_multiplier"	;	7.62mm - 8mm bullets, MG, rifles
		{overmatchCalibre
			{0		1			0.00	}
			{10		1.037		0.01	}
			{20		1.10		0.02	}
			{30		1.435		0.15	}
			{40		2.19		0.10	}
			{45		2.79		0.12	}
			{50		3.86		0.12	}
			{60		3.19		0.15	}	;// where???
			{65		4.324		0.192	}
			{70		6.196		0.193	}
			{75		9.952		0.21	}
			{80		22.9		0.17	}
			{85		62.7		0.242	}
			{90		99.0000		0.00000	}
		}
	)
	(define "ap_12_slope_multiplier"	;	12.7mm bullets, HMG
		{overmatchCalibre
			{0		1			0.00	}
			{20		1.10		0.015	}	;// 1 inch at 2907 fps 
			{30		1.349		0.015	}
			{40		1.704		0.011	}
			{45		2.071		0.015	}
			{50		2.442		0.014	}
			{60		3.222		0.0185	}
			{65		4.324		0.192	}
			{70		6.196		0.193	}
			{75		9.952		0.21	}
			{80		19.617		0.245	}
			{85		63.3		0.36	}
			{90		99.0000		0.00000	}
		}
	)
	
	(define "at_rifle_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		1.0			0.0637	}
			{10		1.00066		0.0969	}
			{15		1.0721		0.13561	}
			{20		1.1116		0.16164	}
			{25		1.2195		0.19702	}
			{30		1.3771		0.22546	}
			{40		1.7263		0.26313	}
			{65		5.5033		0.34717	}
			{70		8.6447		0.57353	}
			{80		12.6492		1.00539	}
			{85		21.8713		1.17973	}
			{90		99.0000		0.00000	}
		}
	)
	(define "bs41slopemulti" ;use for 14.5 caliber
	{overmatchCalibre
		{0		1.0			0.00	}
		{10		1.027		0.002	}
		{20		1.13		0.003	}
		{30		1.31		0.01	}
		{45		1.93		0.025	}
		{50		2.32		0.014	}
		{55		2.88		0.037	}
		{60		3.73		0.054	}
		{65		5.14		0.10	}
		{70		7.68		0.18	}
		{75		13.04		0.261	}
		{80		27.84		0.262	}
		{85		99.0000		0.263	}
		{90		99.0000		0.0000	}
	}
)
	(define "b32slopemulti" ;	used for this type of soviet AP bullet
		{overmatchCalibre
			{0        1.0            0.00    }
			{10        1.027        0.002    }
			{20        1.117        0.003    }
			{30        1.294        0.01    }
			{45        1.802        0.025    }
			{50        1.875        0.014    }
			{55        2.115        0.037    }
			{60        3.182        0.054    }
			{65        4.141        0.10    }
			{70        5.872        0.18    }
			{75        9.9519        0.261    }
			{80        19.6137        0.262    }
			{85        63.313        0.263    }
			{90        99.0000        0.0000    }
    }
)
	(define "apcr_slope_multiplier"	;use for APCR & HVAP Projectiles 76mm Caliber or below
		{overmatchFixed
			{0  1.00	}
			{10	1.01	}
			{10	1.03	}
			{15	1.07	}
			{20	1.13	}
			{25	1.23	}
			{30	1.36	}
			{35	1.59	}
			{40	1.90	}
			{45	2.28	}
			{50	2.78	}
			{55	3.41	}
			{60	4.23	}
			{65	5.29	}
			{70	6.69	}
			{75	8.52	}
			{80	10.93	}
			{85	14.15	}
			{90 99		}
		}
	)

	(define "sway_pistol"
		{swayparams
			{bounds -0.25 0.2 -0.35 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.1}						; sway speed coef
		}
	)

	(define "sway_smg"
		{swayparams
			{bounds -0.25 0.2 -0.35 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.1}						; sway speed coef
		}
	)

	(define "sway_mg"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.3}						; sway speed coef
		}
	)

	(define "sway_rifle"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.2}						; sway speed coef
		}
	)

	(define "sway_sniper"
		{swayparams
			{bounds -0.35 0.25 -0.45 0.35}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.2}						; sway speed coef
		}
	)

	(define "recoil_shotgun"
		{recoil
			{shoot {2.50 0.75} {1 0.75}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.00 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_at"
		{recoil
			{shoot {2.50 0.75} {1 0.75}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.10 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_pistol"
		{recoil
			{shoot {0.40 0.15} {0 0.45}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.005}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_stg"
		{recoil
			{shoot {0.45 0.20} {0 0.50}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.005}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_fg42"
		{recoil
			{shoot {0.55 0.20} {0.10 0.50}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.5 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_semi"
		{recoil
			{shoot {0.75 0.25} {0 0.60}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.5 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)
	
	(define "recoil_svt"
		{recoil
			{shoot {0.25 0.25} {0 0.60}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.2 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_rifle_bolt"
		{recoil
			{shoot {0.90 0.25} {0 0.60}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.5 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_sniper_semi"
		{recoil
			{shoot {0.75 0.25} {0 0.65}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.50 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_sniper_bolt"
		{recoil
			{shoot {1.50 0.25} {0 0.75}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.00 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.20}					; delay before restore, sec
		}
	)

	(define "recoil_smg_low"
		{recoil
			{shoot {0.255 0.10} {0 0.2}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.15 0.005}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_smg_medium"
		{recoil
			{shoot {0.325 0.15} {0 0.25}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.15 0.005}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_mg_medium"
		{recoil
			{shoot {0.45 0.25} {0 0.515}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.005}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_hmg_medium"
		{recoil
			{shoot {0.50 0.25} {0 0.55}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.005	}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)