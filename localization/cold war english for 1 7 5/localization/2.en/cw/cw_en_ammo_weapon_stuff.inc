;Revised by maaa - DTTGOC
;LocalGen2
;Extra data placeholder
;Extra data placeholder
;rev 04.07.2022

;Colors guide:
	;Record category																														;symbol		;Color			;Color code
	;Technical records(Assistor, Detector, Entity, Exp, Impactor, Initiator, Injector, Jumper, Loading Mediator, LOD, Service, Submunition)	;t			;Light Violet	;<c(CF9FFF)>
	
;Ammunition classifications for direct control
	{"ammo"
			;item name													;ammunition classification acronym				;ammunition classification full name
			{"fg"														"<c(FFAF00)>HE</c>"}							;High Explosive
			{"korr"														"<c(FFAF00)>Laser-guided CLGP</c>"}				;Laser-guided Cannon-launched Guided Projectiles
			{"satt"														"<c(FFAF00)>Satellite-guided CLGP</c>"}			;Satellite-guided Cannon-launched Guided Projectiles
			{"cl"														"<c(FFAF00)>Cluster</c>"}						;Cluster
			{"bzt"														"<c(4d6ff7)>API</c>"}							;Armor-piercing	Incendiary-Tracer
			{"ofzt"														"<c(FFAF00)>HEI-T</c>"}							;High Explosive	Incendiary-Tracer
			{"ap"														"<c(4d6ff7)>AP</c>"}							;Armor-piercing
			{"apcr"														"<c(4d6ff7)>APFSDS</c>"}						;Armor-piercing Fin-stabilized Discarding Sabot
			{"apcr_h"													"<c(4d6ff7)>APFSDS</c>"}						;Armor-piercing Fin-stabilized Discarding Sabot
			{"atgm"														"<c(FFAF00)>ATGM</c>"}							;Anti-Tank Guided Missile
			{"rok"														"<c(FFAF00)>GLATGM<c(FFFFFF)>"}					;Gun Launched Anti-Tank Guided Missile
			{"heat"														"<c(FFAF00)>HEAT</c>"}							;High-explosive Anti-tank
			{"cm"														"<c(FFAF00)>HEAT</c>"}							;High-explosive Anti-tank
			{"cm_e"														"<c(FFAF00)>HEAT</c>"}							;High-explosive Anti-tank
			{"sm"														"<c(CCCCCC)>SMK</c>"}							;Smoke
	}
	{"weapon"
		{"type"
			{"gun_main"													"<c(C1FFC1)f(arial_hq)>Main Gun</c>"}			;Main gun name
			{"gun_secondary"											"<c(C1FFC1)f(arial_hq)>Secondary gun</c>"}		;Secondary gun name
			{"mgun_main"												"<c(C1FFC1)f(arial_hq)>Machine gun</c>"}		;Main machine gun name
			{"mgun_aa"													"<c(C1FFC1)f(arial_hq)>Anti-aircraft</c>"}		;Anti-aircraft machine gun name
			{"mgun_coaxial"												"<c(C1FFC1)f(arial_hq)>Coaxial</c>"}			;Turret mounted coaxial machine gun in parallel with the main gun
			{"mgun_hull"												"<c(C1FFC1)f(arial_hq)>Hull</c>"}				;Hull mounted machine gun name
			{"mgun_rear"												"<c(C1FFC1)f(arial_hq)>Rear</c>"}				;Rear mounted machine gun name
			{"mgun_right"												"<c(C1FFC1)f(arial_hq)>Right</c>"}				;Right-side mounted machine gun name
			{"mgun_left"												"<c(C1FFC1)f(arial_hq)>Left</c>"}				;Left-side mounted machine gun name
		}
	}
	{"weapon"
		{"thrower hand"													"Throwable"}
	}
;air_stuff
	{"ammo"
		{"agm-65D"														"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>\n piercing - <c(FF1F00)>660<c(FFFFFF)> mm \n range - <c(FFAF00)>190<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"agm-65D_impactor"												"<c(CF9FFF)>Impactor AGM-65D</c>"}					;t
		{"agm-65G"														"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>\n HE mass - <c(FF1F00)>36<c(FFFFFF)> kg. \n range - <c(FFAF00)>190..302<c(FFFFFF)> m.\n guidance type -<c(FF1F00)>  laser semiactive<c(FFFFFF)> head "}
		{"agm-65G_impactor"												"<c(CF9FFF)>Impactor AGM-65G</c>"}					;t
		{"agm-84d"														"<c(FFAF00)>AGM-84D<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>\n HE mass - <c(FF1F00)>97.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>450<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> RL<c(FFFFFF)> head "}
		{"agm-84d_impactor"												"<c(CF9FFF)>Impactor AGM-84D</c>"}					;t
		{"agm88"														"<c(FFAF00)>AGM-88<c(FFFFFF)> <c(00FF00)> HARM<c(FFFFFF)>\n HE mass - <c(FF1F00)>18.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>360<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> Anti-radiation<c(FFFFFF)> head "}
		{"agm88_impactor"												"<c(CF9FFF)>Impactor AGM-88</c>"}					;t
		{"agm-154"														"Gliding bomb<c(FFAF00)> AGM-154<c(FFFFFF)>\n Cluster (PP).\n range - <c(FFAF00)>350<c(FFFFFF)> m."}
		{"agm-154_impactor"												"<c(CF9FFF)>Impactor AGM-154C</c>"}					;t
		{"AIM-120C7"													"SAM <c(FFAF00)>AIM-120C7<c(FFFFFF)><c(00FF00)> AMRAAM<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>345<c(FFFFFF)> m.\n guidance type - inertial\n - anti-air - "}
		{"AIM-120C7_impactor"											"<c(CF9FFF)>Impactor AIM-120 C7</c>"}				;t
		{"aladin_b"														"UAV <c(00FF00)>EMT Aladin<c(FFFFFF)>"}
		{"alarm_missile"												"<c(FFAF00)>ALARM<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n HE mass - <c(FF1F00)>14<c(FFFFFF)> kg.\n range - <c(FFAF00)>350<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> Anti-radiation<c(FFFFFF)> head "}
		{"alarm_missile_impactor"										"<c(CF9FFF)>Impactor ALARM</c>"}					;t
		{"blu108b_skeet_core_impactor"									"<c(CF9FFF)>Impactor BLU Skeet Core</c>"}			;t
		{"bomb250_3 fg"													"Bomb<c(FFAF00)> Tip 250<c(FFFFFF)> FG \n HE mass - <c(FF1F00)>76<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"bomb250_3 ic"													"Bomb<c(FFAF00)> Tip 250<c(FFFFFF)> Z \n HE mass - <c(FF1F00)>76<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"c802akg"														"<c(FFAF00)>C-802<c(FFFFFF)><c(00FF00)>AKG<c(FFFFFF)>\n HE mass - <c(FF1F00)>95<c(FFFFFF)> kg.\n range - <c(FFAF00)>525<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> televisional<c(FFFFFF)> head "}			
		{"c802akg_impactor"												"<c(CF9FFF)>Impactor C802AKG</c>"}					;t
		{"cbu-97"														"Casette<c(FFAF00)> CBU-97<c(FFFFFF)> \n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"cbu-97_impactor"												"<c(CF9FFF)>Impactor CBU-97</c>"}					;t
		{"ch802_b"														"UAV <c(00FF00)>CH-802<c(FFFFFF)>"}
		{"eleron3sv"													"<c(00FF00)>Eleron-3SV<c(FFFFFF)> UAV"}	
		{"fab_250"														"Bomb<c(FFAF00)> FАB-250M62<c(FFFFFF)> \n HE mass - <c(FF1F00)>99<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"fab_250_270"													"Bomb<c(FFAF00)> FGАB-250-270<c(FFFFFF)>\n HE mass - <c(FF1F00)>97<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"fab_500"														"Bomb<c(FFAF00)> FАB-500<c(FFFFFF)> M62\n HE mass - <c(FF1F00)>200<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"ft3"															"GBU<c(FFAF00)> FT-3<c(FFFFFF)> \n HE mass - <c(FF1F00)>76<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"gbu10"														"GBU<c(FFAF00)> GBU-10<c(FFFFFF)>\n HE mass - <c(FF1F00)>428<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"gbu16"														"GBU<c(FFAF00)> GBU-16<c(FFFFFF)>\n HE mass - <c(FF1F00)>202<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"gbu-31"														"GBU<c(FFAF00)> GBU-31<c(FFFFFF)>\n HE mass - <c(FF1F00)>428<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"gbu-38"														"GBU<c(FFAF00)> GBU-38<c(FFFFFF)>\n HE mass - <c(FF1F00)>87<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"jsm"															"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>\n HE mass - <c(FF1F00)>40<c(FFFFFF)> kg.\n range - <c(FFAF00)>480<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"jsm_impactor"													"<c(CF9FFF)>Impactor JSM</c>"}						;t
		{"kab-250"														"Bomb<c(FFAF00)> KAB-250<c(FFFFFF)>\n HE mass - <c(FF1F00)>99<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"kab-500kr"													"Bomb<c(FFAF00)> KAB-500KR<c(FFFFFF)>\n HE mass - <c(FF1F00)>100<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"kab-500s"														"Bomb<c(FFAF00)> KAB-500S<c(FFFFFF)>\n HE mass - <c(FF1F00)>195<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"kleinbombe-44"												"<c(FFAF00)>Kleinbombe-44<c(FFFFFF)>\n piercing - <c(FF1F00)>250<c(FFFFFF)> mm"}
		{"kleinbombe-44_impactor"										"<c(CF9FFF)>Impactor Kleinbombe-44</c>"}			;t
		{"kmgu2"														"<c(FFAF00)>KMGU-2<c(FFFFFF)> with minemi"}
		{"ld10"															"<c(FFAF00)>LD-10<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n HE mass - <c(FF1F00)>6.8<c(FFFFFF)> kg.\n range - <c(FFAF00)>455<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> Anti-radiation<c(FFFFFF)> head "}
		{"ld10_impactor"												"<c(CF9FFF)>Impactor LD-10</c>"}					;t
		{"ls6"															"Gliding bomb<c(FFAF00)> LS-6<c(FFFFFF)>\n HE mass - <c(FF1F00)>195<c(FFFFFF)> kg.\n range - <c(FFAF00)>440<c(FFFFFF)> m."}
		{"mk_82"														"Bomb<c(FFAF00)> Mk 82<c(FFFFFF)>\n HE mass - <c(FF1F00)>87<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"odab_500"														"Bomb <c(FFAF00)>ODАB-500<c(FFFFFF)>\n fuel mass - <c(FF1F00)>193<c(FFFFFF)> kg.\n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"odab_500_dispencer"											"Bomb <c(FFAF00)>ODАB-500<c(FFFFFF)>\n fuel mass - <c(FF1F00)>193<c(FFFFFF)> kg.\n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"odab_500_impactor"											"<c(CF9FFF)>Impactor ODАB-500</c>"}					;t
		{"pbk-500u"														"Casette<c(FFAF00)> PBK-500U<c(FFFFFF)> <c(00FF00)> «Drel»<c(FFFFFF)>\n range - <c(FFAF00)>335<c(FFFFFF)> m."}
		{"pbk-500u_impactor"											"<c(CF9FFF)>Impactor PBK-500U</c>"}					;t
		{"pl5e2"														"SAM <c(FFAF00)>PL-5<c(FFFFFF)><c(00FF00)>E2<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>254<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"pl5e2_impactor"												"<c(CF9FFF)>Impactor PL-5E2</c>"}					;t
		{"pl8b"															"SAM <c(FFAF00)>PL-8<c(FFFFFF)><c(00FF00)>B<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>308<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"pl8b_impactor"												"<c(CF9FFF)>Impactor PL-8B</c>"}					;t
		{"pl12"															"SAM <c(FFAF00)>PL-12<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>339<c(FFFFFF)> m.\n guidance type - inertial+active radar seeker   \n - anti-air - "}
		{"pl12_impactor"												"<c(CF9FFF)>Impactor PL-12</c>"}		;t
		{"r_27er"														"SAM <c(FFAF00)>R-27ER<c(FFFFFF)> izd.<c(9fd186)> 470-1E<c(FFFFFF)>\n HE mass - <c(FF1F00)>13,3<c(FFFFFF)> kg.\n range - <c(FFAF00)>315<c(FFFFFF)> m.\n guidance type - inertial+semiactive radar seeker   \n - anti-air - "}
		{"r_27er_impactor"												"<c(CF9FFF)>Impactor R-27ER izd. 470-1E</c>"}		;t
		{"r-3c"															"SAM <c(FFAF00)>R-3C<c(FFFFFF)> izd.<c(9fd186)> 310<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>150<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head  \n - anti-air - "}
		{"r-3c_impactor"												"<c(CF9FFF)>Impactor R-3C izd. 310</c>"}			;t
		{"r60_su25"														"SAM <c(FFAF00)>R-60<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head  \n - anti-air - "}
		{"r60_su25_impactor"											"<c(CF9FFF)>Impactor R-60</c>"}						;t
		{"r-73"															"SAM <c(FFAF00)>R-73<c(FFFFFF)> izd.<c(9fd186)> 72<c(FFFFFF)>\n export designation<c(d7cc81)> RVV-MD <c(FFFFFF)>\n HE mass - <c(FF1F00)>2,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>185<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"r-73_impactor"												"<c(CF9FFF)>Impactor R-73 izd. 72</c>"}				;t
		{"RBK_250"														"Casette<c(FFAF00)> RBK-250-275<c(FFFFFF)> ZАB-2,5<c(FFFFFF)>\n - incendiary aviabombi ZАB-2,5 - "}
		{"RBK_250_impactor"												"<c(CF9FFF)>Impactor RBK_250_impactor</c>"}			;t
		{"RBK_500"														"Casette<c(FFAF00)> RBK-500<c(FFFFFF)> SPBE-D<c(FFFFFF)>"}
		{"RBK_500_impactor"												"<c(CF9FFF)>Impactor RBK_500_impactor</c>"}			;t
		{"rbk_cn cl"													"Casette<c(FFAF00)> 250-3<c(FFFFFF)>\n range - <c(FFAF00)>240<c(FFFFFF)> m. \n - kumuljativnie submunitions - "}
		{"rbk_cn tb"													"Bomb <c(FFAF00)>CS-BBF1<c(FFFFFF)>\n fuel mass - <c(FF1F00)>100<c(FFFFFF)> kg.\n range - <c(FFAF00)>240<c(FFFFFF)> m."}
		{"rq11raven_b"													"UAV <c(00FF00)>RQ-11 Raven<c(FFFFFF)>"}
		{"rvv-ae"														"SAM <c(FFAF00)>K-77M<c(FFFFFF)> izd.<c(9fd186)> 180<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>320<c(FFFFFF)> m.\n guidance type - inertial+active radar seeker \n - anti-air - "}
		{"rvv-ae_impactor"												"<c(CF9FFF)>Impactor K-77M izd. 180</c>"}			;t
		{"rvv-md"														"SAM <c(FFAF00)>R-74<c(FFFFFF)> izd.<c(9fd186)> 740<c(FFFFFF)>\n export designation<c(d7cc81)> RVV-MD <c(FFFFFF)>\n HE mass - <c(FF1F00)>2,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>197<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head  \n - anti-air - "}
		{"rvv-md_impactor"												"<c(CF9FFF)>Impactor R-74 izd. 740</c>"}			;t
		{"rvv-sd"														"SAM <c(FFAF00)>R-77-1<c(FFFFFF)> izd.<c(9fd186)> 170-1<c(FFFFFF)>\n export designation<c(d7cc81)> RVV-SD <c(FFFFFF)>\n HE mass - <c(FF1F00)>7,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>339<c(FFFFFF)> m.\n guidance type - inertial+active radar seeker   \n - anti-air - "}
		{"rvv-sd_impactor"												"<c(CF9FFF)>Impactor R-77-1 izd. 170-1</c>"}		;t
		{"s25ld"														"266mm<c(FFAF00)> S-25LD<c(FFFFFF)>\n HE mass - <c(FF1F00)>150<c(FFFFFF)> kg.\n range - <c(FFAF00)>190<c(FFFFFF)> m."}
		{"spbe-d_core_impactor"											"<c(CF9FFF)>Impactor SPBE-D Core</c>"}				;t
		{"spbe-d_impactor"												"<c(CF9FFF)>Impactor SPBE-D</c>"}					;t
		{"taurus"														"<c(00FF00)>TAURUS KEPD<c(FFFFFF)><c(FFAF00)> 350<c(FFFFFF)>\n HE mass - <c(FF1F00)>101<c(FFFFFF)> kg.\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>600<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - MP zarjad - "}
		{"taurus_impactor"												"<c(CF9FFF)>Impactor TAURUS KEPD</c>"}				;t
		{"x_25ml_su25_ammo"												"<c(FFAF00)>Kh-25ML<c(FFFFFF)> izd.<c(9fd186)> 713<c(FFFFFF)>\n HE mass - <c(FF1F00)>80<c(FFFFFF)> kg.\n range - <c(FFAF00)>190..330<c(FFFFFF)> m.\n guidance type - laser semiactive "}	
		{"x_25ml_su25_ammo_impactor"									"<c(CF9FFF)>Impactor Kh-25ML izd. 713</c>"}			;t
		{"x31ad"														"<c(FFAF00)>Kh-31АD<c(FFFFFF)> izd.<c(9fd186)> 77АD<c(FFFFFF)>\n HE mass - <c(FF1F00)>30<c(FFFFFF)> kg.\n range - <c(FFAF00)>400<c(FFFFFF)> m.\n guidance type -<c(FF1F00)><c(FFFFFF)> head "}
		{"x31ad_impactor"												"<c(CF9FFF)>Impactor Kh-31АD izd. 77АD</c>"}			;t
		{"x31p"															"<c(FFAF00)>Kh-31P<c(FFFFFF)> izd.<c(9fd186)> 77P<c(FFFFFF)>\n HE mass - <c(FF1F00)>24<c(FFFFFF)> kg.\n range - <c(FFAF00)>370<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> Anti-radiation<c(FFFFFF)> head "}
		{"x31p_impactor"												"<c(CF9FFF)>Impactor Kh-31P izd. 77P</c>"}			;t
		{"x-38mte"														"<c(FFAF00)>Kh-38MTE<c(FFFFFF)>\n HE mass - <c(FF1F00)>80<c(FFFFFF)> kg.\n range - <c(FFAF00)>280<c(FFFFFF)> m.\n guidance type - inertial +<c(FF1F00)> IK<c(FFFFFF)> head "}	
		{"x-38mte_impactor"												"<c(CF9FFF)>Impactor Kh-38MTE</c>"}					;t
		{"x59m"															"<c(FFAF00)>Kh-59M<c(FFFFFF)><c(00FF00)> «Ovod-M»<c(FFFFFF)> izd.<c(9fd186)> D-9M<c(FFFFFF)>\n HE mass - <c(FF1F00)>116<c(FFFFFF)> kg.\n range - <c(FFAF00)>390<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> televisional<c(FFFFFF)> head "}
		{"x59m_impactor"												"<c(CF9FFF)>Impactor Kh-59M «Ovod-M» izd. D-9M</c>"}	;t
	}
	{"stuff"
		{"aladin"														"UAV <c(00FF00)>EMT Aladin<c(FFFFFF)>"}
		{"aladin_anten"													"Antenna for UAV Aladin"}
		{"aladin_control"												"Control unit for UAV Aladin"}
		{"ch802"														"UAV <c(00FF00)>CH-802<c(FFFFFF)>"}
		{"rq11_control"													"Control unit for UAV RQ-11 Raven"}
		{"rq11raven"													"UAV <c(00FF00)>RQ-11 Raven<c(FFFFFF)>"}
		{"smalluav_cn_control"											"Control unit for UAV Kitaja"}
	}
	{"weapon"
		{"agm-65Dx3"													"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Dx3_1"													"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Gx2"													"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Gx3"													"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm84x2"														"<c(FFAF00)>AGM-84D<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>"}
		{"agm88x2"														"<c(FFAF00)>AGM-88<c(FFFFFF)><c(00FF00)> HARM<c(FFFFFF)>"}
		{"agm-154x2"													"GBU <c(FFAF00)>AGM-154<c(FFFFFF)><c(00FF00)> JSOW<c(FFFFFF)>"}
		{"aim-9lx2"														"<c(FFAF00)>AIM-9L<c(FFFFFF)><c(00FF00)> «Sidewinder»<c(FFFFFF)> x2"}
		{"aim-9lx4"														"<c(FFAF00)>AIM-9L<c(FFFFFF)><c(00FF00)> «Sidewinder»<c(FFFFFF)> x4"}
		{"AIM-120C7x2"													"<c(FFAF00)>AIM-120C7<c(FFFFFF)> x2"}
		{"AIM-120C7x4"													"<c(FFAF00)>AIM-120C7<c(FFFFFF)> x4"}
		{"AIM-120C7x6"													"<c(FFAF00)>AIM-120C7<c(FFFFFF)> x6"}
		{"AIM-120C7x8"													"<c(FFAF00)>AIM-120C7<c(FFFFFF)> x8"}
		{"alarmax2"														"<c(FFAF00)>ALARM<c(FFFFFF)> x2"}
		{"alarmx2"														"<c(FFAF00)>ALARM<c(FFFFFF)> x2"}
		{"alarmx4"														"<c(FFAF00)>ALARM<c(FFFFFF)> x4"}
		{"c802akgx2"													"<c(FFAF00)>C-802AKG<c(FFFFFF)> x2"}
		{"CBU-97x6"														"<c(FFAF00)>GBU-97<c(FFFFFF)> x6"}
		{"eleron3sv_cat"												"Pneumatic catapult for launching UAV  Eleron-3SV"}
		{"fab_250x2"													"Bomb <c(FFAF00)>FАB-250M62<c(FFFFFF)> x2"}
		{"fab_250x4"													"Bomb <c(FFAF00)>FАB-250M62<c(FFFFFF)> x4"}
		{"fab_250x6"													"Bomb <c(FFAF00)>FАB-250M62<c(FFFFFF)> x6"}
		{"fab_250x12"													"Bomb <c(FFAF00)>FАB-250M62<c(FFFFFF)> x12"}
		{"fab_250x24"													"Bomb <c(FFAF00)>FGАB-250-270<c(FFFFFF)> x24"}
		{"fab500x8"														"Bomb <c(FFAF00)>FАB-500<c(FFFFFF)> M62"}
		{"ft3x5"														"<c(FFAF00)>FT-3<c(FFFFFF)> x5"}
		{"GBU10x2_eurofighter"											"GBU <c(FFAF00)>GBU-10<c(FFFFFF)> x2"}
		{"GBU10x4_eurofighter"											"GBU <c(FFAF00)>GBU-10<c(FFFFFF)> x2"}
		{"GBU16x2_tornado"												"GBU <c(FFAF00)>GBU-16<c(FFFFFF)> x2"}
		{"GBU16x4_tornado"												"GBU <c(FFAF00)>GBU-16<c(FFFFFF)> x4"}
		{"GBU16x5_tornado"												"GBU <c(FFAF00)>GBU-16<c(FFFFFF)> x5"}
		{"GBU-31x2_F-35"												"GBU <c(FFAF00)>GBU-31<c(FFFFFF)> x2"}
		{"GBU-38x2_A-10C"												"GBU <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x2_F-35"												"GBU <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x2_MQ9"													"GBU <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x4_A-10C"												"GBU <c(FFAF00)>GBU-38<c(FFFFFF)> x4"}
		{"jsmx4"														"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>"}
		{"jsmx6"														"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>"}
		{"kab-250x4"													"<c(FFAF00)>KAB-250 kr<c(FFFFFF)>"}
		{"kab-250x9"													"<c(FFAF00)>KAB-250 kr<c(FFFFFF)>"}
		{"kab-500krx4"													"<c(FFAF00)>KAB-500KR<c(FFFFFF)>"}
		{"kab-500x2"													"<c(FFAF00)>KAB-500C<c(FFFFFF)>"}
		{"kab-500x6"													"<c(FFAF00)>KAB-500C<c(FFFFFF)>"}
		{"kmgu_x8"														"<c(FFAF00)>KMGU-2<c(FFFFFF)> with minemi"}
		{"ld10x4"														"<c(FFAF00)>LD-10<c(FFFFFF)> x4"}
		{"ls6x2"														"<c(FFAF00)>LS-6<c(FFFFFF)> x2"}
		{"ls6x4"														"<c(FFAF00)>LS-6<c(FFFFFF)> x4"}
		{"Mk82x6_F-16C"													"Bomb <c(FFAF00)>Mk82<c(FFFFFF)> x6"}
		{"Mk82x18_tornado"												"Bomb <c(FFAF00)>Mk82<c(FFFFFF)> x18"}
		{"Mk82x22_A-10C"												"Bomb <c(FFAF00)>Mk82<c(FFFFFF)> x22"}
		{"odab_500x2"													"<c(FFAF00)>ODАB-500<c(FFFFFF)>"}
		{"pbk500x1"														"<c(FFAF00)>PBK-500<c(FFFFFF)>"}
		{"pbk500x2"														"<c(FFAF00)>PBK-500<c(FFFFFF)>"}
		{"pbk500x2alt"													"<c(FFAF00)>PBK-500<c(FFFFFF)>"}
		{"pl5e2x2"														"<c(FFAF00)>PL-5E2<c(FFFFFF)> x2"}
		{"pl8bx2"														"<c(FFAF00)>PL-8B<c(FFFFFF)> x2"}
		{"pl12x4"														"<c(FFAF00)>PL-12<c(FFFFFF)> x4"}
		{"pl12x6"														"<c(FFAF00)>PL-12<c(FFFFFF)> x6"}
		{"r-3c_mig21x2"													"<c(FFAF00)>R-3C<c(FFFFFF)> x2"}
		{"r27erx2"														"<c(FFAF00)>R-27ER<c(FFFFFF)> x2"}
		{"r27erx6"														"<c(FFAF00)>R-27ER<c(FFFFFF)> x6"}
		{"r60_mig21x4"													"<c(FFAF00)>R-60<c(FFFFFF)> x4"}
		{"r60_su25x2"													"<c(FFAF00)>R-60<c(FFFFFF)> x2"}
		{"r73x2"														"<c(FFAF00)>R-73<c(FFFFFF)> x2"}
		{"r73x4"														"<c(FFAF00)>R-73<c(FFFFFF)> x4"}
		{"RBK_250x2"													"<c(FFAF00)>RBK-250<c(FFFFFF)> x2"}
		{"RBK_500x4"													"<c(FFAF00)>RBK-500<c(FFFFFF)> x4"}
		{"rbk_cn_250x12"												"<c(FFAF00)>RBK-250<c(FFFFFF)> x12"}
		{"rvv-aex6"														"<c(FFAF00)>K-77M<c(FFFFFF)> x4"}
		{"rvv-mdx2"														"<c(FFAF00)>RVV-MD<c(FFFFFF)> x2"}
		{"rvvsdx2"														"<c(FFAF00)>R-77-1<c(FFFFFF)> x2"}
		{"rvvsdx4"														"<c(FFAF00)>R-77-1<c(FFFFFF)> x4"}
		{"rvvsdx6"														"<c(FFAF00)>R-77-1<c(FFFFFF)> x6"}
		{"rvvsdx10"														"<c(FFAF00)>R-77-1<c(FFFFFF)> x10"}
		{"s25ldx2"														"<c(FFAF00)>S-25LD<c(FFFFFF)> x2"}
		{"s25ldx4"														"<c(FFAF00)>S-25LD<c(FFFFFF)> x4"}
		{"s25ldx6"														"<c(FFAF00)>S-25LD<c(FFFFFF)> x6"}
		{"taurusx2"														"<c(00FF00)>Taurus<c(FFFFFF)>"}
		{"tornado_mw1"													"<c(FFAF00)>MW-1<c(FFFFFF)> dispencer"}
		{"type250_3x4"													"Bomb <c(FFAF00)>Type250-3<c(FFFFFF)> x4"}
		{"type250_3x24"													"Bomb <c(FFAF00)>Type250-3<c(FFFFFF)> x24"}
		{"x_25ml_su25x2"												"<c(FFAF00)>Kh-25ML<c(FFFFFF)> x2"}
		{"x_25ml_su25x4"												"<c(FFAF00)>Kh-25ML<c(FFFFFF)> x4"}
		{"x31adx4"														"<c(FFAF00)>Kh-31АD<c(FFFFFF)> x4"}
		{"x31x1alt"														"<c(FFAF00)>Kh-31P<c(FFFFFF)> x1\n - Anti-radiation - "}
		{"x31x2"														"<c(FFAF00)>Kh-31P<c(FFFFFF)> x2\n - Anti-radiation - "}
		{"x31x3"														"<c(FFAF00)>Kh-31P<c(FFFFFF)> x3\n - Anti-radiation - "}
		{"x31x3alt"														"<c(FFAF00)>Kh-31P<c(FFFFFF)> x3\n - Anti-radiation - "}
		{"x31x6"														"<c(FFAF00)>Kh-31P<c(FFFFFF)> x6\n - Anti-radiation - "}
		{"x-38mte_x2"													"<c(FFAF00)>Kh-38MTE<c(FFFFFF)> x2"}
		{"x-38mte_x3"													"<c(FFAF00)>Kh-38MTE<c(FFFFFF)> x3"}
		{"x-38mte_x4"													"<c(FFAF00)>Kh-38MTE<c(FFFFFF)> x4"}
		{"x-38mte_x6"													"<c(FFAF00)>Kh-38MTE<c(FFFFFF)> x6"}
		{"x59x2"														"<c(FFAF00)>Kh-59M<c(FFFFFF)> x2"}
		{"x59x3"														"<c(FFAF00)>Kh-59M<c(FFFFFF)> x3"}
	}
;atgm
	{"ammo"
		{"9k14m"														"ATGM <c(FFAF00)>9M14M<c(FFFFFF)><c(00FF00)> «Maljutka-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>460<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"9k14m_impactor"												"<c(CF9FFF)>Impactor 9M14M «Maljutka-M»</c>"}			;t
		{"9k115-2 cm"													"ATGM <c(FFAF00)>9M131M<c(FFFFFF)><c(00FF00)> «Metis-M1»<c(FFFFFF)>\n piercing - <c(FF1F00)>950<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"9k115-2 cm_e"													"ATGM <c(FFAF00)>9M131<c(FFFFFF)><c(00FF00)> «Metis-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>850<c(FFFFFF)> mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"9k115-2_cm_e_impactor"										"<c(CF9FFF)>Impactor 9M131M «Metis-M1»</c>"}			;t
		{"9k115-2_cm_impactor"											"<c(CF9FFF)>Impactor 9M133-1 «Kornet-P»</c>"}			;t
		{"9m31"															"SAM <c(FFAF00)>9M31<c(FFFFFF)><c(00FF00)> «Strela»<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>144<c(FFFFFF)> m.\n guidance type - photocontrast \n - anti-air - "}
		{"9m31_impactor"												"<c(CF9FFF)>Impactor 9M31 «Strela»</c>"}				;t
		{"9m37_impactor"												"<c(CF9FFF)>Impactor 9M37 for SAM «Strela-10»</c>"}		;t
		{"9m38 buk"														"SAM <c(FFAF00)>9M38M1<c(FFFFFF)> for SAM «Buk»\n HE mass - <c(FF1F00)>33.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>320<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"9m38_impactor"												"<c(CF9FFF)>Impactor 9M38M1 for SAM «Buk»</c>"}			;t
		{"9m111_impactor"												"<c(CF9FFF)>Impactor 9M111-2 «Fagot»</c>"}				;t
		{"9m111m_impactor"												"<c(CF9FFF)>Impactor 9M111M «Faktorija»</c>"}			;t
		{"9m113_impactor"												"<c(CF9FFF)>Impactor 9M113 «Konkurs»</c>"}				;t
		{"9m113m_impactor"												"<c(CF9FFF)>Impactor 9M113M «Konkurs-M»</c>"}			;t
		{"9m113m1_impactor"												"<c(CF9FFF)>Impactor 9M113M1 «Konkurs-M»</c>"}			;t
		{"9m114f_impactor"												"<c(CF9FFF)>Impactor 9M114 «Kokon»</c>"}				;t
		{"9m114m shturm cm"												"<c(FFAF00)>9M114<c(FFFFFF)><c(00FF00)> «Kokon»<c(FFFFFF)>\n piercing - <c(FF1F00)>650<c(FFFFFF)> mm \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - radiocommand "}
		{"9m114m shturm fg"												"<c(FFAF00)>9M114F<c(FFFFFF)> TB<c(00FF00)><c(FFFFFF)>\n HE mass ekv - <c(FF1F00)>9,5<c(FFFFFF)> kg \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - radiocommand \n warhead - <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"9m114m_impactor"												"<c(CF9FFF)>Impactor 9M114F TB</c>"}					;t
		{"9m120 shturm cm"												"<c(FFAF00)>9M120<c(FFFFFF)><c(00FF00)> «Аtaka»<c(FFFFFF)>\n piercing - <c(FF1F00)>950<c(FFFFFF)> mm \n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type - radiocommand \n warhead - tandem "}
		{"9m120 shturm fg"												"<c(FFAF00)>9M120F<c(FFFFFF)> TB<c(00FF00)> «Аtaka»<c(FFFFFF)>\n HE mass ekv - <c(FF1F00)>9,5<c(FFFFFF)> kg \n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type - radiocommand \n warhead - <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"9m120f_impactor"												"<c(CF9FFF)>Impactor 9M120 «Аtaka»</c>"}				;t
		{"9m120m_impactor"												"<c(CF9FFF)>Impactor 9M120F TB</c>"}					;t
		{"9m133 cm"														"ATGM <c(FFAF00)>9M133M-2<c(FFFFFF)><c(00FF00)> «Kornet-D»<c(FFFFFF)>\n piercing - <c(FF1F00)>1300<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type - beam rider \n warhead - tandem "}
		{"9m133 cm_e"													"ATGM <c(FFAF00)>9M133-1<c(FFFFFF)><c(00FF00)> «Kornet-P»<c(FFFFFF)>\n piercing - <c(FF1F00)>1200<c(FFFFFF)> mm \n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type - beam rider \n warhead - tandem"}
		{"9m133 fg"														"ATGM <c(FFAF00)>9M133FM-3<c(FFFFFF)> FG<c(00FF00)> «Kornet-D»<c(FFFFFF)>\n HE mass ekv - <c(FF1F00)>7,0<c(FFFFFF)> kg \n range - <c(FFAF00)>190<c(FFFFFF)> m.\n guidance type - beam rider \n warhead - HE"}
		{"9m133 tb"														"ATGM <c(FFAF00)>9M133FM-2<c(FFFFFF)> TB<c(00FF00)> «Kornet-D»<c(FFFFFF)>\n HE mass ekv - <c(FF1F00)>10<c(FFFFFF)> kg \n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type - beam rider \n warhead - <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"9m133_cm_e_impactor"											"<c(CF9FFF)>Impactor 9M133-1 «Kornet-P»</c>"}			;t
		{"9m133_cm_impactor"											"<c(CF9FFF)>Impactor 9M133M-2 «Kornet-D»</c>"}			;t
		{"9m133_fg_impactor"											"<c(CF9FFF)>Impactor 9M133FM-3 FG «Kornet-D»</c>"}		;t
		{"9m133_tb_impactor"											"<c(CF9FFF)>Impactor 9M133FM-2 TB «Kornet-D»</c>"}		;t
		{"9m311"														"SAM <c(FFAF00)>9M311<c(FFFFFF)> for SAM «Tunguska»\n HE mass - <c(FF1F00)>4,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type - radiocommand \n - anti-air - "}
		{"9m311_impactor"												"<c(CF9FFF)>Impactor 9M311 for SAM «Tunguska»</c>"}		;t
		{"9m317 buk"													"SAM <c(FFAF00)>9M317<c(FFFFFF)> for SAM «Buk»\n HE mass - <c(FF1F00)>33.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>340<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"9m317_impactor"												"<c(CF9FFF)>Impactor 9M317 for SAM «Buk»</c>"}			;t
		{"9m330"														"SAM <c(FFAF00)>9M330<c(FFFFFF)> for SAM «Tor» i «Kinjal»\n HE mass - <c(FF1F00)>6,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>200<c(FFFFFF)> m.\n guidance type - radiocommand \n - anti-air - "}
		{"9m330_impactor"												"<c(CF9FFF)>Impactor 9M330 for SAM «Tor» i «Kinjal»</c>"}	;t
		{"9m333_impactor"												"<c(CF9FFF)>Impactor 9M333 for SAM «Strela-10»</c>"}		;t
		{"adats"														"SAM <c(00FF00)>ADATS<c(FFFFFF)><c(FFAF00)> MIM-146A<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type - radiocommand \n - anti-air - "}
		{"adats_impactor"												"<c(CF9FFF)>Impactor ADATS MIM-146A</c>"}				;t
		{"agm-114 k"													"<c(FFAF00)>AGM-114K<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(FF1F00)> PАL<c(FFFFFF)> head \n - top attack - \n warhead - tandem \n mod.<c(FFAF00)> P<c(FFFFFF)> for UAVs "}
		{"agm-114 k2"													"<c(FFAF00)>AGM-114K-2B<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n piercing - <c(FF1F00)>772<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(FF1F00)> PАL<c(FFFFFF)> head \n - top attack - \n warhead - tandem HEAT-fragmentary - \n mod.<c(FFAF00)> P-2B<c(FFFFFF)> for UAVs "}
		{"agm-114 l"													"<c(FFAF00)>AGM-114L<c(FFFFFF)> <c(00FF00)>«Hellfire Longbow»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - top attack - \n warhead - tandem "}
		{"agm-114 n"													"<c(FFAF00)>AGM-114N<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,85<c(FFFFFF)> kg. \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(FF1F00)> PАL<c(FFFFFF)> head \n - top attack - \n warhead - <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"agm-114 r"													"<c(FFAF00)>AGM-114R<c(FFFFFF)> <c(00FF00)>«Hellfire 2 Romeo»<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,0<c(FFFFFF)> kg.\n piercing - <c(FF1F00)>450<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(FF1F00)> PАL<c(FFFFFF)> head \n - top attack - \n warhead - tandem HEAT-HE - "}
		{"agm-114k_impactor"											"<c(CF9FFF)>Impactor AGM-114K «Hellfire 2»</c>"}		;t
		{"agm-114k2_impactor"											"<c(CF9FFF)>Impactor AGM-114K 2B «Hellfire 2»</c>"}		;t
		{"agm-114l_impactor"											"<c(CF9FFF)>Impactor AGM-114L «Hellfire Longbow»</c>"}	;t
		{"agm-114n_impactor"											"<c(CF9FFF)>Impactor AGM-114N «Hellfire 2»</c>"}		;t
		{"agm-114r_impactor"											"<c(CF9FFF)>Impactor AGM-114R «Hellfire 2 Romeo»</c>"}	;t
		{"aim-9l_ammo"													"SAM <c(FFAF00)>AIM-9L<c(FFFFFF)><c(00FF00)> «Sidewinder»<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>200<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"aim-9l_impactor"												"<c(CF9FFF)>Impactor AIM-9L «Sidewinder»</c>"}			;t
		{"akd-10"														"<c(FFAF00)>AKD-10<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n piercing - <c(FF1F00)>1400<c(FFFFFF)> mm \n range - <c(FFAF00)>175<c(FFFFFF)> m. \n guidance type -<c(FF1F00)> PАL<c(FFFFFF)> head \n - top attack - \n warhead - tandem - "}
		{"akd-10_impactor"												"<c(CF9FFF)>Impactor AKD-10</c>"}						;t
		{"blinding_laser"												"KOEP «LDSW»"}
		{"brimstone"													"<c(00FF00)>Brimstone<c(FFFFFF)>\n piercing - <c(FF1F00)>1200<c(FFFFFF)> mm \n range - <c(FFAF00)>290<c(FFFFFF)> m. \n guidance type -<c(4d6ff7)> ARL<c(FFFFFF)> + <c(FF1F00)>PАL<c(FFFFFF)> head \n - top attack - \n warhead - tandem - "}
		{"brimstone_impactor"											"<c(CF9FFF)>Impactor Brimstone</c>"}					;t
		{"fagot_concurs 9m111"											"ATGM <c(FFAF00)>9M111-2<c(FFFFFF)><c(00FF00)> «Fagot»<c(FFFFFF)>\n piercing - <c(FF1F00)>460<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"fagot_concurs 9m111m"											"ATGM <c(FFAF00)>9M111M<c(FFFFFF)><c(00FF00)> «Faktorija»<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>110<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"fagot_concurs 9m113"											"ATGM <c(FFAF00)>9M113<c(FFFFFF)><c(00FF00)> «Konkurs»<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>130..140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"fagot_concurs 9m113m"											"ATGM <c(FFAF00)>9M113M<c(FFFFFF)><c(00FF00)> «Konkurs-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"fagot_concurs 9m113m1"										"ATGM <c(FFAF00)>9M113M1<c(FFFFFF)><c(00FF00)> «Konkurs-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>800<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"germes"														"ATGM <c(00FF00)>«Germes-А»<c(FFFFFF)>\n HE mass - <c(FF1F00)>18,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>262<c(FFFFFF)> m. \n guidance type -<c(4d6ff7)> ARL<c(FFFFFF)> + <c(FF1F00)>PАL<c(FFFFFF)> head "}
		{"germes_impactor"												"<c(CF9FFF)>Impactor «Germes-А»</c>"}					;t
		{"Hellfire"														"<c(FFAF00)>AGM-114L<c(FFFFFF)> <c(00FF00)>«Hellfire Longbow»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m. \n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - top attack - \n warhead - tandem "}
		{"Hellfire_impactor"											"<c(CF9FFF)>Impactor AGM-114L «Hellfire Longbow»</c>"}	;t
		{"hj8e hj8"														"ATGM <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>8E<c(FFFFFF)>\n - Hong Jian 8E -\n piercing - <c(FF1F00)>580<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"hj8e_impactor"												"<c(CF9FFF)>Impactor Red Arrow 8E - Hong Jian 8E</c>"}	;t
		{"hj8h hj8"														"ATGM <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>8H<c(FFFFFF)>\n - Hong Jian 8H -\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"hj8h_impactor"												"<c(CF9FFF)>Impactor Red Arrow 8H - Hong Jian 8H</c>"}	;t
		{"hj9_missile"													"ATGM <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>9<c(FFFFFF)>\n - Hong Jian 9 -\n piercing - <c(FF1F00)>850<c(FFFFFF)> mm \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"hj9_missile_impactor"											"<c(CF9FFF)>Impactor Red Arrow 9 - Hong Jian 9</c>"}	;t
		{"hj-10"														"Loading mediator<c(CF9FFF)> HJ-10"}
		{"hj-10 hj-10b"													"ATGM <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>10B<c(FFFFFF)>\n - Hong Jian 10B -\n piercing - <c(FF1F00)>1300<c(FFFFFF)> mm \n range - <c(FFAF00)>190<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"hj-10b_impactor"												"<c(CF9FFF)>Impactor Red Arrow 10B - Hong Jian 10B</c>"};t
		{"hj73 hj73c"													"ATGM <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>73C<c(FFFFFF)>\n - Hong Jian 73C -\n piercing - <c(FF1F00)>460<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"hj73c_impactor"												"<c(CF9FFF)>Impactor Red Arrow 73C - Hong Jian 73C</c>"};t
		{"hot_rock hot3"												"ATGM <c(00FF00)>HOT-3<c(FFFFFF)>\n piercing - <c(FF1F00)>1300<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"hot_rock_impactor"											"<c(CF9FFF)>Impactor HOT-3</c>"}						;t
		{"hq7b"															"SAM <c(FFAF00)>HQ-7B<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>220<c(FFFFFF)> m.\n guidance type - radiocommand \n - anti-air - "}
		{"hq7b_impactor"												"<c(CF9FFF)>Impactor HQ-7B</c>"}						;t
		{"hq16 hq16a"													"SAM <c(FFAF00)>HQ-16A<c(FFFFFF)>\n HE mass - <c(FF1F00)>33.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>400<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"hq16a_missile_impactor"										"<c(CF9FFF)>Impactor HQ-16A</c>"}						;t
		{"hq16 hq16b"													"SAM <c(FFAF00)>HQ-16B<c(FFFFFF)>\n HE mass - <c(FF1F00)>33.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>455<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"hq16b_missile_impactor"										"<c(CF9FFF)>Impactor HQ-16B</c>"}						;t
		{"ir_soep_ammo"													"KOEP «Vitebsk»"}
		{"JAGM_impactor"												"<c(CF9FFF)>Impactor JAGM</c>"}							;t
		{"milan_rock cm"												"ATGM <c(00FF00)>«MILAN-F3»<c(FFFFFF)>\n piercing - <c(FF1F00)>880<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"milan_rock milan-ER"											"ATGM <c(00FF00)>«MILAN-ER»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"milan_rock_impactor"											"<c(CF9FFF)>Impactor «MILAN-F3»</c>"}					;t
		{"milan-er_impactor"											"<c(CF9FFF)>Impactor «MILAN-ER»</c>"}					;t
		{"mistral_missile"												"SAM <c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>170..175<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"mistral_missile_impactor"										"<c(CF9FFF)>Impactor Mistral M2</c>"}					;t
		{"mmp_missile"													"ATGM <c(00FF00)>MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"mmp_missile_impactor"											"<c(CF9FFF)>Impactor «MMP»</c>"}						;t
		{"pantsir 57e6e"												"SAM <c(FFAF00)>57E6E<c(FFFFFF)> for SAM «Pantsir»\n HE mass - <c(FF1F00)>5,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>290<c(FFFFFF)> m.\n guidance type - radiocommand \n - anti-air - "}
		{"pantsir_57e6e_impactor"										"<c(CF9FFF)>Impactor 57E6E for SAM «Pantsir»</c>"}		;t
		{"patriot"														"SAM <c(FFAF00)>MIM-104S<c(FFFFFF)> <c(00FF00)>«Patriot»<c(FFFFFF)>\n HE mass - <c(FF1F00)>40<c(FFFFFF)> kg.\n range - <c(FFAF00)>378<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"patriot_impactor"												"<c(CF9FFF)>Impactor MIM-104S «Patriot»</c>"}			;t
		{"sampt"														"SAM <c(FFAF00)>ASTER 30<c(FFFFFF)> <c(00FF00)>«SAMPT»<c(FFFFFF)>\n HE mass - <c(FF1F00)>5<c(FFFFFF)> kg.\n range - <c(FFAF00)>380<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"sampt_impactor"												"<c(CF9FFF)>Impactor ASTER 30 «SAMPT»</c>"}				;t
		{"spike_nlos cm"												"ATGM <c(00FF00)>SPIKE-NLOS<c(FFFFFF)> <c(FFAF00)>Mk-5<c(FFFFFF)>\n variant for TsАKhАL - <c(00FF00)>«Tamuz-5»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>300<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"spike_nlos fg"												"ATGM <c(00FF00)>SPIKE-NLOS<c(FFFFFF)> <c(FFAF00)>Mk-5<c(FFFFFF)>\n variant for TsАKhАL - <c(00FF00)>«Tamuz-5»<c(FFFFFF)>\n HE mass - <c(FF1F00)>11,6<c(FFFFFF)> kg. \n range - <c(FFAF00)>300<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n"}
		{"spike_nlos_fg_impactor"										"<c(CF9FFF)>Impactor SPIKE-NLOS Mk-5</c>"}				;t
		{"spike_nlos_impactor"											"<c(CF9FFF)>Impactor SPIKE-NLOS Mk-5</c>"}				;t
		{"spike-er"														"ATGM <c(FFAF00)>SPIKE-ER<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem"}
		{"spike-er spike-er"											"ATGM <c(FFAF00)>SPIKE-ER<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem"}
		{"spike-er_impactor"											"<c(CF9FFF)>Impactor SPIKE-ER</c>"}						;t
		{"spike-er2 spike-er"											"ATGM <c(FFAF00)>SPIKE-ER2<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>190<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"spike-er2_impactor"											"<c(CF9FFF)>Impactor SPIKE-ER2</c>"}					;t
		{"spike-lr"														"ATGM <c(FFAF00)>SPIKE-LR2<c(FFFFFF)>\n piercing - <c(FF1F00)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n variant for Bundesvehr - <c(FFAF00)>MELLS<c(FFFFFF)>"}
		{"spike-lr_impactor"											"<c(CF9FFF)>Impactor SPIKE-LR2</c>"}					;t
		{"strela10 9m37"												"SAM <c(FFAF00)>9M37<c(FFFFFF)> for SAM «Strela-10»\n HE mass - <c(FF1F00)>1,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - photocontrast \n - anti-air - "}
		{"strela10 9m333"												"SAM <c(FFAF00)>9M333<c(FFFFFF)> for SAM «Strela-10»\n HE mass - <c(FF1F00)>2,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - photocontrast \n - anti-air - "}
		{"tow_impactor"													"<c(CF9FFF)>Impactor BGM-71C ITOW</c>"}					;t
		{"tow_missile tow_rock"											"ATGM <c(FFAF00)>BGM-71C<c(FFFFFF)><c(00FF00)> ITOW<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>135<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"tow_missile tow2_fg"											"ATGM <c(FFAF00)>BGM-71H<c(FFFFFF)><c(00FF00)> TOW Bunker Buster<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,9<c(FFFFFF)> kg.\n range - <c(FFAF00)>135<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - HE "}
		{"tow_missile tow2b"											"ATGM <c(FFAF00)>BGM-71F<c(FFFFFF)><c(00FF00)> TOW 2B Aero<c(FFFFFF)>\n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>150<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - strike core "}
		{"tow_missile tow2d"											"ATGM <c(FFAF00)>BGM-71D<c(FFFFFF)><c(00FF00)> TOW 2<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>135<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"tow_missile tow2e"											"ATGM <c(FFAF00)>BGM-71E<c(FFFFFF)><c(00FF00)> TOW 2A<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>135<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem "}
		{"tow2_fg_impactor"												"<c(CF9FFF)>Impactor BGM-71H TOW Bunker Buster</c>"}	;t
		{"tow2b_core_impactor"											"<c(CF9FFF)>Impactor BGM-71F TOW 2B Aero Core</c>"}		;t
		{"tow2b_impactor"												"<c(CF9FFF)>Impactor BGM-71F TOW 2B Aero</c>"}			;t
		{"tow2d_impactor"												"<c(CF9FFF)>Impactor BGM-71D TOW 2</c>"}				;t
		{"tow2e_impactor"												"<c(CF9FFF)>Impactor BGM-71E TOW 2A</c>"}				;t
		{"trigat"														"ATGM <c(FFAF00)>TRIGAT-LR<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>175<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>\n warhead - tandem \n variant for Bundesvehr - <c(4d6ff7)>PARS 3 LR<c(FFFFFF)>\n variant for French - <c(4d6ff7)>AC 3 G<c(FFFFFF)>"}
		{"trigat_impactor"												"<c(CF9FFF)>Impactor TRIGAT-LR</c>"}					;t
		{"vixr_ammo"													"<c(FFAF00)>9M127-1<c(FFFFFF)><c(00FF00)> «Vikhr-1»<c(FFFFFF)>\n piercing - <c(FF1F00)>1000<c(FFFFFF)> mm \n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type - beam rider \n warhead - tandem "}
		{"vixr_impactor"												"<c(CF9FFF)>Impactor 9M127-1 «Vikhr-1»</c>"}			;t
		{"xmim-115avt1"													"SAM <c(FFAF00)>VT-1<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,0<c(FFFFFF)> kg. \n range - <c(FFAF00)>220<c(FFFFFF)> m.\n guidance type - radiocommand\n - anti-air - "}
		{"xmim-115avt1_impactor"										"<c(CF9FFF)>Impactor VT-1</c>"}							;t
	}
	{"stuff"
		{"ir_soep"														"KOEP «Vitebsk»"} ;electro-optical electronic warfare system Vitebsk
		{"ldsw_cn"														"KOEP «LDSW»"}	;LDSW Jammer
		{"targeting_radar_buk"											"Targeting radar"}
		{"targeting_radar_bukm2"										"Targeting radar"}
		{"targeting_radar_fort"											"Targeting radar"}
		{"targeting_radar_fort_m"										"Targeting radar"}
		{"targeting_radar_kupol"										"Targeting radar"}
		{"targeting_radar_sampt"										"Targeting radar"}		

	}
	{"weapon"
		{"9k14mrocket"													"ATGM<c(FFAF00)> 9M14M<c(FFFFFF)><c(00FF00)> «Maljutka-M»<c(FFFFFF)> \n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"9k31_strela1_x4"												"SAM<c(FFAF00)> 9K31<c(FFFFFF)><c(00FF00)> «Strela-1»<c(FFFFFF)> \n range - <c(FFAF00)>132<c(FFFFFF)> m."}
		{"9k111-1konkurs"												"ATGM <c(FFAF00)>9K111-1<c(FFFFFF)><c(00FF00)> «Konkurs»<c(FFFFFF)> \n range - <c(FFAF00)>100..140<c(FFFFFF)> m."}
		{"9k111-1konkurs_x5"											"ATGM <c(FFAF00)>9K111-1<c(FFFFFF)><c(00FF00)> «Konkurs»<c(FFFFFF)> \n range - <c(FFAF00)>100..140<c(FFFFFF)> m."}
		{"9k111fagot"													"ATGM <c(FFAF00)>9K111<c(FFFFFF)><c(00FF00)> «Fagot»<c(FFFFFF)> \n range - <c(FFAF00)>100..140<c(FFFFFF)> m."}
		{"9k121vixr_left"												"ATGM <c(FFAF00)>9K121M<c(FFFFFF)><c(00FF00)> «Vikhr-M»<c(FFFFFF)>"}
		{"9k121vixr_right"												"ATGM <c(FFAF00)>9K121M<c(FFFFFF)><c(00FF00)> «Vikhr-M»<c(FFFFFF)>"}
		{"9m133x1"														"ATGM <c(FFAF00)><c(FFFFFF)><c(00FF00)> «Kornet-D»<c(FFFFFF)> \n range - <c(FFAF00)>165..190<c(FFFFFF)> m."}
		{"9m133x1_base"													"ATGM<c(00FF00)> «Kornet»<c(FFFFFF)> \n range - <c(FFAF00)>165<c(FFFFFF)> m."}
		{"9m133x2"														"ATGM<c(00FF00)> «Kornet-D»<c(FFFFFF)> \n range - <c(FFAF00)>165..190<c(FFFFFF)> m."}
		{"9m133x2_l"													"ATGM<c(00FF00)> «Kornet-D»<c(FFFFFF)> \n range - <c(FFAF00)>165..190<c(FFFFFF)> m."}
		{"9m133x2_r"													"ATGM<c(00FF00)> «Kornet-D»<c(FFFFFF)> \n range - <c(FFAF00)>165..190<c(FFFFFF)> m."}
		{"9m133x4"														"ATGM<c(00FF00)> «Kornet-D»<c(FFFFFF)> \n range - <c(FFAF00)>165..190<c(FFFFFF)> m."}
		{"adats_x8"														"SAM <c(00FF00)>ADATS<c(FFFFFF)> \n range - <c(FFAF00)>170<c(FFFFFF)> m."}
		{"aim-9l_left"													"PU<c(00FF00)> «Sidewinder»<c(FFFFFF)>"}
		{"aim-9l_right"													"PU<c(00FF00)> «Sidewinder»<c(FFFFFF)>"}
		{"akd10x4_L"													"<c(FFAF00)>AKD-10<c(FFFFFF)><c(00FF00)><c(FFFFFF)> \n range - <c(FFAF00)>175<c(FFFFFF)> m."}
		{"akd10x4_R"													"<c(FFAF00)>AKD-10<c(FFFFFF)><c(00FF00)><c(FFFFFF)> \n range - <c(FFAF00)>175<c(FFFFFF)> m."}
		{"ataka_x2_l"													"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"ataka_x2_r"													"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"ataka_x4_robot"												"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"ataka_x6_left"												"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"ataka_x6_right"												"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"ataka_x8"														"ATGM<c(00FF00)> «Аtaka»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"Brimstonex4"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"Brimstonex6"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"Brimstonex12"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"buk_launcher"													"LU with 4 SAM<c(FFAF00)><c(FFFFFF)>\n range - <c(FFAF00)>320..340<c(FFFFFF)> m."}
		{"germes_left"													"ATGM<c(00FF00)> «Germes»<c(FFFFFF)>\n range - <c(FFAF00)>262<c(FFFFFF)> m."}
		{"germes_right"													"ATGM<c(00FF00)> «Germes»<c(FFFFFF)>\n range - <c(FFAF00)>262<c(FFFFFF)> m."}
		{"Hellfire_left"												"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"Hellfire_mq9"													"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"Hellfire_right"												"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"Hellfire_x2"													"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"hj8"															"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-8<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"hj9x4"														"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-9<c(FFFFFF)>\n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"hj-10x8"														"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-10<c(FFFFFF)>\n range - <c(FFAF00)>190<c(FFFFFF)> m."}
		{"hj73x1"														"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"hj73x1_zbd86"													"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"hj73x2"														"ATGM<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"HOT"															"ATGM <c(00FF00)>«HOT-3»<c(FFFFFF)> \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"hq7bx4"														"SAM<c(FFAF00)> HQ-7B<c(FFFFFF)> \n range - <c(FFAF00)>220<c(FFFFFF)> m."}
		{"hq16b_launcher"												"LU with 6 SAM<c(FFAF00)><c(FFFFFF)>\n range - <c(FFAF00)>400..455<c(FFFFFF)> m."}
		{"igla_gibka_x4"												"MANPAD <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Igla-S»<c(FFFFFF)>\n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"kortik_9m311_x8"												"SAM<c(FFAF00)> 9M311<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"mbda_mmp_x1"													"ATGM<c(00FF00)> MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"mbda_mmp_x2"													"ATGM<c(00FF00)> MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"metis_m"														"ATGM <c(FFAF00)> 9K115-2<c(FFFFFF)><c(00FF00)> «Metis-M»<c(FFFFFF)> \n range - <c(FFAF00)>85..100<c(FFFFFF)> m."}
		{"MILAN"														"ATGM <c(00FF00)>«MILAN»<c(FFFFFF)> \n range - <c(FFAF00)>100..120<c(FFFFFF)> m."}
		{"mistralx1"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x1"}
		{"mistralx2"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x2"}
		{"mistralxh"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x2"}
		{"pantsir_x12"													"SAM<c(FFAF00)> 57E6E<c(FFFFFF)> \n range - <c(FFAF00)>290<c(FFFFFF)> m."}
		{"patriot_pac2"													"LU with 4 SAM<c(FFAF00)><c(FFFFFF)>\n range - <c(FFAF00)>378<c(FFFFFF)> m."}
		{"roland_x2"													"LU <c(00FF00)>Roland-3<c(FFFFFF)> \n range - <c(FFAF00)>220<c(FFFFFF)> m."}
		{"sampt_launcher"												"LU with 8 SAM<c(FFAF00)><c(FFFFFF)>\n range - <c(FFAF00)>380<c(FFFFFF)> m."}
		{"shturm-s"														"ATGM<c(00FF00)> «Shturm-C»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"shturm-v-x2_l"												"ATGM<c(00FF00)> «Shturm-V»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"shturm-v-x2_r"												"ATGM<c(00FF00)> «Shturm-V»<c(FFFFFF)>\n range - <c(FFAF00)>160-170<c(FFFFFF)> m."}
		{"spike_nlos_x4"												"ATGM<c(FFAF00)> SPIKE-NLOS<c(FFFFFF)>\n range - <c(FFAF00)>300<c(FFFFFF)> m."}
		{"spike-er_x1"													"ATGM<c(FFAF00)> SPIKE-ER<c(FFFFFF)>\n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"spike-lr_x1"													"ATGM<c(FFAF00)> SPIKE-LR<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"spike-lr_x2"													"ATGM<c(FFAF00)> SPIKE-LR<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Strela10_x4"													"PU<c(FFAF00)><c(FFFFFF)> with 4 SAM<c(00FF00)><c(FFFFFF)> \n range - <c(FFAF00)>160<c(FFFFFF)> m."}
		{"strelets_left"												"MANPAD <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Igla-S»<c(FFFFFF)>"}
		{"strelets_right"												"MANPAD <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Igla-S»<c(FFFFFF)>"}
		{"TOW"															"ATGM <c(FFAF00)>BGM-71C<c(FFFFFF)><c(00FF00)> TOW<c(FFFFFF)> \n range - <c(FFAF00)>135..150<c(FFFFFF)> m."}
		{"TOWx2"														"ATGM<c(FFAF00)> BGM-71C<c(FFFFFF)><c(00FF00)> TOW<c(FFFFFF)> \n range - <c(FFAF00)>135..150<c(FFFFFF)> m."}
		{"Trigat_LR"													"<c(FFAF00)>«Trigat-LR»<c(FFFFFF)>"}
		{"tunguska_9m311_x8"											"SAM<c(FFAF00)> 9M311<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
	}
;bazooka
	{"ammo"
		{"c90-cr cm"													"grenade C90-CR"}
		{"dm32_injector"												"<c(CF9FFF)>Injector DM-32</c>"}				;t
		{"eryx_rock"													"<c(00FF00)>«ERYX»<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"eryx_rock_impactor"											"<c(CF9FFF)>Impactor «ERYX» Rocket</c>"}		;t
		{"fim-92a_ammo"													"SAM <c(FFAF00)>FIM-92J<c(FFFFFF)><c(00FF00)> «Stinger»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,45<c(FFFFFF)> kg.\n range - <c(FFAF00)>158<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"fim-92a_impactor"												"<c(CF9FFF)>Impactor FIM-92J «Stinger»</c>"}	;t
		{"fn6a_ammo"													"SAM <c(FFAF00)>FN-6A<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"fn6a_ammo_impactor"											"<c(CF9FFF)>Impactor FN-6A</c>"}				;t
		{"gat-3_ammo"													"grenade GAT-3"}		
		{"gustaf3 heat551"												"grenade<c(FFAF00)> HEAT 551<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n piercing - <c(FF1F00)>420<c(FFFFFF)> mm \n range - <c(FFAF00)>67<c(FFFFFF)> m."}
		{"gustaf3 heat751"												"grenade<c(FFAF00)> HEAT 751<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n piercing - <c(FF1F00)>550<c(FFFFFF)> mm \n range - <c(FFAF00)>63<c(FFFFFF)> m.\n warhead - tandem"}
		{"heat_apilas"													"grenade AC 112 F1"}
		{"heat_pf98 cm"													"grenade <c(00FF00)><c(FFFFFF)><c(FFAF00)> DZV1<c(FFFFFF)>\n piercing - <c(FF1F00)>800<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n warhead - tandem"}
		{"heat_pf98 fg"													"grenade <c(00FF00)><c(FFFFFF)><c(FFAF00)> DZV2<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,0<c(FFFFFF)> kg.\n piercing - <c(FF1F00)>400<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n - MP zarjad - "}
		{"igla_S"														"SAM<c(FFAF00)> 9M342<c(FFFFFF)><c(00FF00)> «Igla-S»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,585<c(FFFFFF)> kg.\n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - anti-air - "}
		{"igla_S_impactor"												"<c(CF9FFF)>Impactor 9M342 «Igla-S»</c>"}		;t
		{"igla_S1_impactor"												"<c(CF9FFF)>Impactor 9M342-1 «Igla-S1»</c>"}	;t
		{"igla_S2_impactor"												"<c(CF9FFF)>Impactor 9M342-2 «Igla-S2» </c>"}	;t
		{"jav_rock"														"<c(00FF00)>Javelin<c(FFFFFF)><c(FFAF00)> FGM-148E<c(FFFFFF)> Block-1<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>110<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - top attack - "}
		{"jav_rock_impactor"											"<c(CF9FFF)>Impactor Javelin FGM-148E</c>"}		;t
		{"javf_rock"													"<c(00FF00)>Javelin<c(FFFFFF)><c(FFAF00)> FGM-148F<c(FFFFFF)> Block-1<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - top attack - "}
		{"javf_rock_impactor"											"<c(CF9FFF)>Impactor Javelin FGM-148F</c>"}		;t
		{"m47dragon_rock"												"<c(00FF00)>Dragon 2+<c(FFFFFF)><c(FFAF00)> M47<c(FFFFFF)><c(FFFFFF)>\n piercing - <c(FF1F00)>610<c(FFFFFF)> mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)>"}
		{"m47dragon_rock_impactor"										"<c(CF9FFF)>Impactor M47</c>"}		;t
		{"m72a4"														"grenade M72A4"}
		{"m72a6law"														"grenade M72A6"}
		{"m72a10"														"grenade M72A10"}
		{"m72law"														"grenade M72A3"}
		{"M136"															"grenade AT-4 HP"}
		{"M136A"														"grenade AT-4 HEAT"}
		{"matador_ammo"													"Matador"}
		{"matador_injector"												"<c(CF9FFF)>Injector Matador</c>"}				;t
		{"nlaw_rocket"													"grenade NLAW"}
		{"nlaw_core_impactor"											"<c(CF9FFF)>Impactor NLAW Core</c>"}			;t
		{"nlaw_rocket_impactor"											"<c(CF9FFF)>Impactor NLAW Rocket</c>"}			;t
		{"pf89b_ammo"													"grenade PF89B"}		
		{"pfaust3_ammo"													"grenade Panzerfaust 3"}
		{"PG-7V RPG7"													"grenade<c(FFAF00)> PG-7V<c(FFFFFF)>\n piercing - <c(FF1F00)>260<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m."}
		{"PG-7VL RPG7"													"grenade<c(FFAF00)> PG-7VL<c(FFFFFF)><c(00FF00)> «Luch»<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>47<c(FFFFFF)> m."}
		{"PG-7VM RPG7"													"grenade<c(FFAF00)> PG-7VM<c(FFFFFF)>\n piercing - <c(FF1F00)>300<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m."}
		{"PG-7VR RPG7"													"grenade<c(FFAF00)> PG-7VR<c(FFFFFF)><c(00FF00)> «Rezjume»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n warhead - tandem"}
		{"PG-7VS RPG7"													"grenade<c(FFAF00)> PG-7VS<c(FFFFFF)>\n piercing - <c(FF1F00)>400<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m."}					
		{"PG-29V RPG29"													"grenade<c(FFAF00)> PG-29V<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n warhead - tandem"}
		{"pzf3 dm12a1"													"grenade<c(FFAF00)> DM-12A1<c(FFFFFF)> <c(00FF00)>«Pzf-3»<c(FFFFFF)>\n piercing - <c(FF1F00)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"pzf3 dm22"													"grenade<c(FFAF00)> DM-22<c(FFFFFF)> <c(00FF00)>«Pzf-3T»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n warhead - tandem"}
		{"pzf3 dm22i"													"grenade<c(FFAF00)> DM-22<c(FFFFFF)> Improved<c(00FF00)> «Pzf-3IT»<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n warhead - tandem"}
		{"pzf3 dm32"													"grenade<c(FFAF00)> DM-32<c(FFFFFF)><c(00FF00)> «Bunkerfaust»<c(FFFFFF)>\n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n warhead - HEAT-fragmentary - "}
		{"red_arrow12_rock"												"<c(00FF00)>Red Arrow<c(FFFFFF)><c(FFAF00)> 12<c(FFFFFF)><c(FFFFFF)>\n piercing - <c(FF1F00)>1100<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"red_arrow12_rock_impactor"									"<c(CF9FFF)>Impactor Red Arrow 12</c>"}			;t
		{"rocket_shipon_at_af"											"Shipon"}
		{"RPG7"															"<c(CF9FFF)>Loading mediator RPG-7"}	;t
		{"RPG7_og-7V RPG7"												"grenade<c(FFAF00)> OG-7V<c(FFFFFF)><c(00FF00)> «Oskolok»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,37<c(FFFFFF)> kg.\n range - <c(FFAF00)>67<c(FFFFFF)> m.\n warhead - fragmentary"}
		{"RPG16"														"grenade PG-16"}
		{"RPG18"														"grenade PG-18"}
		{"RPG22"														"grenade PG-22"}
		{"RPG26"														"grenade PG-26"}
		{"RPG27"														"grenade PG-27"}
		{"RPG-28"														"grenade PG-28"}
		{"RPG30"														"grenade PG-30"}
		{"rpg75_heat"													"grenade RPG-75"}
		{"RPG76_heat"													"grenade RPG-76"}
		{"rshg-1"														"grenade ShG-1"}
		{"rshg-2"														"grenade ShG-2"}
		{"Shmel_ammo"													"grenade Shmel"}
		{"Shmelfl_ammo"													"grenade Shmel"}
		{"Shmelm_ammo fg"												"<c(d7cc81)> RPO-M<c(FFFFFF)><c(00FF00)> «Shmel-M»<c(FFFFFF)>\n HE mass -<c(FF1F00)> 3<c(FFFFFF)> kg \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,67<c(FFFFFF)>mils\n - thermobaric - "}
		{"SMAW cm"														"grenade <c(00FF00)>SMAW<c(FFFFFF)><c(FFAF00)> Mk6<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m."}
		{"SMAW fg"														"grenade <c(00FF00)>SMAW<c(FFFFFF)><c(FFAF00)> Mk3<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,1<c(FFFFFF)> kg.\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n warhead - <c(D781CC)>thermobaric<c(FFFFFF)>"}
		{"spike-sr"														"ATGM <c(FFAF00)>SPIKE-SR<c(FFFFFF)>\n piercing - <c(FF1F00)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n guidance type -<c(00FF00)> <c(FFFFFF)>\n warhead - tandem "}
		{"spike-sr_impactor"											"<c(CF9FFF)>Impactor SPIKE-SR</c>"}				;t
		{"sraw_core_impactor"											"<c(CF9FFF)>Impactor SRAW Core</c>"}			;t
		{"sraw_rock"													" "} ;null
		{"sraw_rock_impactor"											"<c(CF9FFF)>Impactor SRAW Rocket</c>"}			;t
		{"TBG-7V RPG7"													"grenade<c(FFAF00)> TBG-7V<c(FFFFFF)><c(00FF00)> «Tanin»<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>61<c(FFFFFF)> m.\n warhead - <c(D781CC)>thermobaric<c(FFFFFF)>"}
		{"TBG-29 RPG29"													"grenade<c(FFAF00)> TBG-29<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n warhead - <c(D781CC)>thermobaric<c(FFFFFF)>"}
	}
	{"stuff"
	}
	{"weapon"
		{"73mm_spg9"													"<c(FFFFFF)>73mm<c(FFAF00)> SPG-9<c(FFFFFF)><c(00FF00)> «Kope»<c(FFFFFF)>\n range - <c(FFAF00)>85..150<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,4<c(FFFFFF)>mils "}
		{"apilas"														"Grenade launcher<c(d7cc81)> RAC-112<c(FFFFFF)><c(00FF00)> Apilas<c(FFFFFF)>\n piercing - <c(FF1F00)>720<c(FFFFFF)> mm range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa."}	
		{"c90-cr_(m3)"													"<c(d7cc81)> C-90CR<c(FFFFFF)><c(FFAF00)>M3<c(FFFFFF)> \n piercing - <c(FF1F00)>400<c(FFFFFF)> mm \n range - <c(FFAF00)>47<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"carl_gustaf_m3"												"Grenade launcher <c(00FF00)>Carl Gustaf<c(FFFFFF)><c(FFAF00)> M3<c(FFFFFF)>\n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 11.8<c(FFFFFF)> moa.\n shells  -<c(FFAF00)> HEAT 551<c(FFFFFF)> ,<c(FFAF00)> HEAT 751<c(FFFFFF)>"}
		{"dzg-141"														"<c(d7cc81)>DZG-141<c(FFFFFF)>\n HE mass -<c(FF1F00)> 2,1<c(FFFFFF)> kg \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6.0<c(FFFFFF)> moa."}	
		{"eryx"															"ATGM <c(00FF00)>«ERYX»<c(FFFFFF)>\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)> "}
		{"fim-92a"														"MANPAD <c(FFAF00)>FIM-92<c(FFFFFF)><c(00FF00)> «Stinger»<c(FFFFFF)> \n range - <c(FFAF00)>158<c(FFFFFF)> m."}
		{"fim-92a_x4"													"MANPAD <c(FFAF00)>FIM-92<c(FFFFFF)><c(00FF00)> «Stinger»<c(FFFFFF)> \n range - <c(FFAF00)>158<c(FFFFFF)> m."}
		{"fn6a"															"MANPAD <c(FFAF00)>FN-6A<c(FFFFFF)><c(00FF00)> «Hong Ying 6» <c(FFFFFF)>\n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"fn6ax4"														"MANPAD <c(FFAF00)>FN-6A<c(FFFFFF)><c(00FF00)> «Hong Ying 6» <c(FFFFFF)>\n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"hj12e_atgm"													"ATGM <c(00FF00)>Red Arrow<c(FFFFFF)><c(FFAF00)> 12<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"igla"															"MANPAD <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Igla-S»<c(FFFFFF)>\n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
		{"javelin"														"ATGM <c(FFAF00)>FGM-148<c(FFFFFF)><c(00FF00)> «Javelin»<c(FFFFFF)> \n range - <c(FFAF00)>110..140<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - top attack - "}
		{"javelin_apc"													"ATGM <c(FFAF00)>FGM-148<c(FFFFFF)><c(00FF00)> «Javelin»<c(FFFFFF)> \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head \n - top attack - "}
		{"m47dragon_m2plus"												"ATGM <c(FFAF00)>M47<c(FFFFFF)><c(00FF00)> «Dragon 2+»<c(FFFFFF)>\n range - <c(FFAF00)>70<c(FFFFFF)> m.\n guidance type -<c(00FF00)> optic<c(FFFFFF)> "}
		{"m72a4law"														"<c(d7cc81)>M72A4 LAW<c(FFFFFF)>\n piercing - <c(FF1F00)>355<c(FFFFFF)> mm \n range - <c(FFAF00)>46<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"m72a6law"														"<c(d7cc81)>M72A7 LAW<c(FFFFFF)>\n HE mass -<c(FF1F00)> 0,6<c(FFFFFF)> kg \n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>46<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 15<c(FFFFFF)> moa.\n - MP zarjad - "}
		{"m72a10law"													"<c(d7cc81)>M72A10 LAW<c(FFFFFF)>\n HE mass -<c(FF1F00)> 1,0<c(FFFFFF)> kg \n range - <c(FFAF00)>46<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"m72law"														"<c(d7cc81)>M72A3 LAW<c(FFFFFF)>\n piercing - <c(FF1F00)>305<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"M136"															"<c(d7cc81)>AT-4<c(FFFFFF)><c(FFAF00)> CS HP<c(FFFFFF)> \n piercing - <c(FF1F00)>500<c(FFFFFF)> mm \n range - <c(FFAF00)>47<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n - variant M136E1 for USA - "}
		{"M136A"														"<c(d7cc81)>AT-4<c(FFFFFF)><c(FFAF00)> HEAT<c(FFFFFF)> \n piercing - <c(FF1F00)>420<c(FFFFFF)> mm \n range - <c(FFAF00)>47<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n - variant M136 for USA - "}
		{"matador"														"<c(00FF00)>Matador<c(FFFFFF)> MP\n HE mass -<c(FF1F00)> 2<c(FFFFFF)> kg\n piercing - <c(FF1F00)>100<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa.\n - HE-frag zarjad - "}
		{"nlaw"															"ATGM<c(FFAF00)> MBT<c(FFFFFF)><c(00FF00)> NLAW<c(FFFFFF)>\n HE mass -<c(FF1F00)> 1,0<c(FFFFFF)> kg\n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n guidance type - inertial \n - MP zarjad - "}
		{"panzerfaust3"													"Grenade launcher <c(00FF00)>Panzerfaust-3<c(FFFFFF)>\n range - <c(FFAF00)>53<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10..11<c(FFFFFF)> moa.\n variant LU for  -<c(FFAF00)> Pzf-3T<c(FFFFFF)> ,<c(FFAF00)> PzF-3IT<c(FFFFFF)>,<c(FFAF00)> Bkf<c(FFFFFF)>"}
		{"pf69"															"Grenade launcher<c(d7cc81)> PF-69<c(FFFFFF)>\n range - <c(FFAF00)>40..67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5.28...23.92<c(FFFFFF)> moa.\n - optic sight PGO 7V3 (2,7x) - \n - scope - \n shells -<c(FFAF00)> PG-7V<c(FFFFFF)> ,<c(FFAF00)> PG-7VM<c(FFFFFF)> ,<c(FFAF00)> PG-7VS<c(FFFFFF)> \n <c(FFAF00)> PG-7VL<c(FFFFFF)> ,<c(FFAF00)> PG-7VR<c(FFFFFF)> ,<c(FFAF00)> OG-7V<c(FFFFFF)> ,<c(FFAF00)> TBG-7V<c(FFFFFF)>"}
		{"pf89b"														"<c(d7cc81)>PF-89B<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6.0<c(FFFFFF)> moa."}	
		{"pf98"															"Grenade launcher<c(d7cc81)> PF-98<c(FFFFFF)><c(00FF00)> «Queen Bee»<c(FFFFFF)>\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"rpg7"															"Grenade launcher<c(d7cc81)> RPG-7V2<c(FFFFFF)>\n range - <c(FFAF00)>40..67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5.28...23.92<c(FFFFFF)> moa.\n - optic sight PGO 7V3 (2,7x) - \n - scope UP-7V - \n shells -<c(FFAF00)> PG-7V<c(FFFFFF)> ,<c(FFAF00)> PG-7VM<c(FFFFFF)> ,<c(FFAF00)> PG-7VS<c(FFFFFF)> \n <c(FFAF00)> PG-7VL<c(FFFFFF)> ,<c(FFAF00)> PG-7VR<c(FFFFFF)> ,<c(FFAF00)> OG-7V<c(FFFFFF)> ,<c(FFAF00)> TBG-7V<c(FFFFFF)>"}
		{"rpg16"														"Grenade launcher<c(d7cc81)> RPG-16<c(FFFFFF)>\n range - <c(FFAF00)>70<c(FFFFFF)> m.\n piercing - <c(FF1F00)>300<c(FFFFFF)> mm\n accuracy -<c(4d6ff7)> 6<c(FFFFFF)> moa."}
		{"RPG18"														"<c(d7cc81)>RPG-18<c(FFFFFF)><c(00FF00)> «Mukha»<c(FFFFFF)>\n piercing - <c(FF1F00)>300<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 19.26<c(FFFFFF)> moa."}	
		{"RPG22"														"<c(d7cc81)>RPG-22<c(FFFFFF)><c(00FF00)> «Netto»<c(FFFFFF)>\n piercing - <c(FF1F00)>400<c(FFFFFF)> mm \n range - <c(FFAF00)>42<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 15.6<c(FFFFFF)> moa."}
		{"RPG26"														"<c(d7cc81)>RPG-26<c(FFFFFF)><c(00FF00)> «Аglen»<c(FFFFFF)>\n piercing - <c(FF1F00)>500<c(FFFFFF)> mm \n range - <c(FFAF00)>42<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 14.07<c(FFFFFF)> moa."}
		{"RPG27"														"<c(d7cc81)>RPG-27<c(FFFFFF)><c(00FF00)> «Tavolga»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n - tandem warhead - "}
		{"rpg-28"														"<c(d7cc81)>RPG-28<c(FFFFFF)><c(00FF00)> «Kljukva»<c(FFFFFF)>\n piercing - <c(FF1F00)>950<c(FFFFFF)> mm \n range - <c(FFAF00)>47<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 19.9<c(FFFFFF)> moa.\n - tandem warhead - "}
		{"rpg29"														"Grenade launcher<c(d7cc81)> RPG-29<c(FFFFFF)><c(00FF00)> «Vampir»<c(FFFFFF)> \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7.97<c(FFFFFF)> moa.\n - optic sight PGO 29 - \n shells -<c(FFAF00)> PG-29V<c(FFFFFF)> ,<c(FFAF00)> TBG-29<c(FFFFFF)> "}
		{"RPG-30"														"<c(d7cc81)>RPG-30<c(FFFFFF)><c(00FF00)> «Krjuk»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n - tandem warhead - \n - imitator for preodolenija active defense - "}
		{"rpg75"														"<c(d7cc81)>RPG-75<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n piercing - <c(FF1F00)>330<c(FFFFFF)> mm \n range - <c(FFAF00)>44<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 19.26<c(FFFFFF)> moa."}	
		{"rpg76"														"<c(d7cc81)>RPG-76<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n piercing - <c(FF1F00)>330<c(FFFFFF)> mm \n range - <c(FFAF00)>44<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 20<c(FFFFFF)> moa."}	
		{"RSHG-1"														"<c(d7cc81)>RShG-1<c(FFFFFF)>\n HE mass -<c(FF1F00)> 1,8<c(FFFFFF)> kg \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n "}
		{"RSHG-2"														"<c(d7cc81)>RShG-2<c(FFFFFF)><c(00FF00)> «Аglen-2»<c(FFFFFF)>\n HE mass -<c(FF1F00)> 1,15<c(FFFFFF)> kg \n range - <c(FFAF00)>43<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 26.7<c(FFFFFF)> moa.\n "}
		{"shipon"														"Grenade launcher <c(00FF00)>Shipon<c(FFFFFF)>\n piercing - <c(FF1F00)>800<c(FFFFFF)> mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"Shmel"														"<c(d7cc81)>RPO-А<c(FFFFFF)><c(00FF00)> «Shmel»<c(FFFFFF)>\n HE mass -<c(FF1F00)> 2,1<c(FFFFFF)> kg \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 13<c(FFFFFF)> moa.\n - thermobaric - "}
		{"Shmelfl"														"<c(d7cc81)>RPO-Z<c(FFFFFF)><c(00FF00)> «Shmel»<c(FFFFFF)>\n HE mass -<c(FF1F00)> 2,1<c(FFFFFF)> kg \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 13<c(FFFFFF)> moa.\n - incendiary - "}
		{"SMAW"															"Grenade launcher<c(d7cc81)> Mk.153<c(FFFFFF)><c(00FF00)> SMAW<c(FFFFFF)>\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa.\n shells -<c(FFAF00)> Mk.3<c(FFFFFF)> ,<c(FFAF00)> Mk.6<c(FFFFFF)>"}
		{"spike-sr"														"ATGM<c(FFAF00)> SPIKE-SR<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"sraw"															"ATGM<c(FFAF00)> FGM-172<c(FFFFFF)><c(00FF00)> SRAW<c(FFFFFF)>\n HE mass -<c(FF1F00)> 1,0<c(FFFFFF)> kg\n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n guidance type - inertial \n - MP zarjad - "}
		{"stinger"														"MANPAD<c(FFAF00)> FIM-92<c(FFFFFF)><c(00FF00)> «Stinger»<c(FFFFFF)>\n range - <c(FFAF00)>158<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> IK<c(FFFFFF)> head "}
	}
;body
	{"ammo"
		
	}
	{"stuff"
		{"6b2"															"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)> Driver's Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_backpack"													"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)>  with backpack Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_gp"														"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)> sharpshooter's  Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_rpg"														"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_rpghelp"													"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)> assistant's Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_smg"														"Bulletproof vest <c(00FF00)>6B2<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b5-11"														"Bulletproof vest <c(00FF00)>6B5-11<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>1-1-1<c(FFFFFF)> \nCollar"}
		{"6b5-11_rpg"													"Bulletproof vest <c(00FF00)>6B5-11<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>1-1-1<c(FFFFFF)> \nCollar"}
		{"6b5-11_spec"													"Bulletproof vest <c(00FF00)>6B5-11<c(FFFFFF)> with backpack Russian army\nProtection level front-back-side <c(FF0000)>1-1-1<c(FFFFFF)> \nCollar"}
		{"6b5-13"														"Bulletproof vest <c(00FF00)>6B5-13<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>4-4-1<c(FFFFFF)> \nCollar"}
		{"6b5-13_rpg"													"Bulletproof vest <c(00FF00)>6B5-13<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>4-4-1<c(FFFFFF)> \nCollar"}
		{"6b5-13_spec"													"Bulletproof vest <c(00FF00)>6B5-13<c(FFFFFF)> with backpack Russian army\nProtection level front-back-side <c(FF0000)>4-4-1<c(FFFFFF)> \nCollar"}
		{"6b5-16"														"Bulletproof vest <c(00FF00)>6B5-16<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>4-1-1<c(FFFFFF)> \nCollar"}
		{"6b5-16_rpg"													"Bulletproof vest <c(00FF00)>6B5-16<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>4-1-1<c(FFFFFF)> \nCollar"}
		{"6b5-16_spec"													"Bulletproof vest <c(00FF00)>6B5-16<c(FFFFFF)> with backpack Russian army\nProtection level front-back-side <c(FF0000)>4-1-1<c(FFFFFF)> \nCollar"}
		{"6b23-1"														"Bulletproof vest <c(00FF00)>6B23-1<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b23-1_6sh92"													"Bulletproof vest <c(00FF00)>6B23-1<c(FFFFFF)> 6Sh92 Russian army\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b23-1_smersh"												"Bulletproof vest <c(00FF00)>6B23-1<c(FFFFFF)> Smersh Russian army\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45"															"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)>  Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_medic"													"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> medic's Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_pulemetchik"												"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for machinegunner Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_rpg"														"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_rpg7"													"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_sniper"													"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for sniper Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_sniper1"													"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for sniper Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_strelok"													"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> for soldier Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45_ststrelok"												"Bulletproof vest <c(00FF00)>6B45<c(FFFFFF)> sharpshooter's Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"6b45-1_medic"													"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> medic's Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_pulemetchik"											"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> for machinegunner Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_rpg"													"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_rpg7"													"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> for AT infantry Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_sniper"												"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> for sniper Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_strelok"												"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> for soldier Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b45-1_ststrelok"												"Bulletproof vest <c(00FF00)>6B45-1<c(FFFFFF)> sharpshooter's Russian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"6b48"															"Jacket <c(00FF00)>6B48<c(FFFFFF)> for tankman Russian army"}
		{"6sh92"														"Tactical jacket 6Sh92 Russian army"}
		{"apsv_us_helipilot"											"Survival vest <c(00FF00)>APSV<c(FFFFFF)> for heli pilot USAF"}
		{"azart"														"<c(ffff60)>Ratsija</c>"}	;future
		{"bel_vest_gp"													"Tactical jacket sharpshooter's Belorussian army"}
		{"bel_vest_mgun"												"Tactical jacket for machinegunner Belorussian army"}
		{"bel_vest_rpg"													"Tactical jacket for AT infantry Belorussian army"}
		{"bel_vest_smg"													"Tactical jacket for soldier Belorussian army"}
		{"bel_vest_sniper"												"Tactical jacket for sniper Belorussian army"}
		{"bjo02_clean"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)>  Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_gp"														"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> sharpshooter's Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_gp_a"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> sharpshooter's Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_mg"														"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for machinegunner Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_mg_a"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for machinegunner Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_rpg"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for AT infantry Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_rpg_a"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for AT infantry Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_smg"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for soldier Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_smg_a"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for soldier Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_sniper"													"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for sniper Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_sniper_a"												"Bulletproof vest <c(00FF00)>BJO-02<c(FFFFFF)> for sniper Kazakhstanian army\nProtection level front-back-side <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"civilian_vest"												"Bulletproof vest   civilian\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"civilian_vest_smersh"											"Bulletproof vest   civilian (Smersh)\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"est_vest"														"Bulletproof vest  Estonian army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)>"}
		{"gpb_vest"														"Bulletproof vest <c(00FF00)>GPB<c(FFFFFF)>  French\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"gpb_vest_backpack"											"Bulletproof vest <c(00FF00)>GPB<c(FFFFFF)> with backpack French\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"gpb_vest_driver"												"Bulletproof vest <c(00FF00)>GPB<c(FFFFFF)> Driver's French\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"heli_vest_en"													"Survival vest for heli pilot VBritish army"}
		{"heli_vest_fr"													"Survival vest for heli pilot VFrench"}
		{"hun_vest"														"Tactical jacket Hungarian army"}
		{"hun_vest_rpg"													"Tactical jacketfor AT infantry Hungarian army"}
		{"idf_marom_dolphin"											"Bulletproof vest <c(00FF00)>Marom Dolphin<c(FFFFFF)>  Israel army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_marom_dolphin_driver"										"Bulletproof vest <c(00FF00)>Marom Dolphin<c(FFFFFF)> Driver's Israel army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_marom_dolphin_mgun"										"Bulletproof vest <c(00FF00)>Marom Dolphin<c(FFFFFF)> for machinegunner Israel army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_tankvest"													"Bulletproof vestfor tankman Israel army"}
		{"imtv_clear"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)>  US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_gp"														"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> sharpshooter's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_gp_a"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> sharpshooter's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_marksman"												"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> marksman's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_marksman_a"												"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> marksman's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_medic"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> medic's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_mgun"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for machinegunner US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_mgun_a"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for machinegunner US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_rpg"														"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for AT infantry US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_rpg_a"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for AT infantry US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_smg"														"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for soldier US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_smg_a"													"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> for soldier US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"imtv_smg_no_g"												"Bulletproof vest <c(00FF00)>IMTV<c(FFFFFF)> Driver's US Marines\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"iotv_clear"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)>  US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_clear"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)>  US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_gp"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> sharpshooter's US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_gp_a"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> sharpshooter's US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_marksman"												"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> marksman's US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_marksman_a"											"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> marksman's US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_mgun"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for machinegunner US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_mgun_a"												"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for machinegunner US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_rpg"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for AT infantry US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_rpg_a"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for AT infantry US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_smg"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_g_smg_a"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar, Groin plate"}
		{"iotv_smg"														"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"iotv_smg_a"													"Bulletproof vest <c(00FF00)>IOTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"iran_vest"													"Bulletproof vest  Iranian army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"iran_vest_backpack"											"Bulletproof vest  Iranian army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"jsdf_vest"													"Bulletproof vest  Japan army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)>"}
		{"korsar3m"														"Bulletproof vest <c(00FF00)>Korsar-3M<c(FFFFFF)> Ukrainian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"korsar3m_rpg"													"Bulletproof vest <c(00FF00)>Korsar-3M<c(FFFFFF)> for AT infantry Ukrainian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"korsar3m_vdv"													"Bulletproof vest <c(00FF00)>Korsar-3M<c(FFFFFF)> VDV Ukrainian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"korsar3m_vdv_rpg"												"Bulletproof vest <c(00FF00)>Korsar-3M<c(FFFFFF)>for AT infantry VDV Ukrainian army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"lat_tactical_vest"											"Bulletproof vest Latvian army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"lbt6094_bandit_marksman"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier \nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"lbt6094_bandit_smg"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier \nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"lbt6094_clear"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)>   \nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_cmp_smg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)>   \nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_gp"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_gp_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_marksman"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_marksman_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_mgun"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_mgun_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_rpg"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_smg"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_delta_smg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  Delta Force\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_gp"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_gp_a"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_marksman"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_marksman_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_mgun"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_mgun_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_rpg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_smg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_idf_smg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  Sayeret Matkal\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_gp"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_gp_a"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_marksman"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_marksman_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_mgun"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_mgun_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_rpg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_smg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_ksk_smg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  KSK\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_od_clear"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)>   \nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_gp"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_gp_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_marksman"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_marksman_a"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_mgun"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_mgun_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_rpg"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_rpg_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_smg"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rangers_smg_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  for rangers USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp_a"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp_belt"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for sniper Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman_a"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for sniper Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman_belt"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for sniper Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_mg_rpg_help_belt"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> assistant's Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_mgun"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_mgun_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_rpg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg_belt"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier Russian SSO\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_gp_belt"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_marksman_belt"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_mg_rpg_help_belt"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> assistant's  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_mgun"												"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_sas_smg_belt"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier  SAS\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_gp_belt"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> sharpshooter's Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_marksman_belt"									"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> marksman's Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_mg_rpg_help_belt"								"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> assistant's Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_mgun"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for machinegunner Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_rpg_a"											"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for AT infantry Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lbt6094_seals_smg_belt"										"Bulletproof vest <c(00FF00)>LBT6094<c(FFFFFF)> for soldier Navy Seals USA\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"lit_vest"														"Tactical jacket Lituanian army"}
		{"lpsv_us_pilot"												"Survival vest <c(00FF00)>LPSV<c(FFFFFF)> pilot's USAF"}
		{"naz_ir"														"Survival vest <c(00FF00)>NАZ-IR<c(FFFFFF)> VKS pilot"}
		{"npp_2006_com"													"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> sergeant's Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_gp"													"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> sharpshooter's Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_mg"													"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> for machinegunner Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_mg_rpg_help"											"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> assistant's Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_rpg"													"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> for AT infantry Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_rpg2"												"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> for AT infantry Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"npp_2006_smg"													"Bulletproof vest <c(00FF00)>NPP 2006<c(FFFFFF)> for soldier Czech army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"osprey_driver"												"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> Driver's British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"osprey_marksman"												"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> marksman's British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"osprey_mg_rpg_help"											"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> assistant's British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"osprey_mgun"													"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> for machinegunner British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"osprey_smg"													"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> for soldier British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"osprey_sniper"												"Bulletproof vest <c(00FF00)>Osprey Mk4<c(FFFFFF)> for sniper British army\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \nCollar"}
		{"otv_gp"														"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> sharpshooter's US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_mg"														"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> for machinegunner US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_smg"														"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_sniper"													"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> marksman's US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_gp"													"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> sharpshooter's US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_mg"													"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> for machinegunner US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_smg"													"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> for soldier US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_sniper"												"Bulletproof vest <c(00FF00)>OTV<c(FFFFFF)> marksman's US army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"pol_borderguard_vest"											"Bulletproof vest borderguard's Polish\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"pol_kwm02_clear"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_gp"													"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> sharpshooter's Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_gp_a"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> sharpshooter's Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_marksman"											"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> marksman's Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_marksman_a"											"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> marksman's Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_mgun"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> for machinegunner Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_mgun_a"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> for machinegunner Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_smg"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> for soldier Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"pol_kwm02_smg_a"												"Bulletproof vest <c(00FF00)>KWM02<c(FFFFFF)> for soldier Polish\nProtection level front-back-side <c(FF0000)>5a-5a-5a<c(FFFFFF)> \nCollar"}
		{"poyas_a_irq"													"Tactical jacket <c(00FF00)>Pojas-А (Iraq)<c(FFFFFF)>  "}
		{"poyas_a_irq_rpg"												"Tactical jacket <c(00FF00)>Pojas-А (Iraq)<c(FFFFFF)> for AT infantry "}
		{"poyas_a_var1"													"Tactical jacket <c(00FF00)>Pojas-А var.1<c(FFFFFF)>  "}
		{"poyas_a_var1_rpg"												"Tactical jacket <c(00FF00)>Pojas-А var.1<c(FFFFFF)> for AT infantry "}
		{"poyas_a_var4"													"Tactical jacket <c(00FF00)>Pojas-А var.4<c(FFFFFF)>  "}
		{"poyas_a_var4_rpg"												"Tactical jacket <c(00FF00)>Pojas-А var.4<c(FFFFFF)> for AT infantry "}
		{"poyas_a_var4gp"												"Tactical jacket <c(00FF00)>Pojas-А var.4 with Pojas-B<c(FFFFFF)>  "}
		{"poyas_a_var4gp_rpg"											"Tactical jacket <c(00FF00)>Pojas-А var.4 with Pojas-B<c(FFFFFF)> for AT infantry "}
		{"radio_station_sumka"											"Russian radio kit"}
		{"rpg_bag"														"<c(00FF00)>Sumka for RPG-7<c(FFFFFF)> "}
		{"rubin_clean"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)>  Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_gp"														"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> sharpshooter's Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_gp_a"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> sharpshooter's Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_mg"														"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for machinegunner Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_mg_a"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for machinegunner Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_rpg"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for AT infantry Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_rpg_a"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for AT infantry Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_smg"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for soldier Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_smg_a"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for soldier Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_sniper"													"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for sniper Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_sniper_a"												"Bulletproof vest <c(00FF00)>Rubin<c(FFFFFF)> for sniper Belorussian army\nProtection level front-back-side <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rus_radio_station"											"Russian radio kit"}
		{"scuba"														"Аkvalang"}
		{"shahid_vest"													"Jacket shakhida"}
		{"shutzweste"													"Bulletproof vest <c(00FF00)>Shutzweste<c(FFFFFF)>  Bundeswehr\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"shutzweste_backpack"											"Bulletproof vest <c(00FF00)>Shutzweste<c(FFFFFF)> with backpack Bundeswehr\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"shutzweste_driver"											"Bulletproof vest <c(00FF00)>Shutzweste<c(FFFFFF)> Driver's Bundeswehr\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"smb_gp_belt"													"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> sharpshooter's  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smb_marksman_belt"											"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> marksman's  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smb_mg_rpg_help_belt"											"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> assistant's  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smb_mgun"														"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> for machinegunner  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smb_rpg_a"													"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> for AT infantry  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smb_smg_belt"													"Bulletproof vest <c(00FF00)>SMB<c(FFFFFF)> for soldier  1Er Rpima\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"smersh"														"Tactical jacket <c(00FF00)>Smersh<c(FFFFFF)>  "}
		{"svrv_vest"													"Bulletproof vest <c(00FF00)>SVRV<c(FFFFFF)> VS Turtsii\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"taiwan_vest"													"Bulletproof vest <c(00FF00)><c(FFFFFF)> VS Tajvanja\nProtection level front-back-side <c(FF0000)>6a-6a-6a<c(FFFFFF)> \n"}
		{"tajik_vest"													"Bulletproof vest Tajikistan army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tajik_vest_rpg"												"Bulletproof vest for AT infantry Tajikistan army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tajik_vest_smg"												"Bulletproof vest for soldier Tajikistan army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tarzan"														"Tactical jacket <c(00FF00)>Tarzan<c(FFFFFF)>  "}
		{"tarzan_rpg"													"Tactical jacket <c(00FF00)>Tarzan<c(FFFFFF)> for AT infantry "}
		{"tat_ba_7"														"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)>  Syrian army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \nCollar"}
		{"tat_ba_7_assault"												"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)> assault Syrian army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \nCollar, Groin plate"}
		{"tat_ba_7_light"												"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)> Driver's Syrian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \nCollar"}
		{"tat_ba_7_ua"													"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)>  Ukrainian army\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"tat_ba_7_ua_assault"											"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)> assault Ukrainian army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"tat_ba_7_ua_light"											"Bulletproof vest <c(00FF00)>TAT-BA-7<c(FFFFFF)> Driver's Ukrainian army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"test_6b43"													"Dummy Test Armor - 6b43"}
		{"test_armor"													"Dummy Test Armor"}
		{"type04_vest"													"Bulletproof vest <c(00FF00)>Type04<c(FFFFFF)> artillerist's PLA\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type06_driver"												"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> Driver's PLA\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type06h_clean"												"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)>  PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_com"													"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> squadcom's PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_help"													"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> assistant's PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_medic"												"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> medic's PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_mgun"													"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> for machinegunner PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_officer"												"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> for officer PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_smg"													"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> for soldier PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_sniper"												"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> for sniper PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_uav"													"Bulletproof vest <c(00FF00)>Type06<c(FFFFFF)> operator's UAV PLA\nProtection level front-back-side <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type15_clear"													"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)>  PLA\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type15h_clear"												"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)>  PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_com"													"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> squadcom's PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_help"													"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> assistant's PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_mgun"													"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> for machinegunner PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_officer"												"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> for officer PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_smg"													"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> for soldier PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_sniper"												"Bulletproof vest <c(00FF00)>Type15<c(FFFFFF)> for sniper PLA\nProtection level front-back-side <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"us_tankman_vest"												"Jacket <c(00FF00)>OTV<c(FFFFFF)> for tankman US army"}
		{"us2003_tankman_vest"											"Jacket <c(00FF00)>OTV<c(FFFFFF)> for tankman US army"}
		{"usmc_tankman_vest"											"Jacket <c(00FF00)>OTV<c(FFFFFF)> for tankman US Marines"}
		{"vest_razgruz"													"Tactical jacket <c(00FF00)><c(FFFFFF)>  "}
		{"virtus_vest_clean"											"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> for tankman British army\nProtection level front-back-side <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"virtus_vest_gp"												"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> sharpshooter's British army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"virtus_vest_mg"												"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> for machinegunner British army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"virtus_vest_mg_rpg_help"										"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> assistant's British army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"virtus_vest_smg"												"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> for soldier British army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
		{"virtus_vest_sniper"											"Bulletproof vest <c(00FF00)>Virtus<c(FFFFFF)> marksman's British army\nProtection level front-back-side <c(FF0000)>6a-6a-2<c(FFFFFF)> \n"}
	}
	{"weapon"
		
	}
;bombing
	{"ammo"
		{"artillery_explosion"											"<c(CF9FFF)>Service Artillery Explosion</c>"}		;t
		{"artillery_explosion small"									"<c(CF9FFF)>Service Artillery Explosion Small</c>"}	;t
		{"outburst_nc"													"<c(CF9FFF)>Service Outburst NC</c>"}				;t
		{"outburst_small_nc"											"<c(CF9FFF)>Service Outburst Small NC</c>"}			;t
	}
	{"stuff"
		
	}
	{"weapon"
		
	}
;capacity
	{"ammo"

	}
	{"container"
		{"box"															"<c(ffff60)>Box</c>"}				;vanilla
		{"small_box"													"<c(ffff60)>Small Box</c>"}			;vanilla
	}
	{"stuff"
		;mp_resupply
			{"mp_cwr_cn_artpvo"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for artsistem i PVO.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_cn_avia"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for samoletov i vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_cn_common"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_cn_common1"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_cn_common2"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_nato_artpvo"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for artsistem i PVO.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_nato_avia"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for samoletov i vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_nato_common"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_nato_common1"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_nato_common2"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_rus_artpvo"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for artsistem i PVO.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_rus_avia"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for samoletov i vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_rus_common"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_rus_common1"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_rus_common2"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_usa_artpvo"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for artsistem i PVO.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_usa_avia"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for samoletov i vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_usa_common"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_usa_common1"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_cwr_usa_common2"										"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
		;mp_smallbox_resupply
			{"ammo_box_konkurs"											"Crate c ATGM <c(d7cc81)>«Konkurs»<c(FFFFFF)> "}
			{"ammo_boxm_konkurs"										"Crate c ATGM <c(d7cc81)>«Konkurs»<c(FFFFFF)> "}
			{"mp_smallbox_cn"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_smallbox_nato"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_smallbox_rus"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
			{"mp_smallbox_rus_konkurs"									"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for ATGM Konkurs.\nCrate mojno popolnit on flage brigadi."}
			{"mp_smallbox_usa"											"<c(FFAF00)>Crate with ammo<c(FFFFFF)>\nSoderjit boepripasi for tankov, bmp, stankovogo voorujenija(ATGM, АGS, minomet), ruchnogo strelkovogo voorujenija i grenade launcherov, vertoletov.\nCrate mojno popolnit on flage brigadi."}
		{"ammo_box_9mm"													"Crate with 9.mm ammo <c(d7cc81)>SP-5<c(FFFFFF)>\n                    <c(FFAF00)>800<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_127b32"												"Crate with 12.7 mm ammo <c(d7cc81)>B-32<c(FFFFFF)>\n                      <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n         - <c(9fd186)>belt variant<c(FFFFFF)> - "}
		{"ammo_box_127bs"												"Crate with 12.7 mm ammo <c(d7cc81)>AP<c(FFFFFF)>\n                     <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n - <c(26afeb)>AP<c(FFFFFF)>-<c(FF1F00)>incendiary<c(FFFFFF)> - "}
		{"ammo_box_127mdz"												"Crate with 12.7 mm ammo <c(d7cc81)>MDZ<c(FFFFFF)>\n                      <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n   - <c(FFFF00)>fragmentary<c(FFFFFF)>-<c(FF1F00)>incendiary<c(FFFFFF)> - "}
		{"ammo_box_127sn"												"Crate with 12.7 mm ammo <c(d7cc81)>7N34<c(FFFFFF)>\n                     <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n              - <c(4d6ff7)>sniper<c(FFFFFF)> - "}
		{"ammo_box_145b32"												"Crate with 14.5 mm ammo <c(d7cc81)>B-32<c(FFFFFF)>\n                     <c(FFAF00)>112<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_545"													"Crate with 5.45 mm ammo <c(d7cc81)>7N6<c(FFFFFF)>\n                   <c(FFAF00)>2160<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_762"													"Crate with 7.62 mm ammo <c(d7cc81)>PS<c(FFFFFF)>\n                    <c(FFAF00)>1400<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_762lps"												"Crate with 7.62 mm ammo <c(d7cc81)>LPS<c(FFFFFF)>\n                     <c(FFAF00)>880<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n         - <c(9fd186)>belt variant<c(FFFFFF)> - "}
		{"ammo_box_762svd"												"Crate with 7.62 mm ammo <c(d7cc81)>7N1<c(FFFFFF)>\n                     <c(FFAF00)>880<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n              - <c(4d6ff7)>sniper<c(FFFFFF)> - "}
		{"ammo_box_f1"													"Crate with grenades <c(d7cc81)>F-1<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_medic"												"Crate with bandages\n <c(FFAF00)>60<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_rgd5"												"Crate with grenades <c(d7cc81)>RGD-5<c(FFFFFF)>\n               <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>sht."}
		{"ammo_box_rgn"													"Crate with grenades <c(d7cc81)>RGN<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_rgo"													"Crate with grenades <c(d7cc81)>RGO<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_rus"													"Crate c ammo"}
		{"ammo_box_vog25"												"Crate with grenades <c(d7cc81)>VOG-25<c(FFFFFF)>\n                <c(FFAF00)>84<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box_vog25p"												"Crate with grenades <c(d7cc81)>VOG-25P<c(FFFFFF)>\n                 <c(FFAF00)>84<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box9M111"												"Crate c ATGM<c(d7cc81)> 9M111<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box9M113"												"Crate c ATGM<c(d7cc81)> 9M113<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box9M113M"												"Crate c ATGM<c(d7cc81)> 9M113M<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_box9M131M"												"Crate c ATGM<c(d7cc81)> 9M131M<c(FFFFFF)> \n             <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_boxmunit"												"Crate c ammunition"}
		{"ammo_boxOG7V"													"Crate c shell<c(d7cc81)> OG-7V<c(FFFFFF)> \n                 <c(FFAF00)>12<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxPG7V"													"Crate c shell<c(d7cc81)> PG-7V<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxPG7VL"												"Crate c shell<c(d7cc81)> PG-7VL<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxPG7VM"												"Crate c shell<c(d7cc81)> PG-7VM<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxPG7VR"												"Crate c shell<c(d7cc81)> PG-7VR<c(FFFFFF)> \n                 <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxPG7VS"												"Crate c shell<c(d7cc81)> PG-7VC<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxRPG18"												"Crate c <c(d7cc81)>RPG-18<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_boxRPG22"												"Crate c <c(d7cc81)>RPG-22<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_boxRPG26"												"Crate c <c(d7cc81)>RPG-26<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_boxRPG27"												"Crate c <c(d7cc81)>RPG-27<c(FFFFFF)> \n         <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>"}
		{"ammo_boxTBG7V"												"Crate c shell<c(d7cc81)> TBG-7V<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>sht.<c(FFFFFF)>\n            - for RPG-7 - "}
		{"ammo_boxweap"													"Crate c ammo"}
		{"barrel"														"<c(ffff60)>Barrel</c>"}	;vanilla
		{"can"															"<c(ffff60)>Jerrycan</c>"}	;vanilla
	}
	{"weapon"
		
	}
;cw_gun
	{"ammo"

	}
	{"stuff"

	}
	{"weapon"
		{"20mm_M197 gun"												"<c(FFFFFF)>20mm<c(FFAF00)> M197<c(FFFFFF)>\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)>mils "}
		{"20mm_Rh202 gun"												"<c(FFFFFF)>20mm<c(00FF00)> Rheinmetall<c(FFFFFF)><c(FFAF00)> Rh202<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,4..0,6<c(FFFFFF)>mils "}
		{"23mm_23L gun"													"<c(FFFFFF)>23mm<c(FFAF00)> 23L<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,61<c(FFFFFF)>mils "}
		{"23mm_am23 gun"												"<c(FFFFFF)>23mm<c(FFAF00)> АM-23<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)>mils "}
		{"23mm_azp23_x4 gun"											"<c(FFFFFF)>4x23-mm<c(FFAF00)> АZP-23<c(FFFFFF)><c(00FF00)> «Аmur»<c(FFFFFF)>\n range - <c(FFAF00)>110<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,68<c(FFFFFF)>mils "}
		{"23mm_zu232 gun"												"<c(FFFFFF)>2x23mm<c(FFAF00)> 2A14<c(FFFFFF)>\n range - <c(FFAF00)>110<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,68<c(FFFFFF)>mils "}
		{"25mm_gau12 gun"												"<c(FFFFFF)>25mm<c(FFAF00)> GAU-12<c(FFFFFF)><c(00FF00)> «Equalizer»<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"25mm_gau22 gun"												"<c(FFFFFF)>25mm<c(FFAF00)> GAU-22<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"25mm_m242 gun"												"<c(FFFFFF)>25mm<c(FFAF00)> M242<c(FFFFFF)> <c(00FF00)>«Bushmaster»<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,44..0,75<c(FFFFFF)>mils "}
		{"25mm_m811 gun"												"<c(FFFFFF)>25mm<c(FFAF00)> M811<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,43..0,74<c(FFFFFF)>mils "}
		{"25mm_mk38_mod2 gun"											"<c(FFFFFF)>25mm<c(FFAF00)> Mk38 mod 2<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,44..0,75<c(FFFFFF)>mils "}
		{"25mm_type87_x4 gun"											"<c(FFFFFF)>25mm<c(FFAF00)> Type87<c(FFFFFF)>\n range - <c(FFAF00)>110<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,6..0,8<c(FFFFFF)>mils "}
		{"25mm_zpt90 gun"												"<c(FFFFFF)>25mm<c(FFAF00)> ZPT90<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,6..0,8<c(FFFFFF)>mils "}
		{"27mm_mauzer_bk27 gun"											"<c(FFFFFF)>27mm<c(FFAF00)> BK27<c(FFFFFF)> <c(00FF00)>Mauzer<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)>mils "}
		{"27mm_mauzer_bk27x2 gun"										"<c(FFFFFF)>27mm<c(FFAF00)> BK27<c(FFFFFF)> <c(00FF00)>Mauzer<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)>mils "}
		{"30mm_2A38_x2 gun"												"<c(FFFFFF)>2x30mm<c(FFAF00)> 2А38<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_2A42 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> 2A42<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_2A42_bmpt gun"											"<c(FFFFFF)>30mm<c(FFAF00)> 2A42<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_2A42_Ka50 gun"											"<c(FFFFFF)>30mm<c(FFAF00)> 2A42<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_2A72 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> 2A72<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_2A72_nosupport gun"										"<c(FFFFFF)>30mm<c(FFAF00)> 2A72<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,62..1,12<c(FFFFFF)>mils "}
		{"30mm_2A72_robot gun"											"<c(FFFFFF)>30mm<c(FFAF00)> 2A72<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_AK630 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> АK630<c(FFFFFF)>\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"30mm_GIAT_M781 gun"											"<c(FFFFFF)>30mm<c(FFAF00)> M781<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"30mm_kortik gun"												"<c(FFFFFF)>2x30mm<c(FFAF00)> АO-18<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"30mm_L21A1_RARDEN gun"										"<c(FFFFFF)>30mm<c(FFAF00)> L21A1<c(FFFFFF)><c(00FF00)> RARDEN<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5..1,0<c(FFFFFF)>mils "}
		{"30mm_M230 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> M230<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,86<c(FFFFFF)>mils "}
		{"30mm_M230LF gun"												"<c(FFFFFF)>30mm<c(FFAF00)> M230LF<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5<c(FFFFFF)>mils "}
		{"30mm_mk30_2 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> Mk30-2<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)>mils "}
		{"30mm_Mk44 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> Mk44<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)>mils "}
		{"30mm_Mk44_bushmaster2 gun"									"<c(FFFFFF)>30mm<c(FFAF00)> Mk44 «Bushmaster II»<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)>mils "}
		{"30mm_ZPT99 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> ZPT-99<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)>mils "}
		{"32_57_pickup"													"<c(FFFFFF)>Launcher<c(FFAF00)> UV-32-57<c(FFFFFF)> s<c(FFAF00)> S-5<c(FFFFFF)>\n range - <c(FFAF00)>100..130<c(FFFFFF)> m."}
		{"35mm_Oerlikon_KDA gun"										"<c(FFFFFF)>35mm<c(00FF00)> «Oerlikon»<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,44..0,66<c(FFFFFF)>mils "}
		{"35mm_PG99-35-2 gun"											"<c(FFFFFF)>35mm<c(00FF00)> PG99-35-2<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,44..0,66<c(FFFFFF)>mils "}
		{"40mm_CTA40 gun"												"<c(FFFFFF)>40mm<c(00FF00)> CTAS<c(FFFFFF)>\n range - <c(FFAF00)>135<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,35..0,75<c(FFFFFF)>mils "}
		{"57mm_au220m_aa gun"											"<c(FFFFFF)>57mm<c(FFAF00)> АU-220M<c(FFFFFF)><c(FFAF00)><c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,12<c(FFFFFF)>mils "}
		{"57mm_UV_32_57 gun"											"<c(FFFFFF)>Launcher<c(FFAF00)> UV-32-57<c(FFFFFF)> s<c(FFAF00)> S-5<c(FFFFFF)>\n range - <c(FFAF00)>100..130<c(FFFFFF)> m."}
		{"57mm_UV_32_57x2 gun"											"<c(FFFFFF)>Launcher<c(FFAF00)> UV-32-57<c(FFFFFF)> s<c(FFAF00)> S-5<c(FFFFFF)>\n range - <c(FFAF00)>100..130<c(FFFFFF)> m."}
		{"68mm_telson12 gun"											"<c(FFFFFF)>68mm Launcher<c(00FF00)> Telson 12<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"68mm_telson22 gun"											"<c(FFFFFF)>68mm Launcher<c(00FF00)> Telson 22<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"70mm_Hydra_A-10 gun"											"<c(FFFFFF)>70mm Launcher<c(00FF00)> Hydra 70<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"70mm_Hydra_AH64 gun"											"<c(FFFFFF)>70mm Launcher<c(00FF00)> Hydra 70<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"70mm_Hydra_UH1-Y gun"											"<c(FFFFFF)>70mm Launcher<c(00FF00)> Hydra 70<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"70mm_lau51x2 gun"												"<c(FFFFFF)>70mm Launcher<c(00FF00)> Hydra 70<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"73mm_2A28 gun"												"<c(FFFFFF)>73mm<c(FFAF00)> 2A28<c(FFFFFF)><c(00FF00)> «Grom»<c(FFFFFF)>\n range - <c(FFAF00)>85..150<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)>mils "}
		{"76mm_ak176 gun"												"<c(FFFFFF)>76mm<c(FFAF00)> АK176<c(FFFFFF)>\n range - <c(FFAF00)>220<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"80mm_b8_x2"													"<c(FFFFFF)>80mm Launcher<c(FFAF00)> B-8<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"80mm_b8b20a_x2 gun"											"<c(FFFFFF)>80mm<c(FFFFFF)> Launcher<c(FFAF00)> B-8B20А<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"80mm_b820a_x2 gun"											"<c(FFFFFF)>80mm<c(FFFFFF)> Launcher<c(FFAF00)> B-8B20А<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"80mm_b820a_x4 gun"											"<c(FFFFFF)>80mm<c(FFFFFF)> Launcher<c(FFAF00)> B-8B20А<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"82mm_2B9 gun"													"<c(FFFFFF)>82mm<c(FFAF00)> 2B9<c(FFFFFF)> <c(00FF00)>«Vasilek»<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)>mils "}
		{"82mm_cs_cm1 gun"												"<c(FFFFFF)>82mm<c(FFAF00)> CS-CM1<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)>mils "}
		{"85mm_s-53 gun"												"<c(FFFFFF)>85mm<c(FFAF00)> C-53<c(FFFFFF)>\n range - <c(FFAF00)>85..110<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,32<c(FFFFFF)>mils "}
		{"100mm_2a29 gun"												"<c(FFFFFF)>100mm<c(FFAF00)> 2А29<c(FFFFFF)> \n range - <c(FFAF00)>130..180<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,24..0,44<c(FFFFFF)>mils "}
		{"100mm_2a70 gun"												"<c(FFFFFF)>100mm<c(FFAF00)> 2A70<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,4<c(FFFFFF)>mils "}
		{"100mm_2a70_1 gun"												"<c(FFFFFF)>100mm<c(FFAF00)> 2A70<c(FFFFFF)>\n range - <c(FFAF00)>172<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,4<c(FFFFFF)>mils "}
		{"100mm_ak100 gun"												"<c(FFFFFF)>130mm<c(FFAF00)> АK-100<c(FFFFFF)>\n range - <c(FFAF00)>296<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,85<c(FFFFFF)>mils "}
		{"100mm_D-10T gun"												"<c(FFFFFF)>100mm<c(FFAF00)> D-10T2S<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,24..0,34<c(FFFFFF)>mils "}
		{"100mm_d54 gun"												"<c(FFFFFF)>100mm<c(FFAF00)> D-54TC<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,24..0,44<c(FFFFFF)>mils "}
		{"105mm_F2_MECA gun"											"<c(FFFFFF)>105mm <c(FFAF00)>F2 MECA<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,26..0.4<c(FFFFFF)>mils "}
		{"105mm_L7A3 gun"												"<c(FFFFFF)>105mm <c(FFAF00)>L7A3<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,26<c(FFFFFF)>mils "}
		{"105mm_L118 gun"												"<c(FFFFFF)>105mm <c(FFAF00)>L118<c(FFFFFF)>\n range - <c(FFAF00)>205..230<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,83<c(FFFFFF)>mils "}
		{"105mm_M68 gun"												"<c(FFFFFF)>105mm <c(FFAF00)>M68<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,26<c(FFFFFF)>mils "}
		{"105mm_M68A1E4 gun"											"<c(FFFFFF)>105mm <c(FFAF00)>M68A1E4<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,26<c(FFFFFF)>mils "}
		{"115mm_D-68 gun"												"<c(FFFFFF)>115mm 2А21"}
		{"115mm_U-5TS gun"												"<c(FFFFFF)>115mm <c(FFAF00)>U-5TS<c(FFFFFF)><c(00FF00)> «Molot»<c(FFFFFF)>\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,28..0,31<c(FFFFFF)>mils "}
		{"120mm_2A51 gun"												"<c(FFFFFF)>120mm<c(FFAF00)> 2A51<c(FFFFFF)>\n range - <c(FFAF00)>70..207<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,92..8,0<c(FFFFFF)>mils "}
		{"120mm_2b11 gun"												"<c(FFFFFF)>120mm<c(FFAF00)> 2B11<c(FFFFFF)>\n range - <c(FFAF00)>176<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8,0<c(FFFFFF)>mils "}
		{"120mm_CN_120_26 gun"											"<c(FFFFFF)>120mm <c(FFAF00)>CN-120-26<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)>mils "}
		{"120mm_M121 gun"												"<c(FFFFFF)>120mm<c(FFAF00)> M121<c(FFFFFF)>\n range - <c(FFAF00)>176<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10,0<c(FFFFFF)>mils "}
		{"120mm_M256 gun"												"<c(FFFFFF)>120mm <c(FFAF00)>M256<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)>mils "}
		{"120mm_pbp-172 gun"											"<c(FFFFFF)>120mm<c(FFAF00)> PBP-172<c(FFFFFF)>\n range - <c(FFAF00)>176<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8,0<c(FFFFFF)>mils "}
		{"120mm_Rh120L44 gun"											"<c(FFFFFF)>120mm<c(00FF00)> Rheinmetall-120<c(FFFFFF)> <c(FFAF00)>L44<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)>mils "}
		{"120mm_Rh120L55 gun"											"<c(FFFFFF)>120mm<c(00FF00)> Rheinmetall-120<c(FFFFFF)> <c(FFAF00)>L55A1<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,11<c(FFFFFF)>mils "}
		{"120mm_rt61 gun"												"<c(FFFFFF)>120mm<c(FFAF00)> MO-120 RT-61<c(FFFFFF)>\n range - <c(FFAF00)>176..207<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7,0..10,0<c(FFFFFF)>mils "}
		{"120mm_UK_L30 gun"												"<c(FFFFFF)>120mm <c(FFAF00)>L30E4<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)>mils "}
		{"122mm_2A18 gun"												"<c(FFFFFF)>122mm<c(FFAF00)> 2A18M<c(FFFFFF)>\n range - <c(FFAF00)>210..230<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,83<c(FFFFFF)>mils "}
		{"122mm_s13 gun"												"<c(FFFFFF)>122mm<c(FFFFFF)> Launcher<c(FFAF00)> C-13<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"122mm_s13_2 gun"												"<c(FFFFFF)>122mm<c(FFFFFF)> Launcher<c(FFAF00)> C-13<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"122mm_s13_mig29 gun"											"<c(FFFFFF)>122mm<c(FFFFFF)> Launcher<c(FFAF00)> C-13<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"125mm_2A26M2 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A26M2<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)>mils "}
		{"125mm_2A46 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A46<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)>mils "}
		{"125mm_2A46_1 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A46-1<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)>mils "}
		{"125mm_2A46_2 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A46-2<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)>mils "}
		{"125mm_2A46M gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A46M<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_2A46M_1 gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M1<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_2A46M_1h gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M1<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_2A46M_2 gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M2<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)>mils "}
		{"125mm_2A46M_4 gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M4<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)>mils "}
		{"125mm_2A46M_5 gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M5-01<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)>mils "}
		{"125mm_2A46Mb1 gun"											"<c(FFFFFF)>125mm <c(FFAF00)>2A46M<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_2A75 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A75<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_2A82 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>2A82<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)>mils "}
		{"125mm_KBAZ gun"												"<c(FFFFFF)>125mm <c(FFAF00)>KBА-Z<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)>mils "}
		{"125mm_zpt-98 gun"												"<c(FFFFFF)>125mm <c(FFAF00)>ZPT98<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,19..0,25<c(FFFFFF)>mils "}
		{"127mm_Mk45 gun"												"<c(FFFFFF)>127mm<c(FFAF00)> Mk45<c(FFFFFF)>\n range - <c(FFAF00)>310<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"130mm_ak130 gun"												"<c(FFFFFF)>130mm<c(FFAF00)> АK-130<c(FFFFFF)>\n range - <c(FFAF00)>298<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,85<c(FFFFFF)>mils "}
		{"152mm_2A33 gun"												"<c(FFFFFF)>152mm<c(FFAF00)> 2A33<c(FFFFFF)>\n range - <c(FFAF00)>255...290<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,45<c(FFFFFF)>mils "}
		{"152mm_2A64 gun"												"<c(FFFFFF)>152mm<c(FFAF00)> 2A64<c(FFFFFF)>\n range - <c(FFAF00)>255...308<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}
		{"152mm_2A64M2 gun"												"<c(FFFFFF)>152mm<c(FFAF00)> 2A64M2<c(FFFFFF)>\n range - <c(FFAF00)>255...308<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}	;future
		{"152mm_2A88 gun"												"<c(FFFFFF)>152mm<c(FFAF00)> 2A88<c(FFFFFF)>\n range - <c(FFAF00)>303...336<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}
		{"152mm_DANA gun"												"<c(FFFFFF)>152mm orudie<c(00FF00)> DANA<c(FFFFFF)>\n range - <c(FFAF00)>255...290<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}
		{"155mm_L31 gun"												"<c(FFFFFF)>155mm<c(FFAF00)> L31<c(FFFFFF)>\n range - <c(FFAF00)>258...330<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}
		{"155mm_L52 gun"												"<c(FFFFFF)>155mm<c(FFAF00)> L52<c(FFFFFF)>\n range - <c(FFAF00)>294...340<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)>mils "}
		{"155mm_l54cn gun"												"<c(FFFFFF)>155mm<c(FFAF00)> L54<c(FFFFFF)>\n range - <c(FFAF00)>290...380<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)>mils "}
		{"155mm_M284 gun"												"<c(FFFFFF)>155mm<c(FFAF00)> M284<c(FFFFFF)>\n range - <c(FFAF00)>258...330<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)>mils "}
		{"brmi90x7 gun"													"<c(FFFFFF)>90mm Launcher<c(00FF00)> BRMI-90<c(FFFFFF)>\n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"brmi90x14 gun"												"<c(FFFFFF)>90mm Launcher<c(00FF00)> BRMI-90<c(FFFFFF)>\n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"GAU-8 gun"													"<c(FFFFFF)>30mm<c(FFAF00)> GAU-8<c(FFFFFF)><c(00FF00)> «Avenger»<c(FFFFFF)>\n range - <c(FFAF00)>120<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)>mils "}
		{"GSh-23L gun"													"<c(FFFFFF)>23mm<c(FFAF00)> GSh-23L<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)>mils "}
		{"GSH-30-1 gun"													"<c(FFFFFF)>30mm<c(FFAF00)> GSh-30-1<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)>mils "}
		{"GSH-30-2 gun"													"<c(FFFFFF)>30mm<c(FFAF00)> GSh-30-2<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)>mils "}
		{"kpvt"															"<c(FFFFFF)>14,5mm<c(00FF00)> KPVT<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,38<c(FFFFFF)>mils "}
		{"kpvt_btr82"													"<c(FFFFFF)>14,5mm<c(00FF00)> KPVT<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,38<c(FFFFFF)>mils "}	
		{"MG253 gun"													"<c(FFFFFF)>120mm <c(FFAF00)>MG253<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)>mils "}
		{"Phalanx"														"<c(FFFFFF)>20mm<c(FFAF00)> CIWS Mk15<c(FFFFFF)><c(00FF00)> «Phalanx»<c(FFFFFF)>\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)>mils "}
		{"ShmelM_x12_robot"												"<c(d7cc81)> RPO-M<c(FFFFFF)><c(00FF00)> «Shmel»-M<c(FFFFFF)>\n HE mass -<c(FF1F00)> 3<c(FFFFFF)> kg \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1.67<c(FFFFFF)>mils\n - thermobaric"}
		{"ShmelM_x24_robot"												"<c(d7cc81)> RPO-M<c(FFFFFF)><c(00FF00)> «Shmel»-M<c(FFFFFF)>\n HE mass -<c(FF1F00)> 3<c(FFFFFF)> kg \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1.67<c(FFFFFF)>mils\n - thermobaric"}
		{"sppu-23-01x2 gun"												"<c(FFFFFF)> 23mm<c(FFAF00)> SPPU-23-01<c(FFFFFF)> kh2\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)>mils "}
		{"upkx2 gun"													"<c(FFFFFF)> 23mm<c(FFAF00)> UPK-23-250<c(FFFFFF)> kh2\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)>mils "}
		{"Vulcan"														"<c(FFFFFF)>20mm<c(FFAF00)> M61<c(FFFFFF)><c(00FF00)> «Vulcan»<c(FFFFFF)>\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)>mils "}	;check
		{"VulcanA2"														"<c(FFFFFF)>20mm<c(FFAF00)> M61A1/A2<c(FFFFFF)><c(00FF00)> «Vulcan»<c(FFFFFF)>\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)>mils "}	;check
	}
;cw_shell
	{"ammo"
		;submunition
			{"ao1 submunition"											"<c(CF9FFF)>Submunition AOL</c>"}			;t
			{"blu-97 submunition"										"<c(CF9FFF)>Submunition BLU-97</c>"}		;t
		{"2a46ammo_h apcr"												"<c(CF9FFF)>Loading mediator 2A46"}			;t
		{"9m117_115_impactor"											"<c(CF9FFF)>Impactor 9m117_115</c>"}	;t
		{"9m117_impactor"												"<c(CF9FFF)>Impactor 9m117</c>"}	;t
		{"9m117m_impactor"												"<c(CF9FFF)>Impactor 9m117m</c>"}	;t
		{"brmi-90"														"<c(FFAF00)>BRMI-90<c(FFFFFF)>\n HE mass - <c(FF1F00)>1.55<c(FFFFFF)> kg.\n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"bullet20_139 ap"												"20x139mm APFSDS<c(4d6ff7)> DM-63<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>42<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> -  "}
		{"bullet20_139 fg"												"20x139mm FG<c(FFAF00)> DM-81 <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,0058<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet23 bzt zenite"											"23x152mm SAPHEIT<c(4d6ff7)> ZUBR1<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>24<c(FFFFFF)> mm \n range - <c(FFAF00)>110<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> -  "}
		{"bullet23 ofzt zenite"											"23x152mm FGI<c(FFAF00)> ZUFG7<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,018<c(FFFFFF)> kg.\n range - <c(FFAF00)>110<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet23_115 bzt zenite"										"23x115mm SAPHEIT<c(4d6ff7)> 9А1548<c(FFFFFF)>\n - avia -  \n piercing on 1000 m. - <c(26afeb)>10<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> -  "}
		{"bullet23_115 ofzt zenite"										"23x115mm FGIT<c(FFAF00)> 9А715<c(FFFFFF)>\n - avia -  \n HE mass - <c(FF1F00)>0,011<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet25_cn ap"												"25mm APFSDS<c(4d6ff7)> <c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>35<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet25_cn fg"												"25mm FG<c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,043<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet25_FR 25x137 ap"										"25x137mm APFSDS<c(4d6ff7)> M935A2<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>80<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet25_FR 25x137 fg"										"25x137mm FG<c(FFAF00)> HEI-T<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,027<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet25_usa 25x137 ap"										"25x137mm APFSDS<c(4d6ff7)> M919<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>62..78<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet25_usa 25x137 fg"										"25x137mm FG<c(FFAF00)> M792<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,032<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet25_usa_a 25x137 ap"										"25x137mm SAPHEIT<c(FFAF00)> PGU-32/U<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>15<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet27_GER ap"												"27x145mm SAPHEIT <c(FFAF00)>DM-43<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>25<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet27_GER fg"												"27x145mm FG <c(FFAF00)>M-90<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,022<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet30_GB ap"												"30x170mm APFSDS<c(4d6ff7)> L5A2<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>43<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet30_GB apcr"												"30x170mm APFSDS<c(4d6ff7)> L14A2<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>64<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> -"}
		{"bullet30_GB fg"												"30x170mm FG<c(FFAF00)> L13A1<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,049<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m. "}
		{"bullet30_nav_RUS fg"											"30x165mm FG<c(FFAF00)> АZ-UFG-84<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,049<c(FFFFFF)> kg.\n range - <c(FFAF00)>100..140<c(FFFFFF)> m. \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n -<c(CCCCCC)> АZ-UFG-84P with PVU<c(FFFFFF)> - "}
		{"bullet30_rus ap"												"30x165mm APFSDS<c(4d6ff7)> ZUBR8<c(FFFFFF)><c(00FF00)> «Kerner»<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>56<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m. \n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet30_rus ap_cn ap"										"30x165mm AP<c(4d6ff7)> <c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>56<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet30_rus apcr_cn ap"										"30x165mm APFSDS<c(4d6ff7)><c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>100<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m. \n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet30_rus fg"												"30x165mm FG<c(FFAF00)> 3UFG8<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,049<c(FFFFFF)> kg.\n range - <c(FFAF00)>100..140<c(FFFFFF)> m. \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n -<c(CCCCCC)> ZUFG21 with PVU<c(FFFFFF)> - "}
		{"bullet30_rus fg_cn fg"										"30x165mm FG<c(FFAF00)>DTY02-30 <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,049<c(FFFFFF)> kg.\n range - <c(FFAF00)>100..140<c(FFFFFF)> m. \n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"bullet30_rus_apg ap"											"30x165mm APFSDS<c(4d6ff7)> M929<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>100<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet30_rus_aph ap"											"30x165mm AP<c(4d6ff7)> ZUBR6<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>38<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> ZUBR10 with PVU<c(FFFFFF)> - "}
		{"bullet30_USA ap"												"30x113mm <c(FFAF00)> SAPHEI<c(FFFFFF)>\n piercing on 1000 m. - <c(FF1F00)>11<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet30_USA cm"												"30x113mm HEAT<c(FFAF00)> M789<c(FFFFFF)>\n piercing - <c(FF1F00)>46<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet30_USA fg"												"30x113mm FG<c(FFAF00)><c(00FF00)> Aden<c(FFFFFF)> HEI<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,022<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"bullet35 ap"													"35x228mm SAPHEIT<c(FFAF00)> PMD 044<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>40<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet35 apcr"												"35x228mm APFSDS<c(4d6ff7)> PMD 060<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>115<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}          
		{"bullet35 fg"													"35x228mm FG<c(FFAF00)> PMD 042<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,112<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet35_cn ap"												"35x228mm SAPHEIT<c(FFAF00)> DKG01A<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>40<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet35_cn fg"												"35x228mm FG<c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,112<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet40_NATO abm"											"40x255mm FG<c(FFAF00)> GPR-AB-T<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,115<c(FFFFFF)> kg.\n range - <c(FFAF00)>135<c(FFFFFF)> m."}
		{"bullet40_NATO apcr"											"40x255mm APFSDS<c(FFAF00)> APFSDS-T<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>157<c(FFFFFF)> mm \n range - <c(FFAF00)>135<c(FFFFFF)> m."}
		{"bullet40_NATO fg"												"40x255mm FG<c(FFAF00)> GPR-PD-T<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,115<c(FFFFFF)> kg.\n range - <c(FFAF00)>135<c(FFFFFF)> m."}
		{"bullet40_NATOabm_fg_exp"										"<c(CF9FFF)>EXP GPR-AB-T</c>"}	;t
		{"Bullet57_RUS au220m ap"										"57mm AP<c(FFAF00)> BR-281U<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>70<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet57_RUS au220m fg"										"57mm FG<c(FFAF00)> OP-281U<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,153<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet68_FR cm"												"UM 68mm <c(00FF00)>SNEB<c(FFFFFF)><c(FFAF00)> M<c(FFFFFF)>\n piercing - <c(FF1F00)>400<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet68_FR fg"												"UM 68mm <c(00FF00)>SNEB<c(FFFFFF)><c(FFAF00)> M<c(FFFFFF)> FG\n HE mass - <c(FF1F00)>0,75<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet70 Bullet70_Hydra"										"UM 70mm <c(00FF00)>Hydra<c(FFFFFF)> FG<c(FFAF00)> M229<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,18<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet70 Bullet70_Hydra sm"									"UM 70mm <c(00FF00)>Hydra<c(FFFFFF)><c(FFAF00)> M156<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"Bullet70_Hydra"												"<c(CF9FFF)>Loading mediator Hydra"}	;t
		{"Bullet70_Hydra sm"											"<c(CF9FFF)>Loading mediator Hydra"}	;t
		{"bullet73_rus cm"												"73mm <c(FFAF00)>PG-15VS<c(FFFFFF)><c(CCCCCC)><c(FFFFFF)>\n piercing - <c(FF1F00)>432<c(FFFFFF)> mm \n range - <c(FFAF00)>85<c(FFFFFF)> m. "}
		{"bullet73_rus fg"												"73mm <c(FFAF00)>OG-15V<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,66<c(FFFFFF)> kg.\n range - <c(FFAF00)>85..150<c(FFFFFF)> m. "}
		{"Bullet76_RUS fg"												"76mm FG<c(FFAF00)> FG62<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>220<c(FFFFFF)> m."}
		{"bullet80_DM cm"												"UM 80mm<c(FFAF00)> S-8KO<c(FFFFFF)>\n piercing - <c(FF1F00)>420<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet80_DM fg"												"UM 80mm<c(FFAF00)> S-8DM<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,15<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"bullet80_DM fgh"												"UM 80mm<c(FFAF00)> S-8FGP<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,9<c(FFFFFF)> kg.\n range - <c(FFAF00)>170<c(FFFFFF)> m."}
		{"bullet85_rus ap"												"85mm AP<c(FFAF00)> B-365А<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>115<c(FFFFFF)> mm \n range - <c(FFAF00)>110<c(FFFFFF)> m."}
		{"bullet85_rus apcr"											"85mm APFSDS<c(FFAF00)> BR-365P<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>100<c(FFFFFF)> mm \n range - <c(FFAF00)>85<c(FFFFFF)> m."}
		{"bullet85_rus fg"												"87mm FG<c(FFAF00)> O-365K<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>0,66<c(FFFFFF)> kg.\n range - <c(FFAF00)>110<c(FFFFFF)> m."}
		{"bullet100_rus ap"												"100mm AP<c(CCCCCC)> BR412D<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>130<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m. "}
		{"bullet100_rus apcr"											"100mm APFSDS<c(4d6ff7)> 3BM25<c(FFFFFF)><c(00FF00)> «Izomer»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>280<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m. \n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"bullet100_rus cm"												"100mm HEAT<c(FFAF00)> 3BK17M<c(FFFFFF)><c(00FF00)> «Ikra»<c(FFFFFF)>\n piercing - <c(FF1F00)>421<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m. "}
		{"bullet100_rus fg"												"100mm FG<c(FFAF00)> 3FG32<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,69<c(FFFFFF)> kg.\n range - <c(FFAF00)>130<c(FFFFFF)> m. "}
		{"bullet100_rus_nav fg"											"100mm FG<c(FFAF00)> UZS-58<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>1,53<c(FFFFFF)> kg.\n range - <c(FFAF00)>296<c(FFFFFF)> m."}
		{"bullet100_rus_rapira apcr"									"100mm APFSDS<c(4d6ff7)> 3BM24<c(FFFFFF)><c(00FF00)> «Kalach»<c(FFFFFF)> for MT-12\n piercing on 2000 m. - <c(26afeb)>195<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet100_rus_rapira cm"										"100mm HEAT<c(FFAF00)> 3BK16M<c(FFFFFF)><c(00FF00)> «Kadet»<c(FFFFFF)> for MT-12\n piercing - <c(FF1F00)>432<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet100_rus_rapira fg"										"100mm FG<c(FFAF00)> 3FG35<c(FFFFFF)> for MT-12\n HE mass - <c(FF1F00)>2,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet100a_RUS fg 2a70ammo"									"100mm FG<c(FFAF00)> ZUFG17<c(FFFFFF)><c(00FF00)> «Basnja-2»<c(FFFFFF)> for 2А70\n HE mass - <c(FF1F00)>1,69<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet100a_RUS rok 2a70ammo"									"100mm TUR<c(FFAF00)> 9M117M1<c(FFFFFF)><c(00FF00)> «Аrkan»<c(FFFFFF)> for 2А70\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>165<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"bullet100a_RUS_h fg 2a70ammo"									"100mm FG<c(FFAF00)> ZUFG19<c(FFFFFF)><c(00FF00)> «Vishnja»<c(FFFFFF)> for 2А70\n HE mass - <c(FF1F00)>2,3<c(FFFFFF)> kg.\n range - <c(FFAF00)>172<c(FFFFFF)> m."}
		{"bullet100a_RUS_h rok 2a70ammo"								"100mm TUR<c(FFAF00)> 9M117M<c(FFFFFF)><c(00FF00)> «Kan»<c(FFFFFF)> for 2А70\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"bullet105_GER ap bullet105_NATO"								"105mm AP<c(CCCCCC)> DM-512<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>200<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet105_IDF ap bullet105_NATO"								"105mm AP<c(CCCCCC)> M156<c(FFFFFF)>\n piercing - <c(26afeb)>200<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet105_IDF apcr bullet105_NATO"							"105mm APFSDS<c(4d6ff7)> M426<c(FFFFFF)><c(00FF00)> «Hetz 10»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>475<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m.\n variant for Bundesvehr - <c(4d6ff7)>DM-63<c(FFFFFF)>\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet105_IDF cm bullet105_NATO"								"105mm HEAT<c(FFAF00)> M152<c(FFFFFF)>\n piercing - <c(FF1F00)>430<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m." }
		{"bullet105_IDF fg bullet105_NATO"								"105mm FG<c(FFAF00)> M117/1<c(FFFFFF)><c(00FF00)> «Harakefet»<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n - Fragmetation warhead - "}
		{"bullet105_IDF sm bullet105_NATO"								"105mm dim.<c(CCCCCC)> M158<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet105_usa ap bullet105_NATO"								"105mm AP<c(CCCCCC)> M393A3<c(FFFFFF)> Mecar\n piercing on 2000 m. - <c(26afeb)>200<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet105_usa apcr bullet105_NATO"							"105mm APFSDS<c(4d6ff7)> M735<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>350<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"bullet105_usa apcr_h bullet105_NATO"							"105mm APFSDS<c(4d6ff7)> M833<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>420<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet105_usa cm bullet105_NATO"								"105mm HEAT<c(FFAF00)> M456A2<c(FFFFFF)>\n piercing - <c(FF1F00)>390<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."} 
		{"bullet105_usa fg bullet105_NATO"								"105mm FG<c(FFAF00)> M494<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>130<c(FFFFFF)> m.\n - fragmetation warhead - "}
		{"bullet105_usa sm bullet105_NATO"								"105mm dim.<c(CCCCCC)> M416<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet105a_fr apcr"											"105mm APFSDS<c(4d6ff7)> OFL 105 F3<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>291<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"bullet105a_fr cm"												"105mm HEAT<c(FFAF00)> OCC 105 F3<c(FFFFFF)>\n piercing - <c(FF1F00)>320<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m."} 
		{"bullet105a_fr fg"												"105mm FG<c(FFAF00)> OE 105 F3<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,7<c(FFFFFF)> kg.\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"bullet105how_uk fg bullet_105_how"							"105mm FG<c(FFAF00)> L31A3<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>230<c(FFFFFF)> m."}
		{"bullet105how_uk sm bullet_105_how"							"105mm dim.<c(CCCCCC)> L45<c(FFFFFF)><c(00FF00)> <c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n range - <c(FFAF00)>205<c(FFFFFF)> m."}
		{"bullet105how_usa fg bullet_105_how"							"105mm FG<c(FFAF00)> M760<c(FFFFFF)><c(00FF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>2,1<c(FFFFFF)> kg.\n range - <c(FFAF00)>205<c(FFFFFF)> m."}
		{"bullet105how_usa sm bullet_105_how"							"105mm dim.<c(FFAF00)> M60A2<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>205<c(FFFFFF)> m." }
		{"bullet115_RUS apcr"											"115mm APFSDS<c(4d6ff7)> ZBM28<c(FFFFFF)><c(00FF00)> «Nadfil»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>380<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet115_RUS apcr_h"											"115mm APFSDS<c(4d6ff7)> ZBM21<c(FFFFFF)><c(00FF00)> «Zastup»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>340<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"bullet115_RUS cm"												"115mm HEAT<c(FFAF00)> ZBK15M<c(FFFFFF)><c(00FF00)> «Zmeja»<c(FFFFFF)>\n piercing - <c(FF1F00)>507<c(FFFFFF)> mm \n range - <c(FFAF00)>130<c(FFFFFF)> m."}
		{"bullet115_RUS fg"												"115mm FG<c(FFAF00)> ZFG18<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - extended range - "}
		{"bullet115_RUS rok"											"115mm TUR<c(FFAF00)> 9M117M<c(FFFFFF)><c(00FF00)> «Kan»<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"bullet120_2b11_mine fg"										"Mina 120mm FG<c(FFAF00)> 3FG34<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,43<c(FFFFFF)> kg.\n range - <c(FFAF00)>175<c(FFFFFF)> m."}
		{"bullet120_2b11_mine sm"										"Mina 120mm zaj.<c(FFAF00)> 3-Z-2<c(FFFFFF)>\n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n HE mass - <c(FF1F00)>1,94<c(FFFFFF)> kg.\n range - <c(FFAF00)>167<c(FFFFFF)> m."}
		{"bullet120_FR apcr bullet120_NATO bullet120_israel"			"120mm APFSDS<c(4d6ff7)> OFL 120F2<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>580...650<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet120_FR cm bullet120_NATO bullet120_israel"				"120mm HEAT<c(FFAF00)> OECC F1<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_FR fg bullet120_NATO bullet120_israel"				"120mm FG<c(FFAF00)> EXPL 120F1<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_FR_mine bullet120_RUS bullet120_NATO_mine"			"Mina 120mm FG<c(FFAF00)> PR-14<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>181<c(FFFFFF)> m."}
		{"bullet120_FR_mine_h bullet120_RUS bullet120_NATO_mine"		"Mina 120mm FG<c(FFAF00)> PRAB<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>181<c(FFFFFF)> m."}
		{"bullet120_FR_mine_l bullet120_RUS bullet120_NATO_mine"		"Mina 120mm <c(FFAF00)> PRECLAIR<c(FFFFFF)>\n - illuminational - \n range - <c(FFAF00)>181<c(FFFFFF)> m."}
		{"bullet120_FR_mine_rok bullet120_RUS bullet120_NATO_mine"		"Mina 120mm FG<c(FFAF00)> PRPA<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,7<c(FFFFFF)> kg.\n range - <c(FFAF00)>207<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet120_ger abm bullet120_NATO"								"120mm FG<c(FFAF00)> DM-11<c(FFFFFF)>\n - airburst - \n HE mass - <c(FF1F00)>2,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - fragmetation warhead - "}
		{"bullet120_GER apcr bullet120_NATO bullet120_israel"			"120mm APFSDS<c(4d6ff7)> DM-63A1<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>600...670<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n variant for TsАKhАL - <c(4d6ff7)>M-338<c(FFFFFF)>\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet120_GER cm bullet120_NATO bullet120_israel"				"120mm HEAT<c(FFAF00)> DM-12A1<c(FFFFFF)>\n piercing - <c(FF1F00)>580<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_GER fg bullet120_NATO bullet120_israel"				"120mm FG<c(FFAF00)> DM-11<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - fragmetation warhead - \n variant for USMC - <c(FFAF00)>Mk324<c(FFFFFF)>"}
		{"bullet120_GER_mine bullet120_RUS"								"Mina 120mm FG<c(FFAF00)> DM-91<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,99<c(FFFFFF)> kg.\n range - <c(FFAF00)>176<c(FFFFFF)> m."}
		{"bullet120_GER_mine_l bullet120_RUS"							"Mina 120mm <c(FFAF00)> DM-36<c(FFFFFF)>\n - illuminational - \n range - <c(FFAF00)>176<c(FFFFFF)> m."}
		{"bullet120_IDF cm bullet120_NATO bullet120_israel"				"120mm HEAT<c(FFAF00)> M325<c(FFFFFF)> <c(00FF00)> «Hloln»<c(FFFFFF)>\n piercing - <c(FF1F00)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_IDF fg bullet120_NATO bullet120_israel"				"120mm FG<c(FFAF00)> M339<c(FFFFFF)> <c(00FF00)>«Hatzav»<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,3<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - fragmetation warhead - "}
		{"bullet120_RUS cm"												"120mm HEAT<c(FFAF00)> ZBK19<c(FFFFFF)><c(00FF00)> «Podstup-2»<c(FFFFFF)>\n piercing - <c(FF1F00)>600mm<c(FFFFFF)> \n range - <c(FFAF00)>70<c(FFFFFF)> m."}
		{"bullet120_RUS fg"												"120mm FG<c(FFAF00)> 3FG49<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,9<c(FFFFFF)> kg.\n range - <c(FFAF00)>188<c(FFFFFF)> m."}
		{"bullet120_RUS rok"											"120mm FG<c(FFAF00)> 3FG50<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,25<c(FFFFFF)> kg.\n range - <c(FFAF00)>206<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet120_RUS tb"												"120mm TB<c(FFAF00)> 3FG74<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>185<c(FFFFFF)> m.\n - <c(D781CC)>thermobaric<c(FFFFFF)> - "}
		{"bullet120_UK ap"												"120mm HESH<c(CCCCCC)> L31A7<c(FFFFFF)>\n piercing - <c(26afeb)>300<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."} ;obsolete
		{"bullet120_UK apcr"											"120mm APFSDS<c(4d6ff7)> L26<c(FFFFFF)><c(00FF00)> «CHARM-1»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>580<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet120_UK apcr_h"											"120mm APFSDS<c(4d6ff7)> L27A1<c(FFFFFF)><c(00FF00)> «CHARM-3»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet120_UK hesh"											"120mm HESH<c(CCCCCC)> L31A7<c(FFFFFF)>\n piercing - <c(26afeb)>300<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_UK sm"												"120mm dim.<c(CCCCCC)> L34<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_usa ap bullet120_NATO bullet120_israel"				"120mm AP<c(CCCCCC)> M830A1<c(FFFFFF)>\n piercing - <c(FF1F00)>420<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - HE-frag - "}
		{"bullet120_usa apcr bullet120_NATO bullet120_israel"			"120mm APFSDS<c(4d6ff7)> M829A2<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>680..716<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet120_usa apcr_h bullet120_NATO bullet120_israel"			"120mm APFSDS<c(4d6ff7)> M829A3<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>770..805<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet120_usa cm bullet120_NATO bullet120_israel"				"120mm HEAT<c(FFAF00)> M830<c(FFFFFF)>\n piercing - <c(FF1F00)>540<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet120_usa fg bullet120_NATO bullet120_israel"				"120mm FG<c(FFAF00)> M908<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,97<c(FFFFFF)> kg.\n piercing - <c(FF1F00)>350<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - MP - "}
		{"bullet120_usa sm bullet120_NATO bullet120_israel"				"120mm dim<c(FFAF00)><c(FFFFFF)>\n  <c(CCCCCC)> - smoke - <c(FFFFFF)>  \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n"}
		{"bullet120_USA_mine bullet120_RUS fg"							"Mina 120mm FG<c(FFAF00)> M934A1<c(FFFFFF)>\n HE mass - <c(FF1F00)>2,99<c(FFFFFF)> kg.\n range - <c(FFAF00)>176<c(FFFFFF)> m."}
		{"bullet120_USA_mine bullet120_RUS sm"							"Mina 120mm dim.<c(FFAF00)> M929<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>176<c(FFFFFF)> m."}
		{"bullet120_usa_s apcr bullet120_NATO bullet120_israel"			"120mm APFSDS<c(4d6ff7)> M829A1<c(FFFFFF)><c(00FF00)> «Silver Bullet»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>635..669<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet122_rus cm d30ammo"										"122mm HEAT<c(FFAF00)> BK13<c(FFFFFF)>\n piercing - <c(FF1F00)>520<c(FFFFFF)> mm \n range - <c(FFAF00)>85<c(FFFFFF)> m."}
		{"bullet122_rus fg d30ammo"										"122mm FG<c(FFAF00)> 3FG56<c(FFFFFF)><c(00FF00)> «Lesch»<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>210<c(FFFFFF)> m.\n shell 3VFG82 with reduced charge "}
		{"bullet122_rus rok d30ammo"									"122mm FG<c(FFAF00)> 3FG56<c(FFFFFF)><c(00FF00)> «Lesch»<c(FFFFFF)>\n HE mass - <c(FF1F00)>4,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>230<c(FFFFFF)> m.\n shell 3VFG81 with full charge "}
		{"bullet122_rus sm d30ammo"										"122mm dim.<c(CCCCCC)> 3D4<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n range - <c(FFAF00)>230<c(FFFFFF)> m."}
		{"bullet122s13 fg"												"UM 122mm<c(FFAF00)> S-13FG<c(FFFFFF)>\n HE mass - <c(FF1F00)>7<c(FFFFFF)> kg.\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"bullet125_cn apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm APFSDS<c(4d6ff7)> DTW-125<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>600<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_cn fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm FG<c(FFAF00)> BTJ1<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_cn_b cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm HEAT<c(FFAF00)> BTE2<c(FFFFFF)>\n piercing - <c(FF1F00)>650<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_cn_h apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> DTC10-125<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>650<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_h_rus rok 2a46ammo_h 2a82ammo"						"125mm TUR<c(FFAF00)> 9M119M1<c(FFFFFF)><c(00FF00)> «Invar-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>900<c(FFFFFF)> mm \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"bullet125_h_rus_impactor"										"<c(CF9FFF)>Impactor 9M119M1 «Invar-M»</c>"}	;t
		{"bullet125_m_rus rok 2a46ammo_h 2a82ammo"						"125mm TUR<c(FFAF00)> 9M119M<c(FFFFFF)><c(00FF00)> «Invar»<c(FFFFFF)>\n piercing - <c(FF1F00)>850<c(FFFFFF)> mm \n range - <c(FFAF00)>140..160<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"bullet125_m_rus_impactor"										"<c(CF9FFF)>Impactor 9M119M «Invar»</c>"}	;t
		{"bullet125_rus ap 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm Practice<c(FFAF00)> 3P31<c(FFFFFF)><c(00FF00)> «Mumija»<c(FFFFFF)>\n - training - \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_rus apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> 3BM48<c(FFFFFF)><c(00FF00)> «Svinets»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>648<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet125_RUS apcr_h 2a46ammo_h 2a82ammo"						"125mm APFSDS<c(4d6ff7)> 3BM44M<c(FFFFFF)><c(00FF00)> «Lekalo»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_RUS cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm HEAT<c(FFAF00)> 3BK29M<c(FFFFFF)><c(00FF00)> «Brejk»<c(FFFFFF)>\n piercing - <c(FF1F00)>700<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n warhead - tandem "}
		{"bullet125_RUS cm_e 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm HEAT<c(FFAF00)> 3BK31<c(FFFFFF)><c(00FF00)> «Start-2»<c(FFFFFF)>\n piercing - <c(FF1F00)>800<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)>experimental<c(FFFFFF)> - "}
		{"bullet125_rus fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm FG<c(FFAF00)> 3FG26<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_rus rok 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125mm TUR<c(FFAF00)> 9M119<c(FFFFFF)>\n piercing - <c(FF1F00)>770<c(FFFFFF)> mm \n range - <c(FFAF00)>140..160<c(FFFFFF)> m.\n guidance type - beam rider "}
		{"bullet125_rus_a cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm HEAT<c(FFAF00)> 3BK18M<c(FFFFFF)><c(00FF00)> «Nadejda-K»<c(FFFFFF)>\n piercing - <c(FF1F00)>594<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_rus_b cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm HEAT<c(FFAF00)> 3BK14<c(FFFFFF)>\n piercing - <c(FF1F00)>486<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_rus_e apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> EPpSv-97<c(FFFFFF)><c(00FF00)> Synthesia<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>500<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_rus_m apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> 3BM42<c(FFFFFF)><c(00FF00)> «Mango»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>486<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_rus_o fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm FG<c(FFAF00)> 3FG19<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,15<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet125_rus_p apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)><c(FFFFFF)><c(00FF00)> «PRONIT»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>540<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - \n variant <c(4d6ff7)>M-711 mk 2<c(FFFFFF)>"}
		{"bullet125_rus_s1 apcr 2a46ammo_h 2a82ammo"					"125mm APFSDS<c(4d6ff7)> 3BM59<c(FFFFFF)><c(00FF00)> «Cvinets-1»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>740<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet125_rus_s2 apcr 2a46ammo_h 2a82ammo"					"125mm APFSDS<c(4d6ff7)> 3BM60<c(FFFFFF)><c(00FF00)> «Cvinets-2»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>660<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> - "}
		{"bullet125_rus_t fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm FG<c(FFAF00)> 3FG82<c(FFFFFF)><c(00FF00)> «Telnik»<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,0<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n - fragmetation warhead - "}
		{"bullet125_rus_v apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> 3BM32<c(FFFFFF)><c(00FF00)> «Vant»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>540<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"bullet125_rus_z apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125mm APFSDS<c(4d6ff7)> 3BM22<c(FFFFFF)><c(00FF00)> «Zakolka»<c(FFFFFF)>\n piercing on 2000 m. - <c(26afeb)>410<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"bullet127_USA fg"												"127mm FG<c(FFAF00)> Mark 80<c(FFFFFF)><c(CCCCCC)> HE-PD<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>310<c(FFFFFF)> m."}
		{"bullet127_USA rok"											"127mm Act-react FG<c(FFAF00)> ERGM<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,5<c(FFFFFF)> kg.\n range - <c(FFAF00)>390<c(FFFFFF)> m."}
		{"bullet130_rus_nav fg"											"130mm FG<c(FFAF00)> F-44<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n HE mass - <c(FF1F00)>3,44<c(FFFFFF)> kg.\n range - <c(FFAF00)>298<c(FFFFFF)> m."}
		{"bullet152 sm"													"bullet152 sm"}	;Obsolete
		{"bullet152_RUS fg"												"152mm FG<c(FFAF00)> 3FG45<c(FFFFFF)><c(00FF00)> «Namestnik-1»<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>255...300<c(FFFFFF)> m."}
		{"bullet152_RUS korr"											"152mm guided<c(FFAF00)> 3FG39<c(FFFFFF)><c(00FF00)> «Krasnopol»<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>290<c(FFFFFF)> m."}
		{"bullet152_RUS rok"											"152mm cluster<c(FFAF00)> 3O23<c(FFFFFF)><c(00FF00)> «Nastojanie»<c(FFFFFF)>\n HEAT-fragmentary \n range - <c(FFAF00)>290...302<c(FFFFFF)> m."}
		{"bullet152_RUS sm"												"<c(CF9FFF)>Loading Mediator bullet152_RUS sm</c>"}	;t
		{"bullet152_rus_a fg bullet152_RUS"								"152mm FG<c(FFAF00)> 3FG25<c(FFFFFF)><c(00FF00)> «Grif»<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>255<c(FFFFFF)> m."}
		{"bullet152_RUS_a nc"											"152mm Tactical nuclear shell<c(FFAF00)> 3BV3<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n HE equivalent - <c(FF1F00)>2.5 KT<c(FFFFFF)> \n range - <c(FFAF00)>255...300<c(FFFFFF)> m."}
		{"bullet152_rus_h fg bullet152_RUS"								"152mm FG<c(FFAF00)> 3FG61<c(FFFFFF)><c(00FF00)> «Аlagez»<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>290...308<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet152_rus_korr2 fg bullet152_rus"							"152mm FG<c(FFAF00)> 3FG45<c(FFFFFF)><c(00FF00)> «Namestnik-1»<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>255...300<c(FFFFFF)> m.\n - semi-guided - "}
		{"bullet155_cn 155_cn cl"										"155mm cluster<c(FFAF00)> DDB02<c(FFFFFF)><c(00FF00)> ERFB<c(FFFFFF)>\n HEAT-fragmentary \n range - <c(FFAF00)>302<c(FFFFFF)> m."}
		{"bullet155_cn 155_cn fg"										"155mm FG<c(FFAF00)> DDB01<c(FFFFFF)>\n HE mass - <c(FF1F00)>7,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>302<c(FFFFFF)> m."}
		{"bullet155_cn 155_cn korr"										"155mm guided<c(FFAF00)> 3FG39<c(FFFFFF)><c(00FF00)> «Krasnopol»<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>290<c(FFFFFF)> m."}
		{"bullet155_cn 155_cn satt"										"155mm guided<c(FFAF00)> WS-35<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>380<c(FFFFFF)> m."}
		{"bullet155_cn 155_cn sm"										"155mm dim.<c(CCCCCC)> M92<c(FFFFFF)> <c(00FF00)> ERFB/WP<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>302<c(FFFFFF)> m."}
		{"bullet155_cn_rok 155_cn fg"									"155mm FG<c(FFAF00)> DDB03<c(FFFFFF)><c(00FF00)> ERFB-BB/RA<c(FFFFFF)>\n HE mass - <c(FF1F00)>3,7<c(FFFFFF)> kg.\n range - <c(FFAF00)>255...300<c(FFFFFF)> m."}
		{"bullet155_GER fg 155ammo"										"155mm FG<c(FFAF00)> DM-121<c(FFFFFF)>\n HE mass - <c(FF1F00)>11,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>295..310<c(FFFFFF)> m."}
		{"bullet155_GER_ar fg 155ammo"									"155mm FG<c(FFAF00)> DM-131<c(FFFFFF)>\n HE mass - <c(FF1F00)>9,2<c(FFFFFF)> kg.\n range - <c(FFAF00)>310..330<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet155_NATO fg 155ammo"									"155mm FG<c(FFAF00)> L15A2<c(FFFFFF)>\n HE mass - <c(FF1F00)>11,3<c(FFFFFF)> kg.\n range - <c(FFAF00)>295..310<c(FFFFFF)> m.\n -<c(CCCCCC)> variant for Bundesvehr <c(FFAF00)>DM-111<c(FFFFFF)> - "}
		{"bullet155_USA cl 155ammo"										"155mm cluster<c(FFAF00)> M483A1<c(FFFFFF)>\n HEAT-fragmentary \n range - <c(FFAF00)>258..294<c(FFFFFF)> m."}
		{"bullet155_USA fg 155ammo"										"155mm FG<c(FFAF00)> M107<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>262..302<c(FFFFFF)> m.\n -<c(CCCCCC)> variant for Bundesvehr <c(FFAF00)>DM-21<c(FFFFFF)> - \n -<c(CCCCCC)> variant British <c(FFAF00)>L-21<c(FFFFFF)> - "}
		{"bullet155_usa nc 155"											"155mm Tactical nuclear shell<c(FFAF00)> KhM-785<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n HE equivalent - <c(FF1F00)>1.5 KT<c(FFFFFF)> \n range - <c(FFAF00)>262...322<c(FFFFFF)> m."}
		{"bullet155_USA satt 155ammo"									"155mm guided<c(FFAF00)> M982<c(FFFFFF)><c(00FF00)> «Excalibur»<c(FFFFFF)> Block 1A-2\n HE mass - <c(FF1F00)>6,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>330..340<c(FFFFFF)> m."}
		{"bullet155_USA spbe 155ammo"									"155mm cluster<c(FFAF00)> DM702<c(FFFFFF)><c(00FF00)> SMArt<c(FFFFFF)>\n smart submunition \n piercing - <c(FF1F00)>150<c(FFFFFF)> mm \n range - <c(FFAF00)>262..302<c(FFFFFF)> m."}
		{"bullet155_USA_ar fg 155ammo"									"155mm FG<c(FFAF00)> M549A1<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>310..330<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet155_USA_pgk fg 155ammo"									"155mm guided FG<c(FFAF00)> M549A1<c(FFFFFF)>with M1156 PGK\n HE mass - <c(FF1F00)>6,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>310..330<c(FFFFFF)> m.\n - rocket-assisted - "}
		{"bullet155_USA_h fg 155ammo"									"155mm FG<c(FFAF00)> M795<c(FFFFFF)>\n HE mass - <c(FF1F00)>10,8<c(FFFFFF)> kg.\n range - <c(FFAF00)>295..310<c(FFFFFF)> m."}
		{"C5 cm"														"UM 57mm<c(FFAF00)> S-5KO<c(FFFFFF)>\n piercing - <c(FF1F00)>172<c(FFFFFF)> mm \n range - <c(FFAF00)>100..130<c(FFFFFF)> m.\n - HE-frag - "}
		{"C5 cm_e"														"UM 57mm<c(FFAF00)> S-5KP<c(FFFFFF)>\n piercing - <c(FF1F00)>250<c(FFFFFF)> mm \n range - <c(FFAF00)>100..130<c(FFFFFF)> m.\n - HE-frag - "}
		{"C5 fg"														"UM 57mm FG<c(FFAF00)> S-5M0<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,415<c(FFFFFF)> kg.\n range - <c(FFAF00)>100..130<c(FFFFFF)> m.\n - fragmentary - "}
		{"dm11_abm_exp"													"<c(CF9FFF)>EXP DM-11</c>"}	;t
		{"gau-8 ap"														"30x173mm AP<c(4d6ff7)> PGU-14/B<c(FFFFFF)> for GAU-8\n piercing on 1000 m. - <c(26afeb)>55<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n -<c(CCCCCC)> DU alloy<c(FFFFFF)> - "}
		{"gau-8 fg"														"30x173mm FGI<c(FFAF00)> PGU-13/B<c(FFFFFF)> for GAU-8\n HE mass - <c(FF1F00)>0,085<c(FFFFFF)> kg.\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"grenade_spg9 cm"												"73mm <c(FFAF00)>PG-9VS<c(FFFFFF)> for SPG-9\n piercing - <c(FF1F00)>432<c(FFFFFF)> mm \n range - <c(FFAF00)>85<c(FFFFFF)> m. "}
		{"grenade_spg9 fg"												"73mm <c(FFAF00)>OG-9VM<c(FFFFFF)> for SPG-9\n HE mass - <c(FF1F00)>0,66<c(FFFFFF)> kg.\n range - <c(FFAF00)>85..150<c(FFFFFF)> m. "}
		{"GSH-30_ammo ap"												"30x165mm AP<c(4d6ff7)> 9А4511<c(FFFFFF)> \n - avia - \n piercing on 1000 m. - <c(26afeb)>40<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> 9A1610 with PVU<c(FFFFFF)> - "}
		{"GSH-30_ammo fg"												"30x165mm FGI<c(FFAF00)> 9А4002K<c(FFFFFF)> \n - avia - \n HE mass - <c(FF1F00)>0,049<c(FFFFFF)> kg.\n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(CCCCCC)> 9A1609 with PVU<c(FFFFFF)> - "}
		{"lahat rok bullet120_israel"									"120mm TUR<c(00FF00)> LAHAT<c(FFFFFF)>\n piercing - <c(FF1F00)>800<c(FFFFFF)> mm \n range - <c(FFAF00)>170<c(FFFFFF)> m.\n guidance type - laser semiactive \n warhead - tandem \n - top attack - "}
		{"lahat_impactor"												"<c(CF9FFF)>Impactor LAHAT</c>"}	;t
		{"mk30abm apcr"													"30x173mm APFSDS<c(4d6ff7)> PMC287<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>106<c(FFFFFF)> mm \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten alloy<c(FFFFFF)> -"}
		{"mk30abm_abm mk30abm fg"										"30x173mm FG<c(FFAF00)> Mk310 PABM-T<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n airburst \n range - <c(FFAF00)>120<c(FFFFFF)> m.\n - fragmetation warhead -  "}
		{"mk30abm_fg mk30abm fg"										"30x173мм FG<c(FFAF00)> HE-I<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n HE mass - <c(FF1F00)>0,040<c(FFFFFF)> kg.\n range - <c(FFAF00)>120<c(FFFFFF)> m."}
		{"mk30abm_fg_exp"												"<c(CF9FFF)>EXP ABM</c>"}	;t
		{"reflex_impactor"												"<c(CF9FFF)>Impactor Reflex</c>"}	;t
		{"tur_kobra 2a46ammo 2a46ammo_h"								"125mm TUR<c(FFAF00)> 9M112M<c(FFFFFF)><c(00FF00)> «Kobra-M»<c(FFFFFF)>\n piercing - <c(FF1F00)>650<c(FFFFFF)> mm \n range - <c(FFAF00)>140<c(FFFFFF)> m.\n guidance type - radiocommand\n "}
		{"tur_kobra_impactor"											"<c(CF9FFF)>Impactor 9M112M «Kobra-M»</c>"}	;t
		{"tur_kombat kbaz_ammo"											"125mm TUR<c(00FF00)> «Kombat»<c(FFFFFF)>\n piercing - <c(FF1F00)>750<c(FFFFFF)> mm \n range - <c(FFAF00)>160<c(FFFFFF)> m.\n guidance type - beam rider\n warhead - tandem "}
		{"tur_kombat_impactor"											"<c(CF9FFF)>Impactor «Kombat»</c>"}	;t
	}
	{"stuff"
		;submunition	
			{"9m218 submunition"										"<c(CF9FFF)>Submunition 9M218</c>"}			;t
			{"152mm_RUS submunition"									"<c(CF9FFF)>Submunition 152mm_RUS</c>"}		;t
			{"250-3 submunition"										"<c(CF9FFF)>Submunition 250-3</c>"}			;t
			{"dropper submunition"										"<c(CF9FFF)>Submunition Dropper</c>"}		;t
			{"m42 submunition"											"<c(CF9FFF)>Submunition M42</c>"}			;t
			{"m74 submunition"											"<c(CF9FFF)>Submunition M74</c>"}			;t
			{"m77 submunition"											"<c(CF9FFF)>Submunition M77</c>"}			;t
			{"type90dpicm submunition"									"<c(CF9FFF)>Submunition Type90 DPICM</c>"}	;t
			{"zab_2_5 submunition"										"<c(CF9FFF)>Submunition ZAB_2_5</c>"}		;t
	}
	{"weapon"
		
	}
;explosive
	{"ammo"
		{"at2_mine_core_impactor"										"<c(CF9FFF)>Impactor AT-2 mine</c>"}		;t
		{"pom_2"														"<c(FFAF00)>POM-2<c(FFFFFF)> <c(00FF00)>«Otek»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,14<c(FFFFFF)> kg.\n - antiinf fragmentary - "}
		{"spbe_pktm1r_core_impactor"									"<c(CF9FFF)>Impactor SPBE PKTM1R Core</c>"}	;t
		{"spbe_pktm1r_impactor"											"<c(CF9FFF)>Impactor PKTM1R</c>"}			;t
	}
	{"stuff"
		{"antipersonnel mine"											"<c(ffff60)>Anti-personnel mine</c>"}
		{"antipersonnel_claymore mine"									"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>M18A1<c(FFFFFF)> <c(00FF00)>«Claymore»<c(FFFFFF)>\n<c(FFFFFF)> - Stretching - <c(FFFFFF)>"}
		{"antipersonnel_m14 mine"										"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>M14<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antipersonnel_mon50 mine"										"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>MON-50<c(FFFFFF)>\n<c(FFFFFF)> - Directional blast - \n - Stretching - <c(FFFFFF)>"}
		{"antipersonnel_ozm72 mine"										"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>OZM-72<c(FFFFFF)>\n<c(FFFFFF)> - Bounding - \n - Stretching - <c(FFFFFF)>"}
		{"antipersonnel_pmn3 mine"										"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>PMN-3<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antipersonnel_pob mine"										"<c(ffff60)>Anti-personnel mine</c> <c(FFAF00)>POB<c(FFFFFF)>\n<c(FFFFFF)> - Bounding - \n - Stretching - <c(FFFFFF)>"}
		{"antitank mine"												"<c(ffff60)>Anti-tank mine</c>"}
		{"antitank_dm21 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>DM-21<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antitank_dm31 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>DM-31<c(FFFFFF)>\n<c(FFFFFF)> - Magnetic-activated - <c(FFFFFF)>"}
		{"antitank_m19 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>M19<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antitank_m21 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>M21<c(FFFFFF)>\n<c(FFFFFF)> - Proximity-activated - <c(FFFFFF)>"}
		{"antitank_pktm1r mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>PKTM-1R<c(FFFFFF)>\n<c(FFFFFF)> - Anti-roof - \n - Seismic sensor - <c(FFFFFF)>"}
		{"antitank_tm46 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>TM-46<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antitank_tm62m mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>TM-62<c(FFFFFF)>\n<c(FFFFFF)> - Pressure-activated - <c(FFFFFF)>"}
		{"antitank_tm83 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>TM-83<c(FFFFFF)>\n<c(FFFFFF)> - Anti-side - \n - IR sensor - <c(FFFFFF)>"}
		{"antitank_tm89 mine"											"<c(ffff60)>Anti-tank mine</c> <c(FFAF00)>TM-89<c(FFFFFF)>\n<c(FFFFFF)> - Magnetic-activated - <c(FFFFFF)>"}
		{"at2_mine"														"<c(CF9FFF)>Jumper AT-2</c>"}				;t
		{"c4_bomb"														"<c(ffff60)>Composition<c(FFFFFF)><c(FFAF00)> C-4<c(FFFFFF)>\nHE mass - <c(FF1F00)>6,5<c(FFFFFF)> kg\nUse it to remove obstacles and sabotage enemy assets</c>"}
		{"cw_fgassist_2to4_5"											"<c(CF9FFF)>Assistor 2 to 4.5</c>"}			;t
		{"cw_fgassist_4_5to8"											"<c(CF9FFF)>Assistor 4.5 to 8</c>"}			;t
		{"cw_fgassist_07to2"											"<c(CF9FFF)>Assistor 7 to 2</c>"}			;t
		{"cw_fgassist_8to30"											"<c(CF9FFF)>Assistor 8 to 30</c>"}			;t
		{"cw_fgassist_over30"											"<c(CF9FFF)>Assistor Over 30</c>"}			;t
		{"cw_human_secdamage2"											"<c(CF9FFF)>Assistor Second Damage 2</c>"}	;t
		{"cw_human_secdamage3"											"<c(CF9FFF)>Assistor Second Damage 3</c>"}	;t
		{"dynamite"														"<c(ffff60)>TNT charge</c>"}
		{"dynamite_radio1"												"Cell bomb №1"}
		{"dynamite_radio2"												"Cell bomb №2"}
		{"dynamite_radio3"												"Cell bomb №3"}
		{"dynamite_radio4"												"Cell bomb №4"}
		{"explosion_0_5kg"												"<c(CF9FFF)>Service 0.5kg</c>"}				;t
		{"explosion_1kg"												"<c(CF9FFF)>Service 1kg</c>"}				;t
		{"explosion_2kg"												"<c(CF9FFF)>Service 2kg</c>"}				;t
		{"explosion_4kg"												"<c(CF9FFF)>Service 4kg</c>"}				;t
		{"explosion_10kg"												"<c(CF9FFF)>Service 10kg</c>"}				;t
		{"explosion_50kg"												"<c(CF9FFF)>Service 50kg</c>"}				;t
		{"explosion_200kg"												"<c(CF9FFF)>Service 200kg</c>"}				;t
		{"explosion_1000kg"												"<c(CF9FFF)>Service 1000kg</c>"}			;t
		{"explosion_5000kg"												"<c(CF9FFF)>Service 5000kg</c>"}			;t
		{"flashmine"													"<c(ffff60)><c(ffff60)>Tripflare mine\n<c(FFFFFF)>When the tripwire is triggered, the flare pops in the air and begins burning."}
		{"flashmine_jumper"												"<c(CF9FFF)>Jumper Flash Mine</c>"}	;t
		{"frogmine"														"<c(ffff60)>Frogmine</c>"}
		{"frogmine_jumper"												"<c(CF9FFF)>Jumper Frog Mine</c>"}	;t
		{"mine_antipersonnel_ozm72_j"									"<c(CF9FFF)>Jumper OZM-72 Mine</c>"}	;t
		{"mine_antipersonnel_pob_j"										"<c(CF9FFF)>Jumper POB Mine</c>"}	;t
		{"pfm-1"														"<c(FFAF00)>PFM-1<c(FFFFFF)> <c(00FF00)>«Lepestok»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,04<c(FFFFFF)> kg.\n - antiinf HE - "}
		{"pom_2_installed"												"<c(CF9FFF)>Impactor POM-2</c>"}	;t
		{"ptm-1"														"<c(FFAF00)>PTM-1<c(FFFFFF)>\n HE mass - <c(FF1F00)>1,1<c(FFFFFF)> kg.\n - antitank antitrack - "}
		{"signal_m49a1 mine"											"<c(ffff60)><c(ffff60)>Tripflare mine</c> <c(FFAF00)>M49A1<c(FFFFFF)>\n<c(FFFFFF)>When the tripwire is triggered, the flare pops in the air and begins burning."}
		{"signal_sm320 mine"											"<c(ffff60)><c(ffff60)>Tripflare mine</c> <c(FFAF00)>SM320<c(FFFFFF)>\n<c(FFFFFF)>When the tripwire is triggered, the flare pops in the air and begins burning."}
	}
	{"weapon"
		{"URP"															"URP dlja<c(FFAF00)> POM-2<c(FFFFFF)>"}
	}
;flame
	{"ammo"
		
	}
	{"stuff"
		{"balloon"														"<c(ffff60)>Fuel container</c>"}	;vanilla
		{"balloon_lpo50"												"Bak <c(FFAF00)> LPO-50<c(FFFFFF)>"}
		{"type02c_barrel"												"Bak <c(FFAF00)> Type-02C<c(FFFFFF)>"}
	}
	{"weapon"
		{"flamegun"														"Flamethrower"}
		{"lpo50"														"Flamethrower <c(FFAF00)> LPO-50<c(FFFFFF)>"}
		{"type02c_weap"													"Flamethrower <c(FFAF00)> Type-02C<c(FFFFFF)>"}
	}
;grenade
	{"ammo"
		{"35x32ammo cm"													"35x32mm grenade HEAT<c(FFAF00)> DFJ87-35<c(FFFFFF)> \n piercing - <c(FF1F00)>70<c(FFFFFF)> mm \n range - <c(FFAF00)>92<c(FFFFFF)> m.\n - HE-frag - "}
		{"35x32ammo fg"													"35x32mm grenade frag<c(FFAF00)> DFS87-35<c(FFFFFF)> \n HE mass - <c(FF1F00)>0,04<c(FFFFFF)> kg.\n range - <c(FFAF00)>92<c(FFFFFF)> m."}
		{"40x46ammo 40x46_gerpg cm"										"40x46mm grenade HEAT<c(00FF00)> Arges<c(FFFFFF)><c(FFAF00)> HEDP92<c(FFFFFF)>\n piercing - <c(FF1F00)>40<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n- fragmetation warhead - "}
		{"40x46ammo 40x46_gerpg fg"										"40x46mm grenade frag<c(00FF00)> Arges<c(FFFFFF)><c(FFAF00)> HEFRAG92-A2<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,033<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m.\n- fragmetation warhead -"}
		{"40x46ammo 40x46_natopg cm"									"40x46mm grenade HEAT<c(FFAF00)> MK313<c(FFFFFF)> Rheinmetall\n piercing - <c(FF1F00)>80<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n - HE-frag - "}
		{"40x46ammo 40x46_natopg fg"									"40x46mm grenade frag<c(FFAF00)> DM-101A2<c(FFFFFF)> Diehl\n HE mass - <c(FF1F00)>0,03<c(FFFFFF)> kg. \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n- fragmetation warhead -"}
		{"40x53ammo 40x53_gerpg cm"										"40x53mm grenade HEAT<c(FFAF00)> DM-42<c(FFFFFF)> Diehl\n piercing - <c(FF1F00)>70<c(FFFFFF)> mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n - HE-frag - "}
		{"40x53ammo 40x53_gerpg fg"										"40x53mm grenade frag<c(FFAF00)> DM-121<c(FFFFFF)> Diehl\n HE mass - <c(FF1F00)>0,039<c(FFFFFF)> kg.\n range - <c(FFAF00)>105<c(FFFFFF)> m.\n- fragmetation warhead - "}
		{"40x53ammo 40x53_natopg cm"									"40x53mm grenade HEAT<c(FFAF00)> HEDP ESD<c(FFFFFF)> Rheinmetall\n piercing - <c(FF1F00)>80<c(FFFFFF)> mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n - HE-frag - "}
		{"40x53ammo 40x53_natopg fg"									"40x53mm grenade frag<c(FFAF00)> HE ESD<c(FFFFFF)> Rheinmetall\n HE mass - <c(FF1F00)>0,065<c(FFFFFF)> kg.\n range - <c(FFAF00)>105<c(FFFFFF)> m."}
		{"40x53ammo 40x53_usapg cm"										"40x53mm grenade HEAT<c(FFAF00)> M-430A1<c(FFFFFF)>\n piercing - <c(FF1F00)>76<c(FFFFFF)> mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n - HE-frag - "}
		{"40x53ammo mk19_ammo cm"										"40x53mm grenade HEAT<c(FFAF00)> M-430<c(FFFFFF)>\n piercing - <c(FF1F00)>50<c(FFFFFF)> mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n - HE-frag - "}
		{"40x53ammo mk19_ammo fg"										"40x53mm grenade frag<c(FFAF00)> M-384<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,054<c(FFFFFF)> kg.\n range - <c(FFAF00)>105<c(FFFFFF)> m."}
		{"cn_pg fg"														"35x32mm underbarrel grenade<c(FFAF00)> DFS-10<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,032<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"gm94ammo fg"													"43mm grenade frag<c(FFAF00)> VGM93.900<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,16<c(FFFFFF)> kg. \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo flash"												"43mm grenade<c(FFAF00)> VGM93.400<c(FFFFFF)>\n - flashbang -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo gas"													"43mm grenade<c(FFAF00)> VGM93.200<c(FFFFFF)>\n - gas -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo gas_short"											"43mm grenade<c(FFAF00)> VGM93.500<c(FFFFFF)>\n - aerosol -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo l"													"43mm grenade<c(FFAF00)> VGM93.1200<c(FFFFFF)>\n - illuminational -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo rubber"												"43mm grenade<c(FFAF00)> VGM93.600<c(FFFFFF)>\n - traumatic -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo sm"													"43mm grenade<c(FFAF00)> VGM93.300<c(FFFFFF)>\n - smoke -  \n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"gm94ammo tb"													"43mm grenade fug.<c(FFAF00)> VGM93.100<c(FFFFFF)>\n fuel mass - <c(FF1F00)>0,16<c(FFFFFF)> kg.\n range - <c(FFAF00)>63<c(FFFFFF)> m. "}
		{"grenade_famas cm"												"Rifle grenade<c(FFAF00)> AC 58<c(FFFFFF)>\n piercing - <c(FF1F00)>350<c(FFFFFF)> mm \n range - <c(FFAF00)>49<c(FFFFFF)> m."}
		{"grenade_famas fg"												"Rifle grenade<c(FFAF00)> APAV 40<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,08<c(FFFFFF)> kg.\n piercing - <c(FF1F00)>100<c(FFFFFF)> mm \n range - <c(FFAF00)>49<c(FFFFFF)> m."}
		{"grenade_famas sm"												"Rifle grenade<c(FFAF00)> FUM 50<c(FFFFFF)>\n range - <c(FFAF00)>49<c(FFFFFF)> m.\n - smoke -"}
		{"grenade_xm25 cm"												"25x40mm grenade for XM25 \n piercing - <c(FF1F00)>50<c(FFFFFF)> mm \n range - <c(FFAF00)>72<c(FFFFFF)> m."}
		{"grenade_xm25 fg"												"25x40mm grenade for XM25 \n HE mass - <c(FF1F00)>0,04<c(FFFFFF)> kg.\n range - <c(FFAF00)>72<c(FFFFFF)> m."}
		{"mortar pd a"													"underbarrel grenade<c(FFAF00)> VOG-25<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,048<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"mortar pd l"													"underbarrel grenade<c(FFAF00)> VOG-40I<c(FFFFFF)>\n - illuminational - \n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"mortar pd m"													"underbarrel grenade<c(FFAF00)> VOG-25M<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,068<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"mortar pd p"													"underbarrel grenade<c(FFAF00)> VOG-25P<c(FFFFFF)><c(00FF00)> «Podkidish»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,041<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m.\n - jumping - "}
		{"mortar pd pm"													"underbarrel grenade<c(FFAF00)> VOG-25PM<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,056<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m.\n - jumping - "}
		{"mortar pdb"													"30x29mm shell<c(FFAF00)> BOG-17M<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,04<c(FFFFFF)> kg.\n range - <c(FFAF00)>92<c(FFFFFF)> m."}
		{"mortar pdd"													"30x29mm shell<c(FFAF00)> BOG-30D<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,04<c(FFFFFF)> kg.\n range - <c(FFAF00)>105<c(FFFFFF)> m."}
		{"nato_pg cm"													"40x46mm grenade HEAT<c(FFAF00)> M-433<c(FFFFFF)>\n piercing - <c(FF1F00)>63<c(FFFFFF)> mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n - HE-frag - "}
		{"nato_pg fg"													"40x46mm grenade frag<c(FFAF00)> M-406<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,032<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m."} 
		{"nato_pg l"													"40x46mm grenade <c(FFAF00)> M-583A1<c(FFFFFF)>\n - illuminational - \n range - <c(FFAF00)>53<c(FFFFFF)> m."}
		{"nato_pg p"													"40x46mm grenade frag<c(FFAF00)> M-397А1<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,032<c(FFFFFF)> kg.\n range - <c(FFAF00)>53<c(FFFFFF)> m.\n - jumping -"}
	}
	{"stuff"
		;01 grenade_ap
			{"f1"														"Hand grenade<c(FFAF00)> F1<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>25<c(FFFFFF)> m.\n - defencive - "}
			{"f1_script"												"Hand grenade<c(FFAF00)> F1<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>25<c(FFFFFF)> m.\n - defencive - "}
			{"m61"														"Hand grenade<c(FFAF00)> M61<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,165<c(FFFFFF)> kg.\n range - <c(FFAF00)>27<c(FFFFFF)> m.\n - defencive - "}
		{"dm51gr"														"Hand grenade<c(FFAF00)> DM-51<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,060<c(FFFFFF)> kg.\n range - <c(FFAF00)>28<c(FFFFFF)> m.\n - defencive - \n - Fragmetation warhead - "}
		{"grenade_xm25_fg_exp"											"<c(CF9FFF)>EXP XM25 Grenade</c>"}	;t
		{"l109a1"														"Hand grenade<c(FFAF00)> L109A1<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,155<c(FFFFFF)> kg.\n range - <c(FFAF00)>28<c(FFFFFF)> m.\n - assault - "}
		{"m67"															"Hand grenade<c(FFAF00)> M67<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,184<c(FFFFFF)> kg.\n range - <c(FFAF00)>29<c(FFFFFF)> m.\n - assault - "}
		{"m397p_exp"													"<c(CF9FFF)>EXP M397</c>"}	;t
		{"of37_grenade"													"Hand grenade<c(FFAF00)> OF-37<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,115<c(FFFFFF)> kg.\n range - <c(FFAF00)>28<c(FFFFFF)> m.\n - assault - "}
		{"rgd"															"Hand grenade<c(FFAF00)> RGD-5<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,11<c(FFFFFF)> kg.\n range - <c(FFAF00)>30<c(FFFFFF)> m.\n - assault - "}
		{"rgn"															"Hand grenade<c(FFAF00)> RGN<c(FFFFFF)><c(00FF00)> «Podval»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,114<c(FFFFFF)> kg.\n range - <c(FFAF00)>30<c(FFFFFF)> m.\n - assault - "}
		{"rgo"															"Hand grenade<c(FFAF00)> RGO<c(FFFFFF)><c(00FF00)> «Pogreb»<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,092<c(FFFFFF)> kg.\n range - <c(FFAF00)>26<c(FFFFFF)> m.\n - defencive - "}
		{"rgz-89"														"Hand grenade<c(FFAF00)> RGZ-89<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,11<c(FFFFFF)> kg.\n range - <c(FFAF00)>30<c(FFFFFF)> m.\n - assault - "}
		{"rkg3"															"Hand grenade<c(FFAF00)> RKG-3EM<c(FFFFFF)>\n piercing - <c(FF1F00)>250<c(FFFFFF)> mm \n range - <c(FFAF00)>14<c(FFFFFF)> m.\n - antitank - "}
		{"smoke"														"<c(ffff60)>Smoke grenade</c>"}
		{"smoke m18"													"<c(ffff60)>Smoke grenade M18</c>"}
		{"smoke rdg2b"													"<c(ffff60)>Smoke grenade RDG-2B</c>"}
		{"smoke smoke_cn"												"<c(ffff60)>Smoke grenade</c>"}
		{"smoke smoke_fr"												"<c(ffff60)>Smoke grenade</c>"}
		{"smoke smoke_gb"												"<c(ffff60)>Smoke grenade</c>"}
		{"smoke smoke_ger"												"<c(ffff60)>Smoke grenade</c>"}
		{"type73"														"Hand grenade<c(FFAF00)> Type 73<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,07<c(FFFFFF)> kg.\n range - <c(FFAF00)>30<c(FFFFFF)> m.\n - assault - "}
		{"type86p"														"Hand grenade<c(FFAF00)> DRH181<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,07<c(FFFFFF)> kg.\n range - <c(FFAF00)>26<c(FFFFFF)> m.\n - defencive - "}
		{"urg86"														"Hand grenade<c(FFAF00)> URG-86<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,042<c(FFFFFF)> kg.\n range - <c(FFAF00)>29<c(FFFFFF)> m.\n - assault - "}
		{"vog_25p_exp"													"<c(CF9FFF)>EXP VOG-25P</c>"}	;t
		{"vog_25pm_exp"													"<c(CF9FFF)>EXP VOG-25PM</c>"}	;t
	}
	{"weapon"
		
	}
;head
	{"ammo"
		
	}
	{"stuff"
		{"1m_helmet_ua"													"Helmet <c(00FF00)>1M<c(FFFFFF)>  Ukrainian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"1m_helmet_uavdv"												"Helmet <c(00FF00)>1M<c(FFFFFF)> VDV Ukrainian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b7"															"Helmet <c(00FF00)>6B7<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"6b7_1"														"Helmet <c(00FF00)>6B7<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"6b7_2"														"Helmet <c(00FF00)>6B7<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"6b47"															"Helmet <c(00FF00)>6B47<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_headphones"												"Helmet <c(00FF00)>6B47<c(FFFFFF)> with headphones Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_valken_bel"												"Helmet <c(00FF00)>6B47<c(FFFFFF)> Belorussian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_valken_belvdv"											"Helmet <c(00FF00)>6B47<c(FFFFFF)> VDV Belorussian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}		
		{"6b47che"														"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che_headphones"											"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover i headphones Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che1"														"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che1_headphones"											"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover i headphones Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che2"														"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che2_headphones"											"Helmet <c(00FF00)>6B47<c(FFFFFF)> with cover i headphones Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"6b48_helmet"													"Helmet <c(00FF00)>6B48<c(FFFFFF)> for tankman Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"afv-400"														"Helmet <c(00FF00)>AFV-400<c(FFFFFF)> for tankman British army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"alpha700"														"Helmet <c(00FF00)>Alpha 700<c(FFFFFF)> pilot's VBritish army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"altin_helm"													"Helmet <c(00FF00)>Аltin<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"altin1_helm"													"Helmet <c(00FF00)>Аltin<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"beret_borderguard_bel"										"Beret borderguard's Belorussian"}
		{"beret_brit"													"Beret British army"}
		{"beret_britraf"												"Beret VBritish army"}
		{"beret_brittank"												"Beret for tankman British army"}
		{"beret_cz"														"Beret Czech army"}	
		{"beret_fra"													"Beret French"}
		{"beret_fracz"													"Beret VS NATO"}
		{"beret_frg"													"Beret Bundeswehr"}
		{"beret_frgtank"												"Beret for tankman Bundeswehr"}
		{"beret_irq"													"Beret Iraq army"}
		{"beret_lat"													"Beret Latvian army"}
		{"beret_rusmarines"												"Beret marines brigade Rossii"}
		{"beret_sas"													"Beret  SAS"}
		{"beret_taj"													"Beret Tajikistan army"}
		{"beret_usa"													"Beret US army"}
		{"beret_usara"													"Beret for rangers USA"}
		{"beret_usarmy"													"Beretarmy US army"}
		{"beret_vdv"													"Beret VDV Rossii"}
		{"beret_vdv_bel"												"Beret VDV Belorussian"}
		{"beret_vp"														"Beret military police Rossii"}
		{"beret_vv"														"Beret national guard Rossii"}
		{"cap_afgan"													"Аfganka"}
		{"cap_baseball"													"Baseball cap "}
		{"cap_baseball_peltor"											"Baseball cap with headphones "}
		{"cap_baseball_peltor_od"										"Baseball cap with headphones "}
		{"cap_baseball_syr"												"Baseball cap Syrian army"}
		{"cap_baseball_tur"												"Baseball cap VS Turtsii"}
		{"cap_black"													"Cap black"}
		{"cap_cn"														"Cap PLA"}
		{"cap_cu"														"Cap VS Kubi"}
		{"cap_cu_spec"													"Cap VS Kubi"}
		{"cap_cz"														"Cap Czech army"}
		{"cap_est"														"Cap Estonian army"}
		{"cap_flora"													"CapFlora  "}
		{"cap_furajka"													"Cap "}
		{"cap_furajka_chflot"											"Cap Russian NAVY"}
		{"cap_ger"														"Cap Bundeswehr"}
		{"cap_iran"														"Cap Iranian army"}
		{"cap_lit"														"Cap Lituanian army"}
		{"cap_office"													"Cap office Russian army"}
		{"cap_olive"													"Cap olive drab "}
		{"cap_panama"													"Panama"}
		{"cap_panama_cn"												"Panama PLA"}
		{"cap_panama_cz"												"Panama Czech army"}
		{"cap_panama_ger"												"Panama Bundeswehr"}
		{"cap_panama_hun"												"Panama Hungarian army"}
		{"cap_panama_jsdf"												"Panama Japan army"}
		{"cap_panama_lit"												"Panama Lituanian army"}
		{"cap_panama_taiwan"											"Panama VS Tajvanja"}
		{"cap_panama_uavaran"											"Panama Ukrainian army"}
		{"cap_pilot"													"Pilotka VRussian army"}
		{"cap_pilot_poland"												"Pilotka Polish"}
		{"cap_syr"														"Cap Syrian army"}
		{"cap_taj"														"Cap Tajikistan army"}
		{"cap_ua"														"Cap Ukrainian army"}
		{"cap_usa"														"Cap US army"}
		{"cap_usa2003"													"Cap US army mod. 2003g"}
		{"cap_ushanka"													"Ushanka VKPO Russian army"}
		{"cap_ushanka_cn"												"Ushanka PLA"}
		{"cap_ushanka2"													"Ushanka "}
		{"cap_usmc"														"Cap US Marines"}
		{"cap_vkpo"														"Cap VKPO Russian army"}
		{"cap_vkpo_old"													"Cap VKPO starogo obraztsa Russian army"}
		{"cap_wool"														"Hat knitted "}
		{"cvc_helmet"													"Helmet <c(00FF00)>CVC<c(FFFFFF)> for tankman \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"cvc_helmet_eps21"												"Helmet <c(00FF00)>CVC<c(FFFFFF)> for tankman  with ballistic glasses EPS-21 \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"cvc_helmet_valken"											"Helmet <c(00FF00)>CVC<c(FFFFFF)> for tankman  with ballistic glasses \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"ech_helmet"													"Helmet <c(00FF00)>ECH<c(FFFFFF)>  US army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"ech_helmet_geo"												"Helmet <c(00FF00)>ECH<c(FFFFFF)>  Georgian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"elmo_dh-586"													"Helmet <c(00FF00)>ELMO DH-586<c(FFFFFF)> for tankman French\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"fmj08"														"Gas mask <c(00FF00)>FMJ-08<c(FFFFFF)>  PLA"}
		{"frns"															"Gas mask <c(00FF00)>Fernez Panoramasque<c(FFFFFF)>  French"}
		{"gp5"															"Gas mask <c(00FF00)>GP-5<c(FFFFFF)>  Russian army"}
		{"helmet_jsdf"													"Helmet <c(00FF00)>Type 66<c(FFFFFF)> Japan army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_m826"													"Helmet <c(00FF00)>M826<c(FFFFFF)>  Bundeswehr\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_m826_driver"											"Helmet <c(00FF00)>M826<c(FFFFFF)> Driver's Bundeswehr\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_mk7"													"Helmet <c(00FF00)>Mk7<c(FFFFFF)>  British army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_mk7_net"												"Helmet <c(00FF00)>Mk7<c(FFFFFF)> netting British army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"hgu55_plane"													"Helmet <c(00FF00)>HGU-55<c(FFFFFF)> pilot's \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"hgu56_heli"													"Helmet <c(00FF00)>HGU-56<c(FFFFFF)> for heli pilot \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"idf_or201_mitznefet"											"Helmet <c(00FF00)>OR-201<c(FFFFFF)>  Israel army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"idf_or201_spec"												"Helmet <c(00FF00)>OR-201<c(FFFFFF)> with mitznefet Israel army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"ihadss"														"Helmet <c(00FF00)>IHADSS<c(FFFFFF)> pilot's AH-64 \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"kufia_head"													"Kufia"}
		{"lshz1plus_sso"												"Helmet <c(00FF00)>LShZ-1 pljus<c(FFFFFF)>  Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_com"											"Helmet <c(00FF00)>LShZ-1 pljus<c(FFFFFF)> squad com Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_com_open"										"Helmet <c(00FF00)>LShZ-1 pljus<c(FFFFFF)> squad com Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_open"											"Helmet <c(00FF00)>LShZ-1 pljus<c(FFFFFF)>  Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"lwh_helmet"													"Helmet <c(00FF00)>LWH<c(FFFFFF)>  US Marines\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"m50"															"Gas mask <c(00FF00)>M50<c(FFFFFF)>  US army"}
		{"m80_helmet"													"Helmet <c(00FF00)>M80<c(FFFFFF)>  Iraq army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"m80_helmet_guard"												"Helmet <c(00FF00)>M80<c(FFFFFF)>  Iraq Republican Guards\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"m2000"														"Gas mask <c(00FF00)>M2000<c(FFFFFF)>  Bundeswehr"}
		{"mich2000"														"Helmet <c(00FF00)>MICH2000<c(FFFFFF)> VS Tajvanja\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   1Er Rpima\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_com"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  1Er Rpima\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_com_open"									"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  1Er Rpima\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_open"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   1Er Rpima\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_cn"													"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_cn_open"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_com_cn"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_com_cn_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Delta Force\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_com"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  Delta Force\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_com_open"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  Delta Force\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Delta Force\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk"													"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   KSK\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_com"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  KSK\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_com_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  KSK\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_open"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   KSK\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  for rangers USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_com"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com for rangers USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_com_open"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com for rangers USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  for rangers USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sas"													"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   SAS\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Sayeret Matkal\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_com"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  Sayeret Matkal\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_com_open"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com  Sayeret Matkal\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Sayeret Matkal\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Navy Seals USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_com"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com Navy Seals USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_com_open"										"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com Navy Seals USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Navy Seals USA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso"													"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_com"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_com_open"											"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)> squad com Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_open"												"Helmet <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Russian SSO\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pakol"														"Pushtunka"}
		{"panama_afgan"													"Panama afganka"}
		{"panama_cuba"													"Panama VS Kubi"}
		{"pasgt_helmet"													"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_6b50_kz"											"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Kazakhstanian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_6b50_taj"										"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Tajikistan army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_cz"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  Czech army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_est"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Estonian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_hun"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  Hungarian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_iran"											"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Iranian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_lat"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Latvian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_lit"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   Lituanian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_od"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>   \nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_pol"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  Polish\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_syr"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  Syrian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_tur"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  VS Turtsii\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_ucp"												"Helmet <c(00FF00)>PASGT<c(FFFFFF)> UCP US army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_valken"											"Helmet <c(00FF00)>PASGT<c(FFFFFF)>  with ballistic glasses US army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_valken_ucp"										"Helmet <c(00FF00)>PASGT<c(FFFFFF)> UCP  with ballistic glasses US army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"peltor_comtac"												"Headphones <c(00FF00)>Peltor Comtac<c(FFFFFF)>  "}
		{"pmk3"															"Gas mask <c(00FF00)>PMK-3<c(FFFFFF)>  Russian army"}
		{"pmk4"															"Gas mask <c(00FF00)>PMK-4<c(FFFFFF)>  Russian army"}
		{"qgf03"														"Helmet <c(00FF00)>QGF-03<c(FFFFFF)>  PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"qgf03_glasses"												"Helmet <c(00FF00)>QGF-03<c(FFFFFF)>  PLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"s10_gasmask"													"Gas mask <c(00FF00)>S-10<c(FFFFFF)>  British army"}
		{"scuba_mask"													"Mask for podvodnogo plavanija"}
		{"sh-68"														"Helmet <c(00FF00)>SSh-68<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_flora"													"Helmet <c(00FF00)>SSh-68<c(FFFFFF)> with cover Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_setka"													"Helmet <c(00FF00)>SSh-68<c(FFFFFF)> with netting Russian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_ua"														"Helmet <c(00FF00)>SSh-68<c(FFFFFF)>  Ukrainian army\nProtection level <c(FF0000)>1<c(FFFFFF)> "}
		{"spectra_helmet"												"Helmet <c(00FF00)>SPECTRA<c(FFFFFF)>  French\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"sphera"														"Helmet <c(00FF00)>Sfera<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"telemit_h-280"												"Helmet <c(00FF00)>Telemit H-280<c(FFFFFF)> for tankman Bundeswehr\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"tk11c_helmet"													"Helmet <c(00FF00)>TK-11C<c(FFFFFF)> letchika VPLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"tmt5_helmet"													"Helmet <c(00FF00)>TMT-5<c(FFFFFF)> for tankman PLA"}
		{"topowl"														"Helmet <c(00FF00)>TopOwl<c(FFFFFF)> pilot's Tiger VFrench\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"tsh3l"														"Helmet <c(00FF00)>TSh-3L<c(FFFFFF)> for tankman "}
		{"tsh3l_poland"													"Helmet <c(00FF00)>TSh-3L<c(FFFFFF)> for tankman Polish"}
		{"z10_pilot_helmet"												"Helmet for heli pilot Z-10 VPLA\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1"															"Helmet <c(00FF00)>ZSh-1<c(FFFFFF)>  Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1_1"														"Helmet <c(00FF00)>ZSh-1<c(FFFFFF)>  with ballistic glasses Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1_2"														"Helmet <c(00FF00)>ZSh-1<c(FFFFFF)>  with ballistic glasses Russian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh7apn"														"Helmet <c(00FF00)>ZSh-7АPN<c(FFFFFF)> letchika VRussian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh7v"														"Helmet <c(00FF00)>ZSh-7V<c(FFFFFF)> for heli pilot VRussian army\nProtection level <c(FF0000)>2<c(FFFFFF)> "}
	}
	{"weapon"
		
	}
;Mask
	{"ammo"
		
	}
	{"stuff"
		{"head_rad"														"Headphones radista"}
		{"leshii_helm"													"Mask Leshij-bandana"}
		{"Platok_mask"													"Mask ChN  Mask on litso"}
		{"sas_mask"														"Mask"}
		{"spec_gaz"														"Mask RF Gas mask"}
	}
	{"weapon"
		
	}
;med
	{"ammo"
		
	}
	{"stuff"
		{"medkit"														"<c(ffff60)>Medikit</c>"}	;vanilla
	}
	{"weapon"
		
	}
;melee
	{"ammo"
		
	}
	{"stuff"
		{"axe"															"<c(ffff60)>Axe\n<c(FFFFFF)>Use it to cut down trees.</c>"}
		{"ballistic_knife"												"<c(ffff60)>Knife</c>"}
		{"crow_bar"														"<c(ffff60)>Crowbar</c>"}	;vanilla
		{"knife_army"													"<c(ffff60)>Knife</c>"}
		{"knife_bowie"													"<c(ffff60)>Knife</c>"}
		{"knife_cn"														"<c(ffff60)>Knife</c>"}
		{"knife_ger"													"<c(ffff60)>Knife</c>"}
		{"knife_japan"													"<c(ffff60)>Knife</c>"}
		{"knife_old"													"<c(ffff60)>Knife</c>"}
		{"knife_rus"													"<c(ffff60)>Knife</c>"}
		{"knife_union"													"<c(ffff60)>Knife</c>"}
		{"knife1"														"<c(ffff60)>Knife</c>"}
		{"rambo_knife"													"<c(ffff60)>Knife</c>"}
	}
	{"weapon"
		
	}
;mgun
	{"ammo"
		{"50Nato"														"Ammo 12,7x99mm<c(FFFF00)> M2<c(FFFFFF)>\n piercing on 500 m. - <c(26afeb)>19<c(FFFFFF)> mm \n range - <c(FFAF00)>100...105<c(FFFFFF)> m."}	
		{"50NatoAP"														"Ammo 12,7x99mm<c(FFFF00)> M903<c(FFFFFF)><c(00FF00)> SLAP<c(FFFFFF)>\n piercing on 1200 m. - <c(26afeb)>23<c(FFFFFF)> mm \n range - <c(FFAF00)>100...105<c(FFFFFF)> m.\n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - \n - for s<c(FFAF00)> M2NV<c(FFFFFF)> - "}
		{"556NatoMB"													"Ammo 5,56x45mm x100<c(FFAF00)> SS109<c(FFFFFF)> "}	
		{"762cn_200ammo"												"Ammo 7,62x51mm<c(FFAF00)> DJP-201<c(FFFFFF)>\n"}
		{"762Nato"														"Ammo 7,62x51mm<c(FFAF00)> M80<c(FFFFFF)>\n variant for Bundesvehr - <c(FFAF00)>DM-111<c(FFFFFF)>"}
		{"dshkm_ammo"													"Use ammo for NSV"} ;HCB
		{"Hcb_ammo"														"Ammo 12,7x108mm<c(FFFF00)> B-32<c(FFFFFF)>\n piercing on 500 m. - <c(26afeb)>20<c(FFFFFF)> mm \n range - <c(FFAF00)>85...105<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"Kpvt_ammo kpvtammo"											"Ammo 14,5x114mm<c(FFFF00)> B-32<c(FFFFFF)>\n piercing on 500 m. - <c(26afeb)>30<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"Kpvt_bst kpvtammo"											"Ammo 14,5x114mm<c(FFFF00)> AP<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>20<c(FFFFFF)> mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"Kpvt_mdz kpvtammo"											"Ammo 14,5x114mm<c(FFFF00)> MDZ<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m. \n -<c(d7cc81)> fragmentary<c(FFFFFF)>/<c(FF1F00)>incendiary<c(FFFFFF)> - "}
		{"kpvtammo"														"<c(CF9FFF)>Loading Mediator kpvtammo</c>"}	;t
		{"M61ammo vulcan20mm"											"20x102mm SAPHEIT<c(FFAF00)> M53<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>11<c(FFFFFF)> mm \n range - <c(FFAF00)>90<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"M61ammo vulcan20mmA"											"20x102mm FG<c(FFAF00)> PGU28A/B<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>10<c(FFFFFF)> mm \n HE mass - <c(FF1F00)>0,006<c(FFFFFF)> kg.\n range - <c(FFAF00)>90<c(FFFFFF)> m.\n -<c(FF1F00)> incendiary<c(FFFFFF)> - "}
		{"M61ammo vulcan20mmB"											"20x102mm AP<c(00FF00)> FAP<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>22<c(FFFFFF)> mm \n range - <c(FFAF00)>90<c(FFFFFF)> m.\n -<c(CCCCCC)> fragmentary<c(FFFFFF)> - "}
		{"PKM_ammo"														"Ammo 7,62x54mm<c(FFAF00)> LPS<c(FFFFFF)>"}	
		{"ptr"															"<c(CF9FFF)>Loading PTR</c>"}	;t
		{"RPK_ammo"														"Ammo 5,45x39mm x70<c(FFAF00)> 7H6<c(FFFFFF)> "}	
	}
	{"stuff"
		
	}
	{"weapon"
		{"browning_m2hb"												"Machinegun<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}	
		{"browning_m2hb_twin"											"Machinegun<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}		
		{"browning_m2hb_avenger"										"Machinegun<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}	
		{"browning_m2hb_optic"											"Machinegun<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n calibre 12,7x99 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}	
		{"Dshk_m"														"Machinegun<c(FFAF00)> DShKM<c(FFFFFF)> \n calibre 12,7x108 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}
		{"dt_cw"														"Machinegun<c(FFAF00)> DT<c(FFFFFF)> \n calibre 7,62x54 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,5<c(FFFFFF)> moa. "}
		{"fn_fal"														"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2<c(FFFFFF)> moa."}
		{"fn_fal_scope"													"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n collimator"}
		{"fn_fal_sniper_scope"											"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n optics"}
		{"FN_MAG"														"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> MAG<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"FN_MAG_optic"													"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> MAG<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n - coaxial / for use on vehicles - "}
		{"fn_minimi"													"Machinegun<c(FFAF00)> FN Minimi<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"fn_minimi_elcan"												"Machinegun<c(FFAF00)> FN Minimi<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n collimator Elcan"}
		{"galil_arm"													"<c(00FF00)>Galil<c(FFFFFF)><c(FFAF00)> ARM<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"h&k_mg5a1_zeiss_zo_4x30i"										"Machinegun<c(FFAF00)> MG 5 A1<c(FFFFFF)> s<c(4d6ff7)> Zeiss<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"hcb"															"Machinegun<c(FFAF00)> NSVT<c(FFFFFF)><c(00FF00)> «Utes»<c(FFFFFF)> \n calibre 12,7x108 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}
		{"hcb_optic"													"Machinegun<c(FFAF00)> NSVT<c(FFFFFF)><c(00FF00)> «Utes»<c(FFFFFF)> \n calibre 12,7x108 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}	;future
		{"kord"															"Machinegun<c(00FF00)> «Kord»<c(FFFFFF)> \n calibre 12,7x108 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,9<c(FFFFFF)> moa. \n - coaxial / for use on vehicles - "}
		{"kord_optic"													"Machinegun<c(00FF00)> «Kord»<c(FFFFFF)> \n calibre 12,7x108 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,9<c(FFFFFF)> moa.\n optics SPP 10P50 x6 "}
		{"l86"															"Machinegun<c(FFAF00)> L86A1<c(FFFFFF)> \n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"L94A1"														"Machinegun<c(00FF00)> L94A1<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}
		{"l110a1"														"Machinegun<c(FFAF00)> L110A1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"l110a1_susat"													"Machinegun<c(FFAF00)> L110A1<c(FFFFFF)> c<c(4d6ff7)> Susat<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"M60E5"														"Machinegun<c(FFAF00)> M60E5<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"M240"															"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"m240_acog"													"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>76<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.r"}
		{"m240_elcan"													"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n optics Elcan M145"}
		{"M240_optic"													"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240C<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n - variant<c(FFAF00)> MAG 60.40<c(FFFFFF)> -\n - coaxial / for use on vehicles - "}
		{"M240D"														"Machinegun<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240D<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n - variant<c(FFAF00)> MAG 60.30<c(FFFFFF)> -"}
		{"M249"															"Machinegun<c(FFAF00)> M249<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"m249_tactical"												"Machinegun<c(FFAF00)> M249<c(FFFFFF)> Tactical\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"MG3"															"Machinegun<c(FFAF00)> MG 3<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"mg3_tank"														"Machinegun<c(FFAF00)> MG 3<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}
		{"MG4"															"Machinegun<c(FFAF00)> MG 4<c(FFFFFF)> Bundeswehr\n calibre 5,56x45 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"MG5_tank"														"Machinegun<c(FFAF00)> MG 5<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}
		{"mg5a1"														"Machinegun<c(FFAF00)> MG 5<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"MG5a1_elcan"													"Machinegun<c(FFAF00)> MG 5<c(FFFFFF)> s<c(4d6ff7)> ELCAN<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"MG5a1_elcan_desert"											"Machinegun<c(FFAF00)> MG 5<c(FFFFFF)> s<c(4d6ff7)> ELCAN<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"minigun"														"Machinegun<c(FFAF00)> M134<c(FFFFFF)><c(00FF00)> Minigun<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6,0<c(FFFFFF)> moa. "}
		{"minigun_nogilz"												"Machinegun<c(FFAF00)> M134<c(FFFFFF)><c(00FF00)> Minigun<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6,0<c(FFFFFF)> moa. "}
		{"negev"														"Machinegun<c(FFAF00)> Negev<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"negev_y"														"Machinegun<c(FFAF00)> Negev<c(FFFFFF)><c(00FF00)> Commando<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"pkm"															"Machinegun<c(FFAF00)> PKM<c(FFFFFF)> \n calibre 7,62x54 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"PKP"															"Machinegun<c(FFAF00)> PKP<c(FFFFFF)><c(00FF00)> «Pecheneg»<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)> moa. \n optics 1P77. x4 "}
		{"PKT"															"Machinegun<c(FFAF00)> PKT<c(FFFFFF)> \n calibre 7,62x54 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}
		{"PKVT"															"PKVT"}	;Obsolete
		{"qbb95"														"Machinegun<c(FFAF00)> QBZ-95<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
	    {"qbb95_scope"													"Machinegun<c(FFAF00)> QBZ-95<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.  \n optics Y/M95-002"}
		{"qjy-88"														"Machinegun<c(FFAF00)> QJY-88<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0..3,0<c(FFFFFF)> moa. "}
		{"qjy-201"														"Machinegun<c(FFAF00)> QJY-201<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"qjz-89"														"Machinegun<c(FFAF00)> QJZ-89<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,15<c(FFFFFF)> moa."}
		{"rpk_74_1"														"Machinegun<c(FFAF00)> RPK-74M<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk_74_2"														"Machinegun<c(FFAF00)> RPK-74M<c(FFFFFF)> s<c(4d6ff7)> EKP-1-02<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>69<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk_74_3"														"Machinegun<c(FFAF00)> RPK-74M<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk-74"														"Machinegun<c(FFAF00)> RPK-74<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"spot"															""}	;t
		{"type86_762mm"													"Machinegun<c(FFAF00)> Type76<c(FFFFFF)> \n calibre 7,62x54 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa.\n - coaxial / for use on vehicles -  "}
		{"uk-59"														"Machinegun<c(FFAF00)> UK vz.59L<c(FFFFFF)> \n calibre 7,62x54 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"ukp_2000_sk3"													"Machinegun<c(FFAF00)> UKM-2000<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>76<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"ukp_2000_c"													"Machinegun<c(FFAF00)> UKP-2000C<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>76<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"xm8rp"														"Machinegun<c(FFAF00)> XM8<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>65<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"YakB_12_7"													"Machinegun<c(FFAF00)> JakB-12,7<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
	}
;naval_stuff
	{"ammo"
		{"3m14 caliber 533torpedo_rus"									"KR <c(FFAF00)>3M14<c(FFFFFF)> <c(00FF00)>«Kalibr»<c(FFFFFF)>\n HE mass - <c(FF1F00)>200<c(FFFFFF)> kg\n range - <c(FFAF00)>680<c(FFFFFF)> m.\n guidance type - <c(FF1F00)> inertial<c(FFFFFF)> "}
		{"3m14_impactor"												"<c(CF9FFF)>Impactor 3M14 «Kalibr»</c>"}	;t
		{"3m54 caliber 533torpedo_rus"									"PKR <c(FFAF00)>3M54<c(FFFFFF)> <c(00FF00)>«Kalibr»<c(FFFFFF)>\n HE mass - <c(FF1F00)>80<c(FFFFFF)> kg\n range - <c(FFAF00)>430<c(FFFFFF)> m.\n guidance type - <c(FF1F00)> ARL<c(FFFFFF)> head +<c(FF1F00)> inertial<c(FFFFFF)> "}
		{"3m54_impactor"												"<c(CF9FFF)>Impactor 3M54 «Kalibr»</c>"}	;t
		{"3m54_warhead_impactor"										"<c(CF9FFF)>Impactor 3M54 «Kalibr» Warhead</c>"}	;t
		{"9m33"															"SAM <c(FFAF00)>9M33<c(FFFFFF)> for SAM «Osa-MА»\n HE mass - <c(FF1F00)>5<c(FFFFFF)> kg.\n range - <c(FFAF00)>180<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"9m33_impactor"												"<c(CF9FFF)>Impactor 9M33 for SAM «Osa-MА»</c>"}	;t
		{"48n6 s-300"													"SAM <c(FFAF00)>48N6<c(FFFFFF)> for SAM «S-300»\n HE mass - <c(FF1F00)>63<c(FFFFFF)> kg.\n range - <c(FFAF00)>378<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"48n6_impactor"												"<c(CF9FFF)>Impactor 48N6E2 for SAM «S-300»</c>"}	;t
		{"48n6e2 s-300"													"SAM <c(FFAF00)>48N6E2<c(FFFFFF)> for SAM «S-300»\n HE mass - <c(FF1F00)>63<c(FFFFFF)> kg.\n range - <c(FFAF00)>378<c(FFFFFF)> m.\n guidance type -<c(4d6ff7)> RL<c(FFFFFF)> head \n - anti-air - "}
		{"48n6e2_impactor"												"<c(CF9FFF)>Impactor 48N6 for SAM «S-300»</c>"}	;t
		{"53_65k_torpedo 533torpedo_rus"								"533mm Torpedo<c(FFAF00)> 43-62K<c(FFFFFF)>\n HE mass - <c(FF1F00)>300<c(FFFFFF)> kg \n range - <c(FFAF00)>295<c(FFFFFF)> m."}
		{"53_65k_torpedo_impactor"										"<c(CF9FFF)>Impactor 533mm Torpedo 43-62K</c>"}	;t
		{"aim7m"														"SAM <c(FFAF00)>AIM-7M<c(FFFFFF)> <c(00FF00)>«Sea Sparrow»<c(FFFFFF)>\n HE mass - <c(FF1F00)>14<c(FFFFFF)> kg.\n range - <c(FFAF00)>290<c(FFFFFF)> m.\n guidance type - Pactive radar seeker  \n - anti-air - "}
		{"aim7m_impactor"												"<c(CF9FFF)>Impactor AIM-7M «Sea Sparrow»</c>"}	;t
		{"asroc_vla aegis"												"<c(FFAF00)>ASROC-VLA<c(FFFFFF)>\n warhead - Torpedo<c(FFAF00)> Mk48<c(FFFFFF)>\n range - <c(FFAF00)>306<c(FFFFFF)> m.\n guidance type - inertial "}
        {"basalt_p1000 basalt"											"<c(FFAF00)>P-1000<c(FFFFFF)> <c(00FF00)>«Vulkan»<c(FFFFFF)>\n HE mass - <c(FF1F00)>200<c(FFFFFF)> kg.\n range - <c(FFAF00)>1200<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> ARL<c(FFFFFF)> head +<c(FF1F00)> inertial<c(FFFFFF)> "}
		{"basalt_p1000_impactor"										"<c(CF9FFF)>Impactor P-1000 «Vulkan»</c>"}	;t
		{"granit"														"<c(FFAF00)>P-700<c(FFFFFF)> <c(00FF00)>«Granit»<c(FFFFFF)>\n HE mass - <c(FF1F00)>280<c(FFFFFF)> kg.\n range - <c(FFAF00)>1200<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> ARL<c(FFFFFF)> head +<c(FF1F00)> inertial<c(FFFFFF)> "}
		{"granit_impactor"												"<c(CF9FFF)>Impactor P-700 «Granit»</c>"}	;t
		{"malahit"														"<c(FFAF00)>P-120<c(FFFFFF)> <c(00FF00)>«Malakhit»<c(FFFFFF)>\n HE mass - <c(FF1F00)>280<c(FFFFFF)> kg.\n range - <c(FFAF00)>385<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> ARL<c(FFFFFF)> head +<c(FF1F00)> inertial<c(FFFFFF)> "}
		{"malahit_impactor"												"<c(CF9FFF)>Impactor P-120 «Malakhit»</c>"}	;t
		{"mk48_torpedo 533torpedo_usa"									"Torpedo<c(FFAF00)> Mk48<c(FFFFFF)>\n range - <c(FFAF00)>335<c(FFFFFF)> m."}
		{"mk48_torpedo_impactor"										"<c(CF9FFF)>Impactor Torpedo Mk48</c>"}	;t
        {"moskit"														"<c(FFAF00)>3M80<c(FFFFFF)> <c(00FF00)>«Moskit»<c(FFFFFF)>\n HE mass - <c(FF1F00)>150<c(FFFFFF)> kg.\n range - <c(FFAF00)>390<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> ARL<c(FFFFFF)> head +<c(FF1F00)> inertial<c(FFFFFF)> "}
		{"moskit_impactor"												"<c(CF9FFF)>Impactor 3M80 «Moskit»</c>"}	;t
		{"rastrub"														"533mm PLUR<c(FFAF00)>«Rastrub»<c(FFFFFF)>\n HE mass - <c(FF1F00)>185+60<c(FFFFFF)> kg (185kg v rakete i pljus torpedo UGMT-1)\n range - <c(FFAF00)>345<c(FFFFFF)> m."}
		{"rastrub_impactor"												"<c(CF9FFF)>Impactor 533mm PLUR «Rastrub»</c>"}	;t
		{"rim116"														"SAM <c(FFAF00)>RIM-116<c(FFFFFF)> <c(00FF00)>«SeaRAM»<c(FFFFFF)>\n HE mass - <c(FF1F00)>4<c(FFFFFF)> kg.\n range - <c(FFAF00)>190<c(FFFFFF)> m.\n guidance type - IR seeker  \n - anti-air - "}
		{"rim116_impactor"												"<c(CF9FFF)>Impactor RIM-116 «SeaRAM»</c>"}	;t
		{"sm_2er_blockiv aegis"											"SAM<c(FFAF00)> SM-2 ER<c(FFFFFF)>\n HE mass - <c(FF1F00)>52<c(FFFFFF)> kg.\n range - <c(FFAF00)>415<c(FFFFFF)> m.\n guidance type - Pactive radar seeker  \n - anti-air - "}
		{"sm_2er_blockiv_impactor"										"<c(CF9FFF)>Impactor SM-2 ER</c>"}	;t
		{"targeting_radar_rus"											"Targeting radar"}
		{"targeting_radar_usa"											"Targeting radar"}
		{"tomahawk aegis"												"<c(FFAF00)>BGM-109<c(FFFFFF)> <c(00FF00)>«Tomahawk»<c(FFFFFF)>\n HE mass - <c(FF1F00)>113<c(FFFFFF)> kg.\n range - <c(FFAF00)>680<c(FFFFFF)> m.\n guidance type - inertial "}
		{"tomahawk_impactor"											"<c(CF9FFF)>Impactor BGM-109 «Tomahawk»</c>"}	;t
		{"torpedo_mk46"													"Torpedo<c(FFAF00)> Mk46<c(FFFFFF)>"}
		{"torpedo_mk46_impactor"										"<c(CF9FFF)>Impactor Torpedo Mk46</c>"}	;t
		{"ugm-84a 533torpedo_usa"										"<c(FFAF00)>UGM-84A<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>\n HE mass - <c(FF1F00)>97.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>400<c(FFFFFF)> m.\n guidance type -<c(FF1F00)> RL<c(FFFFFF)> head "}
		{"ugmt1_torpedo"												"Torpedo<c(FFAF00)> UGMT-1<c(FFFFFF)>"}
		{"ugmt1_torpedo_impactor"										"<c(CF9FFF)>Impactor UGM-84A Harpoon</c>"}	;t		
		{"veter 650torpedo_rus"											"650mm PLUR<c(FFAF00)>«Veter»<c(FFFFFF)>\n HE mass - <c(FF1F00)>60<c(FFFFFF)> kg (warhead - torpedo UGMT-1)\n range - <c(FFAF00)>400<c(FFFFFF)> m."}
		{"vodopad 533torpedo_rus"										"533mm PLUR<c(FFAF00)>«Vodopad»<c(FFFFFF)>\n HE mass - <c(FF1F00)>60<c(FFFFFF)> kg (warhead - torpedo UGMT-1)\n range - <c(FFAF00)>340<c(FFFFFF)> m."}
	}
	{"stuff"
		{"spg62_radar"													"Targeting radar"}
		{"targeting_radar_rus"											"Targeting radar"}		
		{"targeting_radar_rus_art"										"Targeting radar"}
		{"targeting_radar_usa"											"Targeting radar"}
	}
	{"weapon"
		{"533rus_torpedotube_x2"										"Torpedo tube 533mm kh2"}
		{"533rus_torpedotube_x3"										"Torpedo tube 533mm kh3"}
		{"533rus_torpedotube_x4"										"Torpedo tube 533mm kh4"}
		{"533rus_torpedotube_x5"										"Torpedo tube 533mm kh5"}
		{"533rus_torpedotube_x5"										"Torpedo tube 533mm kh5"}
		{"533usa_torpedotube_x2"										"Torpedo tube 533mm kh2"}
		{"650rus_torpedotube_x2"										"Torpedo tube 650mm kh2"}
		{"aegis"														"VPU<c(FFAF00)> Mk41<c(FFFFFF)>"}
		{"basalt_pu"													"PUantiship<c(FFAF00)> P-500<c(FFFFFF)><c(00FF00)> «Bazalt»<c(FFFFFF)>x16 \n range - <c(FFAF00)>1200<c(FFFFFF)> m."}
		{"granit_pu_x20"												"PUantiship<c(FFAF00)> P-700<c(FFFFFF)><c(00FF00)> «Granit»<c(FFFFFF)>x20 \n range - <c(FFAF00)>1200<c(FFFFFF)> m."}
		{"granit_pu_x24"												"PUantiship<c(FFAF00)> P-700<c(FFFFFF)><c(00FF00)> «Granit»<c(FFFFFF)>x24 \n range - <c(FFAF00)>1200<c(FFFFFF)> m."}
		{"kinjal"														"SAM<c(FFAF00)> 9M330<c(FFFFFF)> \n range - <c(FFAF00)>200<c(FFFFFF)> m."}
		{"kinjalx8"														"SAM<c(FFAF00)> 9M330<c(FFFFFF)> \n range - <c(FFAF00)>200<c(FFFFFF)> m."}
		{"malahit_pu"													"PU<c(FFAF00)> KT-120<c(FFFFFF)> santiship<c(FFAF00)> P-120<c(FFFFFF)><c(00FF00)> «Malakhit»<c(FFFFFF)> \n range - <c(FFAF00)>385<c(FFFFFF)> m."}
		{"mk29_sea_sparrow"												"PU<c(00FF00)> «Sea Sparrow»<c(FFFFFF)>"}
		{"mk32_torpedotube"												"Torpedo tube<c(FFAF00)> Mk32<c(FFFFFF)>"}
		{"moskit_pu"													"PUantiship<c(FFAF00)> 3M80<c(FFFFFF)><c(00FF00)> «Moskit»<c(FFFFFF)>x24 \n range - <c(FFAF00)>390<c(FFFFFF)> m."}
		{"osa_ma"														"LU SAM<c(00FF00)> «Osa-MА»<c(FFFFFF)> s<c(FFAF00)> 9M33<c(FFFFFF)> \n range - <c(FFAF00)>180<c(FFFFFF)> m."}
		{"rastrub_pu"													"LU PRK<c(FFAF00)> URK-5<c(FFFFFF)><c(00FF00)> «Rastrub-B»<c(FFFFFF)>x8 \n range - <c(FFAF00)>345<c(FFFFFF)> m."}
		{"s300f_1144"													"VPU<c(FFAF00)> C-300F<c(FFFFFF)><c(00FF00)> «Fort»<c(FFFFFF)>"}
		{"s300f_1164"													"VPU<c(FFAF00)> C-300F<c(FFFFFF)><c(00FF00)> «Fort»<c(FFFFFF)>"}
		{"searam"														"PU<c(00FF00)> «SeaRAM»<c(FFFFFF)>"}
		{"tomahawk_x12"													"VPU<c(FFAF00)> Mk45<c(FFFFFF)> \n - for raket «Tomahawk» x12"}
		{"uragan_tornado"												"LU <c(FFAF00)>«Uragan-Tornado»<c(FFFFFF)>\n range - <c(FFAF00)>320..340<c(FFFFFF)> m."}
	}
;Pistol
	{"ammo"
		{"9mm"															"Ammo 9x19mm"}
		{"58ammo 58ammo_basic"											"Ammo 5,8x42mm x30<c(FFAF00)> DBP10<c(FFFFFF)> "}	
		{"58ammo 58ammo_drum"											"Ammo 5,8x42mm x70<c(FFAF00)> DBP10<c(FFFFFF)> "}	
		{"58ammo 58ammo_mg"												"Ammo 5,8x42mm<c(FFAF00)> DVC12<c(FFFFFF)> "}	
		{"58ammo 58ammo_sn"												"Ammo 5,8x42mm sniper<c(FFAF00)> DBP88<c(FFFFFF)> "}	
		{"545"															"Ammo 5,45x39mm x30<c(FFAF00)> 7H6<c(FFFFFF)> "}
		{"556Nato"														"Ammo 5,56x45mm x30<c(FFAF00)> SS109<c(FFFFFF)> "}
		{"556NatoS"														"Ammo 5,56x45mm x20<c(FFAF00)> SS109<c(FFFFFF)> "}	
		{"762"															"Ammo 7,62x39mm x30<c(FFAF00)> PS<c(FFFFFF)>"}
		{"762x41pss"													"Ammo 7,62x41mm<c(FFAF00)> SP-4<c(FFFFFF)> for PSS"}
		{"flaer"														"<c(ffff60)>Flare gun ammo</c>"}	;vanilla
		{"IR_flare"														"Flare"}
		{"smg"															"Ammo for pistol"} ;Pistol ammo
		{"standart"														"Ammo for pistol x25"}
		{"tazzer"														"Ammo for tazzer"}
	}
	{"stuff"
		{"flare_dropper_30"												"IR decoys"}
		{"flare_dropper_64"												"IR decoys"}
		{"flare_dropper_120"											"IR decoys"}
		{"flare_dropper_128"											"IR decoys"}	
	}
	{"weapon"
		{"aps"															"Pistol <c(FFAF00)>АPS<c(FFFFFF)>"}
		{"Beretta92"													"Pistol <c(00FF00)>Beretta<c(FFFFFF)><c(FFAF00)> 92<c(FFFFFF)>"}
		{"colt"															"colt"}	;Obsolete
		{"Colt_Anaconda"												"Pistol <c(00FF00)>Colt<c(FFFFFF)> «Anaconda»<c(FFFFFF)>"}
		{"colt_python"													"Pistol <c(00FF00)>Colt<c(FFFFFF)> «Python»<c(FFFFFF)>"}
		{"colt1911a1"													"Pistol <c(00FF00)>Kimber<c(FFFFFF)><c(FFAF00)> 1911<c(FFFFFF)> Rimfire Super"}
		{"cz75"															"Pistol <c(00FF00)>CZ<c(FFFFFF)> <c(FFAF00)>75<c(FFFFFF)>"}
		{"desert_eagle"													"Pistol <c(00FF00)>«Desert Eagle»<c(FFFFFF)>"}
		{"flaergun"														"Flare gun"}
		{"flare_dropper_30"												"IR decoys"}
		{"flare_dropper_64"												"IR decoys"}
		{"flare_dropper_120"											"IR decoys"}
		{"flare_dropper_128"											"IR decoys"}
		{"glock19"														"Pistol <c(00FF00)>Glosk<c(FFFFFF)><c(FFAF00)> 19<c(FFFFFF)>"}
		{"gsh18"														"Pistol <c(FFAF00)>GSh-18<c(FFFFFF)>"}
		{"kashtan"														"Submachinegun<c(FFAF00)> AEK-919K<c(FFFFFF)><c(00FF00)> «Kashtan»<c(FFFFFF)>\n calibre 9x18 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,5<c(FFFFFF)> moa."}
		{"kedr"															"Submachinegun<c(FFAF00)> PP-91<c(FFFFFF)><c(00FF00)> «Kedr»<c(FFFFFF)>\n calibre 9x18 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,5<c(FFFFFF)> moa."}
		{"makarov"														"Pistol <c(FFAF00)>PM<c(FFFFFF)>"}
		{"mp7"															"Submachinegun<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-7<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"mp7_zeiss"													"Submachinegun<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-7<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>40<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"oz33_pernach"													"Pistol<c(FFAF00)> OTs-33<c(FFFFFF)> <c(00FF00)>«Pernach»<c(FFFFFF)>"}
		{"pb"															"Pistol <c(FFAF00)>PB<c(FFFFFF)>"}
		{"pm_sil"														"Pistol <c(FFAF00)>PM<c(FFFFFF)> with silencer"}
		{"pss"															"Pistol <c(FFAF00)>PSS<c(FFFFFF)>"}
		{"qsz_92"														"Pistol <c(FFAF00)>QSZ-92<c(FFFFFF)>"}
		{"qsz_92_silence"												"Pistol <c(FFAF00)>QSZ-92<c(FFFFFF)> with silencer"}
		{"s&w_m19"														"Pistol <c(00FF00)>Smith & Wesson<c(FFFFFF)> <c(FFAF00)>M19<c(FFFFFF)>"}
		{"spectre_m4"													"Submachinegun<c(00FF00)> Spectre<c(FFFFFF)><c(FFAF00)> M4<c(FFFFFF)>\n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4<c(FFFFFF)> moa."}
		{"taurus_rb"													"Pistol <c(00FF00)>Taurus<c(FFFFFF)><c(FFAF00)> RB<c(FFFFFF)>"}
		{"tt"															"Pistol <c(FFAF00)>TT<c(FFFFFF)>"}
		{"walther_p99"													"Pistol <c(FFAF00)>Walther<c(FFFFFF)>  <c(FFAF00)>P99<c(FFFFFF)>"}
		{"x34"															"Tazzer X34"}
	}
;projectile
	{"ammo"
		{"48n6e2"														"<c(CF9FFF)>Loading Mediator 48n6e2</c>"}	;t
		{"cw_cumulative_assistor_1gen"									"<c(CF9FFF)>Assistor Gen1</c>"}	;t
		{"cw_cumulative_assistor_2gen"									"<c(CF9FFF)>Assistor Gen2</c>"}	;t
		{"cw_cumulative_assistor_3gen"									"<c(CF9FFF)>Assistor Gen3</c>"}	;t
		{"IR_ff aim-9l"													"<c(CF9FFF)>Loading Mediator AIM-9L «Sidewinder»</c>"}	;t
		{"IR_ff R-73"													"<c(CF9FFF)>Loading Mediator SAM R-73 izd. 72</c>"}	;t
		{"laser_bomb Maverick_E"										"<c(CF9FFF)>Loading Mediator laser_bomb Maverick_E</c>"}	;t
		{"laser_bomb X_25ML"											"<c(CF9FFF)>Loading Mediator X_25ML</c>"}	;t
		{"rus_active cwps2"												"Guidance System"}	;Guidance System
		{"rus_active_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_active_asm cwps2"											"Guidance System"}	;Guidance System
		{"rus_active_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"rus_antirad cwps2"											"Guidance System"}	;Guidance System
		{"rus_antirad_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_antiship cwps2"											"Guidance System"}	;Guidance System
		{"rus_antiship_aj cwps2"										"Guidance System"}	;Guidance System
		{"rus_antisub cwps2"											"Guidance System"}	;Guidance System
		{"rus_antisub_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_ir cwps2"													"Guidance System"}	;Guidance System
		{"rus_ir_aj cwps2"												"Guidance System"}	;Guidance System
		{"rus_ir_asm cwps2"												"Guidance System"}	;Guidance System
		{"rus_ir_asm_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_ir_FF_beam AA_proj"										"Guidance System"}	;Guidance System
		{"rus_ir_FF_beam AT_proj"										"Guidance System"}	;Guidance System
		{"rus_laser"													"Guidance System"}	;Guidance System
		{"rus_laser cwps2"												"Guidance System"}	;Guidance System
		{"rus_laser1 cwps2"												"Guidance System"}	;Guidance System
		{"rus_laser1_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_laser_aj"													"Guidance System"}	;Guidance System
		{"rus_laser_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_laser_asm cwps2"											"Guidance System"}	;Guidance System
		{"rus_laser_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"rus_other cwps2"												"Guidance System"}	;Guidance System
		{"rus_other_aj cwps2"											"Guidance System"}	;Guidance System
		{"rus_other_asm cwps2"											"Guidance System"}	;Guidance System
		{"rus_other_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"rus_radar_beam AA_proj"										"Radar"}			;Radar
		{"rus_radar_beam AT_proj"										"Radar"}			;Radar
		{"rus_radpassive cwps2"											"Guidance System"}	;Guidance System
		{"rus_radpassive_aj cwps2"										"Guidance System"}	;Guidance System
		{"usa_active cwps2"												"Guidance System"}	;Guidance System
		{"usa_active_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_active_asm cwps2"											"Guidance System"}	;Guidance System
		{"usa_active_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"usa_antirad cwps2"											"Guidance System"}	;Guidance System
		{"usa_antirad_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_antiship cwps2"											"Guidance System"}	;Guidance System
		{"usa_antiship_aj cwps2"										"Guidance System"}	;Guidance System
		{"usa_antisub cwps2"											"Guidance System"}	;Guidance System
		{"usa_antisub_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_ir cwps2"													"Guidance System"}	;Guidance System
		{"usa_ir_aj cwps2"												"Guidance System"}	;Guidance System
		{"usa_ir_asm cwps2"												"Guidance System"}	;Guidance System
		{"usa_ir_asm_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_ir_FF_beam AA_proj"										"Guidance System"}	;Guidance System
		{"usa_ir_FF_beam AT_proj"										"Guidance System"}	;Guidance System
		{"usa_laser"													"Guidance System"}	;Guidance System
		{"usa_laser cwps2"												"Guidance System"}	;Guidance System
		{"usa_laser_aj"													"Guidance System"}	;Guidance System
		{"usa_laser_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_laser_asm cwps2"											"Guidance System"}	;Guidance System
		{"usa_laser_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"usa_other cwps2"												"Guidance System"}	;Guidance System
		{"usa_other_aj cwps2"											"Guidance System"}	;Guidance System
		{"usa_other_asm cwps2"											"Guidance System"}	;Guidance System
		{"usa_other_asm_aj cwps2"										"Guidance System"}	;Guidance System
		{"usa_radar_beam AA_proj"										"Radar"}			;Radar
		{"usa_radar_beam AT_proj"										"Radar"}			;Radar
		{"usa_radpassive cwps2"											"Guidance System"}	;Guidance System
		{"usa_radpassive_aj cwps2"										"Guidance System"}	;Guidance System
	}
	{"stuff"
		{"rus_las_designator"											"Target designator"}
	}
	{"weapon"
		{"missilets"													"Guidance System"}	;Guidance System
		{"missilets_3pointfast"											"Guidance System"}	;Guidance System
		{"missilets_3pointnormal"										"Guidance System"}	;Guidance System
		{"missilets_3pointsamfast"										"Guidance System"}	;Guidance System
		{"missilets_3pointsamnormal"									"Guidance System"}	;Guidance System
		{"missilets_3pointsamslow"										"Guidance System"}	;Guidance System
		{"missilets_3pointslow"											"Guidance System"}	;Guidance System
		{"missilets_antirad"											"Guidance System"}	;Guidance System
		{"missilets_arc_120"											"Guidance System"}	;Guidance System
		{"missilets_arc_160"											"Guidance System"}	;Guidance System
		{"missilets_arc_200"											"Guidance System"}	;Guidance System
		{"missilets_arc_320"											"Guidance System"}	;Guidance System
		{"missilets_fast"												"Guidance System"}	;Guidance System
		{"missilets_long"												"Guidance System"}	;Guidance System
		{"missilets_normal"												"Guidance System"}	;Guidance System
		{"missilets_propfast"											"Guidance System"}	;Guidance System
		{"missilets_propnormal"											"Guidance System"}	;Guidance System
		{"missilets_propsamfast"										"Guidance System"}	;Guidance System
		{"missilets_propsamnormal"										"Guidance System"}	;Guidance System
		{"missilets_propsamslow"										"Guidance System"}	;Guidance System
		{"missilets_propslow"											"Guidance System"}	;Guidance System
		{"missilets_slow"												"Guidance System"}	;Guidance System
		{"rus_IR_ff_device"												"Guidance System"}	;Guidance System
		{"rus_radar"													"Radar"}			;Radar
		{"usa_IR_ff_device"												"Guidance System"}	;Guidance System
		{"usa_las_designator"											"Target designator"}
		{"usa_radar"													"Radar"}			;Radar
	}
;reactive
	{"ammo"
		{"81mm l"														"Mine 81mm <c(FFAF00)> M853A1<c(FFFFFF)>\n - illuminational - \n range - <c(FFAF00)>161<c(FFFFFF)> m. "}
		{"81mm of"														"Mine 81mm FG<c(FFAF00)> M821<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,726<c(FFFFFF)> kg.\n range - <c(FFAF00)>166<c(FFFFFF)> m. "}
		{"81mm sm"														"Mine 81mm dim.<c(FFAF00)> M819<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n range - <c(FFAF00)>156<c(FFFFFF)> m. "}
		{"82mm er"														"Mine 82mm <c(FFAF00)> Type PP87<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,6<c(FFFFFF)> kg.\n  range - <c(FFAF00)>166<c(FFFFFF)> m. "}			
		{"82mm l"														"Mine 82mm <c(FFAF00)> S-832S<c(FFFFFF)>\n - illuminational - \n  range - <c(FFAF00)>140<c(FFFFFF)> m. "}			
		{"82mm of"														"Mine 82mm FG<c(FFAF00)> O-832DU<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,454<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m. "}
		{"82mm sm"														"Mine 82mm dim.<c(FFAF00)> D-832DU<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n range - <c(FFAF00)>140<c(FFFFFF)> m. "}			
		{"140mm_a22 fg"													"140mm reactive shell <c(FFAF00)>FG-45<c(FFFFFF)>\n HE mass - <c(FF1F00)>5,65<c(FFFFFF)> kg.\n range - <c(FFAF00)>142<c(FFFFFF)> m."}
		{"212mm_rbu"													"Depth charge<c(FFAF00)> RGB-60<c(FFFFFF)> dlja<c(00FF00)> RBU-6000<c(FFFFFF)>\n HE mass - <c(FF1F00)>23.5<c(FFFFFF)> kg.\n range - <c(FFAF00)>360<c(FFFFFF)> m."}
		{"212mm_rbu_impactor"											"<c(CF9FFF)>Impactor RBU-6000</c>"}	;t
		{"300mm_rbu"													"Depth charge<c(FFAF00)> RGB-111SZG<c(FFFFFF)> dlja<c(00FF00)> RBU-12000<c(FFFFFF)>\n HE mass - <c(FF1F00)>80<c(FFFFFF)> kg.\n range - <c(FFAF00)>360<c(FFFFFF)> m."}
		{"300mm_rbu_impactor"											"<c(CF9FFF)>Impactor RBU-12000</c>"}	;t
		{"305mm_rbu"													"Depth charge<c(FFAF00)> RGB-10<c(FFFFFF)> dlja<c(00FF00)> RBU-1000<c(FFFFFF)>\n HE mass - <c(FF1F00)>80<c(FFFFFF)> kg.\n range - <c(FFAF00)>360<c(FFFFFF)> m."}	
		{"305mm_rbu_impactor"											"<c(CF9FFF)>Impactor RBU-1000</c>"}	;t
		{"agsammo"														"<c(CF9FFF)>Loading Mediator AGS</c>"}	;t
		{"ATACMS cl"													"<c(FFAF00)>MGM-140B<c(FFFFFF)><c(00FF00)> ATACMS<c(FFFFFF)> Block 1A\n HEAT-fragmentary \n range - <c(FFAF00)>500<c(FFFFFF)> m."}
		{"ATACMS fg"													"<c(FFAF00)>MGM-168A<c(FFFFFF)><c(00FF00)> ATACMS<c(FFFFFF)> Block 4A\n HE mass - <c(FF1F00)>97.5<c(FFFFFF)> kg. \n range - <c(FFAF00)>500<c(FFFFFF)> m."}
		{"df15b fg"														"<c(FFAF00)>DF-15B<c(FFFFFF)> \n HE mass - <c(FF1F00)>500<c(FFFFFF)> kg.\n range - <c(FFAF00)>800<c(FFFFFF)> m."}
		{"df15b tb"														"<c(FFAF00)>DF-15B<c(FFFFFF)> \n fuel mass - <c(FF1F00)>500<c(FFFFFF)> kg.\n range - <c(FFAF00)>800<c(FFFFFF)> m."}
		{"grad cl"														"122mm reactive shell<c(FFAF00)> 9M218<c(FFFFFF)>\n HEAT-fragmentary <c(FFAF00)> 3B30<c(FFFFFF)> \n range - <c(FFAF00)>370<c(FFFFFF)> m."}
		{"grad clcn"													"122mm reactive shell<c(FFAF00)> DHB/PHL81-122<c(FFFFFF)>\n HEAT-fragmentary <c(FFAF00)> MZD-2<c(FFFFFF)> \n range - <c(FFAF00)>370<c(FFFFFF)> m."}
		{"grad fg"														"122mm reactive shell<c(FFAF00)> 9M22U<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,4<c(FFFFFF)> kg.\n range - <c(FFAF00)>290<c(FFFFFF)> m."}
		{"grad fgh"														"122mm reactive shell<c(FFAF00)> Type 90A<c(FFFFFF)>\n HE mass - <c(FF1F00)>5,6<c(FFFFFF)> kg. \n range - <c(FFAF00)>370<c(FFFFFF)> m."}
		{"grad mine"													"122mm reactive shell<c(FFAF00)> 3M16<c(FFFFFF)><c(00FF00)> «Prozaik»<c(FFFFFF)>\n AP mines<c(FFAF00)> POM-2<c(FFFFFF)> \n range - <c(FFAF00)>210<c(FFFFFF)> m."}
		{"grad rok"														"122mm reactive shell<c(FFAF00)> 9M521<c(FFFFFF)>\n HE mass - <c(FF1F00)>6,05<c(FFFFFF)> kg.\n range - <c(FFAF00)>400<c(FFFFFF)> m."}
		{"grad spbe"													"122mm reactive shell<c(FFAF00)> 9M217<c(FFFFFF)>\n smart submunition <c(FFAF00)>9N282<c(FFFFFF)><c(00FF00)> «Gnom»<c(FFFFFF)>\n range - <c(FFAF00)>370<c(FFFFFF)> m."}
		{"iskander fg"													"<c(FFAF00)>9M723<c(FFFFFF)> \n HE mass - <c(FF1F00)>400<c(FFFFFF)> kg.\n range - <c(FFAF00)>550<c(FFFFFF)> m."}
		{"iskander tb"													"<c(FFAF00)>9M723K5<c(FFFFFF)> \n fuel mass - <c(FF1F00)>200<c(FFFFFF)> kg.\n range - <c(FFAF00)>550<c(FFFFFF)> m."}
		{"ksf_cassette kpom2"											"Casette with minemi <c(FFAF00)>POM-2<c(FFFFFF)> <c(00FF00)>«Otek»<c(FFFFFF)>\n - antiinf fragmentary - "}
		{"ksf_cassette kptm"											"Casette with minemi <c(FFAF00)>PTM-1<c(FFFFFF)>\n - antitank antitrack - "}
		{"ksf_cassette ksf"												"Casette with minemi <c(FFAF00)>PFM-1<c(FFFFFF)> <c(00FF00)>«Lepestok»<c(FFFFFF)>\n - antiinf HE - "}
		{"lars2 fg"														"110mm reactive shell<c(FFAF00)> DM-21<c(FFFFFF)>\n HE mass - <c(FF1F00)>5,6<c(FFFFFF)> kg.\n range - <c(FFAF00)>300<c(FFFFFF)> m."}
		{"lars2 mine"													"110mm reactive shell<c(FFAF00)> DM-711<c(FFFFFF)>\n AT mines \n range - <c(FFAF00)>300<c(FFFFFF)> m."}
		{"m270 cl"														"227mm reactive shell<c(FFAF00)> M26A2<c(FFFFFF)>\n HEAT-fragmentary \n range - <c(FFAF00)>335<c(FFFFFF)> m."}
		{"m270 fg"														"227mm reactive shell<c(FFAF00)> M31A1<c(FFFFFF)><c(00FF00)> GMLRS<c(FFFFFF)>\n HE mass - <c(FF1F00)>24<c(FFFFFF)> kg.\n range - <c(FFAF00)>360<c(FFFFFF)> m."}
		{"mortar 60mm fl"												"Mine 60mm zaj.<c(FFAF00)><c(FFFFFF)>\n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"mortar 60mm of"												"Mine 60mm FG<c(FFAF00)> M-818<c(FFFFFF)>\n HE mass - <c(FF1F00)>0,42<c(FFFFFF)> kg.\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"mortar 60mm sm"												"Mine 60mm dim.<c(FFAF00)> M-817<c(FFFFFF)>\n <c(CCCCCC)> - smoke - <c(FFFFFF)> \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"R17 fg"														"<c(FFAF00)>R-17/SS-1C<c(FFFFFF)><c(00FF00)> «Scud B»<c(FFFFFF)>\n HE mass - <c(FF1F00)>535<c(FFFFFF)> kg.\n range - <c(FFAF00)>550<c(FFFFFF)> m."}
		{"smart155_core_impactor"										"<c(CF9FFF)>Impactor Smart 155mm Core</c>"}	;t
		{"smart155_impactor"											"<c(CF9FFF)>Impactor Smart 155mm</c>"}	;t
		{"spbe_9n282_core_impactor"										"<c(CF9FFF)>Impactor SPBE 9N282</c>"}	;t
		{"spbe_9n282_impactor"											"<c(CF9FFF)>Impactor SPBE 9N282</c>"}	;t
		{"tm83_core_impactor"											"<c(CF9FFF)>Impactor TM-83</c>"}	;t		
		{"tos1a fg"														"220mm reactive shell<c(FFAF00)> MO 1 01 04M<c(FFFFFF)>\n HE mass - <c(FF1F00)>90<c(FFFFFF)> kg.\n range - <c(FFAF00)>170<c(FFFFFF)> m.\n <c(D781CC)>thermobaric<c(FFFFFF)> "}
		{"type63_rocket fg"												"107mm reactive shell<c(FFAF00)> Type63<c(FFFFFF)>\n HE mass - <c(FF1F00)>1.26<c(FFFFFF)> kg.\n range - <c(FFAF00)>182<c(FFFFFF)> m."}
		{"ur_83p_ammo"													"Demining charge <c(00FF00)>UR-83P<c(FFFFFF)>"}
		{"ur_83p_detector"												"<c(CF9FFF)>Detector UR-83P</c>"}	;t
	}
	{"stuff"
		{"df15b_launcher"												"LU <c(00FF00)> DF-15B<c(FFFFFF)> \n range - <c(FFAF00)>800<c(FFFFFF)> m."}
		{"iskander_launcher"											"LU with 2<c(00FF00)> Iskander<c(FFFFFF)> \n range - <c(FFAF00)>550<c(FFFFFF)> m."}
		{"R17_launcher"													"LU with <c(FFAF00)>R-17/SS-1C<c(FFFFFF)><c(00FF00)> «Scud B»<c(FFFFFF)> \n range - <c(FFAF00)>550<c(FFFFFF)> m."}
	}
	{"weapon"
		{"81mm_l16"														"81mm<c(FFAF00)> L16<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n range - <c(FFAF00)>156...166<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10,92<c(FFFFFF)>mils "}
		{"81mm_llr"														"81mm<c(FFAF00)> MO 81 LLR<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n range - <c(FFAF00)>156...166<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10,92<c(FFFFFF)>mils "}
		{"81mm_m252"													"81mm<c(FFAF00)> M252<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n range - <c(FFAF00)>156...166<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10,92<c(FFFFFF)>mils "}
		{"82mm_2B9"														"82mm<c(FFAF00)> 2B9<c(FFFFFF)> <c(00FF00)>«Vasilek»<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)>mils "}
		{"82mm_podnos"													"82mm<c(FFAF00)> 2B14<c(FFFFFF)><c(00FF00)> «Podnos»<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10,92<c(FFFFFF)>mils "}
		{"82mm_pp87"													"82mm<c(FFAF00)> PP-87<c(FFFFFF)>\n range - <c(FFAF00)>166<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7,7<c(FFFFFF)>mils "}
		{"140mm_a22_pu"													"PU<c(FFAF00)> MS-227<c(FFFFFF)> RSZO<c(FFAF00)> А-22<c(FFFFFF)><c(00FF00)> «Ogon»<c(FFFFFF)> \n range - <c(FFAF00)>142<c(FFFFFF)> m."}
		{"212mm_rbu6000"												"Bomb dropper RBU-6000 \n range - <c(FFAF00)>168<c(FFFFFF)> m."}
		{"300mm_rbu12000"												"Bomb dropper RBU-12000 \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"305mm_rbu1000"												"Bomb dropper RBU-1000 \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"ag36_g36"														"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2"													"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2_acog"												"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2_susat"												"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_m4a1_acog"												"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ags17"														"Grenade launcher<c(FFAF00)> АGS-17<c(FFFFFF)><c(00FF00)> «Plamja»<c(FFFFFF)>\n calibre 30kh29 mm \n range - <c(FFAF00)>92..105<c(FFFFFF)> m."}
		{"ags30"														"Grenade launcher<c(FFAF00)> АGS-30<c(FFFFFF)><c(00FF00)> «Аtlant»<c(FFFFFF)>\n calibre 30kh29 mm \n range - <c(FFAF00)>92..105<c(FFFFFF)> m."}
		{"ags30m"														"Grenade launcher<c(FFAF00)> АGS-30M<c(FFFFFF)>\n calibre 30kh29 mm \n range - <c(FFAF00)>92..105<c(FFFFFF)> m."}
		{"ak12_1p87_gp25_pod"											"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ak12_gp25_pod"												"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ak15_1p87_gp25_pod"											"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ak15_1p87_pbs_gp25_pod"										"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ak103_gp25_1p87_podstvol"										"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ak103_gp25_pbs_1p87_podstvol"									"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"ATACMS"														"LU with 2<c(00FF00)> ATACMS<c(FFFFFF)> \n range - <c(FFAF00)>500<c(FFFFFF)> m."}
		{"Buldog"														"Revolver grenade launcher<c(FFAF00)> RG-6<c(FFFFFF)><c(00FF00)> «Gnom»<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"cz_805_bren_g1_203"											"Grenade launcher<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> 805 G1<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
 		{"g36a3_eotech552_ag36_pod"										"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"g36a3_eotech552_silencer_ag36_pod"							"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"g36a3_zeiss_zo_4x30i_ag36_pod"								"Underbarrel gr. l.<c(FFAF00)> AG36<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"gm94_grl"														"Grenade launcher<c(FFAF00)> GM-94<c(FFFFFF)>\n calibre 43 mm \n range - <c(FFAF00)>63<c(FFFFFF)> m."}
		{"gp25_ak74m_1p78"												"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"gp25_akm"														"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"gp25_akms"													"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"gp25_aks74"													"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"gp25_aks74_1p29"												"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"Grad"															"122mm MLRS \n range - <c(FFAF00)>210..290<c(FFFFFF)> m."}
		{"granata_famas_f1"												"Rifle grenade for <c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n range - <c(FFAF00)>60<c(FFFFFF)> m.\n shells -<c(FFAF00)> AC 58<c(FFFFFF)> ,<c(FFAF00)> APAV 40<c(FFFFFF)> ,<c(FFAF00)> FUM 50<c(FFFFFF)>"}
		{"hk_69"														"Grenade launcher<c(FFAF00)> HK 69<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"hk_gmg"														"Grenade launcher<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> GMG<c(FFFFFF)>\n calibre 40kh53 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m."}
		{"ksf_cassette"													"Razovaja minnaja kasseta HEATF-1"}	;KSF mine cassette
		{"lars2"														"110mm MLRS \n range - <c(FFAF00)>300<c(FFFFFF)> m."}
		{"m32"															"Revolver grenade launcher<c(FFAF00)> M-32<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m79"															"Grenade launcher<c(FFAF00)> M79<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203"															"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
		{"m203_cz805"													"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
		{"m203_m4_mars"													"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_m4a1_acog"												"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_m16a4_acog"												"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_tar"														"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203a"														"Underbarrel gr. l.<c(FFAF00)> M203<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m270"															"227mm MLRS \n range - <c(FFAF00)>335..360<c(FFFFFF)> m."}
		{"m302_hk416_aimpoint"											"Underbarrel gr. l.<c(FFAF00)> M302<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m320"															"Underbarrel gr. l.<c(FFAF00)> M320<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"min_modern"													"60mm minomet<c(00FF00)> Soltam<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"mk19"															"Grenade launcher<c(00FF00)><c(FFFFFF)><c(FFAF00)> Mk-19<c(FFFFFF)>\n calibre 40kh53 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m."}
		{"PG"															"Underbarrel gr. l.\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"PG_cn"														"Underbarrel gr. l.<c(FFAF00)> Type 91<c(FFFFFF)>\n calibre 35 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"PG_nato"														"<c(CF9FFF)>Pattern for underbarrel grenade launcher</c>"}	;t
		{"Pod_ak74"														"Underbarrel gr. l.<c(FFAF00)> GP-25<c(FFFFFF)><c(00FF00)> «Koster»<c(FFFFFF)> \n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> VOG-25<c(FFFFFF)> ,<c(FFAF00)> VOG-25M<c(FFFFFF)>,<c(FFAF00)> VOG-25P<c(FFFFFF)> ,<c(FFAF00)> VOG-25PM<c(FFFFFF)>,<c(FFAF00)> VOG-40I<c(FFFFFF)> "}
		{"qbz95_qlg10a_podstvol"										"Underbarrel gr. l.<c(FFAF00)> QLG-10A<c(FFFFFF)>\n calibre 35 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_qlg10a_scope_podstvol"									"Underbarrel gr. l.<c(FFAF00)> QLG-10A<c(FFFFFF)>\n calibre 35 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_qlg91_pod"												"Underbarrel gr. l.<c(FFAF00)> Type 91<c(FFFFFF)>\n calibre 35 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_scope_qlg91_pod"										"Underbarrel gr. l.<c(FFAF00)> Type 91<c(FFFFFF)>\n calibre 35 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qlu-11"														"Grenade launcher<c(FFAF00)> QLU-11<c(FFFFFF)> \n calibre 35x32mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"qlz04"														"Grenade launcher<c(FFAF00)> QLZ-04<c(FFFFFF)>\n calibre 35kh32 mm \n range - <c(FFAF00)>92<c(FFFFFF)> m."}
		{"tos1a"														"220mm flamethrower system \n range - <c(FFAF00)>170<c(FFFFFF)> m."}
		{"type63"														"107mm MLRS \n range - <c(FFAF00)>182<c(FFFFFF)> m."}
		{"ur_83p_wp"													"UR-83P"}
		{"wz96_beryl_kbk-g_sk3_pod"										"Underbarrel gr. l.<c(FFAF00)> Pallad<c(FFFFFF)>\n calibre 40 mm \n range - <c(FFAF00)>53<c(FFFFFF)> m.\n shells -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
	}
;rifle
	{"ammo"
		;sniper
			{"8_6x70_x10"												"Ammo 8.6x70mm sniper<c(FFAF00)>.338<c(FFFFFF)> <c(00FF00)>Lapua Magnum<c(FFFFFF)><c(FFAF00)> AP529<c(FFFFFF)> \n piercing on 600 m. - <c(26afeb)>12<c(FFFFFF)> mm "}
			{"762x51_x20"												"Ammo 7,62x51mm sniper<c(FFAF00)> M118LR<c(FFFFFF)>"}	
			{"SVD_ammo"													"Ammo 7,62x54mm sniper<c(FFAF00)> 7N1<c(FFFFFF)> "}
			{"svdk_ammo"												"Ammo 9,3x64mm sniper<c(FFAF00)> 7N33<c(FFFFFF)> \n - for SVDK - "}
			{"Vin_ammo"													"Ammo 9x39mm<c(FFAF00)> SP-5<c(FFFFFF)> "}
			{"vssk_ammo ap"												"Ammo 12.7x55mm <c(FFFF00)> STs-130 VPS<c(FFFFFF)> \n piercing on 200 m. - <c(26afeb)>16<c(FFFFFF)> mm \n range - <c(FFAF00)>77<c(FFFFFF)> m. \n -<c(CCCCCC)> armor piercing<c(FFFFFF)> - "}
			{"vssk_ammo sn"												"Ammo 12.7x55mm <c(FFFF00)> STs-130 AT<c(FFFFFF)> \n piercing on 200 m. - <c(26afeb)>12<c(FFFFFF)> mm \n range - <c(FFAF00)>77<c(FFFFFF)> m. \n -<c(CCCCCC)> improved accuracy<c(FFFFFF)> - "}
		{"12mm_shotgun"													"12 calibre"}
		{"23mm_shotgun ap"												"Ammo 23x75 mm R<c(FFFF00)> AP<c(FFFFFF)>\n piercing on 1000 m. - <c(26afeb)>5<c(FFFFFF)> mm \n range - <c(FFAF00)>23<c(FFFFFF)> m.\n -<c(CCCCCC)> armor piercing<c(FFFFFF)> -  "}
		{"23mm_shotgun fg"												"Ammo 23x75 mm R<c(FFFF00)> canister shot<c(FFFFFF)>\n range - <c(FFAF00)>15<c(FFFFFF)> m."}
		{"23mm_shotgun gas_short"										"Ammo 23x75 mm R<c(FFFF00)> aerosol<c(FFFFFF)>\n range - <c(FFAF00)>23<c(FFFFFF)> m."}
		{"23mm_shotgun rubber"											"Ammo 23x75 mm R<c(FFFF00)> traumatic<c(FFFFFF)>\n range - <c(FFAF00)>23<c(FFFFFF)> m."}
		{"103x77_x5"													"Ammo 10.3x77mm sniper<c(FFAF00)>.408<c(FFFFFF)> <c(00FF00)>Cheyenne Tactical<c(FFFFFF)> "}
		{"nato_ptr ap"													"Ammo 12,7x99mm<c(FFFF00)> Mk211<c(FFFFFF)><c(00FF00)> «Raufoss»<c(FFFFFF)> \n piercing on 500 m. - <c(26afeb)>30<c(FFFFFF)> mm \n range - <c(FFAF00)>100...105<c(FFFFFF)> m.\n -<c(d7cc81)> fragmentary<c(FFFFFF)>/<c(FF1F00)>incendiary<c(FFFFFF)> - \n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"nato_ptr sn"													"Ammo 12.7x99mm sniper<c(00FF00)> Nornady<c(FFFFFF)><c(FFAF00)> А-Makh<c(FFFFFF)> 750 gr.\n range - <c(FFAF00)>100...105<c(FFFFFF)> m.\n -<c(CCCCCC)> improved accuracy<c(FFFFFF)> - "}
		{"osv_ap"														"Ammo 12.7x108mm sniper <c(FFFF00)>7H34<c(FFFFFF)> \n piercing on 800 m. - <c(26afeb)>10<c(FFFFFF)> mm \n range - <c(FFAF00)>85...105<c(FFFFFF)> m. \n -<c(CCCCCC)> improved accuracy<c(FFFFFF)> - "}
		{"osv_fg"														"Ammo 12.7x108mm <c(FFFF00)> MDZ<c(FFFFFF)> \n range - <c(FFAF00)>85...105<c(FFFFFF)> m.\n -<c(d7cc81)> fragmentary<c(FFFFFF)>/<c(FF1F00)>incendiary<c(FFFFFF)> - "}
		{"osv_fl"														"Ammo 12.7x108mm <c(FFFF00)> AP<c(FFFFFF)> \n piercing on 750 m. - <c(26afeb)>23<c(FFFFFF)> mm \n range - <c(FFAF00)>85...105<c(FFFFFF)> m. \n -<c(FF1F00)> incendiary<c(FFFFFF)> - \n -<c(CCCCCC)> tungsten core<c(FFFFFF)> - "}
		{"ptr"															"PTR"}	;Obsolete
	}
	{"stuff"
		
	}
	{"weapon"
		;sniper
	        {"CS-LR4"													"Sn. rifle<c(FFAF00)> CS/LR4<c(FFFFFF)> \n calibre 7,62x51 mm \n range - <c(FFAF00)>77<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa. "}
			{"cz750"													"Sn. rifle<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> 750<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,93<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"DSR1"														"Sn. rifle<c(FFAF00)> DSR-1<c(FFFFFF)>\n calibre 7,62x51 mm mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5..1,5<c(FFFFFF)> moa.\n optics Schmidt & Bender PM 2 12x56/P4F "}
			{"fr_f2"													"Sn. rifle<c(00FF00)> MAS<c(FFFFFF)><c(FFAF00)> FR-F2<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,1<c(FFFFFF)> moa.\n optics Model 53-bis x4 \n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"hk417_snip"												"Automatic rifle<c(FFAF00)> HK417<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
	        {"l86_susat"												"Sn. rifle<c(FFAF00)> L86A1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n optics SUSAT"}
			{"L96A1"													"Sn. rifle<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> L96A1<c(FFFFFF)><c(00FF00)> AW<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>83<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n optics Leupold Mark 4 3.5-10X40 LR/T Mil-Dot \n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"l115a3"													"Sn. rifle<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> L115A3<c(FFFFFF)>\n calibre 8,6x70 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
			{"l129a1"													"Sn. rifle<c(FFAF00)> L129A1<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n  ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"l129a1_silenced"											"Sn. rifle<c(FFAF00)> L129A1<c(FFFFFF)> ,<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>71<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n  ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m14_scope"												"Automatic rifle<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOCOM<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>71<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m14_sopmod"												"Automatic rifle<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOPMOD<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m21"														"Sn. rifle<c(FFAF00)> M-14<c(FFFFFF)> s<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m21_sopmod"												"Sn. rifle<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOPMOD<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,75<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m24sws"													"Sn. rifle<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> M24A1<c(FFFFFF)><c(00FF00)> SWS<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>81<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,2<c(FFFFFF)> moa.\n optics Leupold Ultra M3A 10X42 / Mil-Dot \n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m39emr"													"Sn. rifle<c(FFAF00)> M39<c(FFFFFF)><c(00FF00)> EMR<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa.\n optics Schmidt & Bender 3-12x50/M8541 SSDS\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m40a5"													"Sn. rifle<c(FFAF00)> M40A5<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>83<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m110"														"Sn. rifle<c(FFAF00)> M110<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n optics Leupold Mark 4 3.5-10X40 LR/T Mil-Dot \n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m200"														"Sn. rifle<c(00FF00)> CheyTac<c(FFFFFF)><c(FFAF00)> M200<c(FFFFFF)>\n calibre 10,3x77 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n optics Night Force NSX 5.5-22x56 MOAR \n ammo -<c(FFAF00)>.408<c(FFFFFF)><c(00FF00)> Sheyenne Tactical<c(FFFFFF)> "}
			{"mk12srp"													"Sn. rifle<c(FFAF00)> Mk 12 SRP<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,25<c(FFFFFF)> moa.\n optics Leupold Mark 4 3.5-10X40 LR/T Mil-Dot "}
			{"msr"														"Sn. rifle<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> MSR<c(FFFFFF)>\n calibre 8,6x70 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n optics Schmidt & Bender PM 2 5-25x56 Horus \n ammo -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
	        {"qbu-88"													"Sn. rifle<c(FFAF00)> QBU-88<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5..2,2<c(FFFFFF)> moa. "}
	        {"qbu-88_silence"											"Sn. rifle<c(FFAF00)> QBU-88<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5..2,2<c(FFFFFF)> moa. "}
	        {"qbu-202"													"Sn. rifle<c(FFAF00)> QBU-202<c(FFFFFF)> \n calibre 8,6x70 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5<c(FFFFFF)> moa. "}
	        {"qbu-202_suppressor"										"Sn. rifle<c(FFAF00)> QBU-202<c(FFFFFF)> \n calibre 8,6x70 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5<c(FFFFFF)> moa. "}
			{"sr25"														"Sn. rifle<c(FFAF00)> Mark 11 Model 0<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"star21"													"Sn. rifle<c(FFAF00)> STAR-21<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
			{"sv98"														"Sn. rifle<c(FFAF00)> SV-98<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>83<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,7<c(FFFFFF)> moa.\n optics 1P69 «Giperon» x10\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"Svd"														"Sn. rifle<c(FFAF00)> SVD<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n optics PSO - 1M2 x4\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"svd_no_skope"												"Sn. rifle<c(FFAF00)> SVD<c(FFFFFF)> with iron sight\n calibre 7,62x54 mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"svdk"														"Sn. rifle<c(FFAF00)> SVDK<c(FFFFFF)>\n calibre 9,3x64 mm \n range - <c(FFAF00)>77<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,02<c(FFFFFF)> moa.\n optics 1P70 «Giperon» x10\n ammo -<c(FFAF00)> 7H33<c(FFFFFF)> "}
			{"svds"														"Sn. rifle<c(FFAF00)> SVD-S<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>77<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n optics PSO - 1M2 x4\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"svu"														"Sn. rifle<c(FFAF00)> SVU<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,8..3,5<c(FFFFFF)> moa.\n optics PSO - 1M2 x4\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"svu_2"													"Sn. rifle<c(FFAF00)> SVU-АS<c(FFFFFF)>\n calibre 7,62x54 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,8..3,5<c(FFFFFF)> moa.\n optics PSO - 1M2 x4\n ammo -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> LPS<c(FFFFFF)> "}
			{"t5000"													"Sn. rifle<c(00FF00)> ORSIS<c(FFFFFF)><c(FFAF00)> T-5000<c(FFFFFF)>\n calibre 8,6x70 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,5<c(FFFFFF)> moa.\n optics Night Force NSX 2.5-10x42 MOAR \n ammo -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
			{"tac50"													"Sn. rifle<c(00FF00)> McMilan<c(FFFFFF)><c(FFAF00)> TAC-50<c(FFFFFF)>\n calibre 12,7x99 mm \n range - <c(FFAF00)>105<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,6..2,5<c(FFFFFF)> moa.\n optics Night Force NSX 8.5-32x56 Mil-Dot \n ammo -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
			{"Vintorez"													"Sn. rifle<c(FFAF00)> VSS<c(FFFFFF)><c(00FF00)> «Vintorez»<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>65<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics PSO - 1M2 - 01 x4"}
			{"vssk_vyhlop"												"Sn. rifle<c(FFAF00)> VHEAT<c(FFFFFF)><c(00FF00)> «Vikhlop»<c(FFFFFF)>\n calibre 12,7x55 mm \n range - <c(FFAF00)>77<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,86..1,72<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> STs-130 AT<c(FFFFFF)> ,<c(FFAF00)> STs-130 VPS<c(FFFFFF)>"}
			{"wa2000"													"Sn. rifle<c(00FF00)> Walther <c(FFAF00)>WA 2000<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>75<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 0,7<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"xm25"														"Grenade launcher<c(FFAF00)> XM25<c(FFFFFF)> \n calibre 25x40mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,25<c(FFFFFF)> moa."}
		{"as50"															"Sn. rifle<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> AS-50<c(FFFFFF)>\n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,3..1.8<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
		{"hecate"														"Sn. rifle<c(00FF00)> PGM<c(FFFFFF)><c(FFAF00)> Hecate 2<c(FFFFFF)>\n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0..2,0<c(FFFFFF)> moa.\n optics SCROME LTE J10F1 x10 \n ammo -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
		{"jackhammer"													"Shotgun<c(00FF00)> Pancor Jackhammer<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"ks-23"														"Shotgun<c(00FF00)> HEAT-23<c(FFFFFF)>\n calibre 23x75 mm R \n range - <c(FFAF00)>15..23<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ks-23m_drozd_1"												"Shotgun<c(00FF00)> HEAT-23M<c(FFFFFF)><c(FFAF00)> Drozd<c(FFFFFF)>\n calibre 23x75 mm R \n range - <c(FFAF00)>15..23<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ks-23m_drozd_2"												"Shotgun<c(00FF00)> HEAT-23M<c(FFFFFF)><c(FFAF00)> Drozd<c(FFFFFF)>\n calibre 23x75 mm R \n range - <c(FFAF00)>15..23<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ksvk"															"Sn. rifle<c(FFAF00)> HEATVK<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,85..2,5<c(FFFFFF)> moa.\n optics 1P71-1 «Giperon» x10\n ammo -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> AP<c(FFFFFF)>,<c(FFAF00)> MDZ<c(FFFFFF)>,<c(FFAF00)> B-32<c(FFFFFF)> "}
		{"m14"															"Automatic rifle<c(FFAF00)> M14<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>70<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
		{"M82"															"Sn. rifle<c(FFAF00)> M82A1<c(00FF00)><c(00FF00)> «Light Fifty»<c(FFFFFF)>\n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5..2,5<c(FFFFFF)> moa.\n optics Leupold Mark 4 4.5-14X50 Mil-Dot \n ammo -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> \n - variant for Bundesvehr G82 "}
		{"mossberg_500_cr"												"Shotgun<c(00FF00)> Mossberg<c(FFFFFF)> <c(FFAF00)>500<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"OSV98"														"Sn. rifle<c(FFAF00)> OSV-96<c(FFFFFF)><c(00FF00)> «Vzlomschik»<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0..2,5<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> AP<c(FFFFFF)>,<c(FFAF00)> MDZ<c(FFFFFF)>,<c(FFAF00)> B-32<c(FFFFFF)> "}
		{"qbs09"														"Shotgun<c(FFAF00)> Type 09<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7,0<c(FFFFFF)> moa."}
		{"remington870"													"Shotgun<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> 870<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"remington870"													"Shotgun<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> 870<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"serby_ss"														"Shotgun<c(00FF00)> Serbu Super Shortly<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>25<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"shaher"														"Sn. rifle <c(00FF00)> Shaher<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>110<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> AP<c(FFFFFF)>,<c(FFAF00)> MDZ<c(FFFFFF)>,<c(FFAF00)> B-32<c(FFFFFF)> "}	
		{"spas15"														"Shotgun<c(FFAF00)> SPAS-15<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6<c(FFFFFF)> moa."}
		{"stryker"														"Shotgun<c(00FF00)> Striker<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"stryker1"														"Shotgun<c(00FF00)> Striker<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"taher"														"Sn. rifle <c(00FF00)> Taher<c(FFFFFF)>\n calibre 17,62x51 mm \n range - <c(FFAF00)>80<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}	
		{"toz80"														"Shotgun<c(FFAF00)> TOZ-80<c(FFFFFF)>\n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5<c(FFFFFF)> moa."}
		{"usas12"														"Shotgun<c(FFAF00)> USAS-12<c(FFFFFF)>\n \n 12 calibre \n range - <c(FFAF00)>35<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"zijiang_m99"													"Sn. rifle <c(00FF00)> Zijiang<c(FFFFFF)><c(FFAF00)>M99<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>85<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,6..2,15<c(FFFFFF)> moa.\n ammo -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> AP<c(FFFFFF)>,<c(FFAF00)> MDZ<c(FFFFFF)>,<c(FFAF00)> B-32<c(FFFFFF)> "}	
	}
;smg
	{"ammo"
		
	}
	{"stuff"
		
	}
	{"weapon"
		{"Abakan"														"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_1"														"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_2"														"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_3"														"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)> i GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_4"														"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_skope"													"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> PK-А<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_skope_2"												"<c(FFAF00)>АN-94<c(FFFFFF)><c(00FF00)> «Аbakan»<c(FFFFFF)> s<c(4d6ff7)> PK-А<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"aek_973"														"<c(FFAF00)>АEK-973<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,35<c(FFFFFF)> moa."}
		{"aek_973_2"													"<c(FFAF00)>АEK-973<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>63<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_3"													"<c(FFAF00)>АEK-973<c(FFFFFF)> s<c(4d6ff7)> PK-А<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_4"													"<c(FFAF00)>АEK-973<c(FFFFFF)> s<c(4d6ff7)> PK-А<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_5"													"<c(FFAF00)>АEK-973<c(FFFFFF)> c<c(4d6ff7)> 1P29<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek971_1"														"<c(FFAF00)>АEK-971<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"aek971_2"														"<c(FFAF00)>АEK-971<c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_1"														"<c(FFAF00)>АK-105<c(FFFFFF)> c<c(4d6ff7)> EKP-3<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_2"														"<c(FFAF00)>АK-105<c(FFFFFF)> c<c(4d6ff7)> POS<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_3"														"<c(FFAF00)>АK-105<c(FFFFFF)> c<c(4d6ff7)> EKP-3<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_4"														"<c(FFAF00)>АK-105<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_5"														"<c(FFAF00)>АK-105<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12"															"<c(FFAF00)>АK-12<c(FFFFFF)> <c(4d6ff7)> <c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_1p87_gp25"												"<c(FFAF00)>АK-12<c(FFFFFF)> c<c(4d6ff7)> 1p87<c(FFFFFF)> i<c(CCCCCC)> GP-25<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_1p87_tactical"											"<c(FFAF00)>АK-12<c(FFFFFF)> c<c(4d6ff7)> 1p87<c(FFFFFF)> <c(CCCCCC)><c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_gp25"													"<c(FFAF00)>АK-12<c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak15_1p87_gp25"												"<c(FFAF00)>АK-15<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)> i GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_pbs_gp25"											"<c(FFAF00)>АK-15<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>, PAP i GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_pbs_tactical"										"<c(FFAF00)>АK-15<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>i PAP\n calibre 7,62x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_tactical"											"<c(FFAF00)>АK-15<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"Ak47"															"<c(FFAF00)>AK<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"ak47_rp"														"<c(FFAF00)>AK<c(FFFFFF)> with drum\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"Ak74"															"<c(FFAF00)>AK-74<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74_p"														"<c(FFAF00)>AK-74M<c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"Ak74b"														"<c(FFAF00)>AK-74M<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak-74derevo_gp"												"<c(FFAF00)>AK-74<c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_1p29"													"<c(FFAF00)>АK-74M<c(FFFFFF)> s<c(4d6ff7)> 1P76<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_1p78"													"<c(FFAF00)>АK-74M<c(FFFFFF)> s<c(4d6ff7)> 1P78-1<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_gp25_1p78"												"<c(FFAF00)>АK-74M<c(FFFFFF)> s<c(4d6ff7)> 1P76<c(FFFFFF)>, GP-25 i<c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_pso"													"<c(FFAF00)>АK-74M<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n optics PSO - 1 x4"}
		{"ak74spec_1"													"<c(FFAF00)>АK-74<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)> <c(CCCCCC)> <c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n optics PSO - 1 x4"}
		{"Ak74sps"														"<c(FFAF00)>AKS-74<c(FFFFFF)> <c(4d6ff7)> <c(FFFFFF)><c(CCCCCC)><c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n optics PSO - 1 x4"}
		{"ak74u"														"<c(FFAF00)>AKS-74U<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"ak74us"														"<c(FFAF00)>AKS-74U<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"Ak74w"														"<c(FFAF00)>AK-74<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak103_1p87"													"<c(FFAF00)>АK-103<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_gp25_1p87"												"<c(FFAF00)>АK-103<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)> i GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_gp25_pbs_1p87"											"<c(FFAF00)>АK-103<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>, PAP i GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>65<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_pbs_1p87"												"<c(FFAF00)>АK-103<c(FFFFFF)> s<c(4d6ff7)> 1P87<c(FFFFFF)>i PAP \n calibre 7,62x39 mm \n range - <c(FFAF00)>65<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak104"														"<c(FFAF00)>АK-104<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,5<c(FFFFFF)> moa."}
		{"ak107"														"<c(FFAF00)>АK-105<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"AKM"															"<c(FFAF00)>AKM<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akm_gp25"														"<c(FFAF00)>АKM<c(FFFFFF)> with GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akm_pbs"														"<c(FFAF00)>АKM<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>63<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"AKMS"															"<c(FFAF00)>АKMS<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akms_gp25"													"<c(FFAF00)>АKMS<c(FFFFFF)> with GP-25\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akms_pbs"														"<c(FFAF00)>АKMS<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>63<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"Aks47"														"<c(FFAF00)>AKS<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"Aks74"														"<c(FFAF00)>AKS-74<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_1p29"													"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n optics 1P29 «Tjulpan» x4 "}
		{"aks74_1p78"													"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> 1P78-1<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n optics 1P78-1 x2,8 "}
		{"aks74_3"														"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)> i GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_4"														"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_5"														"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> EKP-1-07<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_gp25"													"<c(FFAF00)>AKS-74<c(FFFFFF)> with GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_gp25_1p29"												"<c(FFAF00)>AKS-74<c(FFFFFF)> s<c(4d6ff7)> 1P29<c(FFFFFF)> i GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74u_1"														"<c(FFAF00)>AKS-74U<c(FFFFFF)> s<c(4d6ff7)> EKP-1-06<c(FFFFFF)>,<c(CCCCCC)> PAP<c(FFFFFF)> i GP-25\n calibre 5,45x39 mm \n range - <c(FFAF00)>52<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aks74u_2"														"<c(FFAF00)>AKS-74U<c(FFFFFF)> s<c(4d6ff7)> PSO-1<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>56<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa.\n optics PSO - 1 x4"}
		{"aks74u_3"														"<c(FFAF00)>AKS-74U<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>51<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aks74u_4"														"<c(FFAF00)>AKS-74U<c(FFFFFF)> s<c(4d6ff7)> PK-А<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>52<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aksu74"														"<c(FFAF00)>AKS-74U<c(FFFFFF)>\n calibre 5,45x39 mm \n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"AkVal"														"<c(FFAF00)>АS<c(FFFFFF)><c(00FF00)> «VАL»<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"AkVal_1"														"<c(FFAF00)>АS<c(FFFFFF)><c(00FF00)> «VАL»<c(FFFFFF)> s<c(4d6ff7)> EKP-1-05<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>51<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"bizon"														"Submachinegun<c(FFAF00)> Bizon-2B-01<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"ca-58acog"													"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> vz.58<c(FFFFFF)> with <c(4d6ff7)>Acog<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"colt_car15"													"<c(00FF00)>Colt Commando<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"cz_scorpion_evo3_1a"											"Submachinegun<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> Scorpion EVO3A1<c(FFFFFF)>\n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2.8<c(FFFFFF)> moa."}
		{"cz805"														"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> 805<c(FFFFFF)> with <c(4d6ff7)>Acog<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"cz805_m203"													"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> 805<c(FFFFFF)> with <c(4d6ff7)>Acog<c(FFFFFF)> i M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"famas_f1"														"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"famas_f1_aimpoint"											"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)> c<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"famas_f1_opt"													"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)> c optikoj<c(4d6ff7)> <c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g3a3"															"<c(FFAF00)>G3A3<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,1<c(FFFFFF)> moa."}
		{"g3a3_scope"													"<c(FFAF00)>G3A3<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36"															"<c(FFAF00)>G36A1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36_ag36"														"<c(FFAF00)>G36A1<c(FFFFFF)> with AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36a3_eotech552_ag36"											"<c(FFAF00)>G36A3<c(FFFFFF)> with AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_eotech552_an"											"<c(FFAF00)>G36A3<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_eotech552_silencer"										"<c(FFAF00)>G36A3<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_eotech552_silencer_ag36"								"<c(FFAF00)>G36A3<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)> i AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_zeiss_zo_4x30i"											"<c(FFAF00)>G36A3<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_zeiss_zo_4x30i_ag36"									"<c(FFAF00)>G36A3<c(FFFFFF)> with AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36a3_zeiss_zo_4x30i_silencer"								"<c(FFAF00)>G36A3<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n optics"}
		{"g36c"															"<c(FFAF00)>G36C<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,4<c(FFFFFF)> moa."}
		{"g36e"															"<c(FFAF00)>G36E<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36k"															"<c(FFAF00)>G36K<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,4<c(FFFFFF)> moa."}
		{"galil_ar_556"													"<c(00FF00)>Galil<c(FFFFFF)><c(FFAF00)> AR<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"groza_1"														"<c(FFAF00)>OTs-14<c(FFFFFF)><c(00FF00)> Groza-4<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_2"														"<c(FFAF00)>OTs-14<c(FFFFFF)><c(00FF00)> Groza-4<c(FFFFFF)> s<c(4d6ff7)> PO 4kh34<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>51<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_3"														"<c(FFAF00)>OTs-14<c(FFFFFF)><c(00FF00)> Groza-4<c(FFFFFF)> s<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>46<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_tactic"													"<c(FFAF00)>OTs-14<c(FFFFFF)><c(00FF00)> Groza-4<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza1_1"														"<c(FFAF00)>OTs-14<c(FFFFFF)><c(00FF00)> Groza-1<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"hk416"														"<c(FFAF00)>HK416<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416_aimpoint"												"<c(FFAF00)>HK416<c(FFFFFF)> s<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416_aimpoint_m302"											"<c(FFAF00)>HK416<c(FFFFFF)> s<c(4d6ff7)> Aimpoint<c(FFFFFF)> i M302\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416A5_Silenced"												"<c(FFAF00)>HK416A5<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk417_smg"													"<c(FFAF00)>HK417<c(FFFFFF)> s<c(4d6ff7)> Eeotech551<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"js2"															"Submachinegun<c(00FF00)> CS/LS2<c(FFFFFF)>\n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3.09<c(FFFFFF)> moa."}
		{"js2_silenced"													"Submachinegun<c(00FF00)> CS/LS2<c(FFFFFF)> with silencer\n range - <c(FFAF00)>46<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3.09<c(FFFFFF)> moa."}
		{"l22a2_susat"													"<c(FFAF00)>L22A2<c(FFFFFF)> c<c(4d6ff7)> Susat<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>60<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2"														"<c(FFAF00)>L85A2<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_acog"													"<c(FFAF00)>L85A2<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)>2.0<c(FFFFFF)> moa."}
		{"l85a2_ag36"													"<c(FFAF00)>L85A2<c(FFFFFF)> with AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_ag36_acog"												"<c(FFAF00)>L85A2<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> i AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_ag36_susat"												"<c(FFAF00)>L85A2<c(FFFFFF)> s<c(4d6ff7)> Susat<c(FFFFFF)> i AG36\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_susat"													"<c(FFAF00)>L85A2<c(FFFFFF)> s<c(4d6ff7)> Susat<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l119a2"														"<c(FFAF00)>L119A2<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"l119a2_silenced"												"<c(FFAF00)>L119A2<c(FFFFFF)> c<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"lodtester"													"<c(CF9FFF)>LOD Tester</c>"}	;t
		{"M4"															"<c(FFAF00)>M4<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mars"														"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Mars<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mars_m203"													"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Mars<c(FFFFFF)> i M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mepro21"													"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Mepro 21<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mepro21_pr"												"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Mepro 21<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_ag36_acog"												"<c(FFAF00)>M4A1<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>, AG36 i<c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>66<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_m203_acog"												"<c(FFAF00)>M4A1<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>, M203 i <c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>66<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_mgun"													"<c(FFAF00)>M4A1 s<c(4d6ff7)> Eeotech551<c(FFFFFF)> i \n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_sd_aimpoint"												"<c(FFAF00)>M4А1 s<c(4d6ff7)> Aimpoint<c(FFFFFF)> i<c(CCCCCC)> PAP<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>58<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_sd_aimpoint_tactical"									"<c(FFAF00)>M4А1<c(FFFFFF)> Tactical<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>58<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4acog"														"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>66<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4aimpoint"													"<c(FFAF00)>M4<c(FFFFFF)> s<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4empy"														"<c(FFAF00)>M4<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4iron"														"<c(FFAF00)>M4А1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4laz"														"<c(FFAF00)>M4<c(FFFFFF)> s<c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4S"															"<c(FFAF00)>M4A1<c(FFFFFF)> s<c(4d6ff7)> Acog<c(FFFFFF)>,<c(FF1F00)> LTsU<c(FFFFFF)> i M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>66<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M-16"															"<c(FFAF00)>M16<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A1"														"<c(FFAF00)>M16A1<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A2"														"<c(FFAF00)>M16A2<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"m16a2_m203"													"<c(FFAF00)>M16A2<c(FFFFFF)> c M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A4"														"<c(FFAF00)>M16A4<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4_m203_acog"												"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> with M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4acog"													"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4empy"													"<c(FFAF00)>M16A4<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4full"													"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> c<c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4laz"														"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(FF1F00)> LTsU<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m27iar"														"<c(FFAF00)>M27 IAR<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"m27iar_acog"													"<c(FFAF00)>M27 IAR<c(FFFFFF)> s<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"masaf"														"<c(FFAF00)>Masaf<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,5<c(FFFFFF)> moa.\n optics "}
		{"mk17_acog_black"												"<c(FFAF00)>FN<c(FFFFFF)><c(00FF00)> Scar-H<c(FFFFFF)> s<c(4d6ff7)> Acog<c(FFFFFF)>\n calibre 7,62x51 mm \n range - <c(FFAF00)>72<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"mp5sd"														"Submachinegun<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-5SD3<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"pp_vityaz"													"Submachinegun<c(FFAF00)> PP-19-01<c(FFFFFF)><c(00FF00)> «Vitjaz»<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"pp_vityaz_pbs"												"Submachinegun<c(FFAF00)> PP-19-01<c(FFFFFF)><c(00FF00)> «Vitjaz»<c(FFFFFF)> with PAP\n calibre 9x19 mm \n range - <c(FFAF00)>26<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n collimator "}
		{"pp_vityaz_spec"												"Submachinegun<c(FFAF00)> PP-19-01<c(FFFFFF)><c(00FF00)> «Vitjaz»<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n optics "}
		{"qbz_191"														"<c(FFAF00)>QBZ-191<c(FFFFFF)>\n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. \n optics QMK152"}	
		{"qbz_191_silence"												"<c(FFAF00)>QBZ-191<c(FFFFFF)> with silencer\n calibre 5,8x42 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. \n optics QMK152"}	
	    {"qbz95"														"<c(FFAF00)>QBZ-95<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
	    {"qbz95_qlg10a"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> with QLG-10A\n calibre 5,8x42 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_qlg10a_scope"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> c optikoj i QLG-10A \n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_qlg91"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> with GP<c(CCCCCC)> Type 91<c(FFFFFF)>\n calibre 5,8x42 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_scope"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> c optikoj \n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_scope_qlg91"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> with optikoj i GP<c(CCCCCC)> Type 91<c(FFFFFF)>\n calibre 5,8x42 mm \n range - <c(FFAF00)>73<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"qbz95_silence"												"<c(FFAF00)>QBZ-95<c(FFFFFF)> with silencer\n calibre 5,8x42 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_silence_scope"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> with optikoj i silencer\n calibre 5,8x42 mm \n range - <c(FFAF00)>64<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95b"														"<c(FFAF00)>QBZ-95B<c(FFFFFF)> \n calibre 5,8x42 mm \n range - <c(FFAF00)>55<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,5<c(FFFFFF)> moa. "}	
		{"rugerm14"														"<c(00FF00)>Ruger<c(FFFFFF)><c(FFAF00)> Mini-14<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>61<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,0<c(FFFFFF)> moa."}
		{"Scar-l"														"<c(FFAF00)>FN<c(FFFFFF)><c(00FF00)> Scar-L<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"SP3_vihr"														"<c(FFAF00)>SR-3<c(00FF00)><c(00FF00)> «Vikhr»<c(FFFFFF)>\n calibre 9x39 mm \n range - <c(FFAF00)>38<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"SP3_vihr_1"													"<c(FFAF00)>SR-3<c(00FF00)><c(00FF00)> «Vikhr»<c(FFFFFF)> c PAP\n calibre 9x39 mm \n range - <c(FFAF00)>34<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"SP3_vihr_2"													"<c(FFAF00)>SR-3<c(00FF00)><c(00FF00)> «Vikhr»<c(FFFFFF)> c PAP\n calibre 9x39 mm \n range - <c(FFAF00)>34<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"tar21"														"<c(FFAF00)>TAR-21<c(FFFFFF)> c<c(4d6ff7)> Mars<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"tavor_m203"													"<c(FFAF00)>TAR-21<c(FFFFFF)> c<c(4d6ff7)> Mars<c(FFFFFF)> i M203\n calibre 5,56x45 mm \n range - <c(FFAF00)>68<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"tmp"															"Submachinegun<c(00FF00)> Steyr<c(FFFFFF)><c(FFAF00)> TMP<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"type87_smg"													"<c(FFAF00)>QBZ-03<c(FFFFFF)>\n calibre 5,8x42 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 1,55<c(FFFFFF)> moa. "}	
		{"type89"														"<c(FFAF00)>HOWA89<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>62<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 2,75<c(FFFFFF)> moa. "}	
		{"uzi"															"Submachinegun<c(00FF00)> «Uzi»<c(FFFFFF)>\n calibre 9x19 mm \n range - <c(FFAF00)>30<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 6,0<c(FFFFFF)> moa."}
		{"vz58"															"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> vz.58<c(FFFFFF)>\n calibre 7,62x39 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"wz96_beryl"													"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_kbk-g_sk3"											"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> mod 2004 with GP Pallad\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_mod_sk3"											"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> mod 2004 with collimatorom\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_sk3"												"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> with collimatorom\n calibre 5,56x45 mm \n range - <c(FFAF00)>67<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"xm8"															"<c(FFAF00)>XM8<c(FFFFFF)>\n calibre 5,56x45 mm \n range - <c(FFAF00)>50<c(FFFFFF)> m.\n accuracy -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
	}
;smokegun
	{"ammo"
		
	}
	{"stuff"
		
	}
	{"weapon"
		{"2xepocha_c"													"Smoke discharger"}
		{"2xepocha_d"													"Smoke discharger"}
		{"4xepocha_a"													"Smoke discharger"}
		{"4xepocha_b"													"Smoke discharger"}
		{"6xepocha_a"													"Smoke discharger"}
		{"6xepocha_b"													"Smoke discharger"}
		{"10xshtora"													"Smoke discharger"}
		{"24xafganit_l"													"Smoke discharger active defense «Аfganit»"}
		{"24xafganit_r"													"Smoke discharger active defense «Аfganit»"}
		{"muss_puma"													"KOEP «MUSS»"}
		{"trophy_mortar"												"Trophy APS launcher"}
	}
;smokeguns
	{"ammo"
		{"afganit"														"Ammo for active defense <c(00FF00)>«Аfganit»<c(FFFFFF)>\n S its help soldier can reload active defense «Аfganit»"}
		{"arena"														"Ammo for active defense <c(00FF00)>«Аrena»<c(FFFFFF)>\n S its help soldier can reload active defense «Аrena»"}
		{"drozd"														"Ammo for active defense <c(00FF00)>«Drozd»<c(FFFFFF)>\n S its help soldier can reload active defense «Drozd»"}
		{"smoke"														"Granata<c(FFAF00)> 3D6<c(FFFFFF)> for smoke discharger<c(00FF00)> «Tucha»<c(FFFFFF)>\n - for postanovki pered objektom smoke zavesi maskirujuschego dejstvija - "}
		{"smoke_kzvp"													"Granata for active defense <c(00FF00)>«Аfganit»<c(FFFFFF)>\n - for smokes and countermeasures - "}
		{"smoke_shtora"													"Granata<c(FFAF00)> 3D17<c(FFFFFF)> for TShU <c(00FF00)>«Shtora 1»<c(FFFFFF)>\n - for smokes and countermeasures - "}
		{"trophy"														"Granata for active defense <c(00FF00)>«Trophy»<c(FFFFFF)>\n - for active defeating of AT shells - "}
		{"trophy_rpg_initiator"											"<c(CF9FFF)>Initiator Trophy</c>"}	;t
	}
	{"stuff"
		{"trophy_mortar"												"Trophy APS ammo"}
	}
	{"weapon"
		{"2xsmokegun"													"Smoke discharger"}
		{"3xshtora"														"Smoke discharger"}
		{"3xsmokegun_bmp2"												"Smoke discharger"}
		{"3xsmokegun_bmp3"												"Smoke discharger"}
		{"3xsmokegun_m60"												"Smoke discharger"}
		{"3xsmokegun_msta"												"Smoke discharger"}
		{"4xshtora"														"Smoke discharger"}
		{"4xsmokegun_bredly"											"Smoke discharger"}
		{"5xsmokegun_T72A_right"										"Smoke discharger"}
		{"6xshtora"														"Smoke discharger"}
		{"6xsmokegun"													"Smoke discharger"}
		{"6xsmokegun_abrams"											"Smoke discharger"}
		{"6xsmokegun_adrams"											"Smoke discharger"}
		{"6xsmokegun_btr"												"Smoke discharger"}
		{"7xshtora"														"Smoke discharger"}
		{"7xsmokegun_T72A_left"											"Smoke discharger"}
		{"8xsmokegun_T72b"												"Smoke discharger"}
		{"12xsmokegun_pt91"												"Smoke discharger"}
	}
;special
	{"ammo"
		{"ponton_pmp"													"Floating bridge<c(FFAF00)> PMP<c(FFFFFF)>"}
	}
	{"stuff"
		{"2b14_podnos"													"Mortar<c(FFAF00)> 2B14<c(FFFFFF)><c(00FF00)> «Podnos»<c(FFFFFF)>\n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"AGS17_stan"													"Grenade launcher<c(FFAF00)> АGS-17<c(FFFFFF)><c(00FF00)> «Plamja»<c(FFFFFF)>\n range - <c(FFAF00)>92..105<c(FFFFFF)> m."}
		{"Ags30_stan"													"Grenade launcher<c(FFAF00)> АGS-30<c(FFFFFF)><c(00FF00)> «Аtlant»<c(FFFFFF)>\n range - <c(FFAF00)>92..105<c(FFFFFF)> m."}
		{"b33r"															"<c(ffff60)>Crate of beer bottles</c>"}	;vanilla
		{"barbwire_kit"													"<c(ffff60)>Barbed wire roll\n<c(FFFFFF)>Use it to block the infantry path.</c>"}
		{"blackbox"														"<c(ffff60)>Black box</c>"}
		{"browning_m2hb_stan"											"Machinegun<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n calibre 12,7x99 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}	
		{"buksir_tros"													"<c(ffff60)>Trailing rope\n<c(FFFFFF)>Use it to tow vehicles and tanks.\nOrder soldier to use it on wheels or tracks\n<c(00FF00)>Towing vehicle weight ≥ Trailer = Can tow <c(FFFFFF)>\n<c(FF1F00)>Towing vehicle weight < Trailer = Can't tow </c>"}
		{"cord_wood"													"<c(ffff60)>Cord of wood</c>"}	;vanilla
		{"cumulative_charge"											"<c(CF9FFF)>cumulative_charge</c>"}	;t
		{"cumulative_launcher"											"<c(CF9FFF)>cumulative_launcher</c>"}	;t
		{"documents"													"<c(ffff60)>Documents</c>"}
		{"dollar"														"<c(ffff60)>US Dollars</c>"}
		{"eleron_catapult"												"Pneumatic catapult for launching UAV  Eleron-3SV"}
		{"eleron_control"												"Control unit for UAV Eleron-3SV"}
		{"empty_stuff"													"<c(ffff60)>Empty</c>"}
		{"field_bag"													"<c(ffff60)>Field bag</c>"}	;vanilla
		{"flag_handle"													"<c(ffff60)>Flag</c>"}	;vanilla
		{"flag_handle_1_arm_div"										"Banner 1 Arm. Division"}
		{"gmg_stan"														"Mounted<c(FFAF00)> GMG<c(FFFFFF)>"}
		{"hedgehog_kit"													"<c(ffff60)>Hedgehog\n<c(FFFFFF)>Use it to block the vehicles and tanks path.</c>"}
		{"hj73_stan"													"Mounted <c(FFAF00)> HJ-73<c(FFFFFF)>"}
		{"human"														"<c(ffff60)>Human corpse</c>"} ;vanilla
		{"Kord_stan"													"Mounted<c(FFAF00)> Kord<c(FFFFFF)>"}
		{"Kornet_stan"													"Mounted<c(FFAF00)> Kornet<c(FFFFFF)>"}
		{"l16_mortar"													"Mortar<c(FFAF00)> L-16<c(FFFFFF)>"}
		{"light"														"<c(CF9FFF)>Light</c>"}	;t	;vanilla
		{"m2_stan"														"Mounted <c(FFAF00)> M2<c(FFFFFF)>"}
		{"m252_stan"													"Mortar<c(FFAF00)> M252<c(FFFFFF)>"}
		{"malytka_stan"													"Mounted<c(FFAF00)> Maljutka<c(FFFFFF)>"}
		{"marlboro"														"<c(ffff60)>Marlboro cigarettes</c>"}
		{"matchbox"														"<c(ffff60)>Matchbox\n<c(FFFFFF)>Use it to set flammables on fire.</c>"}
		{"metis_hand"													"ATGM <c(FFAF00)> 9K115-2<c(FFFFFF)><c(00FF00)> «Metis-M»<c(FFFFFF)> \n range - <c(FFAF00)>100<c(FFFFFF)> m."} 
		{"mg3_stan"														"Mounted <c(FFAF00)> MG3<c(FFFFFF)>"}
		{"milan_stan"													"Mounted<c(FFAF00)> Milan<c(FFFFFF)>"}
		{"mine_detector"												"<c(ffff60)>Minesweeper\n<c(FFFFFF)>Use it to detect mines.</c>"}
		{"Mk19_stan"													"Mounted<c(FFAF00)> Mk19<c(FFFFFF)>"}
		{"mstar_v6_stan"												"Mounted RLS<c(FFAF00)> MSTAR V6<c(FFFFFF)>"}
		{"mstar_v6usa_stan"												"Mounted RLS<c(FFAF00)> MSTAR V6<c(FFFFFF)>"}
		{"netting_kit"													"<c(ffff60)>Camouflage netting</c>"}
		{"notebook"														"<c(ffff60)>Notebook</c>"}
		{"pkm_stan"														"Mounted<c(FFAF00)> PKM<c(FFFFFF)>"}
		{"plant"														"<c(ffff60)>Bush</c>"}
		{"prima"														"<c(ffff60)>Prima cigarettes</c>"}
		{"psnr5_stan"													"Mounted RLS<c(FFAF00)> PNSR-5<c(FFFFFF)>"}
		{"psnr5m_stan"													"Mounted RLS<c(FFAF00)> PNSR-5M<c(FFFFFF)>"}
		{"ptur_hj8"														"Mounted<c(FFAF00)>HJ-8<c(FFFFFF)>"}
		{"ptur_konkurs"													"Mounted<c(FFAF00)> Konkurs<c(FFFFFF)>"}
		{"ptur_mmp"														"Mounted<c(FFAF00)> MMP<c(FFFFFF)>"}
		{"ptur_tow"														"Mounted<c(FFAF00)> TOW<c(FFFFFF)>"}
		{"qjz-89_stan"													"Machinegun<c(FFAF00)> QJZ-89<c(FFFFFF)>\n calibre 12,7x108 mm \n range - <c(FFAF00)>100<c(FFFFFF)> m."}
		{"qlz04_stan"													"Grenade launcher<c(FFAF00)> QLZ-04<c(FFFFFF)>\n range - <c(FFAF00)>92<c(FFFFFF)> m."}
		{"rad"															"<c(ffff60)>Radio</c>"}	;vanilla
		{"radar_bs903_stan"												"Mounted RLS<c(FFAF00)> BS-903<c(FFFFFF)>"}
		{"radio_station"												"<c(ffff60)>Radio station</c>"}
		{"rus_las_designator_stan"										"Mounted LTsU<c(FFAF00)> 1D26<c(FFFFFF)>"}
		{"sandbag_kit"													"<c(ffff60)>Sandbag and Tri-Fold\n<c(FFFFFF)>Use it to build sandbags and foxholes.</c>"}
		{"sandbag_kit2"													"<c(CF9FFF)>Entity Sandbag_kit2</c>"}	;t
		{"sardini"														"<c(ffff60)>Canned sardines</c>"}	;vanilla
		{"scud_dummy"													"<c(ffff60)>Inflatable dummy 9K14</c>"}
		{"searchlight"													"<c(CF9FFF)>Searchlight</c>"}	;t	;vanilla
		{"spade_inv"													"<c(ffff60)>Spade\n<c(FFFFFF)>Use it to build foxholes and two-man fighting positions.</c>"}
		{"spg_9_stan"													"Mounted<c(FFAF00)> SPG-9<c(FFFFFF)>"}
		{"spike_stan"													"Mounted<c(FFAF00)> Spike-ER<c(FFFFFF)>"}
		{"spike_stan_idf"												"Mounted<c(FFAF00)> Spike-ER<c(FFFFFF)>"}
		{"turret_dir_detector"											"<c(CF9FFF)>Service turret_dir_detector</c>"}	;t
		{"tushonka"														"<c(ffff60)>Canned meat</c></c>"}	;vanilla
		{"type_pp87_stan"												"82mm<c(FFAF00)> PP-87<c(FFFFFF)>\n range - <c(FFAF00)>140<c(FFFFFF)> m."}
		{"ur_83p_stan"													"Mounted<c(FFAF00)> UR-83P<c(FFFFFF)>"}
		{"vant_vm_shield_stan"											"Tactical shield <c(FFAF00)>Vant-VM<c(FFFFFF)>"}
		{"wind"															"<c(CF9FFF)>Service Wind</c>"}	;t
		{"wirecutters"													"<c(ffff60)>Wirecutters\n<c(FFFFFF)>Use it to cut barbedwire.</c>"}
	}
	{"weapon"
		{"binocular"													"<c(ffff60)>Binocular</c>"}
		{"ponton_bridge"												"Floating bridge<c(FFAF00)> PMP<c(FFFFFF)>"}
	}
;vanilla
	{"stuff"
		{"bandage"														"<c(ffff60)>Individual First Aid Kit\n<c(FFFFFF)>(IFAK)</c>"}
		{"case"															"<c(ffff60)>Secret documents</c>"}
		{"chicken"														"<c(ffff60)>Chicken</c>"}
		{"filling_empty"												"<c(ffff60)>Empty</c>"}		
		{"morphine"														"<c(ffff60)>Combat Trauma/lifesaver bag\n<c(FFFFFF)>(CLS)</c>"}
		{"steak"														"<c(ffff60)>Steak</c>"}
		{"petrol"														"<c(ffff60)>Petrol</c>"}
		{"repair_kit"													"<c(ffff60)>Repair kit\n<c(FFFFFF)>Use it to repair vehicles, armored units, and stationary weapons.</c>"}
	}
;Future projects