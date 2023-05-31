;Создано maaa - DTTGOC
;LocalGen2
;Extra data placeholder
;Extra data placeholder
;rev 03.07.2022

;Colors guide:
	;Record category																														;symbol		;Color			;Color code
	;Technical records(Assistor, Detector, Entity, Exp, Impactor, Initiator, Injector, Jumper, Loading Mediator, LOD, Service, Submunition)	;t			;Light Violet	;<c(CF9FFF)>
	
;Ammunition classifications for direct control
	{"ammo"
			;item name													;ammunition classification acronym				;ammunition classification full name
			{"fg"														"<c(FFAF00)>ОФ</c>"}							;High Explosive
			{"korr"														"<c(FFAF00)>Высокоточный</c>"}					;Laser-guided Cannon-launched Guided Projectiles
			{"satt"														"<c(FFAF00)>Высокоточный</c>"}					;Satellite-guided Cannon-launched Guided Projectiles
			{"cl"														"<c(FFAF00)>Касс.</c>"}							;Cluster
			{"bzt"														"<c(4d6ff7)>БЗ</c>"}							;Armor-piercing	Incendiary-Tracer
			{"ofzt"														"<c(FFAF00)>ОФЗ</c>"}							;High Explosive	Incendiary-Tracer
			{"ap"														"<c(4d6ff7)>ББ</c>"}							;Armor-piercing
			{"apcr"														"<c(4d6ff7)>БПС</c>"}							;Armor-piercing Fin-stabilized Discarding Sabot
			{"apcr_h"													"<c(4d6ff7)>БПС</c>"}							;Armor-piercing Fin-stabilized Discarding Sabot
			{"atgm"														"<c(FFAF00)>ПТУР</c>"}							;Anti-Tank Guided Missile
			{"rok"														"<c(FFAF00)>ПТУР<c(FFFFFF)>"}					;Gun Launched Anti-Tank Guided Missile
			{"heat"														"<c(FFAF00)>КС</c>"}							;High-explosive Anti-tank
			{"cm"														"<c(FFAF00)>КС</c>"}							;High-explosive Anti-tank
			{"cm_e"														"<c(FFAF00)>КС</c>"}							;High-explosive Anti-tank
			{"sm"														"<c(CCCCCC)>Дым.</c>"}							;Smoke
	}
	{"weapon"
		{"type"
			{"gun_main"													"<f(arial_hq)><c(C1FFC1)>Орудие</c>"}			;Main gun name
			{"gun_secondary"											"<f(arial_hq)><c(C1FFC1)>Второе орудие</c>"}	;Secondary gun name
			{"mgun_main"												"<f(arial_hq)><c(C1FFC1)>Пулемет</c>"}			;Main machine gun name
			{"mgun_aa"													"<f(arial_hq)><c(C1FFC1)>Зенитный"}				;Anti-aircraft machine gun name
			{"mgun_coaxial" 											"<f(arial_hq)><c(C1FFC1)>Спаренный"}			;Turret mounted coaxial machine gun in parallel with the main gun
			{"mgun_hull"												"<f(arial_hq)><c(C1FFC1)>Курсовой"}				;Hull mounted machine gun name
			{"mgun_rear"												"<f(arial_hq)><c(C1FFC1)>Кормовой"}				;Rear mounted machine gun name
			{"mgun_right"												"<f(arial_hq)><c(C1FFC1)>Правый"}				;Right-side mounted machine gun name		
			{"mgun_left"												"<f(arial_hq)><c(C1FFC1)>Левый"}				;Left-side mounted machine gun name
		}
	}
	{"weapon"
		{"thrower hand"													"Метательное"}
	}
;air_stuff
	{"ammo"
		{"agm-65D"														"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>660<c(FFFFFF)> мм \n дальность - <c(FFAF00)>190<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"agm-65D_impactor"												"<c(CF9FFF)>Impactor AGM-65D</c>"}					;t
		{"agm-65G"														"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>36<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>190..302<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)>  на пятно лазера<c(FFFFFF)> ГСН "}
		{"agm-65G_impactor"												"<c(CF9FFF)>Impactor AGM-65G</c>"}					;t
		{"agm-84d"														"<c(FFAF00)>AGM-84D<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>97.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>525<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> РЛ<c(FFFFFF)> ГСН "}
		{"agm-84d_impactor"												"<c(CF9FFF)>Impactor AGM-84D</c>"}					;t
		{"agm88"														"<c(FFAF00)>AGM-88<c(FFFFFF)> <c(00FF00)> HARM<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>18.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>455<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ПРР<c(FFFFFF)> ГСН "}
		{"agm88_impactor"												"<c(CF9FFF)>Impactor AGM-88</c>"}					;t
		{"agm-154"														"Планирующая бомба<c(FFAF00)> AGM-154<c(FFFFFF)>\n Кассетная (ПП).\n дальность - <c(FFAF00)>455<c(FFFFFF)> м."}
		{"agm-154_impactor"												"<c(CF9FFF)>Impactor AGM-154C</c>"}					;t
		{"AIM-120C7"													"ЗУР <c(FFAF00)>AIM-120C7<c(FFFFFF)><c(00FF00)> AMRAAM<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>430<c(FFFFFF)> м.\n тип наведения - инерциальное\n - противовоздушная - "}
		{"AIM-120C7_impactor"											"<c(CF9FFF)>Impactor AIM-120 C7</c>"}				;t
		{"aladin_b"														"БПЛА <c(00FF00)>EMT Aladin<c(FFFFFF)>"}
		{"alarm_missile"												"<c(FFAF00)>ALARM<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n масса ВВ - <c(FF1F00)>14<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>440<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ПРР<c(FFFFFF)> ГСН "}
		{"alarm_missile_impactor"										"<c(CF9FFF)>Impactor ALARM</c>"}					;t
		{"blu108b_skeet_core_impactor"									"<c(CF9FFF)>Impactor BLU Skeet Core</c>"}			;t
		{"bomb250_3 fg"													"Авиабомба<c(FFAF00)> Тип 250<c(FFFFFF)> ОФ \n масса ВВ - <c(FF1F00)>76<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"bomb250_3 ic"													"Авиабомба<c(FFAF00)> Тип 250<c(FFFFFF)> З \n масса ВВ - <c(FF1F00)>76<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"c802akg"														"<c(FFAF00)>C-802<c(FFFFFF)><c(00FF00)>AKG<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>95<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>525<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ТВ<c(FFFFFF)> ГСН "}			
		{"c802akg_impactor"												"<c(CF9FFF)>Impactor C802AKG</c>"}					;t
		{"cbu-97"														"Кассета<c(FFAF00)> CBU-97<c(FFFFFF)> \n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"cbu-97_impactor"												"<c(CF9FFF)>Impactor CBU-97</c>"}					;t
		{"ch802_b"														"БПЛА <c(00FF00)>CH-802<c(FFFFFF)>"}
		{"eleron3sv"													"<c(00FF00)>Элерон-3СВ<c(FFFFFF)> БПЛА"}	
		{"fab_250"														"Авиабомба<c(FFAF00)> ФАБ-250М62<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>99<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"fab_250_270"													"Авиабомба<c(FFAF00)> ОФАБ-250-270<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>97<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"fab_500"														"Авиабомба<c(FFAF00)> ФАБ-500<c(FFFFFF)> М62\n масса ВВ - <c(FF1F00)>200<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"ft3"															"КАБ<c(FFAF00)> FT-3<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>76<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"gbu10"														"КАБ<c(FFAF00)> GBU-10<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>428<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"gbu16"														"КАБ<c(FFAF00)> GBU-16<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>202<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"gbu-31"														"КАБ<c(FFAF00)> GBU-31<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>428<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"gbu-38"														"КАБ<c(FFAF00)> GBU-38<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>87<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"jsm"															"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>40<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>550<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"jsm_impactor"													"<c(CF9FFF)>Impactor JSM</c>"}						;t
		{"kab-250"														"Авиабомба<c(FFAF00)> КАБ-250<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>99<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"kab-500kr"													"Авиабомба<c(FFAF00)> КАБ-500КР<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>100<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"kab-500s"														"Авиабомба<c(FFAF00)> КАБ-500С<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>195<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"kleinbombe-44"												"<c(FFAF00)>Kleinbombe-44<c(FFFFFF)>\n бронебойность - <c(FF1F00)>250<c(FFFFFF)> мм"}
		{"kleinbombe-44_impactor"										"<c(CF9FFF)>Impactor Kleinbombe-44</c>"}			;t
		{"kmgu2"														"<c(FFAF00)>КМГУ-2<c(FFFFFF)> с минами"}
		{"ld10"															"<c(FFAF00)>LD-10<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6.8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>455<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ПРР<c(FFFFFF)> ГСН "}
		{"ld10_impactor"												"<c(CF9FFF)>Impactor LD-10</c>"}					;t
		{"ls6"															"Планирующая бомба<c(FFAF00)> LS-6<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>195<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>440<c(FFFFFF)> м."}
		{"mk_82"														"Авиабомба<c(FFAF00)> Mk 82<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>87<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"odab_500"														"Авиабомба <c(FFAF00)>ОДАБ-500<c(FFFFFF)>\n масса огнесмеси - <c(FF1F00)>193<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"odab_500_dispencer"											"Авиабомба <c(FFAF00)>ОДАБ-500<c(FFFFFF)>\n масса огнесмеси - <c(FF1F00)>193<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"odab_500_impactor"											"<c(CF9FFF)>Impactor ОДАБ-500</c>"}					;t
		{"pbk-500u"														"Кассета<c(FFAF00)> ПБК-500У<c(FFFFFF)> <c(00FF00)> «Дрель»<c(FFFFFF)>\n дальность - <c(FFAF00)>410<c(FFFFFF)> м."}
		{"pbk-500u_impactor"											"<c(CF9FFF)>Impactor ПБК-500У</c>"}					;t
		{"pl5e2"														"ЗУР <c(FFAF00)>PL-5<c(FFFFFF)><c(00FF00)>E2<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>254<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"pl5e2_impactor"												"<c(CF9FFF)>Impactor PL-5E2</c>"}					;t
		{"pl8b"															"ЗУР <c(FFAF00)>PL-8<c(FFFFFF)><c(00FF00)>B<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>340<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"pl8b_impactor"												"<c(CF9FFF)>Impactor PL-8B</c>"}					;t
		{"pl12"															"ЗУР <c(FFAF00)>PL-12<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>420<c(FFFFFF)> м.\n тип наведения - инерциальное+АРЛГСН \n - противовоздушная - "}
		{"pl12_impactor"												"<c(CF9FFF)>Impactor PL-12</c>"}					;t
		{"r_27er"														"ЗУР <c(FFAF00)>Р-27ЭР<c(FFFFFF)> изд.<c(9fd186)> 470-1Э<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>13,3<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>360<c(FFFFFF)> м.\n тип наведения - инерциальное+ПРЛГСН   \n - противовоздушная - "}
		{"r_27er_impactor"												"<c(CF9FFF)>Impactor Р-27ЭР изд. 470-1Э</c>"}		;t
		{"r-3c"															"ЗУР <c(FFAF00)>Р-3C<c(FFFFFF)> изд.<c(9fd186)> 310<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>150<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН  \n - противовоздушная - "}
		{"r-3c_impactor"												"<c(CF9FFF)>Impactor Р-3C изд. 310</c>"}			;t
		{"r60_su25"														"ЗУР <c(FFAF00)>Р-60<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН  \n - противовоздушная - "}
		{"r60_su25_impactor"											"<c(CF9FFF)>Impactor Р-60</c>"}						;t
		{"r-73"															"ЗУР <c(FFAF00)>Р-73<c(FFFFFF)> изд.<c(9fd186)> 72<c(FFFFFF)>\n экспортное обозначение<c(d7cc81)> РВВ-МД <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>185<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"r-73_impactor"												"<c(CF9FFF)>Impactor Р-73 изд. 72</c>"}				;t
		{"RBK_250"														"Кассета<c(FFAF00)> РБК-250-275<c(FFFFFF)> ЗАБ-2,5<c(FFFFFF)>\n - зажигательные авиабомбы ЗАБ-2,5 - "}
		{"RBK_250_impactor"												"<c(CF9FFF)>Impactor RBK_250_impactor</c>"}			;t
		{"RBK_500"														"Кассета<c(FFAF00)> РБК-500<c(FFFFFF)> СПБЭ-Д<c(FFFFFF)>"}
		{"RBK_500_impactor"												"<c(CF9FFF)>Impactor RBK_500_impactor</c>"}			;t
		{"rbk_cn cl"													"Кассета<c(FFAF00)> 250-3<c(FFFFFF)>\n дальность - <c(FFAF00)>240<c(FFFFFF)> м. \n - кумулятивные суббоеприпасы - "}
		{"rbk_cn tb"													"Авиабомба <c(FFAF00)>CS-BBF1<c(FFFFFF)>\n масса огнесмеси - <c(FF1F00)>100<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>240<c(FFFFFF)> м."}
		{"rq11raven_b"													"БПЛА <c(00FF00)>RQ-11 Raven<c(FFFFFF)>"}
		{"rvv-ae"														"ЗУР <c(FFAF00)>К-77М<c(FFFFFF)> изд.<c(9fd186)> 180<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>380<c(FFFFFF)> м.\n тип наведения - инерциальное+АРЛГСН \n - противовоздушная - "}
		{"rvv-ae_impactor"												"<c(CF9FFF)>Impactor К-77М изд. 180</c>"}			;t
		{"rvv-md"														"ЗУР <c(FFAF00)>Р-74<c(FFFFFF)> изд.<c(9fd186)> 740<c(FFFFFF)>\n экспортное обозначение<c(d7cc81)> РВВ-МД <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>197<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН  \n - противовоздушная - "}
		{"rvv-md_impactor"												"<c(CF9FFF)>Impactor Р-74 изд. 740</c>"}			;t
		{"rvv-sd"														"ЗУР <c(FFAF00)>Р-77-1<c(FFFFFF)> изд.<c(9fd186)> 170-1<c(FFFFFF)>\n экспортное обозначение<c(d7cc81)> РВВ-СД <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>420<c(FFFFFF)> м.\n тип наведения - инерциальное+АРЛГСН   \n - противовоздушная - "}
		{"rvv-sd_impactor"												"<c(CF9FFF)>Impactor Р-77-1 изд. 170-1</c>"}		;t
		{"s25ld"														"НАР 266мм<c(FFAF00)> С-25KL<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>150<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>190<c(FFFFFF)> м."}
		{"spbe-d_core_impactor"											"<c(CF9FFF)>Impactor SPBE-D Core</c>"}				;t
		{"spbe-d_impactor"												"<c(CF9FFF)>Impactor SPBE-D</c>"}					;t
		{"taurus"														"<c(00FF00)>TAURUS KEPD<c(FFFFFF)><c(FFAF00)> 350<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>101<c(FFFFFF)> кг.\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>640<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - кумулятивно-фугасный заряд - "}
		{"taurus_impactor"												"<c(CF9FFF)>Impactor TAURUS KEPD</c>"}				;t
		{"x_25ml_su25_ammo"												"<c(FFAF00)>Х-25МЛ<c(FFFFFF)> изд.<c(9fd186)> 713<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>80<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>190..330<c(FFFFFF)> м.\n тип наведения - на пятно лазера "}	
		{"x_25ml_su25_ammo_impactor"									"<c(CF9FFF)>Impactor Х-25МЛ изд. 713</c>"}			;t
		{"x31ad"														"<c(FFAF00)>Х-31АД<c(FFFFFF)> изд.<c(9fd186)> 77АД<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>30<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>490<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)><c(FFFFFF)> ГСН "}
		{"x31ad_impactor"												"<c(CF9FFF)>Impactor Х-31АД изд. 77АД</c>"}			;t
		{"x31p"															"<c(FFAF00)>Х-31П<c(FFFFFF)> изд.<c(9fd186)> 77П<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>24<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>470<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ПРР<c(FFFFFF)> ГСН "}
		{"x31p_impactor"												"<c(CF9FFF)>Impactor Х-31П изд. 77П</c>"}			;t
		{"x-38mte"														"<c(FFAF00)>Х-38МТЭ<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>80<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>400<c(FFFFFF)> м.\n тип наведения - инерциальное +<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}	
		{"x-38mte_impactor"												"<c(CF9FFF)>Impactor Х-38МТЭ</c>"}					;t
		{"x59m"															"<c(FFAF00)>Х-59М<c(FFFFFF)><c(00FF00)> «Овод-М»<c(FFFFFF)> изд.<c(9fd186)> Д-9М<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>116<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>485<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ТВ<c(FFFFFF)> ГСН "}
		{"x59m_impactor"												"<c(CF9FFF)>Impactor Х-59М «Овод-М» изд. Д-9М</c>"}	;t
	}
	{"stuff"
		{"aladin"														"БПЛА <c(00FF00)>EMT Aladin<c(FFFFFF)>"}
		{"aladin_anten"													"Антенна - служит для управления БПЛА Aladin"}
		{"aladin_control"												"Пульт управления - служит для управления БПЛА Aladin"}
		{"ch802"														"БПЛА <c(00FF00)>CH-802<c(FFFFFF)>"}
		{"rq11_control"													"Пульт управления - служит для управления БПЛА RQ-11 Raven"}
		{"rq11raven"													"БПЛА <c(00FF00)>RQ-11 Raven<c(FFFFFF)>"}
		{"smalluav_cn_control"											"Пульт управления - служит для управления БПЛА Китая"}
	}
	{"weapon"
		{"agm-65Dx3"													"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Dx3_1"													"<c(FFAF00)>AGM-65D<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Gx2"													"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm-65Gx3"													"<c(FFAF00)>AGM-65E<c(FFFFFF)><c(00FF00)> «Maverick»<c(FFFFFF)>"}
		{"agm84x2"														"<c(FFAF00)>AGM-84D<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>"}
		{"agm88x2"														"<c(FFAF00)>AGM-88<c(FFFFFF)><c(00FF00)> HARM<c(FFFFFF)>"}
		{"agm-154x2"													"КАБ <c(FFAF00)>AGM-154<c(FFFFFF)><c(00FF00)> JSOW<c(FFFFFF)>"}
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
		{"eleron3sv_cat"												"Пневматическая катапульта - служит для запуска БПЛА  Элерон-3СВ"}
		{"fab_250x2"													"Авиабомба <c(FFAF00)>ФАБ-250М62<c(FFFFFF)> x2"}
		{"fab_250x4"													"Авиабомба <c(FFAF00)>ФАБ-250М62<c(FFFFFF)> x4"}
		{"fab_250x6"													"Авиабомба <c(FFAF00)>ФАБ-250М62<c(FFFFFF)> x6"}
		{"fab_250x12"													"Авиабомба <c(FFAF00)>ФАБ-250М62<c(FFFFFF)> x12"}
		{"fab_250x24"													"Авиабомба <c(FFAF00)>ОФАБ-250-270<c(FFFFFF)> x24"}
		{"fab500x8"														"Авиабомба <c(FFAF00)>ФАБ-500<c(FFFFFF)> М62"}
		{"ft3x5"														"КАБ <c(FFAF00)>FT-3<c(FFFFFF)> x5"}
		{"GBU10x2_eurofighter"											"КАБ <c(FFAF00)>GBU-10<c(FFFFFF)> x2"}
		{"GBU10x4_eurofighter"											"КАБ <c(FFAF00)>GBU-10<c(FFFFFF)> x2"}
		{"GBU16x2_tornado"												"КАБ <c(FFAF00)>GBU-16<c(FFFFFF)> x2"}
		{"GBU16x4_tornado"												"КАБ <c(FFAF00)>GBU-16<c(FFFFFF)> x4"}
		{"GBU16x5_tornado"												"КАБ <c(FFAF00)>GBU-16<c(FFFFFF)> x5"}
		{"GBU-31x2_F-35"												"КАБ <c(FFAF00)>GBU-31<c(FFFFFF)> x2"}
		{"GBU-38x2_A-10C"												"КАБ <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x2_F-35"												"КАБ <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x2_MQ9"													"КАБ <c(FFAF00)>GBU-38<c(FFFFFF)> x2"}
		{"GBU-38x4_A-10C"												"КАБ <c(FFAF00)>GBU-38<c(FFFFFF)> x4"}
		{"jsmx4"														"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>"}
		{"jsmx6"														"<c(00FF00)>Joint Strike Missile<c(FFFFFF)>"}
		{"kab-250x4"													"<c(FFAF00)>КАБ-250 кр<c(FFFFFF)>"}
		{"kab-250x9"													"<c(FFAF00)>КАБ-250 кр<c(FFFFFF)>"}
		{"kab-500krx4"													"<c(FFAF00)>КАБ-500КР<c(FFFFFF)>"}
		{"kab-500x2"													"<c(FFAF00)>КАБ-500C<c(FFFFFF)>"}
		{"kab-500x6"													"<c(FFAF00)>КАБ-500C<c(FFFFFF)>"}
		{"kmgu_x8"														"<c(FFAF00)>КМГУ-2<c(FFFFFF)> с минами"}
		{"ld10x4"														"<c(FFAF00)>LD-10<c(FFFFFF)> x4"}
		{"ls6x2"														"<c(FFAF00)>LS-6<c(FFFFFF)> x2"}
		{"ls6x4"														"<c(FFAF00)>LS-6<c(FFFFFF)> x4"}
		{"Mk82x6_F-16C"													"Авиабомба <c(FFAF00)>Mk82<c(FFFFFF)> x6"}
		{"Mk82x18_tornado"												"Авиабомба <c(FFAF00)>Mk82<c(FFFFFF)> x18"}
		{"Mk82x22_A-10C"												"Авиабомба <c(FFAF00)>Mk82<c(FFFFFF)> x22"}
		{"odab_500x2"													"<c(FFAF00)>ОДАБ-500<c(FFFFFF)>"}
		{"pbk500x1"														"<c(FFAF00)>ПБК-500<c(FFFFFF)>"}
		{"pbk500x2"														"<c(FFAF00)>ПБК-500<c(FFFFFF)>"}
		{"pbk500x2alt"													"<c(FFAF00)>ПБК-500<c(FFFFFF)>"}
		{"pl5e2x2"														"<c(FFAF00)>PL-5E2<c(FFFFFF)> x2"}
		{"pl8bx2"														"<c(FFAF00)>PL-8B<c(FFFFFF)> x2"}
		{"pl12x4"														"<c(FFAF00)>PL-12<c(FFFFFF)> x4"}
		{"pl12x6"														"<c(FFAF00)>PL-12<c(FFFFFF)> x6"}
		{"r-3c_mig21x2"													"<c(FFAF00)>Р-3C<c(FFFFFF)> x2"}
		{"r27erx2"														"<c(FFAF00)>Р-27ЭР<c(FFFFFF)> x2"}
		{"r27erx6"														"<c(FFAF00)>Р-27ЭР<c(FFFFFF)> x6"}
		{"r60_mig21x4"													"<c(FFAF00)>Р-60<c(FFFFFF)> x4"}
		{"r60_su25x2"													"<c(FFAF00)>Р-60<c(FFFFFF)> x2"}
		{"r73x2"														"<c(FFAF00)>Р-73<c(FFFFFF)> x2"}
		{"r73x4"														"<c(FFAF00)>Р-73<c(FFFFFF)> x4"}
		{"RBK_250x2"													"<c(FFAF00)>РБК-250<c(FFFFFF)> x2"}
		{"RBK_500x4"													"<c(FFAF00)>РБК-500<c(FFFFFF)> x4"}
		{"rbk_cn_250x12"												"<c(FFAF00)>РБК-250<c(FFFFFF)> x12"}
		{"rvv-aex6"														"<c(FFAF00)>К-77М<c(FFFFFF)> x4"}
		{"rvv-mdx2"														"<c(FFAF00)>РВВ-МД<c(FFFFFF)> x2"}
		{"rvvsdx2"														"<c(FFAF00)>Р-77-1<c(FFFFFF)> x2"}
		{"rvvsdx4"														"<c(FFAF00)>Р-77-1<c(FFFFFF)> x4"}
		{"rvvsdx6"														"<c(FFAF00)>Р-77-1<c(FFFFFF)> x6"}
		{"rvvsdx10"														"<c(FFAF00)>Р-77-1<c(FFFFFF)> x10"}
		{"s25ldx2"														"НАР <c(FFAF00)>С-25ЛД<c(FFFFFF)> x2"}
		{"s25ldx4"														"НАР <c(FFAF00)>С-25ЛД<c(FFFFFF)> x4"}
		{"s25ldx6"														"НАР <c(FFAF00)>С-25ЛД<c(FFFFFF)> x6"}
		{"taurusx2"														"<c(00FF00)>Taurus<c(FFFFFF)>"}
		{"tornado_mw1"													"<c(FFAF00)>MW-1<c(FFFFFF)> dispencer"}
		{"type250_3x4"													"Авиабомба <c(FFAF00)>Type250-3<c(FFFFFF)> x4"}
		{"type250_3x24"													"Авиабомба <c(FFAF00)>Type250-3<c(FFFFFF)> x24"}
		{"x_25ml_su25x2"												"<c(FFAF00)>Х-25МЛ<c(FFFFFF)> x2"}
		{"x_25ml_su25x4"												"<c(FFAF00)>Х-25МЛ<c(FFFFFF)> x4"}
		{"x31adx4"														"<c(FFAF00)>Х-31АД<c(FFFFFF)> x4"}
		{"x31x1alt"														"<c(FFAF00)>Х-31П<c(FFFFFF)> x1\n - ПРР - "}
		{"x31x2"														"<c(FFAF00)>Х-31П<c(FFFFFF)> x2\n - ПРР - "}
		{"x31x3"														"<c(FFAF00)>Х-31П<c(FFFFFF)> x3\n - ПРР - "}
		{"x31x3alt"														"<c(FFAF00)>Х-31П<c(FFFFFF)> x3\n - ПРР - "}
		{"x31x6"														"<c(FFAF00)>Х-31П<c(FFFFFF)> x6\n - ПРР - "}
		{"x-38mte_x2"													"<c(FFAF00)>Х-38МТЭ<c(FFFFFF)> x2"}
		{"x-38mte_x3"													"<c(FFAF00)>Х-38МТЭ<c(FFFFFF)> x3"}
		{"x-38mte_x4"													"<c(FFAF00)>Х-38МТЭ<c(FFFFFF)> x4"}
		{"x-38mte_x6"													"<c(FFAF00)>Х-38МТЭ<c(FFFFFF)> x6"}
		{"x59x2"														"<c(FFAF00)>Х-59М<c(FFFFFF)> x2"}
		{"x59x3"														"<c(FFAF00)>Х-59М<c(FFFFFF)> x3"}
	}
;atgm
	{"ammo"
		{"9k14m"														"ПТУР <c(FFAF00)>9М14М<c(FFFFFF)><c(00FF00)> «Малютка-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>460<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"9k14m_impactor"												"<c(CF9FFF)>Impactor 9М14М «Малютка-М»</c>"}			;t
		{"9k115-2 cm"													"ПТУР <c(FFAF00)>9М131М<c(FFFFFF)><c(00FF00)> «Метис-М1»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>950<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"9k115-2 cm_e"													"ПТУР <c(FFAF00)>9М131<c(FFFFFF)><c(00FF00)> «Метис-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>850<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"9k115-2_cm_e_impactor"										"<c(CF9FFF)>Impactor 9М131М «Метис-М1»</c>"}			;t
		{"9k115-2_cm_impactor"											"<c(CF9FFF)>Impactor 9М133-1 «Корнет-П»</c>"}			;t
		{"9m31"															"ЗУР <c(FFAF00)>9М31<c(FFFFFF)><c(00FF00)> «Стрела»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>144<c(FFFFFF)> м.\n тип наведения - фотоконтрастное \n - противовоздушная - "}
		{"9m31_impactor"												"<c(CF9FFF)>Impactor 9М31 «Стрела»</c>"}				;t
		{"9m37_impactor"												"<c(CF9FFF)>Impactor 9М37 к ЗРК «Стрела-10»</c>"}		;t
		{"9m38 buk"														"ЗУР <c(FFAF00)>9М38М1<c(FFFFFF)> к ЗРК «Бук»\n масса ВВ - <c(FF1F00)>33.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>380<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"9m38_impactor"												"<c(CF9FFF)>Impactor 9М38М1 к ЗРК «Бук»</c>"}			;t
		{"9m111_impactor"												"<c(CF9FFF)>Impactor 9М111-2 «Фагот»</c>"}				;t
		{"9m111m_impactor"												"<c(CF9FFF)>Impactor 9М111M «Фактория»</c>"}			;t
		{"9m113_impactor"												"<c(CF9FFF)>Impactor 9М113 «Конкурс»</c>"}				;t
		{"9m113m_impactor"												"<c(CF9FFF)>Impactor 9М113M «Конкурс-М»</c>"}			;t
		{"9m113m1_impactor"												"<c(CF9FFF)>Impactor 9М113М1 «Конкурс-М»</c>"}			;t
		{"9m114f_impactor"												"<c(CF9FFF)>Impactor 9М114 «Кокон»</c>"}				;t
		{"9m114m shturm cm"												"<c(FFAF00)>9М114<c(FFFFFF)><c(00FF00)> «Кокон»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>650<c(FFFFFF)> мм \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - радиокомандное "}
		{"9m114m shturm fg"												"<c(FFAF00)>9М114Ф<c(FFFFFF)> ТБ<c(00FF00)><c(FFFFFF)>\n масса ВВ экв - <c(FF1F00)>9,5<c(FFFFFF)> кг \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - радиокомандное \n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)> "}
		{"9m114m_impactor"												"<c(CF9FFF)>Impactor 9М114Ф ТБ</c>"}					;t
		{"9m120 shturm cm"												"<c(FFAF00)>9М120<c(FFFFFF)><c(00FF00)> «Атака»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>950<c(FFFFFF)> мм \n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения - радиокомандное \n БЧ - тандемная "}
		{"9m120 shturm fg"												"<c(FFAF00)>9М120Ф<c(FFFFFF)> ТБ<c(00FF00)> «Атака»<c(FFFFFF)>\n масса ВВ экв - <c(FF1F00)>9,5<c(FFFFFF)> кг \n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения - радиокомандное \n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)> "}
		{"9m120f_impactor"												"<c(CF9FFF)>Impactor 9М120 «Атака»</c>"}				;t
		{"9m120m_impactor"												"<c(CF9FFF)>Impactor 9М120Ф ТБ</c>"}					;t
		{"9m133 cm"														"ПТУР <c(FFAF00)>9М133М-2<c(FFFFFF)><c(00FF00)> «Корнет-Д»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения - в луче лазера \n БЧ - тандемная "}
		{"9m133 cm_e"													"ПТУР <c(FFAF00)>9М133-1<c(FFFFFF)><c(00FF00)> «Корнет-П»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1200<c(FFFFFF)> мм \n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения - в луче лазера \n БЧ - тандемная"}
		{"9m133 fg"														"УР <c(FFAF00)>9М133ФМ-3<c(FFFFFF)> ОФ<c(00FF00)> «Корнет-Д»<c(FFFFFF)>\n масса ВВ экв - <c(FF1F00)>7,0<c(FFFFFF)> кг \n дальность - <c(FFAF00)>190<c(FFFFFF)> м.\n тип наведения - в луче лазера \n БЧ - фугасная"}
		{"9m133 tb"														"УР <c(FFAF00)>9М133ФМ-2<c(FFFFFF)> ТБ<c(00FF00)> «Корнет-Д»<c(FFFFFF)>\n масса ВВ экв - <c(FF1F00)>10<c(FFFFFF)> кг \n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения - в луче лазера \n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)> "}
		{"9m133_cm_e_impactor"											"<c(CF9FFF)>Impactor 9М133-1 «Корнет-П»</c>"}			;t
		{"9m133_cm_impactor"											"<c(CF9FFF)>Impactor 9М133М-2 «Корнет-Д»</c>"}			;t
		{"9m133_fg_impactor"											"<c(CF9FFF)>Impactor 9М133ФМ-3 ОФ «Корнет-Д»</c>"}		;t
		{"9m133_tb_impactor"											"<c(CF9FFF)>Impactor 9М133ФМ-2 ТБ «Корнет-Д»</c>"}		;t
		{"9m311"														"ЗУР <c(FFAF00)>9М311<c(FFFFFF)> к ЗРК «Тунгуска»\n масса ВВ - <c(FF1F00)>4,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения - радиокомандное \n - противовоздушная - "}
		{"9m311_impactor"												"<c(CF9FFF)>Impactor 9М311 к ЗРК «Тунгуска»</c>"}		;t
		{"9m317 buk"													"ЗУР <c(FFAF00)>9М317<c(FFFFFF)> к ЗРК «Бук»\n масса ВВ - <c(FF1F00)>33.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>420<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"9m317_impactor"												"<c(CF9FFF)>Impactor 9М317 к ЗРК «Бук»</c>"}			;t
		{"9m330"														"ЗУР <c(FFAF00)>9М330<c(FFFFFF)> к ЗРК «Тор» и «Кинжал»\n масса ВВ - <c(FF1F00)>6,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>200<c(FFFFFF)> м.\n тип наведения - радиокомандное \n - противовоздушная - "}
		{"9m330_impactor"												"<c(CF9FFF)>Impactor 9М330 к ЗРК «Тор» и «Кинжал»</c>"}	;t
		{"9m333_impactor"												"<c(CF9FFF)>Impactor 9М333 к ЗРК «Стрела-10»</c>"}		;t
		{"adats"														"ЗУР <c(00FF00)>ADATS<c(FFFFFF)><c(FFAF00)> MIM-146A<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения - радиокомандное \n - противовоздушная - "}
		{"adats_impactor"												"<c(CF9FFF)>Impactor ADATS MIM-146A</c>"}				;t
		{"agm-114 k"													"<c(FFAF00)>AGM-114K<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(FF1F00)> ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная \n мод.<c(FFAF00)> P<c(FFFFFF)> для беспилотников "}
		{"agm-114 k2"													"<c(FFAF00)>AGM-114K-2B<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>772<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(FF1F00)> ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная кумулятивно-осколочная - \n мод.<c(FFAF00)> P-2B<c(FFFFFF)> для беспилотников "}
		{"agm-114 l"													"<c(FFAF00)>AGM-114L<c(FFFFFF)> <c(00FF00)>«Hellfire Longbow»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная "}
		{"agm-114 n"													"<c(FFAF00)>AGM-114N<c(FFFFFF)> <c(00FF00)>«Hellfire 2»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,85<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(FF1F00)> ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)> "}
		{"agm-114 r"													"<c(FFAF00)>AGM-114R<c(FFFFFF)> <c(00FF00)>«Hellfire 2 Romeo»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,0<c(FFFFFF)> кг.\n бронебойность - <c(FF1F00)>450<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(FF1F00)> ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная кумулятивно-фугасная - "}
		{"agm-114k_impactor"											"<c(CF9FFF)>Impactor AGM-114K «Hellfire 2»</c>"}		;t
		{"agm-114k2_impactor"											"<c(CF9FFF)>Impactor AGM-114K 2B «Hellfire 2»</c>"}		;t
		{"agm-114l_impactor"											"<c(CF9FFF)>Impactor AGM-114L «Hellfire Longbow»</c>"}	;t
		{"agm-114n_impactor"											"<c(CF9FFF)>Impactor AGM-114N «Hellfire 2»</c>"}		;t
		{"agm-114r_impactor"											"<c(CF9FFF)>Impactor AGM-114R «Hellfire 2 Romeo»</c>"}	;t
		{"aim-9l_ammo"													"ЗУР <c(FFAF00)>AIM-9L<c(FFFFFF)><c(00FF00)> «Sidewinder»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>200<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"aim-9l_impactor"												"<c(CF9FFF)>Impactor AIM-9L «Sidewinder»</c>"}			;t
		{"akd-10"														"<c(FFAF00)>AKD-10<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>1400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>175<c(FFFFFF)> м. \n тип наведения -<c(FF1F00)> ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная - "}
		{"akd-10_impactor"												"<c(CF9FFF)>Impactor AKD-10</c>"}						;t
		{"blinding_laser"												"КОЭП «LDSW»"}
		{"brimstone"													"<c(00FF00)>Brimstone<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1200<c(FFFFFF)> мм \n дальность - <c(FFAF00)>290<c(FFFFFF)> м. \n тип наведения -<c(4d6ff7)> АРЛ<c(FFFFFF)> + <c(FF1F00)>ПАЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная - "}
		{"brimstone_impactor"											"<c(CF9FFF)>Impactor Brimstone</c>"}					;t
		{"fagot_concurs 9m111"											"ПТУР <c(FFAF00)>9М111-2<c(FFFFFF)><c(00FF00)> «Фагот»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>460<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"fagot_concurs 9m111m"											"ПТУР <c(FFAF00)>9М111M<c(FFFFFF)><c(00FF00)> «Фактория»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"fagot_concurs 9m113"											"ПТУР <c(FFAF00)>9М113<c(FFFFFF)><c(00FF00)> «Конкурс»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130..140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"fagot_concurs 9m113m"											"ПТУР <c(FFAF00)>9М113M<c(FFFFFF)><c(00FF00)> «Конкурс-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"fagot_concurs 9m113m1"										"ПТУР <c(FFAF00)>9М113М1<c(FFFFFF)><c(00FF00)> «Конкурс-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>800<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"germes"														"УР <c(00FF00)>«Гермес-А»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>18,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>262<c(FFFFFF)> м. \n тип наведения -<c(4d6ff7)> АРЛ<c(FFFFFF)> + <c(FF1F00)>ПАЛ<c(FFFFFF)> ГСН "}
		{"germes_impactor"												"<c(CF9FFF)>Impactor «Гермес-А»</c>"}					;t
		{"Hellfire"														"<c(FFAF00)>AGM-114L<c(FFFFFF)> <c(00FF00)>«Hellfire Longbow»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м. \n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - атака сверху - \n БЧ - тандемная "}
		{"Hellfire_impactor"											"<c(CF9FFF)>Impactor AGM-114L «Hellfire Longbow»</c>"}	;t
		{"hj8e hj8"														"ПТУР <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>8E<c(FFFFFF)>\n - Hong Jian 8E -\n бронебойность - <c(FF1F00)>580<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"hj8e_impactor"												"<c(CF9FFF)>Impactor Red Arrow 8E - Hong Jian 8E</c>"}	;t
		{"hj8h hj8"														"ПТУР <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>8H<c(FFFFFF)>\n - Hong Jian 8H -\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"hj8h_impactor"												"<c(CF9FFF)>Impactor Red Arrow 8H - Hong Jian 8H</c>"}	;t
		{"hj9_missile"													"ПТУР <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>9<c(FFFFFF)>\n - Hong Jian 9 -\n бронебойность - <c(FF1F00)>850<c(FFFFFF)> мм \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"hj9_missile_impactor"											"<c(CF9FFF)>Impactor Red Arrow 9 - Hong Jian 9</c>"}	;t
		{"hj-10"														"Loading mediator<c(CF9FFF)> HJ-10"}
		{"hj-10 hj-10b"													"ПТУР <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>10B<c(FFFFFF)>\n - Hong Jian 10B -\n бронебойность - <c(FF1F00)>1300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>190<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"hj-10b_impactor"												"<c(CF9FFF)>Impactor Red Arrow 10B - Hong Jian 10B</c>"};t
		{"hj73 hj73c"													"ПТУР <c(00FF00)>Red Arrow <c(FFFFFF)><c(FFAF00)>73C<c(FFFFFF)>\n - Hong Jian 73C -\n бронебойность - <c(FF1F00)>460<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"hj73c_impactor"												"<c(CF9FFF)>Impactor Red Arrow 73C - Hong Jian 73C</c>"};t
		{"hot_rock hot3"												"ПТУР <c(00FF00)>HOT-3<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"hot_rock_impactor"											"<c(CF9FFF)>Impactor HOT-3</c>"}						;t
		{"hq7b"															"ЗУР <c(FFAF00)>HQ-7B<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>220<c(FFFFFF)> м.\n тип наведения - радиокомандное \n - противовоздушная - "}
		{"hq7b_impactor"												"<c(CF9FFF)>Impactor HQ-7B</c>"}						;t
		{"hq16 hq16a"													"ЗУР <c(FFAF00)>HQ-16A<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>33.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>400<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"hq16a_missile_impactor"										"<c(CF9FFF)>Impactor HQ-16A</c>"}						;t
		{"hq16 hq16b"													"ЗУР <c(FFAF00)>HQ-16B<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>33.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>455<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"hq16b_missile_impactor"										"<c(CF9FFF)>Impactor HQ-16B</c>"}						;t
		{"ir_soep_ammo"													"КОЭП «Витебск»"}
		{"JAGM_impactor"												"<c(CF9FFF)>Impactor JAGM</c>"}							;t
		{"milan_rock cm"												"ПТУР <c(00FF00)>«MILAN-F3»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>880<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"milan_rock milan-ER"											"ПТУР <c(00FF00)>«MILAN-ER»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"milan_rock_impactor"											"<c(CF9FFF)>Impactor «MILAN-F3»</c>"}					;t
		{"milan-er_impactor"											"<c(CF9FFF)>Impactor «MILAN-ER»</c>"}					;t
		{"mistral_missile"												"ЗУР <c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>170..175<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"mistral_missile_impactor"										"<c(CF9FFF)>Impactor Mistral M2</c>"}					;t
		{"mmp_missile"													"ПТУР <c(00FF00)>MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"mmp_missile_impactor"											"<c(CF9FFF)>Impactor «MMP»</c>"}						;t
		{"pantsir 57e6e"												"ЗУР <c(FFAF00)>57E6E<c(FFFFFF)> к ЗРК «Панцирь»\n масса ВВ - <c(FF1F00)>5,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>290<c(FFFFFF)> м.\n тип наведения - радиокомандное \n - противовоздушная - "}
		{"pantsir_57e6e_impactor"										"<c(CF9FFF)>Impactor 57E6E к ЗРК «Панцирь»</c>"}		;t
		{"patriot"														"ЗУР <c(FFAF00)>MIM-104С<c(FFFFFF)> <c(00FF00)>«Patriot»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>40<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>478<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"patriot_impactor"												"<c(CF9FFF)>Impactor MIM-104С «Patriot»</c>"}			;t
		{"sampt"														"ЗУР <c(FFAF00)>ASTER 30<c(FFFFFF)> <c(00FF00)>«SAMPT»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>480<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"sampt_impactor"												"<c(CF9FFF)>Impactor ASTER 30 «SAMPT»</c>"}				;t
		{"spike_nlos cm"												"ПТУР <c(00FF00)>SPIKE-NLOS<c(FFFFFF)> <c(FFAF00)>Mk-5<c(FFFFFF)>\n вариант для ЦАХАЛ - <c(00FF00)>«Tamuz-5»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>300<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"spike_nlos fg"												"ПТУР <c(00FF00)>SPIKE-NLOS<c(FFFFFF)> <c(FFAF00)>Mk-5<c(FFFFFF)>\n вариант для ЦАХАЛ - <c(00FF00)>«Tamuz-5»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>11,6<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>300<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n"}
		{"spike_nlos_fg_impactor"										"<c(CF9FFF)>Impactor SPIKE-NLOS Mk-5</c>"}				;t
		{"spike_nlos_impactor"											"<c(CF9FFF)>Impactor SPIKE-NLOS Mk-5</c>"}				;t
		{"spike-er"														"ПТУР <c(FFAF00)>SPIKE-ER<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная"}
		{"spike-er spike-er"											"ПТУР <c(FFAF00)>SPIKE-ER<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная"}
		{"spike-er_impactor"											"<c(CF9FFF)>Impactor SPIKE-ER</c>"}						;t
		{"spike-er2 spike-er"											"ПТУР <c(FFAF00)>SPIKE-ER2<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>190<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"spike-er2_impactor"											"<c(CF9FFF)>Impactor SPIKE-ER2</c>"}					;t
		{"spike-lr"														"ПТУР <c(FFAF00)>SPIKE-LR2<c(FFFFFF)>\n бронебойность - <c(FF1F00)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n вариант для Бундесвера - <c(FFAF00)>MELLS<c(FFFFFF)>"}
		{"spike-lr_impactor"											"<c(CF9FFF)>Impactor SPIKE-LR2</c>"}					;t
		{"strela10 9m37"												"ЗУР <c(FFAF00)>9М37<c(FFFFFF)> к ЗРК «Стрела-10»\n масса ВВ - <c(FF1F00)>1,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - фотоконтрастное \n - противовоздушная - "}
		{"strela10 9m333"												"ЗУР <c(FFAF00)>9М333<c(FFFFFF)> к ЗРК «Стрела-10»\n масса ВВ - <c(FF1F00)>2,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - фотоконтрастное \n - противовоздушная - "}
		{"tow_impactor"													"<c(CF9FFF)>Impactor BGM-71C ITOW</c>"}					;t
		{"tow_missile tow_rock"											"ПТУР <c(FFAF00)>BGM-71C<c(FFFFFF)><c(00FF00)> ITOW<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>135<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"tow_missile tow2_fg"											"УР <c(FFAF00)>BGM-71H<c(FFFFFF)><c(00FF00)> TOW Bunker Buster<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,9<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>135<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - фугасная "}
		{"tow_missile tow2b"											"ПТУР <c(FFAF00)>BGM-71F<c(FFFFFF)><c(00FF00)> TOW 2B Aero<c(FFFFFF)>\n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>150<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - ударное ядро "}
		{"tow_missile tow2d"											"ПТУР <c(FFAF00)>BGM-71D<c(FFFFFF)><c(00FF00)> TOW 2<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>135<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"tow_missile tow2e"											"ПТУР <c(FFAF00)>BGM-71E<c(FFFFFF)><c(00FF00)> TOW 2A<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>135<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная "}
		{"tow2_fg_impactor"												"<c(CF9FFF)>Impactor BGM-71H TOW Bunker Buster</c>"}	;t
		{"tow2b_core_impactor"											"<c(CF9FFF)>Impactor BGM-71F TOW 2B Aero Core</c>"}		;t
		{"tow2b_impactor"												"<c(CF9FFF)>Impactor BGM-71F TOW 2B Aero</c>"}			;t
		{"tow2d_impactor"												"<c(CF9FFF)>Impactor BGM-71D TOW 2</c>"}				;t
		{"tow2e_impactor"												"<c(CF9FFF)>Impactor BGM-71E TOW 2A</c>"}				;t
		{"trigat"														"ПТУР <c(FFAF00)>TRIGAT-LR<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>175<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>\n БЧ - тандемная \n вариант для Бундесвера - <c(4d6ff7)>PARS 3 LR<c(FFFFFF)>\n вариант для Франции - <c(4d6ff7)>AC 3 G<c(FFFFFF)>"}
		{"trigat_impactor"												"<c(CF9FFF)>Impactor TRIGAT-LR</c>"}					;t
		{"vixr_ammo"													"<c(FFAF00)>9М127-1<c(FFFFFF)><c(00FF00)> «Вихрь-1»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>1000<c(FFFFFF)> мм \n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения - в луче лазера \n БЧ - тандемная "}
		{"vixr_impactor"												"<c(CF9FFF)>Impactor 9М127-1 «Вихрь-1»</c>"}			;t
		{"xmim-115avt1"													"ЗУР <c(FFAF00)>VT-1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,0<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>220<c(FFFFFF)> м.\n тип наведения - радиокомандное\n - противовоздушная - "}
		{"xmim-115avt1_impactor"										"<c(CF9FFF)>Impactor VT-1</c>"}							;t
	}
	{"stuff"
		{"ir_soep"														"КОЭП «Витебск»"} ;electro-optical electronic warfare system Vitebsk
		{"ldsw_cn"														"КОЭП «LDSW»"}	;LDSW Jammer
		{"targeting_radar_buk"											"Радар наведения"}
		{"targeting_radar_bukm2"										"Радар наведения"}
		{"targeting_radar_fort"											"Радар наведения"}
		{"targeting_radar_fort_m"										"Радар наведения"}
		{"targeting_radar_kupol"										"Радар наведения"}
		{"targeting_radar_sampt"										"Радар наведения"}		

	}
	{"weapon"
		{"9k14mrocket"													"ПТУР<c(FFAF00)> 9М14М<c(FFFFFF)><c(00FF00)> «Малютка-М»<c(FFFFFF)> \n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"9k31_strela1_x4"												"ЗРК<c(FFAF00)> 9К31<c(FFFFFF)><c(00FF00)> «Стрела-1»<c(FFFFFF)> \n дальность - <c(FFAF00)>132<c(FFFFFF)> м."}
		{"9k111-1konkurs"												"ПТРК <c(FFAF00)>9K111-1<c(FFFFFF)><c(00FF00)> «Конкурс»<c(FFFFFF)> \n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м."}
		{"9k111-1konkurs_x5"											"ПТРК <c(FFAF00)>9К111-1<c(FFFFFF)><c(00FF00)> «Конкурс»<c(FFFFFF)> \n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м."}
		{"9k111fagot"													"ПТРК <c(FFAF00)>9К111<c(FFFFFF)><c(00FF00)> «Фагот»<c(FFFFFF)> \n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м."}
		{"9k121vixr_left"												"ПТРК <c(FFAF00)>9К121М<c(FFFFFF)><c(00FF00)> «Вихрь-М»<c(FFFFFF)>"}
		{"9k121vixr_right"												"ПТРК <c(FFAF00)>9К121М<c(FFFFFF)><c(00FF00)> «Вихрь-М»<c(FFFFFF)>"}
		{"9m133x1"														"ПТУР <c(FFAF00)><c(FFFFFF)><c(00FF00)> «Корнет-Д»<c(FFFFFF)> \n дальность - <c(FFAF00)>165..190<c(FFFFFF)> м."}
		{"9m133x1_base"													"ПТУР<c(00FF00)> «Корнет»<c(FFFFFF)> \n дальность - <c(FFAF00)>165<c(FFFFFF)> м."}
		{"9m133x2"														"ПТРК<c(00FF00)> «Корнет-Д»<c(FFFFFF)> \n дальность - <c(FFAF00)>165..190<c(FFFFFF)> м."}
		{"9m133x2_l"													"ПТРК<c(00FF00)> «Корнет-Д»<c(FFFFFF)> \n дальность - <c(FFAF00)>165..190<c(FFFFFF)> м."}
		{"9m133x2_r"													"ПТРК<c(00FF00)> «Корнет-Д»<c(FFFFFF)> \n дальность - <c(FFAF00)>165..190<c(FFFFFF)> м."}
		{"9m133x4"														"ПТРК<c(00FF00)> «Корнет-Д»<c(FFFFFF)> \n дальность - <c(FFAF00)>165..190<c(FFFFFF)> м."}
		{"adats_x8"														"ЗУР <c(00FF00)>ADATS<c(FFFFFF)> \n дальность - <c(FFAF00)>170<c(FFFFFF)> м."}
		{"aim-9l_left"													"ПУ<c(00FF00)> «Sidewinder»<c(FFFFFF)>"}
		{"aim-9l_right"													"ПУ<c(00FF00)> «Sidewinder»<c(FFFFFF)>"}
		{"akd10x4_L"													"<c(FFAF00)>AKD-10<c(FFFFFF)><c(00FF00)><c(FFFFFF)> \n дальность - <c(FFAF00)>175<c(FFFFFF)> м."}
		{"akd10x4_R"													"<c(FFAF00)>AKD-10<c(FFFFFF)><c(00FF00)><c(FFFFFF)> \n дальность - <c(FFAF00)>175<c(FFFFFF)> м."}
		{"ataka_x2_l"													"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"ataka_x2_r"													"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"ataka_x4_robot"												"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"ataka_x6_left"												"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"ataka_x6_right"												"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"ataka_x8"														"ПТРК<c(00FF00)> «Атака»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"Brimstonex4"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"Brimstonex6"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"Brimstonex12"													"<c(FFAF00)>«Brimstone»<c(FFFFFF)>"}
		{"buk_launcher"													"ПУ с 4 ЗУР<c(FFAF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>320..340<c(FFFFFF)> м."}
		{"germes_left"													"ПТРК<c(00FF00)> «Гермес»<c(FFFFFF)>\n дальность - <c(FFAF00)>262<c(FFFFFF)> м."}
		{"germes_right"													"ПТРК<c(00FF00)> «Гермес»<c(FFFFFF)>\n дальность - <c(FFAF00)>262<c(FFFFFF)> м."}
		{"Hellfire_left"												"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"Hellfire_mq9"													"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"Hellfire_right"												"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"Hellfire_x2"													"<c(FFAF00)>AGM-114<c(FFFFFF)><c(00FF00)> «Hellfire»<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"hj8"															"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-8<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"hj9x4"														"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-9<c(FFFFFF)>\n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"hj-10x8"														"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)>-10<c(FFFFFF)>\n дальность - <c(FFAF00)>190<c(FFFFFF)> м."}
		{"hj73x1"														"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"hj73x1_zbd86"													"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"hj73x2"														"ПТУР<c(00FF00)> Red Arrow<c(FFFFFF)><c(FFAF00)> 73<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"HOT"															"ПТРК <c(00FF00)>«HOT-3»<c(FFFFFF)> \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"hq7bx4"														"ЗУР<c(FFAF00)> HQ-7B<c(FFFFFF)> \n дальность - <c(FFAF00)>220<c(FFFFFF)> м."}
		{"hq16b_launcher"												"ПУ с 6 ЗУР<c(FFAF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>400..455<c(FFFFFF)> м."}
		{"igla_gibka_x4"												"ПЗРК <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Игла-С»<c(FFFFFF)>\n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"kortik_9m311_x8"												"ЗУР<c(FFAF00)> 9М311<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"mbda_mmp_x1"													"ПТУР<c(00FF00)> MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"mbda_mmp_x2"													"ПТУР<c(00FF00)> MBDA<c(FFFFFF)> <c(FFAF00)>«MMP»<c(FFFFFF)>\n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"metis_m"														"ПТРК <c(FFAF00)> 9К115-2<c(FFFFFF)><c(00FF00)> «Метис-М»<c(FFFFFF)> \n дальность - <c(FFAF00)>85..100<c(FFFFFF)> м."}
		{"MILAN"														"ПТРК <c(00FF00)>«MILAN»<c(FFFFFF)> \n дальность - <c(FFAF00)>100..120<c(FFFFFF)> м."}
		{"mistralx1"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x1"}
		{"mistralx2"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x2"}
		{"mistralxh"													"<c(00FF00)>Mistral<c(FFFFFF)><c(FFAF00)> M2<c(FFFFFF)> x2"}
		{"pantsir_x12"													"ЗУР<c(FFAF00)> 57Е6Е<c(FFFFFF)> \n дальность - <c(FFAF00)>290<c(FFFFFF)> м."}
		{"patriot_pac2"													"ПУ с 4 ЗУР<c(FFAF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>478<c(FFFFFF)> м."}
		{"roland_x2"													"ПУ <c(00FF00)>Roland-3<c(FFFFFF)> \n дальность - <c(FFAF00)>220<c(FFFFFF)> м."}
		{"sampt_launcher"												"ПУ с 8 ЗУР<c(FFAF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>480<c(FFFFFF)> м."}
		{"shturm-s"														"ПТРК<c(00FF00)> «Штурм-C»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"shturm-v-x2_l"												"ПТРК<c(00FF00)> «Штурм-В»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"shturm-v-x2_r"												"ПТРК<c(00FF00)> «Штурм-В»<c(FFFFFF)>\n дальность - <c(FFAF00)>160-170<c(FFFFFF)> м."}
		{"spike_nlos_x4"												"ПТУР<c(FFAF00)> SPIKE-NLOS<c(FFFFFF)>\n дальность - <c(FFAF00)>300<c(FFFFFF)> м."}
		{"spike-er_x1"													"ПТУР<c(FFAF00)> SPIKE-ER<c(FFFFFF)>\n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"spike-lr_x1"													"ПТУР<c(FFAF00)> SPIKE-LR<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"spike-lr_x2"													"ПТУР<c(FFAF00)> SPIKE-LR<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Strela10_x4"													"ПУ<c(FFAF00)><c(FFFFFF)> с 4 ЗУР<c(00FF00)><c(FFFFFF)> \n дальность - <c(FFAF00)>160<c(FFFFFF)> м."}
		{"strelets_left"												"ПЗРК <c(FFAF00)>9К338<c(FFFFFF)><c(00FF00)> «Игла-С»<c(FFFFFF)>"}
		{"strelets_right"												"ПЗРК <c(FFAF00)>9К338<c(FFFFFF)><c(00FF00)> «Игла-С»<c(FFFFFF)>"}
		{"TOW"															"ПТУР <c(FFAF00)>BGM-71C<c(FFFFFF)><c(00FF00)> TOW<c(FFFFFF)> \n дальность - <c(FFAF00)>135..150<c(FFFFFF)> м."}
		{"TOWx2"														"ПТУР<c(FFAF00)> BGM-71C<c(FFFFFF)><c(00FF00)> TOW<c(FFFFFF)> \n дальность - <c(FFAF00)>135..150<c(FFFFFF)> м."}
		{"Trigat_LR"													"<c(FFAF00)>«Trigat-LR»<c(FFFFFF)>"}
		{"tunguska_9m311_x8"											"ЗУР<c(FFAF00)> 9М311<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
	}
;bazooka
	{"ammo"
		{"c90-cr cm"													"граната C90-CR"}
		{"dm32_injector"												"<c(CF9FFF)>Injector DM-32</c>"}				;t
		{"eryx_rock"													"<c(00FF00)>«ERYX»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"eryx_rock_impactor"											"<c(CF9FFF)>Impactor «ERYX» Rocket</c>"}		;t
		{"fim-92a_ammo"													"ЗУР <c(FFAF00)>FIM-92J<c(FFFFFF)><c(00FF00)> «Stinger»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,45<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>158<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"fim-92a_impactor"												"<c(CF9FFF)>Impactor FIM-92J «Stinger»</c>"}	;t
		{"fn6a_ammo"													"ЗУР <c(FFAF00)>FN-6A<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"fn6a_ammo_impactor"											"<c(CF9FFF)>Impactor FN-6A</c>"}				;t
		{"gat-3_ammo"													"grenade GAT-3"}		
		{"gustaf3 heat551"												"граната<c(FFAF00)> HEAT 551<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>420<c(FFFFFF)> мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м."}
		{"gustaf3 heat751"												"граната<c(FFAF00)> HEAT 751<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>550<c(FFFFFF)> мм \n дальность - <c(FFAF00)>63<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"heat_apilas"													"граната AC 112 F1"}
		{"heat_pf98 cm"													"граната <c(00FF00)><c(FFFFFF)><c(FFAF00)> DZV1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>800<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"heat_pf98 fg"													"граната <c(00FF00)><c(FFFFFF)><c(FFAF00)> DZV2<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,0<c(FFFFFF)> кг.\n бронебойность - <c(FF1F00)>400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n - кумулятивно-фугасный заряд - "}
		{"igla_S"														"ЗУР<c(FFAF00)> 9М342<c(FFFFFF)><c(00FF00)> «Игла-С»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,585<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"igla_S_impactor"												"<c(CF9FFF)>Impactor 9М342 «Игла-С»</c>"}		;t
		{"igla_S1_impactor"												"<c(CF9FFF)>Impactor 9М342-1 «Игла-С1»</c>"}	;t
		{"igla_S2_impactor"												"<c(CF9FFF)>Impactor 9М342-2 «Игла-С2» </c>"}	;t
		{"jav_rock"														"<c(00FF00)>Javelin<c(FFFFFF)><c(FFAF00)> FGM-148E<c(FFFFFF)> Block-1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - атака сверху - "}
		{"jav_rock_impactor"											"<c(CF9FFF)>Impactor Javelin FGM-148E</c>"}		;t
		{"javf_rock"													"<c(00FF00)>Javelin<c(FFFFFF)><c(FFAF00)> FGM-148F<c(FFFFFF)> Block-1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - атака сверху - "}
		{"javf_rock_impactor"											"<c(CF9FFF)>Impactor Javelin FGM-148F</c>"}		;t
		{"m47dragon_rock"												"<c(00FF00)>Dragon 2+<c(FFFFFF)><c(FFAF00)> M47<c(FFFFFF)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>610<c(FFFFFF)> мм \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)>"}
		{"m47dragon_rock_impactor"										"<c(CF9FFF)>Impactor M47</c>"}		;t
		{"m72a4"														"граната M72A4"}
		{"m72a6law"														"граната M72A6"}
		{"m72a10"														"граната M72A10"}
		{"m72law"														"граната M72A3"}
		{"M136"															"граната AT-4 HP"}
		{"M136A"														"граната AT-4 HEAT"}
		{"matador_ammo"													"Matador"}
		{"matador_injector"												"<c(CF9FFF)>Injector Matador</c>"}				;t
		{"nlaw_rocket"													"граната NLAW"}
		{"nlaw_core_impactor"											"<c(CF9FFF)>Impactor NLAW Core</c>"}			;t
		{"nlaw_rocket_impactor"											"<c(CF9FFF)>Impactor NLAW Rocket</c>"}			;t
		{"pf89b_ammo"													"граната PF89B"}		
		{"pfaust3_ammo"													"граната Panzerfaust 3"}
		{"PG-7V RPG7"													"граната<c(FFAF00)> ПГ-7В<c(FFFFFF)>\n бронебойность - <c(FF1F00)>260<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м."}
		{"PG-7VL RPG7"													"граната<c(FFAF00)> ПГ-7ВЛ<c(FFFFFF)><c(00FF00)> «Луч»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>47<c(FFFFFF)> м."}
		{"PG-7VM RPG7"													"граната<c(FFAF00)> ПГ-7ВМ<c(FFFFFF)>\n бронебойность - <c(FF1F00)>300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м."}
		{"PG-7VR RPG7"													"граната<c(FFAF00)> ПГ-7ВР<c(FFFFFF)><c(00FF00)> «Резюме»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"PG-7VS RPG7"													"граната<c(FFAF00)> ПГ-7ВС<c(FFFFFF)>\n бронебойность - <c(FF1F00)>400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м."}					
		{"PG-29V RPG29"													"граната<c(FFAF00)> ПГ-29В<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"pzf3 dm12a1"													"граната<c(FFAF00)> DM-12A1<c(FFFFFF)> <c(00FF00)>«Pzf-3»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"pzf3 dm22"													"граната<c(FFAF00)> DM-22<c(FFFFFF)> <c(00FF00)>«Pzf-3T»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"pzf3 dm22i"													"граната<c(FFAF00)> DM-22<c(FFFFFF)> Improved<c(00FF00)> «Pzf-3IT»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n БЧ - тандемная"}
		{"pzf3 dm32"													"граната<c(FFAF00)> DM-32<c(FFFFFF)><c(00FF00)> «Bunkerfaust»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n БЧ - кумулятивно-осколочная - "}
		{"red_arrow12_rock"												"<c(00FF00)>Red Arrow<c(FFFFFF)><c(FFAF00)> 12<c(FFFFFF)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>1100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"red_arrow12_rock_impactor"									"<c(CF9FFF)>Impactor Red Arrow 12</c>"}			;t
		{"rocket_shipon_at_af"											"Shipon"}
		{"RPG7"															"<c(CF9FFF)>Loading mediator RPG-7"}	;t
		{"RPG7_og-7V RPG7"												"граната<c(FFAF00)> ОГ-7В<c(FFFFFF)><c(00FF00)> «Осколок»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,37<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n БЧ - осколочная"}
		{"RPG16"														"граната ПГ-16"}
		{"RPG18"														"граната ПГ-18"}
		{"RPG22"														"граната ПГ-22"}
		{"RPG26"														"граната ПГ-26"}
		{"RPG27"														"граната ПГ-27"}
		{"RPG-28"														"граната ПГ-28"}
		{"RPG30"														"граната ПГ-30"}
		{"rpg75_heat"													"граната РПГ-75"}
		{"RPG76_heat"													"граната РПГ-76"}
		{"rshg-1"														"граната ШГ-1"}
		{"rshg-2"														"граната ШГ-2"}
		{"Shmel_ammo"													"граната Шмель"}
		{"Shmelfl_ammo"													"граната Шмель"}
		{"Shmelm_ammo fg"												"<c(d7cc81)> РПО-М<c(FFFFFF)><c(00FF00)> «Шмель-М»<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 3<c(FFFFFF)> кг \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,67<c(FFFFFF)> т.д.\n - термобарический - "}
		{"SMAW cm"														"граната <c(00FF00)>SMAW<c(FFFFFF)><c(FFAF00)> Mk6<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м."}
		{"SMAW fg"														"граната <c(00FF00)>SMAW<c(FFFFFF)><c(FFAF00)> Mk3<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,1<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)>"}
		{"spike-sr"														"ПТУР <c(FFAF00)>SPIKE-SR<c(FFFFFF)>\n бронебойность - <c(FF1F00)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> <c(FFFFFF)>\n БЧ - тандемная "}
		{"spike-sr_impactor"											"<c(CF9FFF)>Impactor SPIKE-SR</c>"}				;t
		{"sraw_core_impactor"											"<c(CF9FFF)>Impactor SRAW Core</c>"}			;t
		{"sraw_rock"													" "} ;null
		{"sraw_rock_impactor"											"<c(CF9FFF)>Impactor SRAW Rocket</c>"}			;t
		{"TBG-7V RPG7"													"граната<c(FFAF00)> ТБГ-7В<c(FFFFFF)><c(00FF00)> «Танин»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)>"}
		{"TBG-29 RPG29"													"граната<c(FFAF00)> ТБГ-29<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n БЧ - <c(D781CC)>термобарическая<c(FFFFFF)>"}
	}
	{"stuff"
	}
	{"weapon"
		{"73mm_spg9"													"<c(FFFFFF)>73мм<c(FFAF00)> СПГ-9<c(FFFFFF)><c(00FF00)> «Копьё»<c(FFFFFF)>\n дальность - <c(FFAF00)>85..150<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,4<c(FFFFFF)> т.д. "}
		{"apilas"														"Гранатомет<c(d7cc81)> RAC-112<c(FFFFFF)><c(00FF00)> Apilas<c(FFFFFF)>\n бронебойность - <c(FF1F00)>720<c(FFFFFF)> мм дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa."}	
		{"c90-cr_(m3)"													"<c(d7cc81)> C-90CR<c(FFFFFF)><c(FFAF00)>M3<c(FFFFFF)> \n бронебойность - <c(FF1F00)>400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>47<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"carl_gustaf_m3"												"Гранатомет <c(00FF00)>Carl Gustaf<c(FFFFFF)><c(FFAF00)> M3<c(FFFFFF)>\n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 11.8<c(FFFFFF)> moa.\n выстрелы  -<c(FFAF00)> HEAT 551<c(FFFFFF)> ,<c(FFAF00)> HEAT 751<c(FFFFFF)>"}
		{"dzg-141"														"<c(d7cc81)>DZG-141<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 2,1<c(FFFFFF)> кг \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6.0<c(FFFFFF)> moa."}	
		{"eryx"															"ПТРК <c(00FF00)>«ERYX»<c(FFFFFF)>\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)> "}
		{"fim-92a"														"ПЗРК <c(FFAF00)>FIM-92<c(FFFFFF)><c(00FF00)> «Стингер»<c(FFFFFF)> \n дальность - <c(FFAF00)>158<c(FFFFFF)> м."}
		{"fim-92a_x4"													"ПЗРК <c(FFAF00)>FIM-92<c(FFFFFF)><c(00FF00)> «Стингер»<c(FFFFFF)> \n дальность - <c(FFAF00)>158<c(FFFFFF)> м."}
		{"fn6a"															"ПЗРК <c(FFAF00)>FN-6A<c(FFFFFF)><c(00FF00)> «Hong Ying 6» <c(FFFFFF)>\n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"fn6ax4"														"ПЗРК <c(FFAF00)>FN-6A<c(FFFFFF)><c(00FF00)> «Hong Ying 6» <c(FFFFFF)>\n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"hj12e_atgm"													"ПТРК <c(00FF00)>Red Arrow<c(FFFFFF)><c(FFAF00)> 12<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"igla"															"ПЗРК <c(FFAF00)>9K338<c(FFFFFF)><c(00FF00)> «Игла-С»<c(FFFFFF)>\n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
		{"javelin"														"ПТРК <c(FFAF00)>FGM-148<c(FFFFFF)><c(00FF00)> «Javelin»<c(FFFFFF)> \n дальность - <c(FFAF00)>110..140<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - атака сверху - "}
		{"javelin_apc"													"ПТРК <c(FFAF00)>FGM-148<c(FFFFFF)><c(00FF00)> «Javelin»<c(FFFFFF)> \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН \n - атака сверху - "}
		{"m47dragon_m2plus"												"ПТРК <c(FFAF00)>M47<c(FFFFFF)><c(00FF00)> «Dragon 2+»<c(FFFFFF)>\n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n тип наведения -<c(00FF00)> оптический<c(FFFFFF)> "}
		{"m72a4law"														"<c(d7cc81)>M72A4 LAW<c(FFFFFF)>\n бронебойность - <c(FF1F00)>355<c(FFFFFF)> мм \n дальность - <c(FFAF00)>46<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"m72a6law"														"<c(d7cc81)>M72A7 LAW<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 0,6<c(FFFFFF)> кг \n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>46<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 15<c(FFFFFF)> moa.\n - кумулятивно-фугасный заряд - "}
		{"m72a10law"													"<c(d7cc81)>M72A10 LAW<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 1,0<c(FFFFFF)> кг \n дальность - <c(FFAF00)>46<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"m72law"														"<c(d7cc81)>M72A3 LAW<c(FFFFFF)>\n бронебойность - <c(FF1F00)>305<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 15<c(FFFFFF)> moa."}
		{"M136"															"<c(d7cc81)>AT-4<c(FFFFFF)><c(FFAF00)> CS HP<c(FFFFFF)> \n бронебойность - <c(FF1F00)>500<c(FFFFFF)> мм \n дальность - <c(FFAF00)>47<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n - вариант М136E1 для USA - "}
		{"M136A"														"<c(d7cc81)>AT-4<c(FFFFFF)><c(FFAF00)> HEAT<c(FFFFFF)> \n бронебойность - <c(FF1F00)>420<c(FFFFFF)> мм \n дальность - <c(FFAF00)>47<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n - вариант М136 для USA - "}
		{"matador"														"<c(00FF00)>Matador<c(FFFFFF)> MP\n масса ВВ -<c(FF1F00)> 2<c(FFFFFF)> кг\n бронебойность - <c(FF1F00)>100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa.\n - кумулятивно-осколочный заряд - "}
		{"nlaw"															"ПТРК<c(FFAF00)> MBT<c(FFFFFF)><c(00FF00)> NLAW<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 1,0<c(FFFFFF)> кг\n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n тип наведения - инерциальное \n - кумулятивно-фугасный заряд - "}
		{"panzerfaust3"													"Гранатомет <c(00FF00)>Panzerfaust-3<c(FFFFFF)>\n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10..11<c(FFFFFF)> moa.\n вариант ПУ для  -<c(FFAF00)> Pzf-3T<c(FFFFFF)> ,<c(FFAF00)> PzF-3IT<c(FFFFFF)>,<c(FFAF00)> Bkf<c(FFFFFF)>"}
		{"pf69"															"Гранатомет<c(d7cc81)> PF-69<c(FFFFFF)>\n дальность - <c(FFAF00)>40..67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5.28...23.92<c(FFFFFF)> moa.\n - оптический прицел ПГО 7В3 (2,7x) - \n - прицельное устройство - \n выстрелы -<c(FFAF00)> ПГ-7В<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВМ<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВС<c(FFFFFF)> \n <c(FFAF00)> ПГ-7ВЛ<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВР<c(FFFFFF)> ,<c(FFAF00)> ОГ-7В<c(FFFFFF)> ,<c(FFAF00)> ТБГ-7В<c(FFFFFF)>"}
		{"pf89b"														"<c(d7cc81)>PF-89B<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6.0<c(FFFFFF)> moa."}	
		{"pf98"															"Гранатомет<c(d7cc81)> PF-98<c(FFFFFF)><c(00FF00)> «Queen Bee»<c(FFFFFF)>\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"rpg7"															"Гранатомет<c(d7cc81)> РПГ-7В2<c(FFFFFF)>\n дальность - <c(FFAF00)>40..67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5.28...23.92<c(FFFFFF)> moa.\n - оптический прицел ПГО 7В3 (2,7x) - \n - прицельное устройство УП-7В - \n выстрелы -<c(FFAF00)> ПГ-7В<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВМ<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВС<c(FFFFFF)> \n <c(FFAF00)> ПГ-7ВЛ<c(FFFFFF)> ,<c(FFAF00)> ПГ-7ВР<c(FFFFFF)> ,<c(FFAF00)> ОГ-7В<c(FFFFFF)> ,<c(FFAF00)> ТБГ-7В<c(FFFFFF)>"}
		{"rpg16"														"Гранатомет<c(d7cc81)> РПГ-16<c(FFFFFF)>\n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n бронебойность - <c(FF1F00)>300<c(FFFFFF)> мм\n кучность -<c(4d6ff7)> 6<c(FFFFFF)> moa."}
		{"RPG18"														"<c(d7cc81)>РПГ-18<c(FFFFFF)><c(00FF00)> «Муха»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 19.26<c(FFFFFF)> moa."}	
		{"RPG22"														"<c(d7cc81)>РПГ-22<c(FFFFFF)><c(00FF00)> «Нетто»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>42<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 15.6<c(FFFFFF)> moa."}
		{"RPG26"														"<c(d7cc81)>РПГ-26<c(FFFFFF)><c(00FF00)> «Аглень»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>500<c(FFFFFF)> мм \n дальность - <c(FFAF00)>42<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 14.07<c(FFFFFF)> moa."}
		{"RPG27"														"<c(d7cc81)>РПГ-27<c(FFFFFF)><c(00FF00)> «Таволга»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n - тандемный заряд - "}
		{"rpg-28"														"<c(d7cc81)>РПГ-28<c(FFFFFF)><c(00FF00)> «Клюква»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>950<c(FFFFFF)> мм \n дальность - <c(FFAF00)>47<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 19.9<c(FFFFFF)> moa.\n - тандемный заряд - "}
		{"rpg29"														"Гранатомет<c(d7cc81)> РПГ-29<c(FFFFFF)><c(00FF00)> «Вампир»<c(FFFFFF)> \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7.97<c(FFFFFF)> moa.\n - оптический прицел ПГО 29 - \n выстрелы -<c(FFAF00)> ПГ-29В<c(FFFFFF)> ,<c(FFAF00)> ТБГ-29<c(FFFFFF)> "}
		{"RPG-30"														"<c(d7cc81)>РПГ-30<c(FFFFFF)><c(00FF00)> «Крюк»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n - тандемный заряд - \n - имитатор для преодоления КАЗ - "}
		{"rpg75"														"<c(d7cc81)>РПГ-75<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>330<c(FFFFFF)> мм \n дальность - <c(FFAF00)>44<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 19.26<c(FFFFFF)> moa."}	
		{"rpg76"														"<c(d7cc81)>РПГ-76<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>330<c(FFFFFF)> мм \n дальность - <c(FFAF00)>44<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 20<c(FFFFFF)> moa."}	
		{"RSHG-1"														"<c(d7cc81)>РШГ-1<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 1,8<c(FFFFFF)> кг \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 17<c(FFFFFF)> moa.\n "}
		{"RSHG-2"														"<c(d7cc81)>РШГ-2<c(FFFFFF)><c(00FF00)> «Аглень-2»<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 1,15<c(FFFFFF)> кг \n дальность - <c(FFAF00)>43<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 26.7<c(FFFFFF)> moa.\n "}
		{"shipon"														"Гранатомет <c(00FF00)>Shipon<c(FFFFFF)>\n бронебойность - <c(FF1F00)>800<c(FFFFFF)> мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"Shmel"														"<c(d7cc81)>РПО-А<c(FFFFFF)><c(00FF00)> «Шмель»<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 2,1<c(FFFFFF)> кг \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 13<c(FFFFFF)> moa.\n - термобарический - "}
		{"Shmelfl"														"<c(d7cc81)>РПО-З<c(FFFFFF)><c(00FF00)> «Шмель»<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 2,1<c(FFFFFF)> кг \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 13<c(FFFFFF)> moa.\n - зажигательный - "}
		{"SMAW"															"Гранатомет<c(d7cc81)> Mk.153<c(FFFFFF)><c(00FF00)> SMAW<c(FFFFFF)>\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa.\n выстрелы -<c(FFAF00)> Mk.3<c(FFFFFF)> ,<c(FFAF00)> Mk.6<c(FFFFFF)>"}
		{"spike-sr"														"ПТРК<c(FFAF00)> SPIKE-SR<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"sraw"															"ПТРК<c(FFAF00)> FGM-172<c(FFFFFF)><c(00FF00)> SRAW<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 1,0<c(FFFFFF)> кг\n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n тип наведения - инерциальное \n - кумулятивно-фугасный заряд - "}
		{"stinger"														"ПЗРК<c(FFAF00)> FIM-92<c(FFFFFF)><c(00FF00)> «Стингер»<c(FFFFFF)>\n дальность - <c(FFAF00)>158<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> ИК<c(FFFFFF)> ГСН "}
	}
;body
	{"ammo"
		
	}
	{"stuff"
		{"6b2"															"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)> водителя ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_backpack"													"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)>  с рюкзаком ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_gp"														"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)> старшего стрелка  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_rpg"														"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_rpghelp"													"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)> второго номера ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b2_smg"														"Бронежилет <c(00FF00)>6Б2<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)>"}
		{"6b5-11"														"Бронежилет <c(00FF00)>6Б5-11<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>1-1-1<c(FFFFFF)> \nВоротник"}
		{"6b5-11_rpg"													"Бронежилет <c(00FF00)>6Б5-11<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>1-1-1<c(FFFFFF)> \nВоротник"}
		{"6b5-11_spec"													"Бронежилет <c(00FF00)>6Б5-11<c(FFFFFF)> с рюкзаком ВС России\nКласс защиты живот-спина-бока <c(FF0000)>1-1-1<c(FFFFFF)> \nВоротник"}
		{"6b5-13"														"Бронежилет <c(00FF00)>6Б5-13<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-4-1<c(FFFFFF)> \nВоротник"}
		{"6b5-13_rpg"													"Бронежилет <c(00FF00)>6Б5-13<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-4-1<c(FFFFFF)> \nВоротник"}
		{"6b5-13_spec"													"Бронежилет <c(00FF00)>6Б5-13<c(FFFFFF)> с рюкзаком ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-4-1<c(FFFFFF)> \nВоротник"}
		{"6b5-16"														"Бронежилет <c(00FF00)>6Б5-16<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-1-1<c(FFFFFF)> \nВоротник"}
		{"6b5-16_rpg"													"Бронежилет <c(00FF00)>6Б5-16<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-1-1<c(FFFFFF)> \nВоротник"}
		{"6b5-16_spec"													"Бронежилет <c(00FF00)>6Б5-16<c(FFFFFF)> с рюкзаком ВС России\nКласс защиты живот-спина-бока <c(FF0000)>4-1-1<c(FFFFFF)> \nВоротник"}
		{"6b23-1"														"Бронежилет <c(00FF00)>6Б23-1<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \nВоротник, напашник"}
		{"6b23-1_6sh92"													"Бронежилет <c(00FF00)>6Б23-1<c(FFFFFF)> 6Ш92 ВС России\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \nВоротник, напашник"}
		{"6b23-1_smersh"												"Бронежилет <c(00FF00)>6Б23-1<c(FFFFFF)> Смерш ВС России\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45"															"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)>  ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_medic"													"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> санитара ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_pulemetchik"												"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> пулеметчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_rpg"														"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_rpg7"													"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_sniper"													"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> снайпера ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_sniper1"													"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> снайпера ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_strelok"													"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> стрелка ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45_ststrelok"												"Бронежилет <c(00FF00)>6Б45<c(FFFFFF)> старшего стрелка ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"6b45-1_medic"													"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> санитара ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_pulemetchik"											"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> пулеметчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_rpg"													"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_rpg7"													"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> гранатометчика ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_sniper"												"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> снайпера ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_strelok"												"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> стрелка ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b45-1_ststrelok"												"Бронежилет <c(00FF00)>6Б45-1<c(FFFFFF)> старшего стрелка ВС России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"6b48"															"Жилет <c(00FF00)>6Б48<c(FFFFFF)> танкиста ВС России"}
		{"6sh92"														"Разгрузка 6Ш92 ВС России"}
		{"apsv_us_helipilot"											"Жилет выживания <c(00FF00)>APSV<c(FFFFFF)> вертолетчика ВВС США"}
		{"azart"														"<c(ffff60)>Рация</c>"}	;future
		{"bel_vest_gp"													"Разгрузка старшего стрелка ВС Белоруссии"}
		{"bel_vest_mgun"												"Разгрузка пулеметчика ВС Белоруссии"}
		{"bel_vest_rpg"													"Разгрузка гранатометчика ВС Белоруссии"}
		{"bel_vest_smg"													"Разгрузка стрелка ВС Белоруссии"}
		{"bel_vest_sniper"												"Разгрузка снайпера ВС Белоруссии"}
		{"bjo02_clean"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)>  ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_gp"														"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> старшего стрелка ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_gp_a"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> старшего стрелка ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_mg"														"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> пулеметчика ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_mg_a"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> пулеметчика ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_rpg"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> гранатометчика ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_rpg_a"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> гранатометчика ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_smg"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> стрелка ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_smg_a"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> стрелка ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_sniper"													"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> снайпера ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"bjo02_sniper_a"												"Бронежилет <c(00FF00)>БЖО-02<c(FFFFFF)> снайпера ВС Казахстана\nКласс защиты живот-спина-бока <c(FF0000)>4-4-2<c(FFFFFF)>"}
		{"civilian_vest"												"Бронежилет   гражданский\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"civilian_vest_smersh"											"Бронежилет   гражданский (Смерш)\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"est_vest"														"Бронежилет  ВС Эстонии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)>"}
		{"gpb_vest"														"Бронежилет <c(00FF00)>GPB<c(FFFFFF)>  ВС Франции\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \nВоротник, напашник"}
		{"gpb_vest_backpack"											"Бронежилет <c(00FF00)>GPB<c(FFFFFF)> с рюкзаком ВС Франции\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \nВоротник, напашник"}
		{"gpb_vest_driver"												"Бронежилет <c(00FF00)>GPB<c(FFFFFF)> водителя ВС Франции\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"heli_vest_en"													"Жилет выживания вертолетчика ВВС Великобритании"}
		{"heli_vest_fr"													"Жилет выживания вертолетчика ВВС Франции"}
		{"hun_vest"														"Разгрузка ВС Венгрии"}
		{"hun_vest_rpg"													"Разгрузкагранатометчика ВС Венгрии"}
		{"idf_marom_dolphin"											"Бронежилет <c(00FF00)>Marom Dolphin<c(FFFFFF)>  ВС Израиля\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_marom_dolphin_driver"										"Бронежилет <c(00FF00)>Marom Dolphin<c(FFFFFF)> водителя ВС Израиля\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_marom_dolphin_mgun"										"Бронежилет <c(00FF00)>Marom Dolphin<c(FFFFFF)> пулеметчика ВС Израиля\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"idf_tankvest"													"Бронежилеттанкиста ВС Израиля"}
		{"imtv_clear"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)>  КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_gp"														"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> старшего стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_gp_a"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> старшего стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_marksman"												"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> меткого стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_marksman_a"												"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> меткого стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_medic"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> санитара КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_mgun"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> пулеметчика КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_mgun_a"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> пулеметчика КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_rpg"														"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> гранатометчика КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_rpg_a"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> гранатометчика КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_smg"														"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_smg_a"													"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> стрелка КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"imtv_smg_no_g"												"Бронежилет <c(00FF00)>IMTV<c(FFFFFF)> водителя КМП США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"iotv_clear"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)>  ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_clear"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)>  ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_gp"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> старшего стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_gp_a"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> старшего стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_marksman"												"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> меткого стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_marksman_a"											"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> меткого стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_mgun"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> пулеметчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_mgun_a"												"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> пулеметчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_rpg"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> гранатометчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_rpg_a"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> гранатометчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_smg"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_g_smg_a"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник, напашник"}
		{"iotv_smg"														"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"iotv_smg_a"													"Бронежилет <c(00FF00)>IOTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"iran_vest"													"Бронежилет  ВС Ирана\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"iran_vest_backpack"											"Бронежилет  ВС Ирана\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"jsdf_vest"													"Бронежилет  ВС Японии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)>"}
		{"korsar3m"														"Бронежилет <c(00FF00)>Корсар-3М<c(FFFFFF)> ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"korsar3m_rpg"													"Бронежилет <c(00FF00)>Корсар-3М<c(FFFFFF)> гранатометчика ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"korsar3m_vdv"													"Бронежилет <c(00FF00)>Корсар-3М<c(FFFFFF)> ВДВ ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"korsar3m_vdv_rpg"												"Бронежилет <c(00FF00)>Корсар-3М<c(FFFFFF)>гранатометчика ВДВ ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"lat_tactical_vest"											"Бронежилет ВС Латвии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"lbt6094_bandit_marksman"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка \nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"lbt6094_bandit_smg"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка \nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"lbt6094_clear"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)>   \nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_cmp_smg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)>   \nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_gp"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_gp_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_marksman"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_marksman_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_mgun"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_mgun_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_rpg"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_smg"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_delta_smg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  Delta Force\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_gp"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_gp_a"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_marksman"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_marksman_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_mgun"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_mgun_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_rpg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_smg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_idf_smg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  Sayeret Matkal\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_gp"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_gp_a"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_marksman"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_marksman_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_mgun"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_mgun_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_rpg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_smg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_ksk_smg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  KSK\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_od_clear"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)>   \nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_gp"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_gp_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_marksman"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_marksman_a"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_mgun"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_mgun_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_rpg"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_rpg_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_smg"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rangers_smg_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  рейнджеров США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp_a"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_gp_belt"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> снайпера ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman_a"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> снайпера ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_marksman_belt"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> снайпера ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_mg_rpg_help_belt"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> второго номера ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_mgun"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_mgun_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_rpg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_rus_smg_belt"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка ССО России\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_gp_belt"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_marksman_belt"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_mg_rpg_help_belt"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> второго номера  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_mgun"												"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_sas_smg_belt"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка  SAS\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_gp_belt"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> старшего стрелка Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_marksman_belt"									"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> меткого стрелка Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_mg_rpg_help_belt"								"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> второго номера Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_mgun"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> пулеметчика Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_rpg_a"											"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> гранатометчика Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lbt6094_seals_smg_belt"										"Бронежилет <c(00FF00)>LBT6094<c(FFFFFF)> стрелка Navy Seals США\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"lit_vest"														"Разгрузка ВС Литвы"}
		{"lpsv_us_pilot"												"Жилет выживания <c(00FF00)>LPSV<c(FFFFFF)> пилота ВВС США"}
		{"naz_ir"														"Жилет выживания <c(00FF00)>НАЗ-ИР<c(FFFFFF)> летчика ВКС России"}
		{"npp_2006_com"													"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> сержанта ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_gp"													"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> старшего стрелка ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_mg"													"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> пулеметчика ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_mg_rpg_help"											"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> второго номера ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_rpg"													"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> гранатометчика ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_rpg2"												"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> гранатометчика ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"npp_2006_smg"													"Бронежилет <c(00FF00)>NPP 2006<c(FFFFFF)> стрелка ВС Чехии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"osprey_driver"												"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> водителя ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"osprey_marksman"												"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> меткого стрелка ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"osprey_mg_rpg_help"											"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> второго номера ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"osprey_mgun"													"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> пулеметчика ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"osprey_smg"													"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> стрелка ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"osprey_sniper"												"Бронежилет <c(00FF00)>Osprey Mk4<c(FFFFFF)> снайпера ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \nВоротник"}
		{"otv_gp"														"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> старшего стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_mg"														"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> пулеметчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_smg"														"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_sniper"													"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> меткого стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_gp"													"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> старшего стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_mg"													"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> пулеметчика ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_smg"													"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"otv_tan_sniper"												"Бронежилет <c(00FF00)>OTV<c(FFFFFF)> меткого стрелка ВС США\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"pol_borderguard_vest"											"Бронежилет пограничника ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"pol_kwm02_clear"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_gp"													"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> старшего стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_gp_a"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> старшего стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_marksman"											"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> меткого стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_marksman_a"											"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> меткого стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_mgun"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> пулеметчика ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_mgun_a"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> пулеметчика ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_smg"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"pol_kwm02_smg_a"												"Бронежилет <c(00FF00)>KWM02<c(FFFFFF)> стрелка ВС Польши\nКласс защиты живот-спина-бока <c(FF0000)>5а-5а-5а<c(FFFFFF)> \nВоротник"}
		{"poyas_a_irq"													"Разгрузка <c(00FF00)>Пояс-А (Ирак)<c(FFFFFF)>  "}
		{"poyas_a_irq_rpg"												"Разгрузка <c(00FF00)>Пояс-А (Ирак)<c(FFFFFF)> гранатометчика "}
		{"poyas_a_var1"													"Разгрузка <c(00FF00)>Пояс-А вар.1<c(FFFFFF)>  "}
		{"poyas_a_var1_rpg"												"Разгрузка <c(00FF00)>Пояс-А вар.1<c(FFFFFF)> гранатометчика "}
		{"poyas_a_var4"													"Разгрузка <c(00FF00)>Пояс-А вар.4<c(FFFFFF)>  "}
		{"poyas_a_var4_rpg"												"Разгрузка <c(00FF00)>Пояс-А вар.4<c(FFFFFF)> гранатометчика "}
		{"poyas_a_var4gp"												"Разгрузка <c(00FF00)>Пояс-А вар.4 с Пояс-Б<c(FFFFFF)>  "}
		{"poyas_a_var4gp_rpg"											"Разгрузка <c(00FF00)>Пояс-А вар.4 с Пояс-Б<c(FFFFFF)> гранатометчика "}
		{"radio_station_sumka"											"Радиостанция сумка РФ"}
		{"rpg_bag"														"<c(00FF00)>Сумка для РПГ-7<c(FFFFFF)> "}
		{"rubin_clean"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)>  ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_gp"														"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> старшего стрелка ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_gp_a"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> старшего стрелка ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_mg"														"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> пулеметчика ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_mg_a"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> пулеметчика ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_rpg"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> гранатометчика ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_rpg_a"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> гранатометчика ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_smg"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> стрелка ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_smg_a"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> стрелка ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_sniper"													"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> снайпера ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rubin_sniper_a"												"Бронежилет <c(00FF00)>Рубин<c(FFFFFF)> снайпера ВС Белоруссии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-5<c(FFFFFF)>"}
		{"rus_radio_station"											"Радиостанция РФ"}
		{"scuba"														"Акваланг"}
		{"shahid_vest"													"Жилет шахида"}
		{"shutzweste"													"Бронежилет <c(00FF00)>Shutzweste<c(FFFFFF)>  ВС ФРГ\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \nВоротник, напашник"}
		{"shutzweste_backpack"											"Бронежилет <c(00FF00)>Shutzweste<c(FFFFFF)> с рюкзаком ВС ФРГ\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \nВоротник, напашник"}
		{"shutzweste_driver"											"Бронежилет <c(00FF00)>Shutzweste<c(FFFFFF)> водителя ВС ФРГ\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"smb_gp_belt"													"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> старшего стрелка  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smb_marksman_belt"											"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> меткого стрелка  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smb_mg_rpg_help_belt"											"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> второго номера  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smb_mgun"														"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> пулеметчика  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smb_rpg_a"													"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> гранатометчика  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smb_smg_belt"													"Бронежилет <c(00FF00)>SMB<c(FFFFFF)> стрелка  1Er Rpima\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"smersh"														"Разгрузка <c(00FF00)>Смерш<c(FFFFFF)>  "}
		{"svrv_vest"													"Бронежилет <c(00FF00)>SVRV<c(FFFFFF)> ВС Турции\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"taiwan_vest"													"Бронежилет <c(00FF00)><c(FFFFFF)> ВС Тайваня\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-6а<c(FFFFFF)> \n"}
		{"tajik_vest"													"Бронежилет ВС Таджикистана\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tajik_vest_rpg"												"Бронежилет гранатометчика ВС Таджикистана\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tajik_vest_smg"												"Бронежилет стрелка ВС Таджикистана\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)>"}
		{"tarzan"														"Разгрузка <c(00FF00)>Тарзан<c(FFFFFF)>  "}
		{"tarzan_rpg"													"Разгрузка <c(00FF00)>Тарзан<c(FFFFFF)> гранатометчика "}
		{"tat_ba_7"														"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)>  ВС Сирии\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \nВоротник"}
		{"tat_ba_7_assault"												"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)> штурмовой ВС Сирии\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \nВоротник, напашник"}
		{"tat_ba_7_light"												"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)> водителя ВС Сирии\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \nВоротник"}
		{"tat_ba_7_ua"													"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)>  ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"tat_ba_7_ua_assault"											"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)> штурмовой ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"tat_ba_7_ua_light"											"Бронежилет <c(00FF00)>TAT-BA-7<c(FFFFFF)> водителя ВС Украины\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"test_6b43"													"Dummy Test Armor - 6b43"}
		{"test_armor"													"Dummy Test Armor"}
		{"type04_vest"													"Бронежилет <c(00FF00)>Type04<c(FFFFFF)> артиллериста ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type06_driver"												"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> водителя ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type06h_clean"												"Бронежилет <c(00FF00)>Type06<c(FFFFFF)>  ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_com"													"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> командира отделения ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_help"													"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> второго номера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_medic"												"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> санитара ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_mgun"													"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> пулеметчика ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_officer"												"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> офицера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_smg"													"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> стрелка ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_sniper"												"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> снайпера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type06h_uav"													"Бронежилет <c(00FF00)>Type06<c(FFFFFF)> оператора БПЛА ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>3-3-2<c(FFFFFF)> \n"}
		{"type15_clear"													"Бронежилет <c(00FF00)>Type15<c(FFFFFF)>  ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"type15h_clear"												"Бронежилет <c(00FF00)>Type15<c(FFFFFF)>  ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_com"													"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> командира отделения ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_help"													"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> второго номера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_mgun"													"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> пулеметчика ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_officer"												"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> офицера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_smg"													"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> стрелка ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"type15h_sniper"												"Бронежилет <c(00FF00)>Type15<c(FFFFFF)> снайпера ВС Китая\nКласс защиты живот-спина-бока <c(FF0000)>5-5-2<c(FFFFFF)> \n"}
		{"us_tankman_vest"												"Жилет <c(00FF00)>OTV<c(FFFFFF)> танкиста ВС США"}
		{"us2003_tankman_vest"											"Жилет <c(00FF00)>OTV<c(FFFFFF)> танкиста ВС США"}
		{"usmc_tankman_vest"											"Жилет <c(00FF00)>OTV<c(FFFFFF)> танкиста КМП США"}
		{"vest_razgruz"													"Разгрузка <c(00FF00)><c(FFFFFF)>  "}
		{"virtus_vest_clean"											"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> танкиста ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>2-2-2<c(FFFFFF)> \n"}
		{"virtus_vest_gp"												"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> старшего стрелка ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"virtus_vest_mg"												"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> пулеметчика ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"virtus_vest_mg_rpg_help"										"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> второго номера ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"virtus_vest_smg"												"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> стрелка ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
		{"virtus_vest_sniper"											"Бронежилет <c(00FF00)>Virtus<c(FFFFFF)> меткого стрелка ВС Великобритании\nКласс защиты живот-спина-бока <c(FF0000)>6а-6а-2<c(FFFFFF)> \n"}
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
		{"box"															"<c(ffff60)>Ящик</c>"}				;vanilla
		{"small_box"													"<c(ffff60)>Маленькая Ящик</c>"}	;vanilla
	}
	{"stuff"
		;mp_resupply
			{"mp_cwr_cn_artpvo"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для артсистем и ПВО.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_cn_avia"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для самолетов и вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_cn_common"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_cn_common1"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_cn_common2"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_nato_artpvo"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для артсистем и ПВО.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_nato_avia"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для самолетов и вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_nato_common"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_nato_common1"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_nato_common2"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_rus_artpvo"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для артсистем и ПВО.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_rus_avia"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для самолетов и вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_rus_common"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_rus_common1"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_rus_common2"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_usa_artpvo"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для артсистем и ПВО.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_usa_avia"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для самолетов и вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_usa_common"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_usa_common1"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_cwr_usa_common2"										"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
		;mp_smallbox_resupply
			{"ammo_box_konkurs"											"Ящик c ПТУР <c(d7cc81)>«Конкурс»<c(FFFFFF)> "}
			{"ammo_boxm_konkurs"										"Ящик c ПТУР <c(d7cc81)>«Конкурс»<c(FFFFFF)> "}
			{"mp_smallbox_cn"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_smallbox_nato"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_smallbox_rus"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
			{"mp_smallbox_rus_konkurs"									"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для ПТРК Конкурс.\nЯщик можно пополнить на флаге бригады."}
			{"mp_smallbox_usa"											"<c(FFAF00)>Ящик с боеприпасами<c(FFFFFF)>\nСодержит боеприпасы для танков, бмп, станкового вооружения(ПТРК, АГС, миномет), ручного стрелкового вооружения и гранатометов, вертолетов.\nЯщик можно пополнить на флаге бригады."}
		{"ammo_box_9mm"													"Ящик с 9.мм патронами <c(d7cc81)>СП-5<c(FFFFFF)>\n                    <c(FFAF00)>800<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_127b32"												"Ящик с 12.7 мм патронами <c(d7cc81)>Б-32<c(FFFFFF)>\n                      <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n         - <c(9fd186)>ленточный вариант<c(FFFFFF)> - "}
		{"ammo_box_127bs"												"Ящик с 12.7 мм патронами <c(d7cc81)>БС<c(FFFFFF)>\n                     <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n - <c(26afeb)>бронебойно<c(FFFFFF)>-<c(FF1F00)>зажигательные<c(FFFFFF)> - "}
		{"ammo_box_127mdz"												"Ящик с 12.7 мм патронами <c(d7cc81)>МДЗ<c(FFFFFF)>\n                      <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n   - <c(FFFF00)>осколочно<c(FFFFFF)>-<c(FF1F00)>зажигательные<c(FFFFFF)> - "}
		{"ammo_box_127sn"												"Ящик с 12.7 мм патронами <c(d7cc81)>7Н34<c(FFFFFF)>\n                     <c(FFAF00)>160<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n              - <c(4d6ff7)>снайперские<c(FFFFFF)> - "}
		{"ammo_box_145b32"												"Ящик с 14.5 мм патронами <c(d7cc81)>Б-32<c(FFFFFF)>\n                     <c(FFAF00)>112<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_545"													"Ящик с 5.45 мм патронами <c(d7cc81)>7Н6<c(FFFFFF)>\n                   <c(FFAF00)>2160<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_762"													"Ящик с 7.62 мм патронами <c(d7cc81)>ПС<c(FFFFFF)>\n                    <c(FFAF00)>1400<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_762lps"												"Ящик с 7.62 мм патронами <c(d7cc81)>ЛПС<c(FFFFFF)>\n                     <c(FFAF00)>880<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n         - <c(9fd186)>ленточный вариант<c(FFFFFF)> - "}
		{"ammo_box_762svd"												"Ящик с 7.62 мм патронами <c(d7cc81)>7Н1<c(FFFFFF)>\n                     <c(FFAF00)>880<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n              - <c(4d6ff7)>снайперские<c(FFFFFF)> - "}
		{"ammo_box_f1"													"Ящик с гранатами <c(d7cc81)>Ф-1<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_medic"												"Ящик с бинтами\n <c(FFAF00)>60<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_rgd5"												"Ящик с гранатами <c(d7cc81)>РГД-5<c(FFFFFF)>\n               <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>шт."}
		{"ammo_box_rgn"													"Ящик с гранатами <c(d7cc81)>РГН<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_rgo"													"Ящик с гранатами <c(d7cc81)>РГО<c(FFFFFF)>\n              <c(FFAF00)>20<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_rus"													"Ящик c боеприпасами"}
		{"ammo_box_vog25"												"Ящик с гранатами <c(d7cc81)>ВОГ-25<c(FFFFFF)>\n                <c(FFAF00)>84<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box_vog25p"												"Ящик с гранатами <c(d7cc81)>ВОГ-25П<c(FFFFFF)>\n                 <c(FFAF00)>84<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box9M111"												"Ящик c ПТУР<c(d7cc81)> 9М111<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box9M113"												"Ящик c ПТУР<c(d7cc81)> 9М113<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box9M113M"												"Ящик c ПТУР<c(d7cc81)> 9М113M<c(FFFFFF)> \n             <c(FFAF00)>2<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_box9M131M"												"Ящик c ПТУР<c(d7cc81)> 9М131M<c(FFFFFF)> \n             <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_boxmunit"												"Ящик c амуницией"}
		{"ammo_boxOG7V"													"Ящик c выстрелом<c(d7cc81)> OГ-7В<c(FFFFFF)> \n                 <c(FFAF00)>12<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxPG7V"													"Ящик c выстрелом<c(d7cc81)> ПГ-7В<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxPG7VL"												"Ящик c выстрелом<c(d7cc81)> ПГ-7ВЛ<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxPG7VM"												"Ящик c выстрелом<c(d7cc81)> ПГ-7ВM<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxPG7VR"												"Ящик c выстрелом<c(d7cc81)> ПГ-7ВР<c(FFFFFF)> \n                 <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxPG7VS"												"Ящик c выстрелом<c(d7cc81)> ПГ-7ВC<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxRPG18"												"Ящик c <c(d7cc81)>РПГ-18<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_boxRPG22"												"Ящик c <c(d7cc81)>РПГ-22<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_boxRPG26"												"Ящик c <c(d7cc81)>РПГ-26<c(FFFFFF)> \n         <c(FFAF00)>8<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_boxRPG27"												"Ящик c <c(d7cc81)>РПГ-27<c(FFFFFF)> \n         <c(FFAF00)>4<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>"}
		{"ammo_boxTBG7V"												"Ящик c выстрелом<c(d7cc81)> TБГ-7В<c(FFFFFF)> \n                 <c(FFAF00)>6<c(FFFFFF)><c(CCCCCC)>шт.<c(FFFFFF)>\n            - к РПГ-7 - "}
		{"ammo_boxweap"													"Ящик c боеприпасами"}
		{"barrel"														"<c(ffff60)>Бочка</c>"}
		{"can"															"<c(ffff60)>Канистра</c>"}
	}
	{"weapon"
		
	}
;cw_gun
	{"ammo"

	}
	{"stuff"

	}
	{"weapon"
		{"20mm_M197 gun"												"<c(FFFFFF)>20мм<c(FFAF00)> M197<c(FFFFFF)>\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> т.д. "}
		{"20mm_Rh202 gun"												"<c(FFFFFF)>20mm<c(00FF00)> Rheinmetall<c(FFFFFF)><c(FFAF00)> Rh202<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,4..0,6<c(FFFFFF)> т.д. "}
		{"23mm_23L gun"													"<c(FFFFFF)>23мм<c(FFAF00)> 23L<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,61<c(FFFFFF)> т.д. "}
		{"23mm_am23 gun"												"<c(FFFFFF)>23мм<c(FFAF00)> АМ-23<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> т.д. "}
		{"23mm_azp23_x4 gun"											"<c(FFFFFF)>4x23-мм<c(FFAF00)> АЗП-23<c(FFFFFF)><c(00FF00)> «Амур»<c(FFFFFF)>\n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,68<c(FFFFFF)> т.д. "}
		{"23mm_zu232 gun"												"<c(FFFFFF)>2x23мм<c(FFAF00)> 2A14<c(FFFFFF)>\n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,68<c(FFFFFF)> т.д. "}
		{"25mm_gau12 gun"												"<c(FFFFFF)>25мм<c(FFAF00)> GAU-12<c(FFFFFF)><c(00FF00)> «Equalizer»<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"25mm_gau22 gun"												"<c(FFFFFF)>25мм<c(FFAF00)> GAU-22<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"25mm_m242 gun"												"<c(FFFFFF)>25мм<c(FFAF00)> M242<c(FFFFFF)> <c(00FF00)>«Bushmaster»<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,44..0,75<c(FFFFFF)> т.д. "}
		{"25mm_m811 gun"												"<c(FFFFFF)>25мм<c(FFAF00)> M811<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,43..0,74<c(FFFFFF)> т.д. "}
		{"25mm_mk38_mod2 gun"											"<c(FFFFFF)>25мм<c(FFAF00)> Mk38 mod 2<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,44..0,75<c(FFFFFF)> т.д. "}
		{"25mm_type87_x4 gun"											"<c(FFFFFF)>25мм<c(FFAF00)> Type87<c(FFFFFF)>\n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,6..0,8<c(FFFFFF)> т.д. "}
		{"25mm_zpt90 gun"												"<c(FFFFFF)>25мм<c(FFAF00)> ZPT90<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,6..0,8<c(FFFFFF)> т.д. "}
		{"27mm_mauzer_bk27 gun"											"<c(FFFFFF)>27мм<c(FFAF00)> BK27<c(FFFFFF)> <c(00FF00)>Mauzer<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> т.д. "}
		{"27mm_mauzer_bk27x2 gun"										"<c(FFFFFF)>27мм<c(FFAF00)> BK27<c(FFFFFF)> <c(00FF00)>Mauzer<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> т.д. "}
		{"30mm_2A38_x2 gun"												"<c(FFFFFF)>2x30мм<c(FFAF00)> 2А38<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_2A42 gun"												"<c(FFFFFF)>30мм<c(FFAF00)> 2A42<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_2A42_bmpt gun"											"<c(FFFFFF)>30мм<c(FFAF00)> 2A42<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_2A42_Ka50 gun"											"<c(FFFFFF)>30мм<c(FFAF00)> 2A42<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_2A72 gun"												"<c(FFFFFF)>30мм<c(FFAF00)> 2A72<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_2A72_nosupport gun"										"<c(FFFFFF)>30мм<c(FFAF00)> 2A72<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,62..1,12<c(FFFFFF)> т.д. "}
		{"30mm_2A72_robot gun"											"<c(FFFFFF)>30мм<c(FFAF00)> 2A72<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_AK630 gun"												"<c(FFFFFF)>30мм<c(FFAF00)> АК630<c(FFFFFF)>\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"30mm_GIAT_M781 gun"											"<c(FFFFFF)>30mm<c(FFAF00)> M781<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"30mm_kortik gun"												"<c(FFFFFF)>2x30мм<c(FFAF00)> АО-18<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"30mm_L21A1_RARDEN gun"										"<c(FFFFFF)>30mm<c(FFAF00)> L21A1<c(FFFFFF)><c(00FF00)> RARDEN<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,5..1,0<c(FFFFFF)> т.д. "}
		{"30mm_M230 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> M230<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,86<c(FFFFFF)> т.д. "}
		{"30mm_M230LF gun"												"<c(FFFFFF)>30mm<c(FFAF00)> M230LF<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,5<c(FFFFFF)> т.д. "}
		{"30mm_mk30_2 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> Mk30-2<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)> т.д. "}
		{"30mm_Mk44 gun"												"<c(FFFFFF)>30mm<c(FFAF00)> Mk44<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)> т.д. "}
		{"30mm_Mk44_bushmaster2 gun"									"<c(FFFFFF)>30mm<c(FFAF00)> Mk44 «Bushmaster II»<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,3..0,5<c(FFFFFF)> т.д. "}
		{"30mm_ZPT99 gun"												"<c(FFFFFF)>30мм<c(FFAF00)> ZPT-99<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,37..0,67<c(FFFFFF)> т.д. "}
		{"32_57_pickup"													"<c(FFFFFF)>Блок<c(FFAF00)> УВ-32-57<c(FFFFFF)> с<c(FFAF00)> С-5<c(FFFFFF)>\n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м."}
		{"35mm_Oerlikon_KDA gun"										"<c(FFFFFF)>35мм<c(00FF00)> «Oerlikon»<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,44..0,66<c(FFFFFF)> т.д. "}
		{"35mm_PG99-35-2 gun"											"<c(FFFFFF)>35мм<c(00FF00)> PG99-35-2<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,44..0,66<c(FFFFFF)> т.д. "}
		{"40mm_CTA40 gun"												"<c(FFFFFF)>40мм<c(00FF00)> CTAS<c(FFFFFF)>\n дальность - <c(FFAF00)>135<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,35..0,75<c(FFFFFF)> т.д. "}
		{"57mm_au220m_aa gun"											"<c(FFFFFF)>57мм<c(FFAF00)> АУ-220М<c(FFFFFF)><c(FFAF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,12<c(FFFFFF)> т.д. "}
		{"57mm_UV_32_57 gun"											"<c(FFFFFF)>Блок<c(FFAF00)> УВ-32-57<c(FFFFFF)> с<c(FFAF00)> С-5<c(FFFFFF)>\n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м."}
		{"57mm_UV_32_57x2 gun"											"<c(FFFFFF)>Блок<c(FFAF00)> УВ-32-57<c(FFFFFF)> с<c(FFAF00)> С-5<c(FFFFFF)>\n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м."}
		{"68mm_telson12 gun"											"<c(FFFFFF)>68mm Блок<c(00FF00)> Telson 12<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"68mm_telson22 gun"											"<c(FFFFFF)>68mm Блок<c(00FF00)> Telson 22<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"70mm_Hydra_A-10 gun"											"<c(FFFFFF)>70mm Блок<c(00FF00)> Hydra 70<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"70mm_Hydra_AH64 gun"											"<c(FFFFFF)>70mm Блок<c(00FF00)> Hydra 70<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"70mm_Hydra_UH1-Y gun"											"<c(FFFFFF)>70mm Блок<c(00FF00)> Hydra 70<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"70mm_lau51x2 gun"												"<c(FFFFFF)>70mm Блок<c(00FF00)> Hydra 70<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"73mm_2A28 gun"												"<c(FFFFFF)>73мм<c(FFAF00)> 2A28<c(FFFFFF)><c(00FF00)> «Гром»<c(FFFFFF)>\n дальность - <c(FFAF00)>85..150<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> т.д. "}
		{"76mm_ak176 gun"												"<c(FFFFFF)>76мм<c(FFAF00)> АК176<c(FFFFFF)>\n дальность - <c(FFAF00)>220<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"80mm_b8_x2"													"<c(FFFFFF)>80мм Блок<c(FFAF00)> Б-8<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"80mm_b8b20a_x2 gun"											"<c(FFFFFF)>80мм<c(FFFFFF)> Блок<c(FFAF00)> Б-8Б20А<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"80mm_b820a_x2 gun"											"<c(FFFFFF)>80мм<c(FFFFFF)> Блок<c(FFAF00)> Б-8Б20А<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"80mm_b820a_x4 gun"											"<c(FFFFFF)>80мм<c(FFFFFF)> Блок<c(FFAF00)> Б-8Б20А<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"82mm_2B9 gun"													"<c(FFFFFF)>82мм<c(FFAF00)> 2Б9<c(FFFFFF)> <c(00FF00)>«Василек»<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> т.д. "}
		{"82mm_cs_cm1 gun"												"<c(FFFFFF)>82мм<c(FFAF00)> CS-CM1<c(FFFFFF)> <c(00FF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> т.д. "}
		{"85mm_s-53 gun"												"<c(FFFFFF)>85мм<c(FFAF00)> C-53<c(FFFFFF)>\n дальность - <c(FFAF00)>85..110<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,32<c(FFFFFF)> т.д. "}
		{"100mm_2a29 gun"												"<c(FFFFFF)>100мм<c(FFAF00)> 2А29<c(FFFFFF)> \n дальность - <c(FFAF00)>130..180<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,24..0,44<c(FFFFFF)> т.д. "}
		{"100mm_2a70 gun"												"<c(FFFFFF)>100мм<c(FFAF00)> 2A70<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,4<c(FFFFFF)> т.д. "}
		{"100mm_2a70_1 gun"												"<c(FFFFFF)>100мм<c(FFAF00)> 2A70<c(FFFFFF)>\n дальность - <c(FFAF00)>172<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,4<c(FFFFFF)> т.д. "}
		{"100mm_ak100 gun"												"<c(FFFFFF)>130мм<c(FFAF00)> АК-100<c(FFFFFF)>\n дальность - <c(FFAF00)>296<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,85<c(FFFFFF)> т.д. "}
		{"100mm_D-10T gun"												"<c(FFFFFF)>100мм<c(FFAF00)> Д-10Т2С<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,24..0,34<c(FFFFFF)> т.д. "}
		{"100mm_d54 gun"												"<c(FFFFFF)>100мм<c(FFAF00)> Д-54ТC<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,24..0,44<c(FFFFFF)> т.д. "}
		{"105mm_F2_MECA gun"											"<c(FFFFFF)>105мм <c(FFAF00)>F2 MECA<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,26..0.4<c(FFFFFF)> т.д. "}
		{"105mm_L7A3 gun"												"<c(FFFFFF)>105мм <c(FFAF00)>L7A3<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,26<c(FFFFFF)> т.д. "}
		{"105mm_L118 gun"												"<c(FFFFFF)>105мм <c(FFAF00)>L118<c(FFFFFF)>\n дальность - <c(FFAF00)>205..230<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,83<c(FFFFFF)> т.д. "}
		{"105mm_M68 gun"												"<c(FFFFFF)>105мм <c(FFAF00)>M68<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,26<c(FFFFFF)> т.д. "}
		{"105mm_M68A1E4 gun"											"<c(FFFFFF)>105мм <c(FFAF00)>M68A1E4<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,26<c(FFFFFF)> т.д. "}
		{"115mm_D-68 gun"												"<c(FFFFFF)>115мм 2А21"}
		{"115mm_U-5TS gun"												"<c(FFFFFF)>115мм <c(FFAF00)>У-5ТС<c(FFFFFF)><c(00FF00)> «Молот»<c(FFFFFF)>\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,28..0,31<c(FFFFFF)> т.д. "}
		{"120mm_2A51 gun"												"<c(FFFFFF)>120мм<c(FFAF00)> 2A51<c(FFFFFF)>\n дальность - <c(FFAF00)>70..207<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,92..8,0<c(FFFFFF)> т.д. "}
		{"120mm_2b11 gun"												"<c(FFFFFF)>120мм<c(FFAF00)> 2Б11<c(FFFFFF)>\n дальность - <c(FFAF00)>176<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8,0<c(FFFFFF)> т.д. "}
		{"120mm_CN_120_26 gun"											"<c(FFFFFF)>120мм <c(FFAF00)>CN-120-26<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)> т.д. "}
		{"120mm_M121 gun"												"<c(FFFFFF)>120мм<c(FFAF00)> M121<c(FFFFFF)>\n дальность - <c(FFAF00)>176<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10,0<c(FFFFFF)> т.д. "}
		{"120mm_M256 gun"												"<c(FFFFFF)>120мм <c(FFAF00)>M256<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)> т.д. "}
		{"120mm_pbp-172 gun"											"<c(FFFFFF)>120мм<c(FFAF00)> PBP-172<c(FFFFFF)>\n дальность - <c(FFAF00)>176<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8,0<c(FFFFFF)> т.д. "}
		{"120mm_Rh120L44 gun"											"<c(FFFFFF)>120мм<c(00FF00)> Rheinmetall-120<c(FFFFFF)> <c(FFAF00)>L44<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)> т.д. "}
		{"120mm_Rh120L55 gun"											"<c(FFFFFF)>120мм<c(00FF00)> Rheinmetall-120<c(FFFFFF)> <c(FFAF00)>L55A1<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,11<c(FFFFFF)> т.д. "}
		{"120mm_rt61 gun"												"<c(FFFFFF)>120мм<c(FFAF00)> MO-120 RT-61<c(FFFFFF)>\n дальность - <c(FFAF00)>176..207<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7,0..10,0<c(FFFFFF)> т.д. "}
		{"120mm_UK_L30 gun"												"<c(FFFFFF)>120мм <c(FFAF00)>L30E4<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)> т.д. "}
		{"122mm_2A18 gun"												"<c(FFFFFF)>122мм<c(FFAF00)> 2A18М<c(FFFFFF)>\n дальность - <c(FFAF00)>210..230<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,83<c(FFFFFF)> т.д. "}
		{"122mm_s13 gun"												"<c(FFFFFF)>122мм<c(FFFFFF)> Блок<c(FFAF00)> C-13<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"122mm_s13_2 gun"												"<c(FFFFFF)>122мм<c(FFFFFF)> Блок<c(FFAF00)> C-13<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"122mm_s13_mig29 gun"											"<c(FFFFFF)>122мм<c(FFFFFF)> Блок<c(FFAF00)> C-13<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"125mm_2A26M2 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A26M2<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)> т.д. "}
		{"125mm_2A46 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A46<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)> т.д. "}
		{"125mm_2A46_1 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A46-1<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)> т.д. "}
		{"125mm_2A46_2 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A46-2<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,21..0,28<c(FFFFFF)> т.д. "}
		{"125mm_2A46M gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A46М<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_2A46M_1 gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М1<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_2A46M_1h gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М1<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_2A46M_2 gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М2<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)> т.д. "}
		{"125mm_2A46M_4 gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М4<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)> т.д. "}
		{"125mm_2A46M_5 gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М5-01<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)> т.д. "}
		{"125mm_2A46Mb1 gun"											"<c(FFFFFF)>125мм <c(FFAF00)>2A46М<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_2A75 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A75<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_2A82 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>2A82<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,14..0,19<c(FFFFFF)> т.д. "}
		{"125mm_KBAZ gun"												"<c(FFFFFF)>125мм <c(FFAF00)>КБА-З<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,17..0,23<c(FFFFFF)> т.д. "}
		{"125mm_zpt-98 gun"												"<c(FFFFFF)>125мм <c(FFAF00)>ZPT98<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,19..0,25<c(FFFFFF)> т.д. "}
		{"127mm_Mk45 gun"												"<c(FFFFFF)>127мм<c(FFAF00)> Mk45<c(FFFFFF)>\n дальность - <c(FFAF00)>340<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"130mm_ak130 gun"												"<c(FFFFFF)>130мм<c(FFAF00)> АК-130<c(FFFFFF)>\n дальность - <c(FFAF00)>310<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,85<c(FFFFFF)> т.д. "}
		{"152mm_2A33 gun"												"<c(FFFFFF)>152мм<c(FFAF00)> 2A33<c(FFFFFF)>\n дальность - <c(FFAF00)>255...290<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,45<c(FFFFFF)> т.д. "}
		{"152mm_2A64 gun"												"<c(FFFFFF)>152мм<c(FFAF00)> 2A64<c(FFFFFF)>\n дальность - <c(FFAF00)>255...308<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}
		{"152mm_2A64M2 gun"												"<c(FFFFFF)>152мм<c(FFAF00)> 2A64M2<c(FFFFFF)>\n дальность - <c(FFAF00)>255...308<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}	;future
		{"152mm_2A88 gun"												"<c(FFFFFF)>152мм<c(FFAF00)> 2A88<c(FFFFFF)>\n дальность - <c(FFAF00)>303...336<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}
		{"152mm_DANA gun"												"<c(FFFFFF)>152мм орудие<c(00FF00)> DANA<c(FFFFFF)>\n дальность - <c(FFAF00)>255...290<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}
		{"155мм_L31 gun"												"<c(FFFFFF)>155мм<c(FFAF00)> L31<c(FFFFFF)>\n дальность - <c(FFAF00)>258...330<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}
		{"155мм_L52 gun"												"<c(FFFFFF)>155мм<c(FFAF00)> L52<c(FFFFFF)>\n дальность - <c(FFAF00)>294...340<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> т.д. "}
		{"155мм_l54cn gun"												"<c(FFFFFF)>155мм<c(FFAF00)> L54<c(FFFFFF)>\n дальность - <c(FFAF00)>290...380<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> т.д. "}
		{"155мм_M284 gun"												"<c(FFFFFF)>155мм<c(FFAF00)> M284<c(FFFFFF)>\n дальность - <c(FFAF00)>258...330<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> т.д. "}
		{"brmi90x7 gun"													"<c(FFFFFF)>90mm Блок<c(00FF00)> BRMI-90<c(FFFFFF)>\n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"brmi90x14 gun"												"<c(FFFFFF)>90mm Блок<c(00FF00)> BRMI-90<c(FFFFFF)>\n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"GAU-8 gun"													"<c(FFFFFF)>30мм<c(FFAF00)> GAU-8<c(FFFFFF)><c(00FF00)> «Avenger»<c(FFFFFF)>\n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> т.д. "}
		{"GSh-23L gun"													"<c(FFFFFF)>23мм<c(FFAF00)> ГШ-23Л<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> т.д. "}
		{"GSH-30-1 gun"													"<c(FFFFFF)>30мм<c(FFAF00)> ГШ-30-1<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> т.д. "}
		{"GSH-30-2 gun"													"<c(FFFFFF)>30мм<c(FFAF00)> ГШ-30-2<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> т.д. "}
		{"kpvt"															"<c(FFFFFF)>14,5мм<c(00FF00)> КПВТ<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,38<c(FFFFFF)> т.д. "}
		{"kpvt_btr82"													"<c(FFFFFF)>14,5мм<c(00FF00)> КПВТ<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,38<c(FFFFFF)> т.д. "}	
		{"MG253 gun"													"<c(FFFFFF)>120мм <c(FFAF00)>MG253<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,13..0,14<c(FFFFFF)> т.д. "}
		{"Phalanx"														"<c(FFFFFF)>20мм<c(FFAF00)> CIWS Mk15<c(FFFFFF)><c(00FF00)> «Phalanx»<c(FFFFFF)>\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> т.д. "}
		{"ShmelM_x12_robot"												"<c(d7cc81)> РПО-М<c(FFFFFF)><c(00FF00)> «Шмель»-М<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 3<c(FFFFFF)> кг \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1.67<c(FFFFFF)> т.д.\n - термобарический"}
		{"ShmelM_x24_robot"												"<c(d7cc81)> РПО-М<c(FFFFFF)><c(00FF00)> «Шмель»-М<c(FFFFFF)>\n масса ВВ -<c(FF1F00)> 3<c(FFFFFF)> кг \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1.67<c(FFFFFF)> т.д.\n - термобарический"}
		{"sppu-23-01x2 gun"												"<c(FFFFFF)> 23мм<c(FFAF00)> СППУ-23-01<c(FFFFFF)> х2\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> т.д. "}
		{"upkx2 gun"													"<c(FFFFFF)> 23мм<c(FFAF00)> УПК-23-250<c(FFFFFF)> х2\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> т.д. "}
		{"Vulcan"														"<c(FFFFFF)>20мм<c(FFAF00)> M61<c(FFFFFF)><c(00FF00)> «Vulcan»<c(FFFFFF)>\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> т.д. "}	;check
		{"VulcanA2"														"<c(FFFFFF)>20мм<c(FFAF00)> M61A1/A2<c(FFFFFF)><c(00FF00)> «Vulcan»<c(FFFFFF)>\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> т.д. "}	;check
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
		{"brmi-90"														"<c(FFAF00)>BRMI-90<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1.55<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"bullet20_139 ap"												"20x139mm БПC<c(4d6ff7)> DM-63<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>42<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> -  "}
		{"bullet20_139 fg"												"20x139mm ОФ<c(FFAF00)> DM-81 <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,0058<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet23 bzt zenite"											"23x152мм БЗТ<c(4d6ff7)> ЗУБР1<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>24<c(FFFFFF)> мм \n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> -  "}
		{"bullet23 ofzt zenite"											"23x152мм ОФЗ<c(FFAF00)> ЗУОФ7<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,018<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet23_115 bzt zenite"										"23x115мм БЗТ<c(4d6ff7)> 9А1548<c(FFFFFF)>\n - авиационный -  \n бронебойность на 1000 м. - <c(26afeb)>10<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> -  "}
		{"bullet23_115 ofzt zenite"										"23x115мм ОФЗТ<c(FFAF00)> 9А715<c(FFFFFF)>\n - авиационный -  \n масса ВВ - <c(FF1F00)>0,011<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet25_cn ap"												"25mm БПС<c(4d6ff7)> <c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>35<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet25_cn fg"												"25mm ОФ<c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,043<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet25_FR 25x137 ap"										"25x137mm БПС<c(4d6ff7)> M935A2<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>80<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet25_FR 25x137 fg"										"25x137mm ОФ<c(FFAF00)> HEI-T<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,027<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet25_usa 25x137 ap"										"25x137mm БПС<c(4d6ff7)> M919<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>62..78<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet25_usa 25x137 fg"										"25x137mm ОФ<c(FFAF00)> M792<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,032<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet25_usa_a 25x137 ap"										"25x137mm БЗТ<c(FFAF00)> PGU-32/U<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>15<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet27_GER ap"												"27x145mm БЗТ <c(FFAF00)>DM-43<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>25<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet27_GER fg"												"27x145mm ОФ <c(FFAF00)>M-90<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,022<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet30_GB ap"												"30x170мм БПС<c(4d6ff7)> L5A2<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>43<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet30_GB apcr"												"30x170мм БПС<c(4d6ff7)> L14A2<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>64<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> -"}
		{"bullet30_GB fg"												"30x170мм ОФ<c(FFAF00)> L13A1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,049<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м. "}
		{"bullet30_nav_RUS fg"											"30x165мм ОФ<c(FFAF00)> АЗ-УОФ-84<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,049<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м. \n -<c(FF1F00)> зажигательные<c(FFFFFF)> - \n -<c(CCCCCC)> АЗ-УОФ-84П с ПВУ<c(FFFFFF)> - "}
		{"bullet30_rus ap"												"30x165мм БПC<c(4d6ff7)> ЗУБР8<c(FFFFFF)><c(00FF00)> «Кернер»<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>56<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м. \n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet30_rus ap_cn ap"										"30x165мм БC<c(4d6ff7)> <c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>56<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet30_rus apcr_cn ap"										"30x165мм БПC<c(4d6ff7)><c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м. \n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet30_rus fg"												"30x165мм ОФ<c(FFAF00)> 3УОФ8<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,049<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м. \n -<c(FF1F00)> зажигательные<c(FFFFFF)> - \n -<c(CCCCCC)> ЗУОФ21 с ПВУ<c(FFFFFF)> - "}
		{"bullet30_rus fg_cn fg"										"30x165мм ОФ<c(FFAF00)>DTY02-30 <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,049<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100..140<c(FFFFFF)> м. \n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"bullet30_rus_apg ap"											"30x165мм БПC<c(4d6ff7)> M929<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet30_rus_aph ap"											"30x165мм БC<c(4d6ff7)> ЗУБР6<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>38<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> ЗУБР10 с ПВУ<c(FFFFFF)> - "}
		{"bullet30_USA ap"												"30x113mm <c(FFAF00)> SAPHEI<c(FFFFFF)>\n бронебойность на 1000 м. - <c(FF1F00)>11<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet30_USA cm"												"30x113mm КС<c(FFAF00)> M789<c(FFFFFF)>\n бронебойность - <c(FF1F00)>46<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet30_USA fg"												"30x113mm ОФ<c(FFAF00)><c(00FF00)> Aden<c(FFFFFF)> HEI<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,022<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"bullet35 ap"													"35x228mm БЗТ<c(FFAF00)> PMD 044<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>40<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet35 apcr"												"35x228mm БПС<c(4d6ff7)> PMD 060<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>115<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}          
		{"bullet35 fg"													"35x228mm ОФ<c(FFAF00)> PMD 042<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,112<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet35_cn ap"												"35x228mm БЗТ<c(FFAF00)> DKG01A<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>40<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet35_cn fg"												"35x228mm ОФ<c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,112<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet40_NATO abm"											"40x255mm ОФ<c(FFAF00)> GPR-AB-T<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,115<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>135<c(FFFFFF)> м."}
		{"bullet40_NATO apcr"											"40x255mm БПС<c(FFAF00)> APFSDS-T<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>157<c(FFFFFF)> мм \n дальность - <c(FFAF00)>135<c(FFFFFF)> м."}
		{"bullet40_NATO fg"												"40x255mm ОФ<c(FFAF00)> GPR-PD-T<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,115<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>135<c(FFFFFF)> м."}
		{"bullet40_NATOabm_fg_exp"										"<c(CF9FFF)>EXP GPR-AB-T</c>"}	;t
		{"Bullet57_RUS au220m ap"										"57мм БС<c(FFAF00)> БР-281У<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>70<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet57_RUS au220m fg"										"57мм ОФ<c(FFAF00)> OP-281У<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,153<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet68_FR cm"												"НАР 68mm <c(00FF00)>SNEB<c(FFFFFF)><c(FFAF00)> M<c(FFFFFF)>\n бронебойность - <c(FF1F00)>400<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet68_FR fg"												"НАР 68mm <c(00FF00)>SNEB<c(FFFFFF)><c(FFAF00)> M<c(FFFFFF)> ОФ\n масса ВВ - <c(FF1F00)>0,75<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet70 Bullet70_Hydra"										"НАР 70mm <c(00FF00)>Hydra<c(FFFFFF)> ОФ<c(FFAF00)> M229<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,18<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet70 Bullet70_Hydra sm"									"НАР 70mm <c(00FF00)>Hydra<c(FFFFFF)><c(FFAF00)> M156<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"Bullet70_Hydra"												"<c(CF9FFF)>Loading mediator Hydra"}	;t
		{"Bullet70_Hydra sm"											"<c(CF9FFF)>Loading mediator Hydra"}	;t
		{"bullet73_rus cm"												"73мм <c(FFAF00)>ПГ-15ВС<c(FFFFFF)><c(CCCCCC)><c(FFFFFF)>\n бронебойность - <c(FF1F00)>432<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м. "}
		{"bullet73_rus fg"												"73мм <c(FFAF00)>ОГ-15В<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,66<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>85..150<c(FFFFFF)> м. "}
		{"Bullet76_RUS fg"												"76мм ОФ<c(FFAF00)> ОФ62<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>220<c(FFFFFF)> м."}
		{"bullet80_DM cm"												"НАР 80мм<c(FFAF00)> С-8КО<c(FFFFFF)>\n бронебойность - <c(FF1F00)>420<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet80_DM fg"												"НАР 80мм<c(FFAF00)> С-8ДМ<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,15<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n <c(D781CC)>термобарический<c(FFFFFF)> "}
		{"bullet80_DM fgh"												"НАР 80мм<c(FFAF00)> С-8ОФП<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,9<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>170<c(FFFFFF)> м."}
		{"bullet85_rus ap"												"85мм ББ<c(FFAF00)> Б-365А<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>115<c(FFFFFF)> мм \n дальность - <c(FFAF00)>110<c(FFFFFF)> м."}
		{"bullet85_rus apcr"											"85мм БПС<c(FFAF00)> БР-365П<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м."}
		{"bullet85_rus fg"												"87мм ОФ<c(FFAF00)> О-365К<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,66<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>110<c(FFFFFF)> м."}
		{"bullet100_rus ap"												"100мм БС<c(CCCCCC)> БР412Д<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>130<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м. "}
		{"bullet100_rus apcr"											"100мм БПC<c(4d6ff7)> 3БМ25<c(FFFFFF)><c(00FF00)> «Изомер»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>280<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м. \n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"bullet100_rus cm"												"100мм КС<c(FFAF00)> 3БК17М<c(FFFFFF)><c(00FF00)> «Икра»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>421<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м. "}
		{"bullet100_rus fg"												"100мм ОФ<c(FFAF00)> 3ОФ32<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,69<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>130<c(FFFFFF)> м. "}
		{"bullet100_rus_nav fg"											"100мм ОФ<c(FFAF00)> УЗС-58<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,53<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>296<c(FFFFFF)> м."}
		{"bullet100_rus_rapira apcr"									"100мм БПC<c(4d6ff7)> 3БМ24<c(FFFFFF)><c(00FF00)> «Калач»<c(FFFFFF)> к МТ-12\n бронебойность на 2000 м. - <c(26afeb)>195<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet100_rus_rapira cm"										"100мм КС<c(FFAF00)> 3БК16М<c(FFFFFF)><c(00FF00)> «Кадет»<c(FFFFFF)> к МТ-12\n бронебойность - <c(FF1F00)>432<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet100_rus_rapira fg"										"100мм ОФ<c(FFAF00)> 3ОФ35<c(FFFFFF)> к МТ-12\n масса ВВ - <c(FF1F00)>2,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet100a_RUS fg 2a70ammo"									"100мм ОФ<c(FFAF00)> ЗУОФ17<c(FFFFFF)><c(00FF00)> «Басня-2»<c(FFFFFF)> к 2А70\n масса ВВ - <c(FF1F00)>1,69<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet100a_RUS rok 2a70ammo"									"100мм ТУР<c(FFAF00)> 9М117М1<c(FFFFFF)><c(00FF00)> «Аркан»<c(FFFFFF)> к 2А70\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>165<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"bullet100a_RUS_h fg 2a70ammo"									"100мм ОФ<c(FFAF00)> ЗУОФ19<c(FFFFFF)><c(00FF00)> «Вишня»<c(FFFFFF)> к 2А70\n масса ВВ - <c(FF1F00)>2,3<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>172<c(FFFFFF)> м."}
		{"bullet100a_RUS_h rok 2a70ammo"								"100мм ТУР<c(FFAF00)> 9М117М<c(FFFFFF)><c(00FF00)> «Кан»<c(FFFFFF)> к 2А70\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"bullet105_GER ap bullet105_NATO"								"105mm БС<c(CCCCCC)> DM-512<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>200<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet105_IDF ap bullet105_NATO"								"105mm БС<c(CCCCCC)> M156<c(FFFFFF)>\n бронебойность - <c(26afeb)>200<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet105_IDF apcr bullet105_NATO"							"105mm БПС<c(4d6ff7)> M426<c(FFFFFF)><c(00FF00)> «Hetz 10»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>475<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n вариант для Бундесвера - <c(4d6ff7)>DM-63<c(FFFFFF)>\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet105_IDF cm bullet105_NATO"								"105mm КС<c(FFAF00)> M152<c(FFFFFF)>\n бронебойность - <c(FF1F00)>430<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м." }
		{"bullet105_IDF fg bullet105_NATO"								"105mm ОФ<c(FFAF00)> M117/1<c(FFFFFF)><c(00FF00)> «Harakefet»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n - осколочный ГПЭ - "}
		{"bullet105_IDF sm bullet105_NATO"								"105mm дым.<c(CCCCCC)> M158<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet105_usa ap bullet105_NATO"								"105mm БС<c(CCCCCC)> M393A3<c(FFFFFF)> Mecar\n бронебойность на 2000 м. - <c(26afeb)>200<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet105_usa apcr bullet105_NATO"							"105mm БПС<c(4d6ff7)> M735<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>350<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"bullet105_usa apcr_h bullet105_NATO"							"105mm БПС<c(4d6ff7)> M833<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>420<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet105_usa cm bullet105_NATO"								"105mm КС<c(FFAF00)> M456A2<c(FFFFFF)>\n бронебойность - <c(FF1F00)>390<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."} 
		{"bullet105_usa fg bullet105_NATO"								"105mm ОФ<c(FFAF00)> M494<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n - стреловидные поражаюшие элементы - "}
		{"bullet105_usa sm bullet105_NATO"								"105mm дым.<c(CCCCCC)> M416<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet105a_fr apcr"											"105mm БПС<c(4d6ff7)> OFL 105 F3<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>291<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"bullet105a_fr cm"												"105mm КС<c(FFAF00)> OCC 105 F3<c(FFFFFF)>\n бронебойность - <c(FF1F00)>320<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м."} 
		{"bullet105a_fr fg"												"105mm ОФ<c(FFAF00)> OE 105 F3<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,7<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"bullet105how_uk fg bullet_105_how"							"105mm ОФ<c(FFAF00)> L31A3<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>230<c(FFFFFF)> м."}
		{"bullet105how_uk sm bullet_105_how"							"105mm дым.<c(CCCCCC)> L45<c(FFFFFF)><c(00FF00)> <c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n дальность - <c(FFAF00)>205<c(FFFFFF)> м."}
		{"bullet105how_usa fg bullet_105_how"							"105mm ОФ<c(FFAF00)> M760<c(FFFFFF)><c(00FF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,1<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>205<c(FFFFFF)> м."}
		{"bullet105how_usa sm bullet_105_how"							"105mm дым.<c(FFAF00)> M60A2<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>205<c(FFFFFF)> м." }
		{"bullet115_RUS apcr"											"115мм БПС<c(4d6ff7)> ЗБМ28<c(FFFFFF)><c(00FF00)> «Надфиль»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>380<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet115_RUS apcr_h"											"115мм БПС<c(4d6ff7)> ЗБМ21<c(FFFFFF)><c(00FF00)> «Заступ»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>340<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"bullet115_RUS cm"												"115мм КС<c(FFAF00)> ЗБК15М<c(FFFFFF)><c(00FF00)> «Змея»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>507<c(FFFFFF)> мм \n дальность - <c(FFAF00)>130<c(FFFFFF)> м."}
		{"bullet115_RUS fg"												"115мм ОФ<c(FFAF00)> ЗОФ18<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - увеличенной дальности - "}
		{"bullet115_RUS rok"											"115мм ТУР<c(FFAF00)> 9М117М<c(FFFFFF)><c(00FF00)> «Кан»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"bullet120_2b11_mine fg"										"Mина 120mm ОФ<c(FFAF00)> 3ОФ34<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,43<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>175<c(FFFFFF)> м."}
		{"bullet120_2b11_mine sm"										"Mина 120mm заж.<c(FFAF00)> 3-З-2<c(FFFFFF)>\n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n масса ВВ - <c(FF1F00)>1,94<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>167<c(FFFFFF)> м."}
		{"bullet120_FR apcr bullet120_NATO bullet120_israel"			"120mm БПС<c(4d6ff7)> OFL 120F2<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>580...650<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet120_FR cm bullet120_NATO bullet120_israel"				"120mm КС<c(FFAF00)> OECC F1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_FR fg bullet120_NATO bullet120_israel"				"120mm ОФ<c(FFAF00)> EXPL 120F1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_FR_mine bullet120_RUS bullet120_NATO_mine"			"Mина 120mm ОФ<c(FFAF00)> PR-14<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>181<c(FFFFFF)> м."}
		{"bullet120_FR_mine_h bullet120_RUS bullet120_NATO_mine"		"Mина 120mm ОФ<c(FFAF00)> PRAB<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>181<c(FFFFFF)> м."}
		{"bullet120_FR_mine_l bullet120_RUS bullet120_NATO_mine"		"Mина 120mm <c(FFAF00)> PRECLAIR<c(FFFFFF)>\n - осветительная - \n дальность - <c(FFAF00)>181<c(FFFFFF)> м."}
		{"bullet120_FR_mine_rok bullet120_RUS bullet120_NATO_mine"		"Mина 120mm ОФ<c(FFAF00)> PRPA<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,7<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>207<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet120_ger abm bullet120_NATO"								"120mm ОФ<c(FFAF00)> DM-11<c(FFFFFF)>\n - воздушный подрыв - \n масса ВВ - <c(FF1F00)>2,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - готовые поражаюшие элементы - "}
		{"bullet120_GER apcr bullet120_NATO bullet120_israel"			"120mm БПС<c(4d6ff7)> DM-63A1<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>600...670<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n вариант для ЦАХАЛ - <c(4d6ff7)>M-338<c(FFFFFF)>\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet120_GER cm bullet120_NATO bullet120_israel"				"120mm КС<c(FFAF00)> DM-12A1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>580<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_GER fg bullet120_NATO bullet120_israel"				"120mm ОФ<c(FFAF00)> DM-11<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - готовые поражаюшие элементы - \n вариант для USMC - <c(FFAF00)>Mk324<c(FFFFFF)>"}
		{"bullet120_GER_mine bullet120_RUS"								"Mина 120mm ОФ<c(FFAF00)> DM-91<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,99<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>176<c(FFFFFF)> м."}
		{"bullet120_GER_mine_l bullet120_RUS"							"Mина 120mm <c(FFAF00)> DM-36<c(FFFFFF)>\n - осветительная - \n дальность - <c(FFAF00)>176<c(FFFFFF)> м."}
		{"bullet120_IDF cm bullet120_NATO bullet120_israel"				"120mm КС<c(FFAF00)> M325<c(FFFFFF)> <c(00FF00)> «Hloln»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_IDF fg bullet120_NATO bullet120_israel"				"120mm ОФ<c(FFAF00)> M339<c(FFFFFF)> <c(00FF00)>«Hаtzаv»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,3<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - готовые поражаюшие элементы - "}
		{"bullet120_RUS cm"												"120мм КС<c(FFAF00)> ЗБК19<c(FFFFFF)><c(00FF00)> «Подступ-2»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>600мм<c(FFFFFF)> \n дальность - <c(FFAF00)>70<c(FFFFFF)> м."}
		{"bullet120_RUS fg"												"120мм ОФ<c(FFAF00)> 3ОФ49<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,9<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>188<c(FFFFFF)> м."}
		{"bullet120_RUS rok"											"120мм ОФ<c(FFAF00)> 3ОФ50<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,25<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>206<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet120_RUS tb"												"120мм ТБ<c(FFAF00)> 3ОФ74<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>185<c(FFFFFF)> м.\n - <c(D781CC)>термобарический<c(FFFFFF)> - "}
		{"bullet120_UK ap"												"120mm HESH<c(CCCCCC)> L31A7<c(FFFFFF)>\n бронебойность - <c(26afeb)>300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."} ;obsolete
		{"bullet120_UK apcr"											"120mm БПС<c(4d6ff7)> L26<c(FFFFFF)><c(00FF00)> «CHARM-1»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>580<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet120_UK apcr_h"											"120mm БПС<c(4d6ff7)> L27A1<c(FFFFFF)><c(00FF00)> «CHARM-3»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet120_UK hesh"											"120mm HESH<c(CCCCCC)> L31A7<c(FFFFFF)>\n бронебойность - <c(26afeb)>300<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_UK sm"												"120mm дым.<c(CCCCCC)> L34<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_usa ap bullet120_NATO bullet120_israel"				"120mm БС<c(CCCCCC)> M830A1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>420<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"bullet120_usa apcr bullet120_NATO bullet120_israel"			"120mm БПС<c(4d6ff7)> M829A2<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>680..716<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet120_usa apcr_h bullet120_NATO bullet120_israel"			"120mm БПС<c(4d6ff7)> M829A3<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>770..805<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet120_usa cm bullet120_NATO bullet120_israel"				"120mm КС<c(FFAF00)> M830<c(FFFFFF)>\n бронебойность - <c(FF1F00)>540<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet120_usa fg bullet120_NATO bullet120_israel"				"120mm ОФ<c(FFAF00)> M908<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,97<c(FFFFFF)> кг.\n бронебойность - <c(FF1F00)>350<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - кумулятивно-фугасный - "}
		{"bullet120_usa sm bullet120_NATO bullet120_israel"				"120mm дым<c(FFAF00)><c(FFFFFF)>\n  <c(CCCCCC)> - дымовой - <c(FFFFFF)>  \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n"}
		{"bullet120_USA_mine bullet120_RUS fg"							"Mина 120mm ОФ<c(FFAF00)> M934A1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>2,99<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>176<c(FFFFFF)> м."}
		{"bullet120_USA_mine bullet120_RUS sm"							"Mина 120mm дым.<c(FFAF00)> M929<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>176<c(FFFFFF)> м."}
		{"bullet120_usa_s apcr bullet120_NATO bullet120_israel"			"120mm БПС<c(4d6ff7)> M829A1<c(FFFFFF)><c(00FF00)> «Silver Bullet»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>635..669<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet122_rus cm d30ammo"										"122мм КС<c(FFAF00)> БК13<c(FFFFFF)>\n бронебойность - <c(FF1F00)>520<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м."}
		{"bullet122_rus fg d30ammo"										"122мм ОФ<c(FFAF00)> 3ОФ56<c(FFFFFF)><c(00FF00)> «Лещ»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>210<c(FFFFFF)> м.\n выстрел 3ВОФ82 с уменьшенным зарядом "}
		{"bullet122_rus rok d30ammo"									"122мм ОФ<c(FFAF00)> 3ОФ56<c(FFFFFF)><c(00FF00)> «Лещ»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>230<c(FFFFFF)> м.\n выстрел 3ВОФ81 с полным зарядом "}
		{"bullet122_rus sm d30ammo"										"122мм дым.<c(CCCCCC)> 3Д4<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n дальность - <c(FFAF00)>230<c(FFFFFF)> м."}
		{"bullet122s13 fg"												"НАР 122мм<c(FFAF00)> С-13ОФ<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"bullet125_cn apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм БПС<c(4d6ff7)> DTW-125<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>600<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_cn fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм ОФ<c(FFAF00)> BTJ1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_cn_b cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм КС<c(FFAF00)> BTE2<c(FFFFFF)>\n бронебойность - <c(FF1F00)>650<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_cn_h apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> DTC10-125<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>650<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_h_rus rok 2a46ammo_h 2a82ammo"						"125мм ТУР<c(FFAF00)> 9М119М1<c(FFFFFF)><c(00FF00)> «Инвар-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>900<c(FFFFFF)> мм \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"bullet125_h_rus_impactor"										"<c(CF9FFF)>Impactor 9М119М1 «Инвар-М»</c>"}	;t
		{"bullet125_m_rus rok 2a46ammo_h 2a82ammo"						"125мм ТУР<c(FFAF00)> 9М119М<c(FFFFFF)><c(00FF00)> «Инвар»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>850<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140..160<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"bullet125_m_rus_impactor"										"<c(CF9FFF)>Impactor 9М119М «Инвар»</c>"}	;t
		{"bullet125_rus ap 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм УЧ<c(FFAF00)> 3П31<c(FFFFFF)><c(00FF00)> «Мумия»<c(FFFFFF)>\n - практический - \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_rus apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> 3БМ48<c(FFFFFF)><c(00FF00)> «Свинец»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>648<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet125_RUS apcr_h 2a46ammo_h 2a82ammo"						"125мм БПС<c(4d6ff7)> 3БМ44М<c(FFFFFF)><c(00FF00)> «Лекало»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_RUS cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм КС<c(FFAF00)> 3БК29М<c(FFFFFF)><c(00FF00)> «Брейк»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>700<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n БЧ - тандемная "}
		{"bullet125_RUS cm_e 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм КС<c(FFAF00)> 3БК31<c(FFFFFF)><c(00FF00)> «Старт-2»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>800<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)>экспериментальный<c(FFFFFF)> - "}
		{"bullet125_rus fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм ОФ<c(FFAF00)> 3ОФ26<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_rus rok 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"		"125мм ТУР<c(FFAF00)> 9М119<c(FFFFFF)>\n бронебойность - <c(FF1F00)>770<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140..160<c(FFFFFF)> м.\n тип наведения - в луче лазера "}
		{"bullet125_rus_a cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм КС<c(FFAF00)> 3БК18М<c(FFFFFF)><c(00FF00)> «Надежда-К»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>594<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_rus_b cm 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм КС<c(FFAF00)> 3БК14<c(FFFFFF)>\n бронебойность - <c(FF1F00)>486<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_rus_e apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> EPpSv-97<c(FFFFFF)><c(00FF00)> Synthesia<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>500<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_rus_m apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> 3БМ42<c(FFFFFF)><c(00FF00)> «Манго»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>486<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_rus_o fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм ОФ<c(FFAF00)> 3ОФ19<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,15<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet125_rus_p apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)><c(FFFFFF)><c(00FF00)> «PRONIT»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>540<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - \n вариант <c(4d6ff7)>M-711 mk 2<c(FFFFFF)>"}
		{"bullet125_rus_s1 apcr 2a46ammo_h 2a82ammo"					"125мм БПС<c(4d6ff7)> 3БМ59<c(FFFFFF)><c(00FF00)> «Cвинец-1»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>740<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet125_rus_s2 apcr 2a46ammo_h 2a82ammo"					"125мм БПС<c(4d6ff7)> 3БМ60<c(FFFFFF)><c(00FF00)> «Cвинец-2»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>660<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> - "}
		{"bullet125_rus_t fg 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм ОФ<c(FFAF00)> 3ОФ82<c(FFFFFF)><c(00FF00)> «Тельник»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,0<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n - готовые поражаюшие элементы - "}
		{"bullet125_rus_v apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> 3БМ32<c(FFFFFF)><c(00FF00)> «Вант»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>540<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"bullet125_rus_z apcr 2a46ammo 2a46ammo_h kbaz_ammo 2a82ammo"	"125мм БПС<c(4d6ff7)> 3БМ22<c(FFFFFF)><c(00FF00)> «Заколка»<c(FFFFFF)>\n бронебойность на 2000 м. - <c(26afeb)>410<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"bullet127_USA fg"												"127mm ОФ<c(FFAF00)> Mark 80<c(FFFFFF)><c(CCCCCC)> HE-PD<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>340<c(FFFFFF)> м."}
		{"bullet127_USA rok"											"127mm АР ОФ<c(FFAF00)> ERGM<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>485<c(FFFFFF)> м."}
		{"bullet130_rus_nav fg"											"130мм ОФ<c(FFAF00)> Ф-44<c(FFFFFF)><c(FFAF00)> <c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,44<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>298<c(FFFFFF)> м."}
		{"bullet152 sm"													"bullet152 sm"}	;Obsolete
		{"bullet152_RUS fg"												"152мм ОФ<c(FFAF00)> 3ОФ45<c(FFFFFF)><c(00FF00)> «Наместник-1»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>255...320<c(FFFFFF)> м."}
		{"bullet152_RUS korr"											"152мм корректируемый<c(FFAF00)> 3ОФ39<c(FFFFFF)><c(00FF00)> «Краснополь»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>290...320<c(FFFFFF)> м."}
		{"bullet152_RUS rok"											"152мм кассетный<c(FFAF00)> 3О23<c(FFFFFF)><c(00FF00)> «Настояние»<c(FFFFFF)>\n кумулятивно-осколочные элементы \n дальность - <c(FFAF00)>255...332<c(FFFFFF)> м."}
		{"bullet152_RUS sm"												"<c(CF9FFF)>Loading Mediator bullet152_RUS sm</c>"}	;t
		{"bullet152_rus_a fg bullet152_RUS"								"152мм ОФ<c(FFAF00)> 3ОФ25<c(FFFFFF)><c(00FF00)> «Гриф»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>255<c(FFFFFF)> м."}
		{"bullet152_RUS_a nc"											"152мм тактический ядерный боеприпас<c(FFAF00)> 3БВ3<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n мощность в т.э - <c(FF1F00)>2.5 КТн<c(FFFFFF)> \n дальность - <c(FFAF00)>255...300<c(FFFFFF)> м."}
		{"bullet152_rus_h fg bullet152_RUS"								"152мм ОФ<c(FFAF00)> 3ОФ61<c(FFFFFF)><c(00FF00)> «Алагез»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>290...348<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet152_rus_korr2 fg bullet152_rus"							"152мм ОФ<c(FFAF00)> 3ОФ45<c(FFFFFF)><c(00FF00)> «Наместник-1»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>255...400<c(FFFFFF)> м.\n - корректировка по дальности - "}
		{"bullet155_cn 155_cn cl"										"155мм кассетный<c(FFAF00)> DDB02<c(FFFFFF)><c(00FF00)> ERFB<c(FFFFFF)>\n кумулятивно-осколочные элементы \n дальность - <c(FFAF00)>322<c(FFFFFF)> м."}
		{"bullet155_cn 155_cn fg"										"155мм ОФ<c(FFAF00)> DDB01<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>7,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>322<c(FFFFFF)> м."}
		{"bullet155_cn 155_cn korr"										"155мм корректируемый<c(FFAF00)> 3ОФ39<c(FFFFFF)><c(00FF00)> «Краснополь»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>320<c(FFFFFF)> м."}
		{"bullet155_cn 155_cn satt"										"155мм корректируемый<c(FFAF00)> WS-35<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>480<c(FFFFFF)> м."}
		{"bullet155_cn 155_cn sm"										"155мм дым.<c(CCCCCC)> M92<c(FFFFFF)> <c(00FF00)> ERFB/WP<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>322<c(FFFFFF)> м."}
		{"bullet155_cn_rok 155_cn fg"									"155мм ОФ<c(FFAF00)> DDB03<c(FFFFFF)><c(00FF00)> ERFB-BB/RA<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>3,7<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>423<c(FFFFFF)> м."}
		{"bullet155_GER fg 155ammo"										"155мм ОФ<c(FFAF00)> DM-121<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>11,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>315..350<c(FFFFFF)> м."}
		{"bullet155_GER_ar fg 155ammo"									"155мм ОФ<c(FFAF00)> DM-131<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>9,2<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>350..400<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet155_NATO fg 155ammo"									"155мм ОФ<c(FFAF00)> L15A2<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>11,3<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>315..350<c(FFFFFF)> м.\n -<c(CCCCCC)> вариант для Бундесвера <c(FFAF00)>DM-111<c(FFFFFF)> - "}
		{"bullet155_USA cl 155ammo"										"155мм кассетный<c(FFAF00)> M483A1<c(FFFFFF)>\n кумулятивно-осколочные элементы \n дальность - <c(FFAF00)>258..300<c(FFFFFF)> м."}
		{"bullet155_USA fg 155ammo"										"155мм ОФ<c(FFAF00)> M107<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>262..322<c(FFFFFF)> м.\n -<c(CCCCCC)> вариант для Бундесвера <c(FFAF00)>DM-21<c(FFFFFF)> - \n -<c(CCCCCC)> вариант Великобритании <c(FFAF00)>L-21<c(FFFFFF)> - "}
		{"bullet155_usa nc 155"											"155мм тактический ядерный боеприпас<c(FFAF00)> ХМ-785<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n мощность в т.э - <c(FF1F00)>1.5 КТн<c(FFFFFF)> \n дальность - <c(FFAF00)>262...322<c(FFFFFF)> м."}
		{"bullet155_USA satt 155ammo"									"155мм корректируемый<c(FFAF00)> M982<c(FFFFFF)><c(00FF00)> «Excalibur»<c(FFFFFF)> Block 1A-2\n масса ВВ - <c(FF1F00)>6,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>400..420<c(FFFFFF)> м."}
		{"bullet155_USA spbe 155ammo"									"155мм кассетный<c(FFAF00)> DM702<c(FFFFFF)><c(00FF00)> SMArt<c(FFFFFF)>\n самоприцеливающиеся боевые элементы \n бронебойность - <c(FF1F00)>150<c(FFFFFF)> мм \n дальность - <c(FFAF00)>262..322<c(FFFFFF)> м."}
		{"bullet155_USA_ar fg 155ammo"									"155мм ОФ<c(FFAF00)> M549A1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>340..400<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet155_USA_pgk fg 155ammo"									"155мм ОФ корректируемый<c(FFAF00)> M549A1<c(FFFFFF)>с M1156 PGK\n масса ВВ - <c(FF1F00)>6,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>340..400<c(FFFFFF)> м.\n - донный газогенератор - "}
		{"bullet155_USA_h fg 155ammo"									"155мм ОФ<c(FFAF00)> M795<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>10,8<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>315..350<c(FFFFFF)> м."}
		{"C5 cm"														"НАР 57мм<c(FFAF00)> С-5КО<c(FFFFFF)>\n бронебойность - <c(FF1F00)>172<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"C5 cm_e"														"НАР 57мм<c(FFAF00)> С-5КП<c(FFFFFF)>\n бронебойность - <c(FF1F00)>250<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"C5 fg"														"НАР 57мм ОФ<c(FFAF00)> С-5М0<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,415<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100..130<c(FFFFFF)> м.\n - осколочный - "}
		{"dm11_abm_exp"													"<c(CF9FFF)>EXP DM-11</c>"}	;t
		{"gau-8 ap"														"30x173mm БС<c(4d6ff7)> PGU-14/B<c(FFFFFF)> к GAU-8\n бронебойность на 1000 м. - <c(26afeb)>55<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n -<c(CCCCCC)> урановый сплав<c(FFFFFF)> - "}
		{"gau-8 fg"														"30x173mm ОФЗ<c(FFAF00)> PGU-13/B<c(FFFFFF)> к GAU-8\n масса ВВ - <c(FF1F00)>0,085<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"grenade_spg9 cm"												"73мм <c(FFAF00)>ПГ-9ВС<c(FFFFFF)> к СПГ-9\n бронебойность - <c(FF1F00)>432<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м. "}
		{"grenade_spg9 fg"												"73мм <c(FFAF00)>ОГ-9ВМ<c(FFFFFF)> к СПГ-9\n масса ВВ - <c(FF1F00)>0,66<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>85..150<c(FFFFFF)> м. "}
		{"GSH-30_ammo ap"												"30x165мм БС<c(4d6ff7)> 9А4511<c(FFFFFF)> \n - авиационный - \n бронебойность на 1000 м. - <c(26afeb)>40<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> 9A1610 с ПВУ<c(FFFFFF)> - "}
		{"GSH-30_ammo fg"												"30x165мм ОФЗ<c(FFAF00)> 9А4002К<c(FFFFFF)> \n - авиационный - \n масса ВВ - <c(FF1F00)>0,049<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(CCCCCC)> 9A1609 с ПВУ<c(FFFFFF)> - "}
		{"lahat rok bullet120_israel"									"120mm ТУР<c(00FF00)> LAHAT<c(FFFFFF)>\n бронебойность - <c(FF1F00)>800<c(FFFFFF)> мм \n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n тип наведения - на пятно лазера \n БЧ - тандемная \n - атака сверху - "}
		{"lahat_impactor"												"<c(CF9FFF)>Impactor LAHAT</c>"}	;t
		{"mk30abm apcr"													"30x173мм БПС<c(4d6ff7)> PMC287<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>106<c(FFFFFF)> мм \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сплав<c(FFFFFF)> -"}
		{"mk30abm_abm mk30abm fg"										"30x173мм ОФ<c(FFAF00)> Mk310 PABM-T<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n воздушный подрыв \n дальность - <c(FFAF00)>120<c(FFFFFF)> м.\n - готовые поражаюшие элементы -  "}
		{"mk30abm_fg mk30abm fg"										"30x173мм ОФ<c(FFAF00)> HE-I<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,040<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>120<c(FFFFFF)> м."}
		{"mk30abm_fg_exp"												"<c(CF9FFF)>EXP ABM</c>"}	;t
		{"reflex_impactor"												"<c(CF9FFF)>Impactor Reflex</c>"}	;t
		{"tur_kobra 2a46ammo 2a46ammo_h"								"125мм ТУР<c(FFAF00)> 9М112М<c(FFFFFF)><c(00FF00)> «Кобра-М»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>650<c(FFFFFF)> мм \n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n тип наведения - радиокомандная\n "}
		{"tur_kobra_impactor"											"<c(CF9FFF)>Impactor 9М112М «Кобра-М»</c>"}	;t
		{"tur_kombat kbaz_ammo"											"125мм ТУР<c(00FF00)> «Комбат»<c(FFFFFF)>\n бронебойность - <c(FF1F00)>750<c(FFFFFF)> мм \n дальность - <c(FFAF00)>160<c(FFFFFF)> м.\n тип наведения - в луче лазера\n БЧ - тандемная "}
		{"tur_kombat_impactor"											"<c(CF9FFF)>Impactor «Комбат»</c>"}	;t
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
		{"pom_2"														"<c(FFAF00)>ПОМ-2<c(FFFFFF)> <c(00FF00)>«Отек»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,14<c(FFFFFF)> кг.\n - противопехотная осколочная - "}
		{"spbe_pktm1r_core_impactor"									"<c(CF9FFF)>Impactor SPBE PKTM1R Core</c>"}	;t
		{"spbe_pktm1r_impactor"											"<c(CF9FFF)>Impactor PKTM1R</c>"}			;t
	}
	{"stuff"
		{"antipersonnel mine"											"<c(ffff60)>Противопехотная мина</c>"}
		{"antipersonnel_claymore mine"									"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>M18A1<c(FFFFFF)> <c(00FF00)>«Claymore»<c(FFFFFF)>\n<c(FFFFFF)> - На растяжке - <c(FFFFFF)>"}
		{"antipersonnel_m14 mine"										"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>M14<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antipersonnel_mon50 mine"										"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>МОН-50<c(FFFFFF)>\n<c(FFFFFF)> - Направленного действия - \n - На растяжке - <c(FFFFFF)>"}
		{"antipersonnel_ozm72 mine"										"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>ОЗМ-72<c(FFFFFF)>\n<c(FFFFFF)> - Подпрыгивающая - \n - На растяжке - <c(FFFFFF)>"}
		{"antipersonnel_pmn3 mine"										"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>ПМН-3<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antipersonnel_pob mine"										"<c(ffff60)>Противопехотная мина</c> <c(FFAF00)>ПОБ<c(FFFFFF)>\n<c(FFFFFF)> - Подпрыгивающая - \n - На растяжке - <c(FFFFFF)>"}
		{"antitank mine"												"<c(ffff60)>Противотанковая мина</c>"}
		{"antitank_dm21 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>DM-21<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antitank_dm31 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>DM-31<c(FFFFFF)>\n<c(FFFFFF)> - Противоднищевая - <c(FFFFFF)>"}
		{"antitank_m19 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>M19<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antitank_m21 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>M21<c(FFFFFF)>\n<c(FFFFFF)> - Противоднищевая - <c(FFFFFF)>"}
		{"antitank_pktm1r mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>ПКТМ-1Р<c(FFFFFF)>\n<c(FFFFFF)> - Противокрышевая - \n - Сейсмический датчик - <c(FFFFFF)>"}
		{"antitank_tm46 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>ТМ-46<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antitank_tm62m mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>ТМ-62<c(FFFFFF)>\n<c(FFFFFF)> - Нажимная - <c(FFFFFF)>"}
		{"antitank_tm83 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>ТМ-83<c(FFFFFF)>\n<c(FFFFFF)> - Противобортовая - \n - ИК-датчик - <c(FFFFFF)>"}
		{"antitank_tm89 mine"											"<c(ffff60)>Противотанковая мина</c> <c(FFAF00)>ТМ-89<c(FFFFFF)>\n<c(FFFFFF)> - Противоднищевая - <c(FFFFFF)>"}
		{"at2_mine"														"<c(CF9FFF)>Jumper AT-2</c>"}				;t
		{"c4_bomb"														"Заряд<c(FFFF00)> C4<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>6,5<c(FFFFFF)> кг.\nИспользуйте для расчистки препятствий и подрыва вражеского имущества.</c>"}
		{"cw_fgassist_2to4_5"											"<c(CF9FFF)>Assistor 2 to 4.5</c>"}			;t
		{"cw_fgassist_4_5to8"											"<c(CF9FFF)>Assistor 4.5 to 8</c>"}			;t
		{"cw_fgassist_07to2"											"<c(CF9FFF)>Assistor 7 to 2</c>"}			;t
		{"cw_fgassist_8to30"											"<c(CF9FFF)>Assistor 8 to 30</c>"}			;t
		{"cw_fgassist_over30"											"<c(CF9FFF)>Assistor Over 30</c>"}			;t
		{"cw_human_secdamage2"											"<c(CF9FFF)>Assistor Second Damage 2</c>"}	;t
		{"cw_human_secdamage3"											"<c(CF9FFF)>Assistor Second Damage 3</c>"}	;t
		{"dynamite"														"<c(ffff60)>Заряд тротила</c>"}
		{"dynamite_radio1"												"Динамит с радиовзрывателем №1"}
		{"dynamite_radio2"												"Динамит с радиовзрывателем №2"}
		{"dynamite_radio3"												"Динамит с радиовзрывателем №3"}
		{"dynamite_radio4"												"Динамит с радиовзрывателем №4"}
		{"explosion_0_5kg"												"<c(CF9FFF)>Service 0.5kg</c>"}				;t
		{"explosion_1kg"												"<c(CF9FFF)>Service 1kg</c>"}				;t
		{"explosion_2kg"												"<c(CF9FFF)>Service 2kg</c>"}				;t
		{"explosion_4kg"												"<c(CF9FFF)>Service 4kg</c>"}				;t
		{"explosion_10kg"												"<c(CF9FFF)>Service 10kg</c>"}				;t
		{"explosion_50kg"												"<c(CF9FFF)>Service 50kg</c>"}				;t
		{"explosion_200kg"												"<c(CF9FFF)>Service 200kg</c>"}				;t
		{"explosion_1000kg"												"<c(CF9FFF)>Service 1000kg</c>"}			;t
		{"explosion_5000kg"												"<c(CF9FFF)>Service 5000kg</c>"}			;t
		{"flashmine"													"<c(ffff60)>Сигнальная мина\n<c(FFFFFF)>При срабатывании запускает сигнальную ракету."}
		{"flashmine_jumper"												"<c(CF9FFF)>Jumper Flash Mine</c>"}	;t
		{"frogmine"														"Мина-лягушка"}
		{"frogmine_jumper"												"<c(CF9FFF)>Jumper Frog Mine</c>"}	;t
		{"mine_antipersonnel_ozm72_j"									"<c(CF9FFF)>Jumper OZM-72 Mine</c>"}	;t
		{"mine_antipersonnel_pob_j"										"<c(CF9FFF)>Jumper POB Mine</c>"}	;t
		{"pfm-1"														"<c(FFAF00)>ПФМ-1<c(FFFFFF)> <c(00FF00)>«Лепесток»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,04<c(FFFFFF)> кг.\n - противопехотная фугасная - "}
		{"pom_2_installed"												"<c(CF9FFF)>Impactor POM-2</c>"}	;t
		{"ptm-1"														"<c(FFAF00)>ПТМ-1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1,1<c(FFFFFF)> кг.\n - противотанковая противогусеничная - "}
		{"signal_m49a1 mine"											"<c(ffff60)><c(ffff60)>Сигнальная мина</c> <c(FFAF00)>M49A1<c(FFFFFF)>\n<c(FFFFFF)>При срабатывании запускает сигнальную ракету."}
		{"signal_sm320 mine"											"<c(ffff60)><c(ffff60)>Сигнальная мина</c> <c(FFAF00)>СМ320<c(FFFFFF)>\n<c(FFFFFF)>При срабатывании запускает сигнальную ракету."}
	}
	{"weapon"
		{"URP"															"УРП для<c(FFAF00)> ПОМ-2<c(FFFFFF)>"}
	}
;flame
	{"ammo"
		
	}
	{"stuff"
		{"balloon"														"<c(ffff60)>Канистра с топливом</c>"}	;vanilla
		{"balloon_lpo50"												"Бак <c(FFAF00)> ЛПО-50<c(FFFFFF)>"}
		{"type02c_barrel"												"Бак <c(FFAF00)> Type-02C<c(FFFFFF)>"}
	}
	{"weapon"
		{"flamegun"														"Огнемёт"}
		{"lpo50"														"Огнемёт <c(FFAF00)> ЛПО-50<c(FFFFFF)>"}
		{"type02c_weap"													"Огнемёт <c(FFAF00)> Type-02C<c(FFFFFF)>"}
	}
;grenade
	{"ammo"
		{"35x32ammo cm"													"35x32mm граната кум.<c(FFAF00)> DFJ87-35<c(FFFFFF)> \n бронебойность - <c(FF1F00)>70<c(FFFFFF)> мм \n дальность - <c(FFAF00)>92<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"35x32ammo fg"													"35x32mm граната оск.<c(FFAF00)> DFS87-35<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>0,04<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>92<c(FFFFFF)> м."}
		{"40x46ammo 40x46_gerpg cm"										"40x46mm граната кум.<c(00FF00)> Arges<c(FFFFFF)><c(FFAF00)> HEDP92<c(FFFFFF)>\n бронебойность - <c(FF1F00)>40<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n- готовые поражаюшие элементы - "}
		{"40x46ammo 40x46_gerpg fg"										"40x46mm граната оск.<c(00FF00)> Arges<c(FFFFFF)><c(FFAF00)> HEFRAG92-A2<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,033<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n- готовые поражаюшие элементы -"}
		{"40x46ammo 40x46_natopg cm"									"40x46mm граната кум.<c(FFAF00)> MK313<c(FFFFFF)> Rheinmetall\n бронебойность - <c(FF1F00)>80<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"40x46ammo 40x46_natopg fg"									"40x46mm граната оск.<c(FFAF00)> DM-101A2<c(FFFFFF)> Diehl\n масса ВВ - <c(FF1F00)>0,03<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n- готовые поражаюшие элементы -"}
		{"40x53ammo 40x53_gerpg cm"										"40x53mm граната кум.<c(FFAF00)> DM-42<c(FFFFFF)> Diehl\n бронебойность - <c(FF1F00)>70<c(FFFFFF)> мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"40x53ammo 40x53_gerpg fg"										"40x53mm граната оск.<c(FFAF00)> DM-121<c(FFFFFF)> Diehl\n масса ВВ - <c(FF1F00)>0,039<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n- готовые поражаюшие элементы - "}
		{"40x53ammo 40x53_natopg cm"									"40x53mm граната кум.<c(FFAF00)> HEDP ESD<c(FFFFFF)> Rheinmetall\n бронебойность - <c(FF1F00)>80<c(FFFFFF)> мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"40x53ammo 40x53_natopg fg"									"40x53mm граната оск.<c(FFAF00)> HE ESD<c(FFFFFF)> Rheinmetall\n масса ВВ - <c(FF1F00)>0,065<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>105<c(FFFFFF)> м."}
		{"40x53ammo 40x53_usapg cm"										"40x53mm граната кум.<c(FFAF00)> M-430A1<c(FFFFFF)>\n бронебойность - <c(FF1F00)>76<c(FFFFFF)> мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"40x53ammo mk19_ammo cm"										"40x53mm граната кум.<c(FFAF00)> M-430<c(FFFFFF)>\n бронебойность - <c(FF1F00)>50<c(FFFFFF)> мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"40x53ammo mk19_ammo fg"										"40x53mm граната оск.<c(FFAF00)> M-384<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,054<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>105<c(FFFFFF)> м."}
		{"cn_pg fg"														"35x32mm подств.выстрел<c(FFAF00)> DFS-10<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,032<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"gm94ammo fg"													"43мм граната оск.<c(FFAF00)> ВГМ93.900<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,16<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo flash"												"43мм граната<c(FFAF00)> ВГМ93.400<c(FFFFFF)>\n - светозвуковая -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo gas"													"43мм граната<c(FFAF00)> ВГМ93.200<c(FFFFFF)>\n - газовая -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo gas_short"											"43мм граната<c(FFAF00)> ВГМ93.500<c(FFFFFF)>\n - аэрозольная -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo l"													"43мм граната<c(FFAF00)> ВГМ93.1200<c(FFFFFF)>\n - осветительная -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo rubber"												"43мм граната<c(FFAF00)> ВГМ93.600<c(FFFFFF)>\n - маркерная -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo sm"													"43мм граната<c(FFAF00)> ВГМ93.300<c(FFFFFF)>\n - дымовая -  \n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"gm94ammo tb"													"43мм граната фуг.<c(FFAF00)> ВГМ93.100<c(FFFFFF)>\n масса огнесмеси - <c(FF1F00)>0,16<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>63<c(FFFFFF)> м. "}
		{"grenade_famas cm"												"Винтовочная граната<c(FFAF00)> AC 58<c(FFFFFF)>\n бронебойность - <c(FF1F00)>350<c(FFFFFF)> мм \n дальность - <c(FFAF00)>49<c(FFFFFF)> м."}
		{"grenade_famas fg"												"Винтовочная граната<c(FFAF00)> APAV 40<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,08<c(FFFFFF)> кг.\n бронебойность - <c(FF1F00)>100<c(FFFFFF)> мм \n дальность - <c(FFAF00)>49<c(FFFFFF)> м."}
		{"grenade_famas sm"												"Винтовочная граната<c(FFAF00)> FUM 50<c(FFFFFF)>\n дальность - <c(FFAF00)>49<c(FFFFFF)> м.\n - дымовая -"}
		{"grenade_xm25 cm"												"25x40mm граната к XM25 \n бронебойность - <c(FF1F00)>50<c(FFFFFF)> мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м."}
		{"grenade_xm25 fg"												"25x40mm граната к XM25 \n масса ВВ - <c(FF1F00)>0,04<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>72<c(FFFFFF)> м."}
		{"mortar pd a"													"подств.выстрел<c(FFAF00)> ВОГ-25<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,048<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"mortar pd l"													"подств.выстрел<c(FFAF00)> ВОГ-40И<c(FFFFFF)>\n - осветительная - \n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"mortar pd m"													"подств.выстрел<c(FFAF00)> ВОГ-25M<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,068<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"mortar pd p"													"подств.выстрел<c(FFAF00)> ВОГ-25П<c(FFFFFF)><c(00FF00)> «Подкидыш»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,041<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n - подпрыгиваюшая - "}
		{"mortar pd pm"													"подств.выстрел<c(FFAF00)> ВОГ-25ПM<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,056<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n - подпрыгиваюшая - "}
		{"mortar pdb"													"30x29мм выстрел<c(FFAF00)> BОГ-17М<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,04<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>92<c(FFFFFF)> м."}
		{"mortar pdd"													"30x29мм выстрел<c(FFAF00)> BОГ-30Д<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,04<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>105<c(FFFFFF)> м."}
		{"nato_pg cm"													"40x46mm граната кум.<c(FFAF00)> M-433<c(FFFFFF)>\n бронебойность - <c(FF1F00)>63<c(FFFFFF)> мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n - кумулятивно-осколочный - "}
		{"nato_pg fg"													"40x46mm граната оск.<c(FFAF00)> M-406<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,032<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м."} 
		{"nato_pg l"													"40x46mm граната <c(FFAF00)> M-583A1<c(FFFFFF)>\n - осветительная - \n дальность - <c(FFAF00)>53<c(FFFFFF)> м."}
		{"nato_pg p"													"40x46mm граната оск.<c(FFAF00)> M-397А1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,032<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n - подпрыгиваюшая -"}
	}
	{"stuff"
		;01 grenade_ap
			{"f1"														"Руч.граната<c(FFAF00)> Ф1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>25<c(FFFFFF)> м.\n - оборонительная - "}
			{"f1_script"												"Руч.граната<c(FFAF00)> Ф1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>25<c(FFFFFF)> м.\n - оборонительная - "}
			{"m61"														"Руч.граната<c(FFAF00)> М61<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,165<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>27<c(FFFFFF)> м.\n - оборонительная - "}
		{"dm51gr"														"Руч.граната<c(FFAF00)> DM-51<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,060<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>28<c(FFFFFF)> м.\n - оборонительная - \n - осколочный ГПЭ - "}
		{"grenade_xm25_fg_exp"											"<c(CF9FFF)>EXP XM25 Grenade</c>"}	;t
		{"l109a1"														"Руч.граната<c(FFAF00)> L109A1<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,155<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>28<c(FFFFFF)> м.\n - наступательная - "}
		{"m67"															"Руч.граната<c(FFAF00)> М67<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,184<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>29<c(FFFFFF)> м.\n - наступательная - "}
		{"m397p_exp"													"<c(CF9FFF)>EXP M397</c>"}	;t
		{"of37_grenade"													"Руч.граната<c(FFAF00)> OF-37<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,115<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>28<c(FFFFFF)> м.\n - наступательная - "}
		{"rgd"															"Руч.граната<c(FFAF00)> РГД-5<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,11<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n - наступательная - "}
		{"rgn"															"Руч.граната<c(FFAF00)> РГН<c(FFFFFF)><c(00FF00)> «Подвал»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,114<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n - наступательная - "}
		{"rgo"															"Руч.граната<c(FFAF00)> РГО<c(FFFFFF)><c(00FF00)> «Погреб»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,092<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>26<c(FFFFFF)> м.\n - оборонительная - "}
		{"rgz-89"														"Руч.граната<c(FFAF00)> RGZ-89<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,11<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n - наступательная - "}
		{"rkg3"															"Руч.граната<c(FFAF00)> РКГ-3ЕМ<c(FFFFFF)>\n бронебойность - <c(FF1F00)>250<c(FFFFFF)> мм \n дальность - <c(FFAF00)>14<c(FFFFFF)> м.\n - противотанковая - "}
		{"smoke"														"<c(ffff60)>Дымовая граната</c>"}
		{"smoke m18"													"<c(ffff60)>Дымовая граната M18</c>"}
		{"smoke rdg2b"													"<c(ffff60)>Дымовая граната РДГ-2Б</c>"}
		{"smoke smoke_cn"												"<c(ffff60)>Дымовая граната</c>"}
		{"smoke smoke_fr"												"<c(ffff60)>Дымовая граната</c>"}
		{"smoke smoke_gb"												"<c(ffff60)>Дымовая граната</c>"}
		{"smoke smoke_ger"												"<c(ffff60)>Дымовая граната</c>"}
		{"type73"														"Руч.граната<c(FFAF00)> Type 73<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,07<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n - наступательная - "}
		{"type86p"														"Руч.граната<c(FFAF00)> DRH181<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,07<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>26<c(FFFFFF)> м.\n - оборонительная - "}
		{"urg86"														"Руч.граната<c(FFAF00)> URG-86<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,042<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>29<c(FFFFFF)> м.\n - наступательная - "}
		{"vog_25p_exp"													"<c(CF9FFF)>EXP VOG-25P</c>"}	;t
		{"vog_25pm_exp"													"<c(CF9FFF)>EXP VOG-25PM</c>"}	;t
	}
	{"weapon"
		
	}
;head
	{"ammo"
		
	}
	{"stuff"
		{"1m_helmet_ua"													"Шлем <c(00FF00)>1М<c(FFFFFF)>  ВС Украины\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"1m_helmet_uavdv"												"Шлем <c(00FF00)>1М<c(FFFFFF)> ВДВ ВС Украины\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b7"															"Шлем <c(00FF00)>6Б7<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"6b7_1"														"Шлем <c(00FF00)>6Б7<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"6b7_2"														"Шлем <c(00FF00)>6Б7<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"6b47"															"Шлем <c(00FF00)>6Б47<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_headphones"												"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с наушниками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_valken_bel"												"Шлем <c(00FF00)>6Б47<c(FFFFFF)> ВС Белоруссии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47_valken_belvdv"											"Шлем <c(00FF00)>6Б47<c(FFFFFF)> ВДВ ВС Белоруссии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}		
		{"6b47che"														"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che_headphones"											"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом и наушниками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che1"														"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che1_headphones"											"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом и наушниками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che2"														"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b47che2_headphones"											"Шлем <c(00FF00)>6Б47<c(FFFFFF)> с чехлом и наушниками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"6b48_helmet"													"Шлем <c(00FF00)>6Б48<c(FFFFFF)> танкиста ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"afv-400"														"Шлем <c(00FF00)>AFV-400<c(FFFFFF)> танкиста ВС Великобритании\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"alpha700"														"Шлем <c(00FF00)>Alpha 700<c(FFFFFF)> пилота ВВС Великобритании\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"altin_helm"													"Шлем <c(00FF00)>Алтын<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"altin1_helm"													"Шлем <c(00FF00)>Алтын<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"beret_borderguard_bel"										"Берет пограничника Белоруссии"}
		{"beret_brit"													"Берет ВС Великобритании"}
		{"beret_britraf"												"Берет ВВС Великобритании"}
		{"beret_brittank"												"Берет танкиста ВС Великобритании"}
		{"beret_cz"														"Берет ВС Чехии"}	
		{"beret_fra"													"Берет ВС Франции"}
		{"beret_fracz"													"Берет ВС НАТО"}
		{"beret_frg"													"Берет ВС ФРГ"}
		{"beret_frgtank"												"Берет танкиста ВС ФРГ"}
		{"beret_irq"													"Берет ВС Ирака"}
		{"beret_lat"													"Берет ВС Латвии"}
		{"beret_rusmarines"												"Берет морской пехоты России"}
		{"beret_sas"													"Берет  SAS"}
		{"beret_taj"													"Берет ВС Таджикистана"}
		{"beret_usa"													"Берет ВС США"}
		{"beret_usara"													"Берет рейнджеров США"}
		{"beret_usarmy"													"Беретармейский ВС США"}
		{"beret_vdv"													"Берет ВДВ России"}
		{"beret_vdv_bel"												"Берет ВДВ Белоруссии"}
		{"beret_vp"														"Берет военной полиции России"}
		{"beret_vv"														"Берет внутренних войск России"}
		{"cap_afgan"													"Афганка"}
		{"cap_baseball"													"Бейсболка "}
		{"cap_baseball_peltor"											"Бейсболка с наушниками "}
		{"cap_baseball_peltor_od"										"Бейсболка с наушниками "}
		{"cap_baseball_syr"												"Бейсболка ВС Сирии"}
		{"cap_baseball_tur"												"Бейсболка ВС Турции"}
		{"cap_black"													"Кепка черная"}
		{"cap_cn"														"Кепка ВС Китая"}
		{"cap_cu"														"Кепка ВС Кубы"}
		{"cap_cu_spec"													"Кепка ВС Кубы"}
		{"cap_cz"														"Кепка ВС Чехии"}
		{"cap_est"														"Кепка ВС Эстонии"}
		{"cap_flora"													"КепкаФлора  "}
		{"cap_furajka"													"Фуражка "}
		{"cap_furajka_chflot"											"Фуражка ВМФ России"}
		{"cap_ger"														"Кепка ВС ФРГ"}
		{"cap_iran"														"Кепка ВС Ирана"}
		{"cap_lit"														"Кепка ВС Литвы"}
		{"cap_office"													"Кепка офисная ВС России"}
		{"cap_olive"													"Кепка оливковая "}
		{"cap_panama"													"Панама"}
		{"cap_panama_cn"												"Панама ВС Китая"}
		{"cap_panama_cz"												"Панама ВС Чехии"}
		{"cap_panama_ger"												"Панама ВС ФРГ"}
		{"cap_panama_hun"												"Панама ВС Венгрии"}
		{"cap_panama_jsdf"												"Панама ВС Японии"}
		{"cap_panama_lit"												"Панама ВС Литвы"}
		{"cap_panama_taiwan"											"Панама ВС Тайваня"}
		{"cap_panama_uavaran"											"Панама ВС Украины"}
		{"cap_pilot"													"Пилотка ВВС России"}
		{"cap_pilot_poland"												"Пилотка Польши"}
		{"cap_syr"														"Кепка ВС Сирии"}
		{"cap_taj"														"Кепка ВС Таджикистана"}
		{"cap_ua"														"Кепка ВС Украины"}
		{"cap_usa"														"Кепка ВС США"}
		{"cap_usa2003"													"Кепка ВС США обр. 2003г"}
		{"cap_ushanka"													"Ушанка ВКПО ВС России"}
		{"cap_ushanka_cn"												"Ушанка ВС Китая"}
		{"cap_ushanka2"													"Ушанка "}
		{"cap_usmc"														"Кепка КМП США"}
		{"cap_vkpo"														"Кепка ВКПО ВС России"}
		{"cap_vkpo_old"													"Кепка ВКПО старого образца ВС России"}
		{"cap_wool"														"Шапка вязаная "}
		{"cvc_helmet"													"Шлем <c(00FF00)>CVC<c(FFFFFF)> танкиста \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"cvc_helmet_eps21"												"Шлем <c(00FF00)>CVC<c(FFFFFF)> танкиста с очками EPS-21 \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"cvc_helmet_valken"											"Шлем <c(00FF00)>CVC<c(FFFFFF)> танкиста с очками \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"ech_helmet"													"Шлем <c(00FF00)>ECH<c(FFFFFF)>  ВС США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"ech_helmet_geo"												"Шлем <c(00FF00)>ECH<c(FFFFFF)>  ВС Грузии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"elmo_dh-586"													"Шлем <c(00FF00)>ELMO DH-586<c(FFFFFF)> танкиста ВС Франции\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"fmj08"														"Противогаз <c(00FF00)>FMJ-08<c(FFFFFF)>  ВС Китая"}
		{"frns"															"Противогаз <c(00FF00)>Fernez Panoramasque<c(FFFFFF)>  ВС Франции"}
		{"gp5"															"Противогаз <c(00FF00)>ГП-5<c(FFFFFF)>  ВС России"}
		{"helmet_jsdf"													"Шлем <c(00FF00)>Type 66<c(FFFFFF)> ВС Японии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_m826"													"Шлем <c(00FF00)>M826<c(FFFFFF)>  ВС ФРГ\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_m826_driver"											"Шлем <c(00FF00)>M826<c(FFFFFF)> водителя ВС ФРГ\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_mk7"													"Шлем <c(00FF00)>Mk7<c(FFFFFF)>  ВС Великобритании\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"helmet_mk7_net"												"Шлем <c(00FF00)>Mk7<c(FFFFFF)> сеткой ВС Великобритании\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"hgu55_plane"													"Шлем <c(00FF00)>HGU-55<c(FFFFFF)> пилота \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"hgu56_heli"													"Шлем <c(00FF00)>HGU-56<c(FFFFFF)> вертолетчика \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"idf_or201_mitznefet"											"Шлем <c(00FF00)>OR-201<c(FFFFFF)>  ВС Израиля\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"idf_or201_spec"												"Шлем <c(00FF00)>OR-201<c(FFFFFF)> с мицнефетом ВС Израиля\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"ihadss"														"Шлем <c(00FF00)>IHADSS<c(FFFFFF)> пилота AH-64 \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"kufia_head"													"Куфия"}
		{"lshz1plus_sso"												"Шлем <c(00FF00)>ЛШЗ-1 плюс<c(FFFFFF)>  ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_com"											"Шлем <c(00FF00)>ЛШЗ-1 плюс<c(FFFFFF)> ком. отделения ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_com_open"										"Шлем <c(00FF00)>ЛШЗ-1 плюс<c(FFFFFF)> ком. отделения ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"lshz1plus_sso_open"											"Шлем <c(00FF00)>ЛШЗ-1 плюс<c(FFFFFF)>  ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"lwh_helmet"													"Шлем <c(00FF00)>LWH<c(FFFFFF)>  КМП США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"m50"															"Противогаз <c(00FF00)>M50<c(FFFFFF)>  ВС США"}
		{"m80_helmet"													"Шлем <c(00FF00)>M80<c(FFFFFF)>  ВС Ирака\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"m80_helmet_guard"												"Шлем <c(00FF00)>M80<c(FFFFFF)>  Республиканской гвардии Ирака\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"m2000"														"Противогаз <c(00FF00)>M2000<c(FFFFFF)>  ВС ФРГ"}
		{"mich2000"														"Шлем <c(00FF00)>MICH2000<c(FFFFFF)> ВС Тайваня\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   1Er Rpima\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_com"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  1Er Rpima\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_com_open"									"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  1Er Rpima\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_1er_rpima_open"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   1Er Rpima\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_cn"													"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_cn_open"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_com_cn"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_com_cn_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Delta Force\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_com"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  Delta Force\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_com_open"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  Delta Force\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_delta_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Delta Force\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk"													"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   KSK\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_com"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  KSK\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_com_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  KSK\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_ksk_open"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   KSK\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  рейнджеров США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_com"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения рейнджеров США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_com_open"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения рейнджеров США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_rangers_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  рейнджеров США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sas"													"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   SAS\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Sayeret Matkal\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_com"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  Sayeret Matkal\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_com_open"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения  Sayeret Matkal\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sayeret_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>   Sayeret Matkal\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Navy Seals США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_com"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения Navy Seals США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_com_open"										"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения Navy Seals США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_seals_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  Navy Seals США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso"													"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_com"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_com_open"											"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)> ком. отделения ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"opscore_sso_open"												"Шлем <c(00FF00)>Ops-Core FAST<c(FFFFFF)>  ССО России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pakol"														"Пуштунка"}
		{"panama_afgan"													"Панама афганка"}
		{"panama_cuba"													"Панама ВС Кубы"}
		{"pasgt_helmet"													"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_6b50_kz"											"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Казахстана\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_6b50_taj"										"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Таджикистана\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_cz"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>  ВС Чехии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_est"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Эстонии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_hun"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>  ВС Венгрии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_iran"											"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Ирана\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_lat"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Латвии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_lit"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   ВС Литвы\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_od"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>   \nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_pol"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>  ВС Польши\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_syr"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>  ВС Сирии\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_tur"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)>  ВС Турции\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_ucp"												"Шлем <c(00FF00)>PASGT<c(FFFFFF)> UCP ВС США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_valken"											"Шлем <c(00FF00)>PASGT<c(FFFFFF)> с очками ВС США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"pasgt_helmet_valken_ucp"										"Шлем <c(00FF00)>PASGT<c(FFFFFF)> UCP с очками ВС США\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"peltor_comtac"												"Наушники <c(00FF00)>Peltor Comtac<c(FFFFFF)>  "}
		{"pmk3"															"Противогаз <c(00FF00)>ПМК-3<c(FFFFFF)>  ВС России"}
		{"pmk4"															"Противогаз <c(00FF00)>ПМК-4<c(FFFFFF)>  ВС России"}
		{"qgf03"														"Шлем <c(00FF00)>QGF-03<c(FFFFFF)>  ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"qgf03_glasses"												"Шлем <c(00FF00)>QGF-03<c(FFFFFF)>  ВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"s10_gasmask"													"Противогаз <c(00FF00)>S-10<c(FFFFFF)>  ВС Великобритании"}
		{"scuba_mask"													"Маска для подводного плавания"}
		{"sh-68"														"Шлем <c(00FF00)>СШ-68<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_flora"													"Шлем <c(00FF00)>СШ-68<c(FFFFFF)> с чехлом ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_setka"													"Шлем <c(00FF00)>СШ-68<c(FFFFFF)> с сеткой ВС России\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"sh-68_ua"														"Шлем <c(00FF00)>СШ-68<c(FFFFFF)>  ВС Украины\nКласс защиты <c(FF0000)>1<c(FFFFFF)> "}
		{"spectra_helmet"												"Шлем <c(00FF00)>SPECTRA<c(FFFFFF)>  ВС Франции\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"sphera"														"Шлем <c(00FF00)>Сфера<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"telemit_h-280"												"Шлем <c(00FF00)>Telemit H-280<c(FFFFFF)> танкиста ВС ФРГ\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"tk11c_helmet"													"Шлем <c(00FF00)>TK-11C<c(FFFFFF)> летчика ВВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"tmt5_helmet"													"Шлем <c(00FF00)>TMT-5<c(FFFFFF)> танкиста ВС Китая"}
		{"topowl"														"Шлем <c(00FF00)>TopOwl<c(FFFFFF)> пилота Tiger ВВС Франции\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"tsh3l"														"Шлем <c(00FF00)>ТШ-3Л<c(FFFFFF)> танкиста "}
		{"tsh3l_poland"													"Шлем <c(00FF00)>ТШ-3Л<c(FFFFFF)> танкиста ВС Польши"}
		{"z10_pilot_helmet"												"Шлем вертолетчика Z-10 ВВС Китая\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1"															"Шлем <c(00FF00)>ЗШ-1<c(FFFFFF)>  ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1_1"														"Шлем <c(00FF00)>ЗШ-1<c(FFFFFF)> с очками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh1_2"														"Шлем <c(00FF00)>ЗШ-1<c(FFFFFF)> с очками ВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh7apn"														"Шлем <c(00FF00)>ЗШ-7АПН<c(FFFFFF)> летчика ВВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
		{"zsh7v"														"Шлем <c(00FF00)>ЗШ-7В<c(FFFFFF)> вертолетчика ВВС России\nКласс защиты <c(FF0000)>2<c(FFFFFF)> "}
	}
	{"weapon"
		
	}
;Mask
	{"ammo"
		
	}
	{"stuff"
		{"head_rad"														"Наушники радиста"}
		{"leshii_helm"													"Маска Леший-бандана"}
		{"Platok_mask"													"Маска ЧН  Платок на лицо"}
		{"sas_mask"														"Маска"}
		{"spec_gaz"														"Маска РФ Противогаз"}
	}
	{"weapon"
		
	}
;med
	{"ammo"
		
	}
	{"stuff"
		{"medkit"														"<c(ffff60)>Аптечка</c>"}	;vanilla
	}
	{"weapon"
		
	}
;melee
	{"ammo"
		
	}
	{"stuff"
		{"axe"															"<c(ffff60)>Топор <c(FFFFFF)>\nИспользуйте для рубки деревьев."}
		{"ballistic_knife"												"<c(ffff60)>Нож</c>"}
		{"crow_bar"														"<c(ffff60)>Лом</c>"}	;vanilla
		{"knife_army"													"<c(ffff60)>Нож</c>"}
		{"knife_bowie"													"<c(ffff60)>Нож</c>"}
		{"knife_cn"														"<c(ffff60)>Нож</c>"}
		{"knife_ger"													"<c(ffff60)>Нож</c>"}
		{"knife_japan"													"<c(ffff60)>Нож</c>"}
		{"knife_old"													"<c(ffff60)>Нож</c>"}
		{"knife_rus"													"<c(ffff60)>Нож</c>"}
		{"knife_union"													"<c(ffff60)>Нож</c>"}
		{"knife1"														"<c(ffff60)>Нож</c>"}
		{"rambo_knife"													"<c(ffff60)>Нож</c>"}
	}
	{"weapon"
		
	}
;mgun
	{"ammo"
		{"50Nato"														"Патроны 12,7x99mm<c(FFFF00)> М2<c(FFFFFF)>\n бронебойность на 500 м. - <c(26afeb)>19<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100...105<c(FFFFFF)> м."}	
		{"50NatoAP"														"Патроны 12,7x99mm<c(FFFF00)> М903<c(FFFFFF)><c(00FF00)> SLAP<c(FFFFFF)>\n бронебойность на 1200 м. - <c(26afeb)>23<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100...105<c(FFFFFF)> м.\n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - \n - применение с<c(FFAF00)> М2НВ<c(FFFFFF)> - "}
		{"556NatoMB"													"Патроны 5,56x45mm x100<c(FFAF00)> SS109<c(FFFFFF)> "}	
		{"762cn_200ammo"												"Патроны 7,62x51mm<c(FFAF00)> DJP-201<c(FFFFFF)>\n"}
		{"762Nato"														"Патроны 7,62x51mm<c(FFAF00)> М80<c(FFFFFF)>\n вариант для Бундесвера - <c(FFAF00)>DM-111<c(FFFFFF)>"}
		{"dshkm_ammo"													"Используйте патроны для НСВ"} ;HCB
		{"Hcb_ammo"														"Патроны 12,7x108мм<c(FFFF00)> Б-32<c(FFFFFF)>\n бронебойность на 500 м. - <c(26afeb)>20<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85...105<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"Kpvt_ammo kpvtammo"											"Патроны 14,5x114мм<c(FFFF00)> Б-32<c(FFFFFF)>\n бронебойность на 500 м. - <c(26afeb)>30<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"Kpvt_bst kpvtammo"											"Патроны 14,5x114мм<c(FFFF00)> БС<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>20<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - \n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"Kpvt_mdz kpvtammo"											"Патроны 14,5x114мм<c(FFFF00)> МДЗ<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м. \n -<c(d7cc81)> осколочно<c(FFFFFF)>/<c(FF1F00)>зажигательные<c(FFFFFF)> - "}
		{"kpvtammo"														"<c(CF9FFF)>Loading Mediator kpvtammo</c>"}	;t
		{"M61ammo vulcan20mm"											"20x102mm БЗТ<c(FFAF00)> M53<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>11<c(FFFFFF)> мм \n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"M61ammo vulcan20mmA"											"20x102mm ОФ<c(FFAF00)> PGU28A/B<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>10<c(FFFFFF)> мм \n масса ВВ - <c(FF1F00)>0,006<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n -<c(FF1F00)> зажигательные<c(FFFFFF)> - "}
		{"M61ammo vulcan20mmB"											"20x102mm БС<c(00FF00)> FAP<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>22<c(FFFFFF)> мм \n дальность - <c(FFAF00)>90<c(FFFFFF)> м.\n -<c(CCCCCC)> осколочный<c(FFFFFF)> - "}
		{"PKM_ammo"														"Патроны 7,62x54мм<c(FFAF00)> ЛПС<c(FFFFFF)>"}	
		{"ptr"															"<c(CF9FFF)>Loading PTR</c>"}	;t
		{"RPK_ammo"														"Патроны 5,45x39мм x70<c(FFAF00)> 7H6<c(FFFFFF)> "}	
	}
	{"stuff"
		
	}
	{"weapon"
		{"browning_m2hb"												"Пулемёт<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}	
		{"browning_m2hb_twin"											"Пулемёт<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}		
		{"browning_m2hb_avenger"										"Пулемёт<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa. "}	
		{"browning_m2hb_optic"											"Пулемёт<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n калибр 12,7x99 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}	
		{"Dshk_m"														"Пулемёт<c(FFAF00)> ДШКМ<c(FFFFFF)> \n калибр 12,7x108 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}
		{"dt_cw"														"Пулемёт<c(FFAF00)> ДТ<c(FFFFFF)> \n калибр 7,62x54 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,5<c(FFFFFF)> moa. "}
		{"fn_fal"														"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2<c(FFFFFF)> moa."}
		{"fn_fal_scope"													"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n коллиматор"}
		{"fn_fal_sniper_scope"											"<c(00FF00)>FN FAL<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n оптика"}
		{"FN_MAG"														"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> MAG<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"FN_MAG_optic"													"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> MAG<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику - "}
		{"fn_minimi"													"Пулемёт<c(FFAF00)> FN Minimi<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"fn_minimi_elcan"												"Пулемёт<c(FFAF00)> FN Minimi<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n коллиматор Elcan"}
		{"galil_arm"													"<c(00FF00)>Galil<c(FFFFFF)><c(FFAF00)> ARM<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"h&k_mg5a1_zeiss_zo_4x30i"										"Пулемёт<c(FFAF00)> MG 5 A1<c(FFFFFF)> с<c(4d6ff7)> Zeiss<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"hcb"															"Пулемёт<c(FFAF00)> НСВT<c(FFFFFF)><c(00FF00)> «Утёс»<c(FFFFFF)> \n калибр 12,7x108 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}
		{"hcb_optic"													"Пулемёт<c(FFAF00)> НСВT<c(FFFFFF)><c(00FF00)> «Утёс»<c(FFFFFF)> \n калибр 12,7x108 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,15<c(FFFFFF)> moa. "}	;future
		{"kord"															"Пулемёт<c(00FF00)> «Корд»<c(FFFFFF)> \n калибр 12,7x108 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,9<c(FFFFFF)> moa. \n - коаксиальный / для установки на технику - "}
		{"kord_optic"													"Пулемёт<c(00FF00)> «Корд»<c(FFFFFF)> \n калибр 12,7x108 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,9<c(FFFFFF)> moa.\n оптика СПП 10П50 x6 "}
		{"l86"															"Пулемёт<c(FFAF00)> L86A1<c(FFFFFF)> \n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"L94A1"														"Пулемёт<c(00FF00)> L94A1<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}
		{"l110a1"														"Пулемёт<c(FFAF00)> L110A1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"l110a1_susat"													"Пулемёт<c(FFAF00)> L110A1<c(FFFFFF)> c<c(4d6ff7)> Susat<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"M60E5"														"Пулемёт<c(FFAF00)> М60Е5<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"M240"															"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"m240_acog"													"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>76<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.р"}
		{"m240_elcan"													"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240B<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n оптика Elcan M145"}
		{"M240_optic"													"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240C<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n - вариант<c(FFAF00)> MAG 60.40<c(FFFFFF)> -\n - коаксиальный / для установки на технику - "}
		{"M240D"														"Пулемёт<c(00FF00)> FN<c(FFFFFF)><c(FFAF00)> M240D<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. \n - вариант<c(FFAF00)> MAG 60.30<c(FFFFFF)> -"}
		{"M249"															"Пулемёт<c(FFAF00)> M249<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"m249_tactical"												"Пулемёт<c(FFAF00)> M249<c(FFFFFF)> Tactical\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"MG3"															"Пулемёт<c(FFAF00)> MG 3<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"mg3_tank"														"Пулемёт<c(FFAF00)> MG 3<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}
		{"MG4"															"Пулемёт<c(FFAF00)> MG 4<c(FFFFFF)> Bundeswehr\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"MG5_tank"														"Пулемёт<c(FFAF00)> MG 5<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}
		{"mg5a1"														"Пулемёт<c(FFAF00)> MG 5<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"MG5a1_elcan"													"Пулемёт<c(FFAF00)> MG 5<c(FFFFFF)> с<c(4d6ff7)> ELCAN<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"MG5a1_elcan_desert"											"Пулемёт<c(FFAF00)> MG 5<c(FFFFFF)> с<c(4d6ff7)> ELCAN<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"minigun"														"Пулемёт<c(FFAF00)> M134<c(FFFFFF)><c(00FF00)> Minigun<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6,0<c(FFFFFF)> moa. "}
		{"minigun_nogilz"												"Пулемёт<c(FFAF00)> M134<c(FFFFFF)><c(00FF00)> Minigun<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6,0<c(FFFFFF)> moa. "}
		{"negev"														"Пулемёт<c(FFAF00)> Negev<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"negev_y"														"Пулемёт<c(FFAF00)> Negev<c(FFFFFF)><c(00FF00)> Commando<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa. "}
		{"pkm"															"Пулемёт<c(FFAF00)> ПКМ<c(FFFFFF)> \n калибр 7,62x54 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"PKP"															"Пулемёт<c(FFAF00)> ПКП<c(FFFFFF)><c(00FF00)> «Печенег»<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> moa. \n оптика 1П77. x4 "}
		{"PKT"															"Пулемёт<c(FFAF00)> ПКТ<c(FFFFFF)> \n калибр 7,62x54 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}
		{"PKVT"															"PKVT"}	;Obsolete
		{"qbb95"														"Пулемёт<c(FFAF00)> QBZ-95<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
	    {"qbb95_scope"													"Пулемёт<c(FFAF00)> QBZ-95<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.  \n оптика Y/M95-002"}
		{"qjy-88"														"Пулемёт<c(FFAF00)> QJY-88<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0..3,0<c(FFFFFF)> moa. "}
		{"qjy-201"														"Пулемёт<c(FFAF00)> QJY-201<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"qjz-89"														"Пулемёт<c(FFAF00)> QJZ-89<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,15<c(FFFFFF)> moa."}
		{"rpk_74_1"														"Пулемёт<c(FFAF00)> РПК-74М<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk_74_2"														"Пулемёт<c(FFAF00)> РПК-74М<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-02<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>69<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk_74_3"														"Пулемёт<c(FFAF00)> РПК-74М<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"rpk-74"														"Пулемёт<c(FFAF00)> РПК-74<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa. "}
		{"spot"															""}	;t
		{"type86_762mm"													"Пулемёт<c(FFAF00)> Type76<c(FFFFFF)> \n калибр 7,62x54 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa.\n - коаксиальный / для установки на технику -  "}
		{"uk-59"														"Пулемёт<c(FFAF00)> UK vz.59L<c(FFFFFF)> \n калибр 7,62x54 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"ukp_2000_sk3"													"Пулемёт<c(FFAF00)> UKM-2000<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>76<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"ukp_2000_c"													"Пулемёт<c(FFAF00)> UKP-2000C<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>76<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,25<c(FFFFFF)> moa. "}
		{"xm8rp"														"Пулемёт<c(FFAF00)> XM8<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>65<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"YakB_12_7"													"Пулемёт<c(FFAF00)> ЯкБ-12,7<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
	}
;naval_stuff
	{"ammo"
		{"3m14 caliber 533torpedo_rus"									"КР <c(FFAF00)>3М14<c(FFFFFF)> <c(00FF00)>«Калибр»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>200<c(FFFFFF)> кг\n дальность - <c(FFAF00)>680<c(FFFFFF)> м.\n тип наведения - <c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"3m14_impactor"												"<c(CF9FFF)>Impactor 3М14 «Калибр»</c>"}	;t
		{"3m54 caliber 533torpedo_rus"									"ПКР <c(FFAF00)>3М54<c(FFFFFF)> <c(00FF00)>«Калибр»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>80<c(FFFFFF)> кг\n дальность - <c(FFAF00)>430<c(FFFFFF)> м.\n тип наведения - <c(FF1F00)> АРЛ<c(FFFFFF)> ГСН +<c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"3m54_impactor"												"<c(CF9FFF)>Impactor 3М54 «Калибр»</c>"}	;t
		{"3m54_warhead_impactor"										"<c(CF9FFF)>Impactor 3М54 «Калибр» Warhead</c>"}	;t
		{"9m33"															"ЗУР <c(FFAF00)>9М33<c(FFFFFF)> к ЗРК «Оса-МА»\n масса ВВ - <c(FF1F00)>5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>180<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"9m33_impactor"												"<c(CF9FFF)>Impactor 9М33 к ЗРК «Оса-МА»</c>"}	;t
		{"48n6 s-300"													"ЗУР <c(FFAF00)>48Н6<c(FFFFFF)> к ЗРК «С-300»\n масса ВВ - <c(FF1F00)>63<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>478<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"48n6_impactor"												"<c(CF9FFF)>Impactor 48Н6Е2 к ЗРК «С-300»</c>"}	;t
		{"48n6e2 s-300"													"ЗУР <c(FFAF00)>48Н6Е2<c(FFFFFF)> к ЗРК «С-300»\n масса ВВ - <c(FF1F00)>63<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>478<c(FFFFFF)> м.\n тип наведения -<c(4d6ff7)> РЛ<c(FFFFFF)> ГСН \n - противовоздушная - "}
		{"48n6e2_impactor"												"<c(CF9FFF)>Impactor 48Н6 к ЗРК «С-300»</c>"}	;t
		{"53_65k_torpedo 533torpedo_rus"								"533мм Торпеда<c(FFAF00)> 43-62К<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>300<c(FFFFFF)> кг \n дальность - <c(FFAF00)>295<c(FFFFFF)> м."}
		{"53_65k_torpedo_impactor"										"<c(CF9FFF)>Impactor 533мм Торпеда 43-62К</c>"}	;t
		{"aim7m"														"ЗУР <c(FFAF00)>AIM-7M<c(FFFFFF)> <c(00FF00)>«Sea Sparrow»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>14<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>290<c(FFFFFF)> м.\n тип наведения - ПАРЛГСН  \n - противовоздушная - "}
		{"aim7m_impactor"												"<c(CF9FFF)>Impactor AIM-7M «Sea Sparrow»</c>"}	;t
		{"asroc_vla aegis"												"<c(FFAF00)>ASROC-VLA<c(FFFFFF)>\n БЧ - Торпеда<c(FFAF00)> Mk48<c(FFFFFF)>\n дальность - <c(FFAF00)>340<c(FFFFFF)> м.\n тип наведения - инерциальное "}
        {"basalt_p1000 basalt"											"<c(FFAF00)>П-1000<c(FFFFFF)> <c(00FF00)>«Вулкан»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>200<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>1200<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> АРЛ<c(FFFFFF)> ГСН +<c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"basalt_p1000_impactor"										"<c(CF9FFF)>Impactor П-1000 «Вулкан»</c>"}	;t
		{"granit"														"<c(FFAF00)>П-700<c(FFFFFF)> <c(00FF00)>«Гранит»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>280<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>1200<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> АРЛ<c(FFFFFF)> ГСН +<c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"granit_impactor"												"<c(CF9FFF)>Impactor П-700 «Гранит»</c>"}	;t
		{"malahit"														"<c(FFAF00)>П-120<c(FFFFFF)> <c(00FF00)>«Малахит»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>280<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>385<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> АРЛ<c(FFFFFF)> ГСН +<c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"malahit_impactor"												"<c(CF9FFF)>Impactor П-120 «Малахит»</c>"}	;t
		{"mk48_torpedo 533torpedo_usa"									"Торпеда<c(FFAF00)> Mk48<c(FFFFFF)>\n дальность - <c(FFAF00)>335<c(FFFFFF)> м."}
		{"mk48_torpedo_impactor"										"<c(CF9FFF)>Impactor Торпеда Mk48</c>"}	;t
        {"moskit"														"<c(FFAF00)>3М80<c(FFFFFF)> <c(00FF00)>«Москит»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>150<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>390<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> АРЛ<c(FFFFFF)> ГСН +<c(FF1F00)> инерц.<c(FFFFFF)> "}
		{"moskit_impactor"												"<c(CF9FFF)>Impactor 3М80 «Москит»</c>"}	;t
		{"rastrub"														"533мм ПЛУР<c(FFAF00)>«Раструб»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>185+60<c(FFFFFF)> кг (185кг в ракете и плюс торпеда УГМТ-1)\n дальность - <c(FFAF00)>345<c(FFFFFF)> м."}
		{"rastrub_impactor"												"<c(CF9FFF)>Impactor 533мм ПЛУР «Раструб»</c>"}	;t
		{"rim116"														"ЗУР <c(FFAF00)>RIM-116<c(FFFFFF)> <c(00FF00)>«SeaRAM»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>190<c(FFFFFF)> м.\n тип наведения - ИК ГСН  \n - противовоздушная - "}
		{"rim116_impactor"												"<c(CF9FFF)>Impactor RIM-116 «SeaRAM»</c>"}	;t
		{"sm_2er_blockiv aegis"											"ЗУР<c(FFAF00)> SM-2 ER<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>52<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>495<c(FFFFFF)> м.\n тип наведения - ПАРЛГСН  \n - противовоздушная - "}
		{"sm_2er_blockiv_impactor"										"<c(CF9FFF)>Impactor SM-2 ER</c>"}	;t
		{"targeting_radar_rus"											"Радар наведения"}
		{"targeting_radar_usa"											"Радар наведения"}
		{"tomahawk aegis"												"<c(FFAF00)>BGM-109<c(FFFFFF)> <c(00FF00)>«Tomahawk»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>113<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>680<c(FFFFFF)> м.\n тип наведения - инерциальное "}
		{"tomahawk_impactor"											"<c(CF9FFF)>Impactor BGM-109 «Tomahawk»</c>"}	;t
		{"torpedo_mk46"													"Торпеда<c(FFAF00)> Mk46<c(FFFFFF)>"}
		{"torpedo_mk46_impactor"										"<c(CF9FFF)>Impactor Торпеда Mk46</c>"}	;t
		{"ugm-84a 533torpedo_usa"										"<c(FFAF00)>UGM-84A<c(FFFFFF)><c(00FF00)> Harpoon<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>97.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>400<c(FFFFFF)> м.\n тип наведения -<c(FF1F00)> РЛ<c(FFFFFF)> ГСН "}
		{"ugmt1_torpedo"												"Торпеда<c(FFAF00)> УГМТ-1<c(FFFFFF)>"}
		{"ugmt1_torpedo_impactor"										"<c(CF9FFF)>Impactor UGM-84A Harpoon</c>"}	;t		
		{"veter 650torpedo_rus"											"650мм ПЛУР<c(FFAF00)>«Ветер»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>60<c(FFFFFF)> кг (БЧ - торпеда УГМТ-1)\n дальность - <c(FFAF00)>400<c(FFFFFF)> м."}
		{"vodopad 533torpedo_rus"										"533мм ПЛУР<c(FFAF00)>«Водопад»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>60<c(FFFFFF)> кг (БЧ - торпеда УГМТ-1)\n дальность - <c(FFAF00)>340<c(FFFFFF)> м."}
	}
	{"stuff"
		{"spg62_radar"													"Радар наведения"}
		{"targeting_radar_rus"											"Радар наведения"}		
		{"targeting_radar_rus_art"										"Радар наведения"}
		{"targeting_radar_usa"											"Радар наведения"}
	}
	{"weapon"
		{"533rus_torpedotube_x2"										"Торпедный аппарат 533мм х2"}
		{"533rus_torpedotube_x3"										"Торпедный аппарат 533мм х3"}
		{"533rus_torpedotube_x4"										"Торпедный аппарат 533мм х4"}
		{"533rus_torpedotube_x5"										"Торпедный аппарат 533мм х5"}
		{"533rus_torpedotube_x5"										"Торпедный аппарат 533мм х5"}
		{"533usa_torpedotube_x2"										"Торпедный аппарат 533мм х2"}
		{"650rus_torpedotube_x2"										"Торпедный аппарат 650мм х2"}
		{"aegis"														"ВПУ<c(FFAF00)> Mk41<c(FFFFFF)>"}
		{"basalt_pu"													"ПУ ПКР<c(FFAF00)> П-500<c(FFFFFF)><c(00FF00)> «Базальт»<c(FFFFFF)>x16 \n дальность - <c(FFAF00)>1200<c(FFFFFF)> м."}
		{"granit_pu_x20"												"ПУ ПКР<c(FFAF00)> П-700<c(FFFFFF)><c(00FF00)> «Гранит»<c(FFFFFF)>x20 \n дальность - <c(FFAF00)>1200<c(FFFFFF)> м."}
		{"granit_pu_x24"												"ПУ ПКР<c(FFAF00)> П-700<c(FFFFFF)><c(00FF00)> «Гранит»<c(FFFFFF)>x24 \n дальность - <c(FFAF00)>1200<c(FFFFFF)> м."}
		{"kinjal"														"ЗУР<c(FFAF00)> 9М330<c(FFFFFF)> \n дальность - <c(FFAF00)>200<c(FFFFFF)> м."}
		{"kinjalx8"														"ЗУР<c(FFAF00)> 9М330<c(FFFFFF)> \n дальность - <c(FFAF00)>200<c(FFFFFF)> м."}
		{"malahit_pu"													"ПУ<c(FFAF00)> КТ-120<c(FFFFFF)> с ПКР<c(FFAF00)> П-120<c(FFFFFF)><c(00FF00)> «Малахит»<c(FFFFFF)> \n дальность - <c(FFAF00)>385<c(FFFFFF)> м."}
		{"mk29_sea_sparrow"												"ПУ<c(00FF00)> «Sea Sparrow»<c(FFFFFF)>"}
		{"mk32_torpedotube"												"Торпедный аппарат<c(FFAF00)> Mk32<c(FFFFFF)>"}
		{"moskit_pu"													"ПУ ПКР<c(FFAF00)> 3М80<c(FFFFFF)><c(00FF00)> «Москит»<c(FFFFFF)>x24 \n дальность - <c(FFAF00)>390<c(FFFFFF)> м."}
		{"osa_ma"														"ПУ ЗРК<c(00FF00)> «Оса-МА»<c(FFFFFF)> с<c(FFAF00)> 9М33<c(FFFFFF)> \n дальность - <c(FFAF00)>180<c(FFFFFF)> м."}
		{"rastrub_pu"													"ПУ ПРК<c(FFAF00)> УРК-5<c(FFFFFF)><c(00FF00)> «Раструб-Б»<c(FFFFFF)>x8 \n дальность - <c(FFAF00)>345<c(FFFFFF)> м."}
		{"s300f_1144"													"ВПУ<c(FFAF00)> C-300Ф<c(FFFFFF)><c(00FF00)> «Форт»<c(FFFFFF)>"}
		{"s300f_1164"													"ВПУ<c(FFAF00)> C-300Ф<c(FFFFFF)><c(00FF00)> «Форт»<c(FFFFFF)>"}
		{"searam"														"ПУ<c(00FF00)> «SeaRAM»<c(FFFFFF)>"}
		{"tomahawk_x12"													"ВПУ<c(FFAF00)> Mk45<c(FFFFFF)> \n - для ракет «Tomahawk» x12"}
		{"uragan_tornado"												"ПУ <c(FFAF00)>«Ураган-Торнадо»<c(FFFFFF)>\n дальность - <c(FFAF00)>320..340<c(FFFFFF)> м."}
	}
;Pistol
	{"ammo"
		{"9mm"															"Патроны 9x19mm"}
		{"58ammo 58ammo_basic"											"Патроны 5,8x42mm x30<c(FFAF00)> DBP10<c(FFFFFF)> "}	
		{"58ammo 58ammo_drum"											"Патроны 5,8x42mm x70<c(FFAF00)> DBP10<c(FFFFFF)> "}	
		{"58ammo 58ammo_mg"												"Патроны 5,8x42mm<c(FFAF00)> DVC12<c(FFFFFF)> "}	
		{"58ammo 58ammo_sn"												"Патроны 5,8x42mm снайперский<c(FFAF00)> DBP88<c(FFFFFF)> "}	
		{"545"															"Патроны 5,45x39мм x30<c(FFAF00)> 7H6<c(FFFFFF)> "}
		{"556Nato"														"Патроны 5,56x45mm x30<c(FFAF00)> SS109<c(FFFFFF)> "}
		{"556NatoS"														"Патроны 5,56x45mm x20<c(FFAF00)> SS109<c(FFFFFF)> "}	
		{"762"															"Патроны 7,62x39мм x30<c(FFAF00)> ПС<c(FFFFFF)>"}
		{"762x41pss"													"Патроны 7,62x41мм<c(FFAF00)> СП-4<c(FFFFFF)> к ПСС"}
		{"flaer"														"<c(ffff60)>Сигнальная ракета</c>"}	;vanilla
		{"IR_flare"														"Тепловая ловушка"}
		{"smg"															"Патроны для пистолета"} ;Pistol ammo
		{"standart"														"Патроны для пистолета x25"}
		{"tazzer"														"Патроны для таззера"}
	}
	{"stuff"
		{"flare_dropper_30"												"Тепловые ловушки"}
		{"flare_dropper_64"												"Тепловые ловушки"}
		{"flare_dropper_120"											"Тепловые ловушки"}
		{"flare_dropper_128"											"Тепловые ловушки"}	
	}
	{"weapon"
		{"aps"															"Пистолет <c(FFAF00)>АПС<c(FFFFFF)>"}
		{"Beretta92"													"Пистолет <c(00FF00)>Beretta<c(FFFFFF)><c(FFAF00)> 92<c(FFFFFF)>"}
		{"colt"															"colt"}	;Obsolete
		{"Colt_Anaconda"												"Пистолет <c(00FF00)>Colt<c(FFFFFF)> «Anaconda»<c(FFFFFF)>"}
		{"colt_python"													"Пистолет <c(00FF00)>Colt<c(FFFFFF)> «Python»<c(FFFFFF)>"}
		{"colt1911a1"													"Пистолет <c(00FF00)>Kimber<c(FFFFFF)><c(FFAF00)> 1911<c(FFFFFF)> Rimfire Super"}
		{"cz75"															"Пистолет <c(00FF00)>CZ<c(FFFFFF)> <c(FFAF00)>75<c(FFFFFF)>"}
		{"desert_eagle"													"Пистолет <c(00FF00)>«Desert Eagle»<c(FFFFFF)>"}
		{"flaergun"														"Сигнальный пистолет"}
		{"flare_dropper_30"												"Тепловые ловушки"}
		{"flare_dropper_64"												"Тепловые ловушки"}
		{"flare_dropper_120"											"Тепловые ловушки"}
		{"flare_dropper_128"											"Тепловые ловушки"}
		{"glock19"														"Пистолет <c(00FF00)>Gloсk<c(FFFFFF)><c(FFAF00)> 19<c(FFFFFF)>"}
		{"gsh18"														"Пистолет <c(FFAF00)>ГШ-18<c(FFFFFF)>"}
		{"kashtan"														"Пистолет-пулемёт<c(FFAF00)> AEK-919K<c(FFFFFF)><c(00FF00)> «Каштан»<c(FFFFFF)>\n калибр 9x18 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,5<c(FFFFFF)> moa."}
		{"kedr"															"Пистолет-пулемёт<c(FFAF00)> ПП-91<c(FFFFFF)><c(00FF00)> «Кедр»<c(FFFFFF)>\n калибр 9x18 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,5<c(FFFFFF)> moa."}
		{"makarov"														"Пистолет <c(FFAF00)>ПМ<c(FFFFFF)>"}
		{"mp7"															"Пистолет-пулемёт<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-7<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"mp7_zeiss"													"Пистолет-пулемёт<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-7<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>40<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"oz33_pernach"													"Пистолет<c(FFAF00)> ОЦ-33<c(FFFFFF)> <c(00FF00)>«Пернач»<c(FFFFFF)>"}
		{"pb"															"Пистолет <c(FFAF00)>ПБ<c(FFFFFF)>"}
		{"pm_sil"														"Пистолет <c(FFAF00)>ПМ<c(FFFFFF)> с глушителем"}
		{"pss"															"Пистолет <c(FFAF00)>ПСС<c(FFFFFF)>"}
		{"qsz_92"														"Пистолет <c(FFAF00)>QSZ-92<c(FFFFFF)>"}
		{"qsz_92_silence"												"Пистолет <c(FFAF00)>QSZ-92<c(FFFFFF)> с глушителем"}
		{"s&w_m19"														"Пистолет <c(00FF00)>Smith & Wesson<c(FFFFFF)> <c(FFAF00)>M19<c(FFFFFF)>"}
		{"spectre_m4"													"Пистолет-пулемёт<c(00FF00)> Spectre<c(FFFFFF)><c(FFAF00)> M4<c(FFFFFF)>\n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4<c(FFFFFF)> moa."}
		{"taurus_rb"													"Пистолет <c(00FF00)>Taurus<c(FFFFFF)><c(FFAF00)> RB<c(FFFFFF)>"}
		{"tt"															"Пистолет <c(FFAF00)>TT<c(FFFFFF)>"}
		{"walther_p99"													"Пистолет <c(FFAF00)>Walther<c(FFFFFF)>  <c(FFAF00)>P99<c(FFFFFF)>"}
		{"x34"															"Тазер X34"}
	}
;projectile
	{"ammo"
		{"48n6e2"														"<c(CF9FFF)>Loading Mediator 48n6e2</c>"}	;t
		{"cw_cumulative_assistor_1gen"									"<c(CF9FFF)>Assistor Gen1</c>"}	;t
		{"cw_cumulative_assistor_2gen"									"<c(CF9FFF)>Assistor Gen2</c>"}	;t
		{"cw_cumulative_assistor_3gen"									"<c(CF9FFF)>Assistor Gen3</c>"}	;t
		{"IR_ff aim-9l"													"<c(CF9FFF)>Loading Mediator AIM-9L «Sidewinder»</c>"}	;t
		{"IR_ff R-73"													"<c(CF9FFF)>Loading Mediator ЗУР Р-73 изд. 72</c>"}	;t
		{"laser_bomb Maverick_E"										"<c(CF9FFF)>Loading Mediator laser_bomb Maverick_E</c>"}	;t
		{"laser_bomb X_25ML"											"<c(CF9FFF)>Loading Mediator X_25ML</c>"}	;t
		{"rus_active cwps2"												"Система наведения"}	;Guidance System
		{"rus_active_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_active_asm cwps2"											"Система наведения"}	;Guidance System
		{"rus_active_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"rus_antirad cwps2"											"Система наведения"}	;Guidance System
		{"rus_antirad_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_antiship cwps2"											"Система наведения"}	;Guidance System
		{"rus_antiship_aj cwps2"										"Система наведения"}	;Guidance System
		{"rus_antisub cwps2"											"Система наведения"}	;Guidance System
		{"rus_antisub_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_ir cwps2"													"Система наведения"}	;Guidance System
		{"rus_ir_aj cwps2"												"Система наведения"}	;Guidance System
		{"rus_ir_asm cwps2"												"Система наведения"}	;Guidance System
		{"rus_ir_asm_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_ir_FF_beam AA_proj"										"Система наведения"}	;Guidance System
		{"rus_ir_FF_beam AT_proj"										"Система наведения"}	;Guidance System
		{"rus_laser"													"Система наведения"}	;Guidance System
		{"rus_laser cwps2"												"Система наведения"}	;Guidance System
		{"rus_laser1 cwps2"												"Система наведения"}	;Guidance System
		{"rus_laser1_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_laser_aj"													"Система наведения"}	;Guidance System
		{"rus_laser_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_laser_asm cwps2"											"Система наведения"}	;Guidance System
		{"rus_laser_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"rus_other cwps2"												"Система наведения"}	;Guidance System
		{"rus_other_aj cwps2"											"Система наведения"}	;Guidance System
		{"rus_other_asm cwps2"											"Система наведения"}	;Guidance System
		{"rus_other_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"rus_radar_beam AA_proj"										"Радар"}	;Radar
		{"rus_radar_beam AT_proj"										"Радар"}	;Radar
		{"rus_radpassive cwps2"											"Система наведения"}	;Guidance System
		{"rus_radpassive_aj cwps2"										"Система наведения"}	;Guidance System
		{"usa_active cwps2"												"Система наведения"}	;Guidance System
		{"usa_active_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_active_asm cwps2"											"Система наведения"}	;Guidance System
		{"usa_active_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"usa_antirad cwps2"											"Система наведения"}	;Guidance System
		{"usa_antirad_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_antiship cwps2"											"Система наведения"}	;Guidance System
		{"usa_antiship_aj cwps2"										"Система наведения"}	;Guidance System
		{"usa_antisub cwps2"											"Система наведения"}	;Guidance System
		{"usa_antisub_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_ir cwps2"													"Система наведения"}	;Guidance System
		{"usa_ir_aj cwps2"												"Система наведения"}	;Guidance System
		{"usa_ir_asm cwps2"												"Система наведения"}	;Guidance System
		{"usa_ir_asm_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_ir_FF_beam AA_proj"										"Система наведения"}	;Guidance System
		{"usa_ir_FF_beam AT_proj"										"Система наведения"}	;Guidance System
		{"usa_laser"													"Система наведения"}	;Guidance System
		{"usa_laser cwps2"												"Система наведения"}	;Guidance System
		{"usa_laser_aj"													"Система наведения"}	;Guidance System
		{"usa_laser_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_laser_asm cwps2"											"Система наведения"}	;Guidance System
		{"usa_laser_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"usa_other cwps2"												"Система наведения"}	;Guidance System
		{"usa_other_aj cwps2"											"Система наведения"}	;Guidance System
		{"usa_other_asm cwps2"											"Система наведения"}	;Guidance System
		{"usa_other_asm_aj cwps2"										"Система наведения"}	;Guidance System
		{"usa_radar_beam AA_proj"										"Радар"}	;Radar
		{"usa_radar_beam AT_proj"										"Радар"}	;Radar
		{"usa_radpassive cwps2"											"Система наведения"}	;Guidance System
		{"usa_radpassive_aj cwps2"										"Система наведения"}	;Guidance System
	}
	{"stuff"
		{"rus_las_designator"											"Лазерный целеуказатель"}
	}
	{"weapon"
		{"missilets"													"Система наведения"}	;Guidance System
		{"missilets_3pointfast"											"Система наведения"}	;Guidance System
		{"missilets_3pointnormal"										"Система наведения"}	;Guidance System
		{"missilets_3pointsamfast"										"Система наведения"}	;Guidance System
		{"missilets_3pointsamnormal"									"Система наведения"}	;Guidance System
		{"missilets_3pointsamslow"										"Система наведения"}	;Guidance System
		{"missilets_3pointslow"											"Система наведения"}	;Guidance System
		{"missilets_antirad"											"Система наведения"}	;Guidance System
		{"missilets_arc_120"											"Система наведения"}	;Guidance System
		{"missilets_arc_160"											"Система наведения"}	;Guidance System
		{"missilets_arc_200"											"Система наведения"}	;Guidance System
		{"missilets_arc_320"											"Система наведения"}	;Guidance System
		{"missilets_fast"												"Система наведения"}	;Guidance System
		{"missilets_long"												"Система наведения"}	;Guidance System
		{"missilets_normal"												"Система наведения"}	;Guidance System
		{"missilets_propfast"											"Система наведения"}	;Guidance System
		{"missilets_propnormal"											"Система наведения"}	;Guidance System
		{"missilets_propsamfast"										"Система наведения"}	;Guidance System
		{"missilets_propsamnormal"										"Система наведения"}	;Guidance System
		{"missilets_propsamslow"										"Система наведения"}	;Guidance System
		{"missilets_propslow"											"Система наведения"}	;Guidance System
		{"missilets_slow"												"Система наведения"}	;Guidance System
		{"rus_IR_ff_device"												"Система наведения"}	;Guidance System
		{"rus_radar"													"Радар"}	;Radar
		{"usa_IR_ff_device"												"Система наведения"}	;Guidance System
		{"usa_las_designator"											"Лазерный целеуказатель"}
		{"usa_radar"													"Радар"}	;Radar
	}
;reactive
	{"ammo"
		{"81mm l"														"Мина 81mm <c(FFAF00)> M853A1<c(FFFFFF)>\n - осветительная - \n дальность - <c(FFAF00)>161<c(FFFFFF)> м. "}
		{"81mm of"														"Мина 81mm ОФ<c(FFAF00)> M821<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,726<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>166<c(FFFFFF)> м. "}
		{"81mm sm"														"Мина 81mm дым.<c(FFAF00)> M819<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n дальность - <c(FFAF00)>156<c(FFFFFF)> м. "}
		{"82mm er"														"Мина 82мм <c(FFAF00)> Type PP87<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,6<c(FFFFFF)> кг.\n  дальность - <c(FFAF00)>166<c(FFFFFF)> м. "}			
		{"82mm l"														"Мина 82мм <c(FFAF00)> С-832С<c(FFFFFF)>\n - осветительная - \n  дальность - <c(FFAF00)>140<c(FFFFFF)> м. "}			
		{"82mm of"														"Мина 82мм ОФ<c(FFAF00)> О-832ДУ<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,454<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м. "}
		{"82mm sm"														"Мина 82мм дым.<c(FFAF00)> Д-832ДУ<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n дальность - <c(FFAF00)>140<c(FFFFFF)> м. "}			
		{"140mm_a22 fg"													"140мм реактивный снаряд <c(FFAF00)>ОФ-45<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>5,65<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>142<c(FFFFFF)> м."}
		{"212mm_rbu"													"Глубинная бомба<c(FFAF00)> РГБ-60<c(FFFFFF)> для<c(00FF00)> РБУ-6000<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>23.5<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>360<c(FFFFFF)> м."}
		{"212mm_rbu_impactor"											"<c(CF9FFF)>Impactor РБУ-6000</c>"}	;t
		{"300mm_rbu"													"Глубинная бомба<c(FFAF00)> РГБ-111СЗГ<c(FFFFFF)> для<c(00FF00)> РБУ-12000<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>80<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>360<c(FFFFFF)> м."}
		{"300mm_rbu_impactor"											"<c(CF9FFF)>Impactor РБУ-12000</c>"}	;t
		{"305mm_rbu"													"Глубинная бомба<c(FFAF00)> РГБ-10<c(FFFFFF)> для<c(00FF00)> РБУ-1000<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>80<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>360<c(FFFFFF)> м."}	
		{"305mm_rbu_impactor"											"<c(CF9FFF)>Impactor РБУ-1000</c>"}	;t
		{"agsammo"														"<c(CF9FFF)>Loading Mediator AGS</c>"}	;t
		{"ATACMS cl"													"<c(FFAF00)>MGM-140B<c(FFFFFF)><c(00FF00)> ATACMS<c(FFFFFF)> Block 1A\n кумулятивно-осколочные элементы \n дальность - <c(FFAF00)>5750<c(FFFFFF)> м."}
		{"ATACMS fg"													"<c(FFAF00)>MGM-168A<c(FFFFFF)><c(00FF00)> ATACMS<c(FFFFFF)> Block 4A\n масса ВВ - <c(FF1F00)>97.5<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>5750<c(FFFFFF)> м."}
		{"df15b fg"														"<c(FFAF00)>DF-15B<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>500<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>800<c(FFFFFF)> м."}
		{"df15b tb"														"<c(FFAF00)>DF-15B<c(FFFFFF)> \n масса огнесмеси - <c(FF1F00)>500<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>800<c(FFFFFF)> м."}
		{"grad cl"														"122мм реактивный снаряд<c(FFAF00)> 9М218<c(FFFFFF)>\n кумулятивно-осколочные элементы <c(FFAF00)> 3Б30<c(FFFFFF)> \n дальность - <c(FFAF00)>370<c(FFFFFF)> м."}
		{"grad clcn"													"122мм реактивный снаряд<c(FFAF00)> DHB/PHL81-122<c(FFFFFF)>\n кумулятивно-осколочные элементы <c(FFAF00)> MZD-2<c(FFFFFF)> \n дальность - <c(FFAF00)>370<c(FFFFFF)> м."}
		{"grad fg"														"122мм реактивный снаряд<c(FFAF00)> 9M22У<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,4<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>290<c(FFFFFF)> м."}
		{"grad fgh"														"122мм реактивный снаряд<c(FFAF00)> Type 90A<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>5,6<c(FFFFFF)> кг. \n дальность - <c(FFAF00)>370<c(FFFFFF)> м."}
		{"grad mine"													"122мм реактивный снаряд<c(FFAF00)> 3М16<c(FFFFFF)><c(00FF00)> «Прозаик»<c(FFFFFF)>\n противопехотные мины<c(FFAF00)> ПОМ-2<c(FFFFFF)> \n дальность - <c(FFAF00)>210<c(FFFFFF)> м."}
		{"grad rok"														"122мм реактивный снаряд<c(FFAF00)> 9M521<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>6,05<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>400<c(FFFFFF)> м."}
		{"grad spbe"													"122мм реактивный снаряд<c(FFAF00)> 9М217<c(FFFFFF)>\n самоприцеливающиеся боевые элементы <c(FFAF00)>9Н282<c(FFFFFF)><c(00FF00)> «Гном»<c(FFFFFF)>\n дальность - <c(FFAF00)>370<c(FFFFFF)> м."}
		{"iskander fg"													"<c(FFAF00)>9М723<c(FFFFFF)> \n масса ВВ - <c(FF1F00)>400<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>550<c(FFFFFF)> м."}
		{"iskander tb"													"<c(FFAF00)>9М723К5<c(FFFFFF)> \n масса огнесмеси - <c(FF1F00)>200<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>550<c(FFFFFF)> м."}
		{"ksf_cassette kpom2"											"Кассета с минами <c(FFAF00)>ПОМ-2<c(FFFFFF)> <c(00FF00)>«Отек»<c(FFFFFF)>\n - противопехотная осколочная - "}
		{"ksf_cassette kptm"											"Кассета с минами <c(FFAF00)>ПТМ-1<c(FFFFFF)>\n - противотанковая противогусеничная - "}
		{"ksf_cassette ksf"												"Кассета с минами <c(FFAF00)>ПФМ-1<c(FFFFFF)> <c(00FF00)>«Лепесток»<c(FFFFFF)>\n - противопехотная фугасная - "}
		{"lars2 fg"														"110мм реактивный снаряд<c(FFAF00)> DM-21<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>5,6<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>300<c(FFFFFF)> м."}
		{"lars2 mine"													"110мм реактивный снаряд<c(FFAF00)> DM-711<c(FFFFFF)>\n противотанковые мины \n дальность - <c(FFAF00)>300<c(FFFFFF)> м."}
		{"m270 cl"														"227мм реактивный снаряд<c(FFAF00)> M31A1<c(FFFFFF)>\n кумулятивно-осколочные элементы \n дальность - <c(FFAF00)>455<c(FFFFFF)> м."}
		{"m270 fg"														"227мм реактивный снаряд<c(FFAF00)> M31A1<c(FFFFFF)><c(00FF00)> GMLRS<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>24<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>455<c(FFFFFF)> м."}
		{"mortar 60mm fl"												"Мина 60mm заж.<c(FFAF00)><c(FFFFFF)>\n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"mortar 60mm of"												"Мина 60mm ОФ<c(FFAF00)> М-818<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>0,42<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"mortar 60mm sm"												"Мина 60mm дым.<c(FFAF00)> М-817<c(FFFFFF)>\n <c(CCCCCC)> - дымовой - <c(FFFFFF)> \n -<c(FF1F00)> зажигательный<c(FFFFFF)> - \n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"R17 fg"														"<c(FFAF00)>Р-17/SS-1C<c(FFFFFF)><c(00FF00)> «Scud B»<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>535<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>600<c(FFFFFF)> м."}
		{"smart155_core_impactor"										"<c(CF9FFF)>Impactor Smart 155мм Core</c>"}	;t
		{"smart155_impactor"											"<c(CF9FFF)>Impactor Smart 155мм</c>"}	;t
		{"spbe_9n282_core_impactor"										"<c(CF9FFF)>Impactor SPBE 9N282</c>"}	;t
		{"spbe_9n282_impactor"											"<c(CF9FFF)>Impactor SPBE 9N282</c>"}	;t
		{"tm83_core_impactor"											"<c(CF9FFF)>Impactor ТМ-83</c>"}	;t		
		{"tos1a fg"														"220мм реактивный снаряд<c(FFAF00)> МО 1 01 04М<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>90<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>170<c(FFFFFF)> м.\n <c(D781CC)>термобарический<c(FFFFFF)> "}
		{"type63_rocket fg"												"107мм реактивный снаряд<c(FFAF00)> Type63<c(FFFFFF)>\n масса ВВ - <c(FF1F00)>1.26<c(FFFFFF)> кг.\n дальность - <c(FFAF00)>182<c(FFFFFF)> м."}
		{"ur_83p_ammo"													"Заряд разминирования <c(00FF00)>УР-83П<c(FFFFFF)>"}
		{"ur_83p_detector"												"<c(CF9FFF)>Detector UR-83P</c>"}	;t
	}
	{"stuff"
		{"df15b_launcher"												"ПУ <c(00FF00)> DF-15B<c(FFFFFF)> \n дальность - <c(FFAF00)>800<c(FFFFFF)> м."}
		{"iskander_launcher"											"ПУ с 2<c(00FF00)> Искандер<c(FFFFFF)> \n дальность - <c(FFAF00)>550<c(FFFFFF)> м."}
		{"R17_launcher"													"ПУ с <c(FFAF00)>Р-17/SS-1C<c(FFFFFF)><c(00FF00)> «Scud B»<c(FFFFFF)> \n дальность - <c(FFAF00)>550<c(FFFFFF)> м."}
	}
	{"weapon"
		{"81mm_l16"														"81мм<c(FFAF00)> L16<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>156...166<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10,92<c(FFFFFF)> т.д. "}
		{"81mm_llr"														"81мм<c(FFAF00)> MO 81 LLR<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>156...166<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10,92<c(FFFFFF)> т.д. "}
		{"81mm_m252"													"81мм<c(FFAF00)> M252<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n дальность - <c(FFAF00)>156...166<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10,92<c(FFFFFF)> т.д. "}
		{"82mm_2B9"														"82мм<c(FFAF00)> 2Б9<c(FFFFFF)> <c(00FF00)>«Василек»<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> т.д. "}
		{"82mm_podnos"													"82мм<c(FFAF00)> 2Б14<c(FFFFFF)><c(00FF00)> «Поднос»<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10,92<c(FFFFFF)> т.д. "}
		{"82mm_pp87"													"82мм<c(FFAF00)> PP-87<c(FFFFFF)>\n дальность - <c(FFAF00)>166<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7,7<c(FFFFFF)> т.д. "}
		{"140mm_a22_pu"													"ПУ<c(FFAF00)> МС-227<c(FFFFFF)> РСЗО<c(FFAF00)> А-22<c(FFFFFF)><c(00FF00)> «Огонь»<c(FFFFFF)> \n дальность - <c(FFAF00)>142<c(FFFFFF)> м."}
		{"212mm_rbu6000"												"Бомбомет РБУ-6000 \n дальность - <c(FFAF00)>168<c(FFFFFF)> м."}
		{"300mm_rbu12000"												"Бомбомет РБУ-12000 \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"305mm_rbu1000"												"Бомбомет РБУ-1000 \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"ag36_g36"														"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2"													"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2_acog"												"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_l85a2_susat"												"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ag36_m4a1_acog"												"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"ags17"														"Гранатомет<c(FFAF00)> АГС-17<c(FFFFFF)><c(00FF00)> «Пламя»<c(FFFFFF)>\n калибр 30х29 мм \n дальность - <c(FFAF00)>92..105<c(FFFFFF)> м."}
		{"ags30"														"Гранатомет<c(FFAF00)> АГС-30<c(FFFFFF)><c(00FF00)> «Атлант»<c(FFFFFF)>\n калибр 30х29 мм \n дальность - <c(FFAF00)>92..105<c(FFFFFF)> м."}
		{"ags30m"														"Гранатомет<c(FFAF00)> АГС-30M<c(FFFFFF)>\n калибр 30х29 мм \n дальность - <c(FFAF00)>92..105<c(FFFFFF)> м."}
		{"ak12_1p87_gp25_pod"											"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ak12_gp25_pod"												"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ak15_1p87_gp25_pod"											"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ak15_1p87_pbs_gp25_pod"										"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ak103_gp25_1p87_podstvol"										"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ak103_gp25_pbs_1p87_podstvol"									"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"ATACMS"														"ПУ с 2<c(00FF00)> ATACMS<c(FFFFFF)> \n дальность - <c(FFAF00)>575<c(FFFFFF)> м."}
		{"Buldog"														"Револьверный гранатомет<c(FFAF00)> РГ-6<c(FFFFFF)><c(00FF00)> «Гном»<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"cz_805_bren_g1_203"											"Гранатомёт<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> 805 G1<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
 		{"g36a3_eotech552_ag36_pod"										"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"g36a3_eotech552_silencer_ag36_pod"							"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"g36a3_zeiss_zo_4x30i_ag36_pod"								"Подствольный гранатомёт<c(FFAF00)> AG36<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"gm94_grl"														"Гранатомет<c(FFAF00)> ГМ-94<c(FFFFFF)>\n калибр 43 мм \n дальность - <c(FFAF00)>63<c(FFFFFF)> м."}
		{"gp25_ak74m_1p78"												"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"gp25_akm"														"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"gp25_akms"													"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"gp25_aks74"													"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"gp25_aks74_1p29"												"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"Grad"															"122мм реактивная система \n дальность - <c(FFAF00)>210..290<c(FFFFFF)> м."}
		{"granata_famas_f1"												"Дульный гранатомет для <c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> AC 58<c(FFFFFF)> ,<c(FFAF00)> APAV 40<c(FFFFFF)> ,<c(FFAF00)> FUM 50<c(FFFFFF)>"}
		{"hk_69"														"Гранатомет<c(FFAF00)> HK 69<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"hk_gmg"														"Гранатомет<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> GMG<c(FFFFFF)>\n калибр 40х53 mm \n дальность - <c(FFAF00)>105<c(FFFFFF)> м."}
		{"ksf_cassette"													"Разовая минная кассета КСФ-1"}	;KSF mine cassette
		{"lars2"														"110мм реактивная система \n дальность - <c(FFAF00)>300<c(FFFFFF)> м."}
		{"m32"															"Револьверный гранатомет<c(FFAF00)> M-32<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m79"															"Гранатомет<c(FFAF00)> M79<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203"															"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
		{"m203_cz805"													"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)> "}
		{"m203_m4_mars"													"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_m4a1_acog"												"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_m16a4_acog"												"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203_tar"														"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m203a"														"Подствольный гранатомёт<c(FFAF00)> M203<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m270"															"227мм реактивная система \n дальность - <c(FFAF00)>335..360<c(FFFFFF)> м."}
		{"m302_hk416_aimpoint"											"Подствольный гранатомёт<c(FFAF00)> M302<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"m320"															"Подствольный гранатомёт<c(FFAF00)> M320<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"min_modern"													"60мм миномет<c(00FF00)> Soltam<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"mk19"															"Гранатомет<c(00FF00)><c(FFFFFF)><c(FFAF00)> Mk-19<c(FFFFFF)>\n калибр 40х53 mm \n дальность - <c(FFAF00)>105<c(FFFFFF)> м."}
		{"PG"															"Подствольный гранатомёт\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
		{"PG_cn"														"Подствольный гранатомёт<c(FFAF00)> Type 91<c(FFFFFF)>\n калибр 35 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"PG_nato"														"<c(CF9FFF)>Pattern for underbarrel grenade launcher</c>"}	;t
		{"Pod_ak74"														"Подствольный гранатомёт<c(FFAF00)> ГП-25<c(FFFFFF)><c(00FF00)> «Костер»<c(FFFFFF)> \n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> ВОГ-25<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25М<c(FFFFFF)>,<c(FFAF00)> ВОГ-25П<c(FFFFFF)> ,<c(FFAF00)> ВОГ-25ПМ<c(FFFFFF)>,<c(FFAF00)> ВОГ-40И<c(FFFFFF)> "}
		{"qbz95_qlg10a_podstvol"										"Подствольный гранатомёт<c(FFAF00)> QLG-10A<c(FFFFFF)>\n калибр 35 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_qlg10a_scope_podstvol"									"Подствольный гранатомёт<c(FFAF00)> QLG-10A<c(FFFFFF)>\n калибр 35 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_qlg91_pod"												"Подствольный гранатомёт<c(FFAF00)> Type 91<c(FFFFFF)>\n калибр 35 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qbz95_scope_qlg91_pod"										"Подствольный гранатомёт<c(FFAF00)> Type 91<c(FFFFFF)>\n калибр 35 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 35x32 mm<c(FFFFFF)>  "}
		{"qlu-11"														"Гранатомет<c(FFAF00)> QLU-11<c(FFFFFF)> \n калибр 35x32mm \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"qlz04"														"Гранатомет<c(FFAF00)> QLZ-04<c(FFFFFF)>\n калибр 35х32 мм \n дальность - <c(FFAF00)>92<c(FFFFFF)> м."}
		{"tos1a"														"220мм огнеметная система \n дальность - <c(FFAF00)>170<c(FFFFFF)> м."}
		{"type63"														"107мм реактивная система \n дальность - <c(FFAF00)>182<c(FFFFFF)> м."}
		{"ur_83p_wp"													"УР-83П"}
		{"wz96_beryl_kbk-g_sk3_pod"										"Подствольный гранатомёт<c(FFAF00)> Pallad<c(FFFFFF)>\n калибр 40 мм \n дальность - <c(FFAF00)>53<c(FFFFFF)> м.\n выстрелы -<c(FFAF00)> 40x46 mm<c(FFFFFF)>  "}
	}
;rifle
	{"ammo"
		;sniper
			{"8_6x70_x10"												"Патроны 8.6x70mm снайперский<c(FFAF00)>.338<c(FFFFFF)> <c(00FF00)>Lapua Magnum<c(FFFFFF)><c(FFAF00)> AP529<c(FFFFFF)> \n бронебойность на 600 м. - <c(26afeb)>12<c(FFFFFF)> мм "}
			{"762x51_x20"												"Патроны 7,62x51mm снайперский<c(FFAF00)> М118LR<c(FFFFFF)>"}	
			{"SVD_ammo"													"Патроны 7,62x54мм снайперский<c(FFAF00)> 7Н1<c(FFFFFF)> "}
			{"svdk_ammo"												"Патроны 9,3x64мм снайперский<c(FFAF00)> 7Н33<c(FFFFFF)> \n - к СВДК - "}
			{"Vin_ammo"													"Патроны 9x39мм<c(FFAF00)> СП-5<c(FFFFFF)> "}
			{"vssk_ammo ap"												"Патроны 12.7x55мм <c(FFFF00)> СЦ-130 ВПС<c(FFFFFF)> \n бронебойность на 200 м. - <c(26afeb)>16<c(FFFFFF)> мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м. \n -<c(CCCCCC)> бронебойные<c(FFFFFF)> - "}
			{"vssk_ammo sn"												"Патроны 12.7x55мм <c(FFFF00)> СЦ-130 ПТ<c(FFFFFF)> \n бронебойность на 200 м. - <c(26afeb)>12<c(FFFFFF)> мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м. \n -<c(CCCCCC)> улучшенной точности<c(FFFFFF)> - "}
		{"12mm_shotgun"													"12 калибр"}
		{"23mm_shotgun ap"												"Патроны 23x75 мм R<c(FFFF00)> БС<c(FFFFFF)>\n бронебойность на 1000 м. - <c(26afeb)>5<c(FFFFFF)> мм \n дальность - <c(FFAF00)>23<c(FFFFFF)> м.\n -<c(CCCCCC)> бронебойные<c(FFFFFF)> -  "}
		{"23mm_shotgun fg"												"Патроны 23x75 мм R<c(FFFF00)> картечь<c(FFFFFF)>\n дальность - <c(FFAF00)>15<c(FFFFFF)> м."}
		{"23mm_shotgun gas_short"										"Патроны 23x75 мм R<c(FFFF00)> аэрозольная<c(FFFFFF)>\n дальность - <c(FFAF00)>23<c(FFFFFF)> м."}
		{"23mm_shotgun rubber"											"Патроны 23x75 мм R<c(FFFF00)> маркерная<c(FFFFFF)>\n дальность - <c(FFAF00)>23<c(FFFFFF)> м."}
		{"103x77_x5"													"Патроны 10.3x77mm снайперский<c(FFAF00)>.408<c(FFFFFF)> <c(00FF00)>Cheyenne Tactical<c(FFFFFF)> "}
		{"nato_ptr ap"													"Патроны 12,7x99mm<c(FFFF00)> Mk211<c(FFFFFF)><c(00FF00)> «Raufoss»<c(FFFFFF)> \n бронебойность на 500 м. - <c(26afeb)>30<c(FFFFFF)> мм \n дальность - <c(FFAF00)>100...105<c(FFFFFF)> м.\n -<c(d7cc81)> осколочно<c(FFFFFF)>/<c(FF1F00)>зажигательные<c(FFFFFF)> - \n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"nato_ptr sn"													"Патроны 12.7x99mm снайперский<c(00FF00)> Нornady<c(FFFFFF)><c(FFAF00)> А-Мах<c(FFFFFF)> 750 gr.\n дальность - <c(FFAF00)>100...105<c(FFFFFF)> м.\n -<c(CCCCCC)> улучшенной точности<c(FFFFFF)> - "}
		{"osv_ap"														"Патроны 12.7x108мм снайперский <c(FFFF00)>7H34<c(FFFFFF)> \n бронебойность на 800 м. - <c(26afeb)>10<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85...105<c(FFFFFF)> м. \n -<c(CCCCCC)> улучшенной точности<c(FFFFFF)> - "}
		{"osv_fg"														"Патроны 12.7x108мм <c(FFFF00)> МДЗ<c(FFFFFF)> \n дальность - <c(FFAF00)>85...105<c(FFFFFF)> м.\n -<c(d7cc81)> осколочно<c(FFFFFF)>/<c(FF1F00)>зажигательные<c(FFFFFF)> - "}
		{"osv_fl"														"Патроны 12.7x108мм <c(FFFF00)> БС<c(FFFFFF)> \n бронебойность на 750 м. - <c(26afeb)>23<c(FFFFFF)> мм \n дальность - <c(FFAF00)>85...105<c(FFFFFF)> м. \n -<c(FF1F00)> зажигательные<c(FFFFFF)> - \n -<c(CCCCCC)> вольфрамовый сердечник<c(FFFFFF)> - "}
		{"ptr"															"PTR"}	;Obsolete
	}
	{"stuff"
		
	}
	{"weapon"
		;sniper
	        {"CS-LR4"													"Сн.винтовка<c(FFAF00)> CS/LR4<c(FFFFFF)> \n калибр 7,62x51 мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa. "}
			{"cz750"													"Сн. винтовка<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> 750<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,93<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"DSR1"														"Сн. винтовка<c(FFAF00)> DSR-1<c(FFFFFF)>\n калибр 7,62x51 мм мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,5..1,5<c(FFFFFF)> moa.\n оптика Schmidt & Bender PM 2 12x56/P4F "}
			{"fr_f2"													"Сн. винтовка<c(00FF00)> MAS<c(FFFFFF)><c(FFAF00)> FR-F2<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,1<c(FFFFFF)> moa.\n оптика Model 53-bis x4 \n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"hk417_snip"												"Авт. винтовка<c(FFAF00)> HK417<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
	        {"l86_susat"												"Сн. винтовка<c(FFAF00)> L86A1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa.\n оптика SUSAT"}
			{"L96A1"													"Сн. винтовка<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> L96A1<c(FFFFFF)><c(00FF00)> AW<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>83<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n оптика Leupold Mark 4 3.5-10X40 LR/T Mil-Dot \n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"l115a3"													"Сн. винтовка<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> L115A3<c(FFFFFF)>\n калибр 8,6x70 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
			{"l129a1"													"Сн. винтовка<c(FFAF00)> L129A1<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n  патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"l129a1_silenced"											"Сн. винтовка<c(FFAF00)> L129A1<c(FFFFFF)> ,<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>71<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n  патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m14_scope"												"Авт. винтовка<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOCOM<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>71<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m14_sopmod"												"Авт. винтовка<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOPMOD<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m21"														"Сн. винтовка<c(FFAF00)> M-14<c(FFFFFF)> с<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m21_sopmod"												"Сн. винтовка<c(FFAF00)> M-14<c(FFFFFF)><c(00FF00)> SOPMOD<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,75<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m24sws"													"Сн. винтовка<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> M24A1<c(FFFFFF)><c(00FF00)> SWS<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>81<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,2<c(FFFFFF)> moa.\n оптика Leupold Ultra M3A 10X42 / Mil-Dot \n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m39emr"													"Сн. винтовка<c(FFAF00)> M39<c(FFFFFF)><c(00FF00)> EMR<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa.\n оптика Schmidt & Bender 3-12x50/M8541 SSDS\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m40a5"													"Сн. винтовка<c(FFAF00)> M40A5<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>83<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m110"														"Сн. винтовка<c(FFAF00)> M110<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n оптика Leupold Mark 4 3.5-10X40 LR/T Mil-Dot \n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"m200"														"Сн. винтовка<c(00FF00)> CheyTac<c(FFFFFF)><c(FFAF00)> M200<c(FFFFFF)>\n калибр 10,3x77 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n оптика Night Force NSX 5.5-22x56 MOAR \n патроны -<c(FFAF00)>.408<c(FFFFFF)><c(00FF00)> Сheyenne Tactical<c(FFFFFF)> "}
			{"mk12srp"													"Сн. винтовка<c(FFAF00)> Mk 12 SRP<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,25<c(FFFFFF)> moa.\n оптика Leupold Mark 4 3.5-10X40 LR/T Mil-Dot "}
			{"msr"														"Сн. винтовка<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> MSR<c(FFFFFF)>\n калибр 8,6x70 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n оптика Schmidt & Bender PM 2 5-25x56 Horus \n патроны -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
	        {"qbu-88"													"Сн.винтовка<c(FFAF00)> QBU-88<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5..2,2<c(FFFFFF)> moa. "}
	        {"qbu-88_silence"											"Сн.винтовка<c(FFAF00)> QBU-88<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5..2,2<c(FFFFFF)> moa. "}
	        {"qbu-202"													"Сн. винтовка<c(FFAF00)> QBU-202<c(FFFFFF)> \n калибр 8,6x70 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> m.\n кучность -<c(4d6ff7)> 0,5<c(FFFFFF)> moa. "}
	        {"qbu-202_suppressor"										"Сн. винтовка<c(FFAF00)> QBU-202<c(FFFFFF)> \n калибр 8,6x70 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> m.\n кучность -<c(4d6ff7)> 0,5<c(FFFFFF)> moa. "}
			{"sr25"														"Сн. винтовка<c(FFAF00)> Mark 11 Model 0<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"star21"													"Сн. винтовка<c(FFAF00)> STAR-21<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
			{"sv98"														"Сн. винтовка<c(FFAF00)> СВ-98<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>83<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,7<c(FFFFFF)> moa.\n оптика 1П69 «Гиперон» x10\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"Svd"														"Сн. винтовка<c(FFAF00)> СВД<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n оптика ПСО - 1М2 x4\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"svd_no_skope"												"Сн. винтовка<c(FFAF00)> СВД<c(FFFFFF)> с открытым прицелом\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"svdk"														"Сн. винтовка<c(FFAF00)> СВДК<c(FFFFFF)>\n калибр 9,3x64 мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,02<c(FFFFFF)> moa.\n оптика 1П70 «Гиперон» x10\n патроны -<c(FFAF00)> 7H33<c(FFFFFF)> "}
			{"svds"														"Сн. винтовка<c(FFAF00)> СВД-С<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,24<c(FFFFFF)> moa.\n оптика ПСО - 1М2 x4\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"svu"														"Сн. винтовка<c(FFAF00)> СВУ<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,8..3,5<c(FFFFFF)> moa.\n оптика ПСО - 1М2 x4\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"svu_2"													"Сн. винтовка<c(FFAF00)> СВУ-АС<c(FFFFFF)>\n калибр 7,62x54 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,8..3,5<c(FFFFFF)> moa.\n оптика ПСО - 1М2 x4\n патроны -<c(FFAF00)> 7H1<c(FFFFFF)> ,<c(FFAF00)> ЛПС<c(FFFFFF)> "}
			{"t5000"													"Сн. винтовка<c(00FF00)> ОРСИС<c(FFFFFF)><c(FFAF00)> T-5000<c(FFFFFF)>\n калибр 8,6x70 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,5<c(FFFFFF)> moa.\n оптика Night Force NSX 2.5-10x42 MOAR \n патроны -<c(FFAF00)> 338.<c(FFFFFF)><c(00FF00)>Lapua Magnum<c(FFFFFF)> "}
			{"tac50"													"Сн. винтовка<c(00FF00)> McMilan<c(FFFFFF)><c(FFAF00)> TAC-50<c(FFFFFF)>\n калибр 12,7x99 мм \n дальность - <c(FFAF00)>105<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,6..2,5<c(FFFFFF)> moa.\n оптика Night Force NSX 8.5-32x56 Mil-Dot \n патроны -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
			{"Vintorez"													"Сн. винтовка<c(FFAF00)> ВСС<c(FFFFFF)><c(00FF00)> «Винторез»<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>65<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика ПСО - 1М2 - 01 x4"}
			{"vssk_vyhlop"												"Сн. винтовка<c(FFAF00)> ВКС<c(FFFFFF)><c(00FF00)> «Выхлоп»<c(FFFFFF)>\n калибр 12,7x55 мм \n дальность - <c(FFAF00)>77<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,86..1,72<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> СЦ-130 ПТ<c(FFFFFF)> ,<c(FFAF00)> СЦ-130 ВПС<c(FFFFFF)>"}
			{"wa2000"													"Сн. винтовка<c(00FF00)> Walther <c(FFAF00)>WA 2000<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>75<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 0,7<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
			{"xm25"														"Гранатомет<c(FFAF00)> XM25<c(FFFFFF)> \n калибр 25x40mm \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,25<c(FFFFFF)> moa."}
		{"as50"															"Сн. винтовка<c(00FF00)> AI<c(FFFFFF)><c(FFAF00)> AS-50<c(FFFFFF)>\n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,3..1.8<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
		{"hecate"														"Сн. винтовка<c(00FF00)> PGM<c(FFFFFF)><c(FFAF00)> Hecate 2<c(FFFFFF)>\n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0..2,0<c(FFFFFF)> moa.\n оптика SCROME LTE J10F1 x10 \n патроны -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> "}
		{"jackhammer"													"Дробовик<c(00FF00)> Pancor Jackhammer<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"ks-23"														"Дробовик<c(00FF00)> КС-23<c(FFFFFF)>\n калибр 23x75 мм R \n дальность - <c(FFAF00)>15..23<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ks-23m_drozd_1"												"Дробовик<c(00FF00)> КС-23М<c(FFFFFF)><c(FFAF00)> Дрозд<c(FFFFFF)>\n калибр 23x75 мм R \n дальность - <c(FFAF00)>15..23<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ks-23m_drozd_2"												"Дробовик<c(00FF00)> КС-23М<c(FFFFFF)><c(FFAF00)> Дрозд<c(FFFFFF)>\n калибр 23x75 мм R \n дальность - <c(FFAF00)>15..23<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4..10<c(FFFFFF)> moa."}
		{"ksvk"															"Сн. винтовка<c(FFAF00)> КСВК<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,85..2,5<c(FFFFFF)> moa.\n оптика 1П71-1 «Гиперон» x10\n патроны -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> БС<c(FFFFFF)>,<c(FFAF00)> МДЗ<c(FFFFFF)>,<c(FFAF00)> Б-32<c(FFFFFF)> "}
		{"m14"															"Авт. винтовка<c(FFAF00)> M14<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>70<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}
		{"M82"															"Сн. винтовка<c(FFAF00)> M82A1<c(00FF00)><c(00FF00)> «Light Fifty»<c(FFFFFF)>\n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5..2,5<c(FFFFFF)> moa.\n оптика Leupold Mark 4 4.5-14X50 Mil-Dot \n патроны -<c(FFAF00)> Mk211<c(FFFFFF)> ,<c(FFAF00)> M2<c(FFFFFF)> ,<c(FFAF00)> A-Max <c(FFFFFF)> \n - вариант для Бундесвера G82 "}
		{"mossberg_500_cr"												"Дробовик<c(00FF00)> Mossberg<c(FFFFFF)> <c(FFAF00)>500<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"OSV98"														"Сн. винтовка<c(FFAF00)> ОСВ-96<c(FFFFFF)><c(00FF00)> «Взломщик»<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0..2,5<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> БС<c(FFFFFF)>,<c(FFAF00)> МДЗ<c(FFFFFF)>,<c(FFAF00)> Б-32<c(FFFFFF)> "}
		{"qbs09"														"Дробовик<c(FFAF00)> Type 09<c(FFFFFF)><c(00FF00)><c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7,0<c(FFFFFF)> moa."}
		{"remington870"													"Дробовик<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> 870<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"remington870"													"Дробовик<c(00FF00)> Remington<c(FFFFFF)><c(FFAF00)> 870<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"serby_ss"														"Дробовик<c(00FF00)> Serbu Super Shortly<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>25<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"shaher"														"Сн. винтовка <c(00FF00)> Shaher<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>110<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> БС<c(FFFFFF)>,<c(FFAF00)> МДЗ<c(FFFFFF)>,<c(FFAF00)> Б-32<c(FFFFFF)> "}	
		{"spas15"														"Дробовик<c(FFAF00)> SPAS-15<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6<c(FFFFFF)> moa."}
		{"stryker"														"Дробовик<c(00FF00)> Striker<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 8<c(FFFFFF)> moa."}
		{"stryker1"														"Дробовик<c(00FF00)> Striker<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"taher"														"Сн. винтовка <c(00FF00)> Taher<c(FFFFFF)>\n калибр 17,62x51 мм \n дальность - <c(FFAF00)>80<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> M118LR<c(FFFFFF)> ,<c(FFAF00)> M80<c(FFFFFF)> "}	
		{"toz80"														"Дробовик<c(FFAF00)> ТОЗ-80<c(FFFFFF)>\n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5<c(FFFFFF)> moa."}
		{"usas12"														"Дробовик<c(FFAF00)> USAS-12<c(FFFFFF)>\n \n 12 калибр \n дальность - <c(FFAF00)>35<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 7<c(FFFFFF)> moa."}
		{"zijiang_m99"													"Сн. винтовка <c(00FF00)> Zijiang<c(FFFFFF)><c(FFAF00)>M99<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>85<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,6..2,15<c(FFFFFF)> moa.\n патроны -<c(FFAF00)> 7H34<c(FFFFFF)> ,<c(FFAF00)> БС<c(FFFFFF)>,<c(FFAF00)> МДЗ<c(FFFFFF)>,<c(FFAF00)> Б-32<c(FFFFFF)> "}	
	}
;smg
	{"ammo"
		
	}
	{"stuff"
		
	}
	{"weapon"
		{"Abakan"														"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_1"														"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_2"														"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_3"														"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)> и ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_4"														"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_skope"													"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> ПК-А<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"Abakan_skope_2"												"<c(FFAF00)>АН-94<c(FFFFFF)><c(00FF00)> «Абакан»<c(FFFFFF)> с<c(4d6ff7)> ПК-А<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"aek_973"														"<c(FFAF00)>АЕК-973<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,35<c(FFFFFF)> moa."}
		{"aek_973_2"													"<c(FFAF00)>АЕК-973<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>63<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_3"													"<c(FFAF00)>АЕК-973<c(FFFFFF)> с<c(4d6ff7)> ПК-А<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_4"													"<c(FFAF00)>АЕК-973<c(FFFFFF)> с<c(4d6ff7)> ПК-А<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek_973_5"													"<c(FFAF00)>АЕК-973<c(FFFFFF)> c<c(4d6ff7)> 1П29<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"aek971_1"														"<c(FFAF00)>АЕК-971<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"aek971_2"														"<c(FFAF00)>АЕК-971<c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_1"														"<c(FFAF00)>АК-105<c(FFFFFF)> c<c(4d6ff7)> ЭКП-3<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_2"														"<c(FFAF00)>АК-105<c(FFFFFF)> c<c(4d6ff7)> ПОС<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_3"														"<c(FFAF00)>АК-105<c(FFFFFF)> c<c(4d6ff7)> ЭКП-3<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_4"														"<c(FFAF00)>АК-105<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak_107_5"														"<c(FFAF00)>АК-105<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12"															"<c(FFAF00)>АК-12<c(FFFFFF)> <c(4d6ff7)> <c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_1p87_gp25"												"<c(FFAF00)>АК-12<c(FFFFFF)> c<c(4d6ff7)> 1п87<c(FFFFFF)> и<c(CCCCCC)> ГП-25<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_1p87_tactical"											"<c(FFAF00)>АК-12<c(FFFFFF)> c<c(4d6ff7)> 1п87<c(FFFFFF)> <c(CCCCCC)><c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak12_gp25"													"<c(FFAF00)>АК-12<c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"ak15_1p87_gp25"												"<c(FFAF00)>АК-15<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)> и ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_pbs_gp25"											"<c(FFAF00)>АК-15<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>, ПБС и ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_pbs_tactical"										"<c(FFAF00)>АК-15<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>и ПБС\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak15_1p87_tactical"											"<c(FFAF00)>АК-15<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"Ak47"															"<c(FFAF00)>AK<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"ak47_rp"														"<c(FFAF00)>AK<c(FFFFFF)> с барабанным магазином\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"Ak74"															"<c(FFAF00)>AK-74<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74_p"														"<c(FFAF00)>AK-74М<c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"Ak74b"														"<c(FFAF00)>AK-74М<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak-74derevo_gp"												"<c(FFAF00)>AK-74<c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_1p29"													"<c(FFAF00)>АК-74М<c(FFFFFF)> с<c(4d6ff7)> 1П76<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_1p78"													"<c(FFAF00)>АК-74М<c(FFFFFF)> с<c(4d6ff7)> 1П78-1<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_gp25_1p78"												"<c(FFAF00)>АК-74М<c(FFFFFF)> с<c(4d6ff7)> 1П76<c(FFFFFF)>, ГП-25 и<c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak74m_pso"													"<c(FFAF00)>АК-74М<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n оптика ПСО - 1 x4"}
		{"ak74spec_1"													"<c(FFAF00)>АК-74<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)> <c(CCCCCC)> <c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n оптика ПСО - 1 x4"}
		{"Ak74sps"														"<c(FFAF00)>АКС-74<c(FFFFFF)> <c(4d6ff7)> <c(FFFFFF)><c(CCCCCC)><c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n оптика ПСО - 1 x4"}
		{"ak74u"														"<c(FFAF00)>AKС-74У<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"ak74us"														"<c(FFAF00)>AKС-74У<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"Ak74w"														"<c(FFAF00)>AK-74<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"ak103_1p87"													"<c(FFAF00)>АК-103<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_gp25_1p87"												"<c(FFAF00)>АК-103<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)> и ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_gp25_pbs_1p87"											"<c(FFAF00)>АК-103<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>, ПБС и ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>65<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak103_pbs_1p87"												"<c(FFAF00)>АК-103<c(FFFFFF)> с<c(4d6ff7)> 1П87<c(FFFFFF)>и ПБС \n калибр 7,62x39 мм \n дальность - <c(FFAF00)>65<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"ak104"														"<c(FFAF00)>АК-104<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,5<c(FFFFFF)> moa."}
		{"ak107"														"<c(FFAF00)>АК-105<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"AKM"															"<c(FFAF00)>AKM<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akm_gp25"														"<c(FFAF00)>АКМ<c(FFFFFF)> с ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akm_pbs"														"<c(FFAF00)>АКМ<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>63<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"AKMS"															"<c(FFAF00)>АКМС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akms_gp25"													"<c(FFAF00)>АКМС<c(FFFFFF)> с ГП-25\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"akms_pbs"														"<c(FFAF00)>АКМС<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>63<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,6<c(FFFFFF)> moa."}
		{"Aks47"														"<c(FFAF00)>АКС<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,1<c(FFFFFF)> moa."}
		{"Aks74"														"<c(FFAF00)>АКС-74<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_1p29"													"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n оптика 1П29 «Тюльпан» x4 "}
		{"aks74_1p78"													"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> 1П78-1<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa.\n оптика 1П78-1 x2,8 "}
		{"aks74_3"														"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)> и ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_4"														"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_5"														"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-07<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_gp25"													"<c(FFAF00)>АКС-74<c(FFFFFF)> с ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74_gp25_1p29"												"<c(FFAF00)>АКС-74<c(FFFFFF)> с<c(4d6ff7)> 1П29<c(FFFFFF)> и ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"aks74u_1"														"<c(FFAF00)>АКС-74У<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-06<c(FFFFFF)>,<c(CCCCCC)> ПБС<c(FFFFFF)> и ГП-25\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>52<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aks74u_2"														"<c(FFAF00)>АКС-74У<c(FFFFFF)> с<c(4d6ff7)> ПСО-1<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>56<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa.\n оптика ПСО - 1 x4"}
		{"aks74u_3"														"<c(FFAF00)>АКС-74У<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>51<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aks74u_4"														"<c(FFAF00)>АКС-74У<c(FFFFFF)> с<c(4d6ff7)> ПК-А<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>52<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"aksu74"														"<c(FFAF00)>АКС-74У<c(FFFFFF)>\n калибр 5,45x39 мм \n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,85<c(FFFFFF)> moa."}
		{"AkVal"														"<c(FFAF00)>АС<c(FFFFFF)><c(00FF00)> «ВАЛ»<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"AkVal_1"														"<c(FFAF00)>АС<c(FFFFFF)><c(00FF00)> «ВАЛ»<c(FFFFFF)> с<c(4d6ff7)> ЭКП-1-05<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>51<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"bizon"														"Пистолет-пулемёт<c(FFAF00)> Бизон-2Б-01<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"ca-58acog"													"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> vz.58<c(FFFFFF)> с <c(4d6ff7)>Acog<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"colt_car15"													"<c(00FF00)>Colt Commando<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,3<c(FFFFFF)> moa."}
		{"cz_scorpion_evo3_1a"											"Пистолет-пулемёт<c(00FF00)> CZ<c(FFFFFF)><c(FFAF00)> Scorpion EVO3A1<c(FFFFFF)>\n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2.8<c(FFFFFF)> moa."}
		{"cz805"														"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> 805<c(FFFFFF)> с <c(4d6ff7)>Acog<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"cz805_m203"													"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> 805<c(FFFFFF)> с <c(4d6ff7)>Acog<c(FFFFFF)> и M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"famas_f1"														"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"famas_f1_aimpoint"											"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)> c<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"famas_f1_opt"													"<c(00FF00)>FAMAS<c(FFFFFF)><c(FFAF00)> F1<c(FFFFFF)> c оптикой<c(4d6ff7)> <c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g3a3"															"<c(FFAF00)>G3A3<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,1<c(FFFFFF)> moa."}
		{"g3a3_scope"													"<c(FFAF00)>G3A3<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36"															"<c(FFAF00)>G36A1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36_ag36"														"<c(FFAF00)>G36A1<c(FFFFFF)> с AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36a3_eotech552_ag36"											"<c(FFAF00)>G36A3<c(FFFFFF)> с AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_eotech552_an"											"<c(FFAF00)>G36A3<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_eotech552_silencer"										"<c(FFAF00)>G36A3<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_eotech552_silencer_ag36"								"<c(FFAF00)>G36A3<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)> и AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_zeiss_zo_4x30i"											"<c(FFAF00)>G36A3<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_zeiss_zo_4x30i_ag36"									"<c(FFAF00)>G36A3<c(FFFFFF)> с AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36a3_zeiss_zo_4x30i_silencer"								"<c(FFAF00)>G36A3<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa.\n оптика"}
		{"g36c"															"<c(FFAF00)>G36C<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,4<c(FFFFFF)> moa."}
		{"g36e"															"<c(FFAF00)>G36E<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,5<c(FFFFFF)> moa."}
		{"g36k"															"<c(FFAF00)>G36K<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,4<c(FFFFFF)> moa."}
		{"galil_ar_556"													"<c(00FF00)>Galil<c(FFFFFF)><c(FFAF00)> AR<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"groza_1"														"<c(FFAF00)>ОЦ-14<c(FFFFFF)><c(00FF00)> Гроза-4<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_2"														"<c(FFAF00)>ОЦ-14<c(FFFFFF)><c(00FF00)> Гроза-4<c(FFFFFF)> с<c(4d6ff7)> ПО 4х34<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>51<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_3"														"<c(FFAF00)>ОЦ-14<c(FFFFFF)><c(00FF00)> Гроза-4<c(FFFFFF)> с<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>46<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza_tactic"													"<c(FFAF00)>ОЦ-14<c(FFFFFF)><c(00FF00)> Гроза-4<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"groza1_1"														"<c(FFAF00)>ОЦ-14<c(FFFFFF)><c(00FF00)> Гроза-1<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 4,5<c(FFFFFF)> moa."}
		{"hk416"														"<c(FFAF00)>HK416<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416_aimpoint"												"<c(FFAF00)>HK416<c(FFFFFF)> с<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416_aimpoint_m302"											"<c(FFAF00)>HK416<c(FFFFFF)> с<c(4d6ff7)> Aimpoint<c(FFFFFF)> и M302\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk416A5_Silenced"												"<c(FFAF00)>HK416A5<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa."}
		{"hk417_smg"													"<c(FFAF00)>HK417<c(FFFFFF)> с<c(4d6ff7)> Eeotech551<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"js2"															"Пистолет-пулемёт<c(00FF00)> CS/LS2<c(FFFFFF)>\n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3.09<c(FFFFFF)> moa."}
		{"js2_silenced"													"Пистолет-пулемёт<c(00FF00)> CS/LS2<c(FFFFFF)> с глушителем\n дальность - <c(FFAF00)>46<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3.09<c(FFFFFF)> moa."}
		{"l22a2_susat"													"<c(FFAF00)>L22A2<c(FFFFFF)> c<c(4d6ff7)> Susat<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>60<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2"														"<c(FFAF00)>L85A2<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_acog"													"<c(FFAF00)>L85A2<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)>2.0<c(FFFFFF)> moa."}
		{"l85a2_ag36"													"<c(FFAF00)>L85A2<c(FFFFFF)> с AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_ag36_acog"												"<c(FFAF00)>L85A2<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> и AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_ag36_susat"												"<c(FFAF00)>L85A2<c(FFFFFF)> с<c(4d6ff7)> Susat<c(FFFFFF)> и AG36\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l85a2_susat"													"<c(FFAF00)>L85A2<c(FFFFFF)> с<c(4d6ff7)> Susat<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"l119a2"														"<c(FFAF00)>L119A2<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"l119a2_silenced"												"<c(FFAF00)>L119A2<c(FFFFFF)> c<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"lodtester"													"<c(CF9FFF)>LOD Tester</c>"}	;t
		{"M4"															"<c(FFAF00)>M4<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mars"														"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Mars<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mars_m203"													"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Mars<c(FFFFFF)> и M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mepro21"													"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Mepro 21<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4_mepro21_pr"												"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Mepro 21<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_ag36_acog"												"<c(FFAF00)>M4A1<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>, AG36 и<c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>66<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_m203_acog"												"<c(FFAF00)>M4A1<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>, М203 и <c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>66<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_mgun"													"<c(FFAF00)>M4A1 с<c(4d6ff7)> Eeotech551<c(FFFFFF)> и бункерным магазином\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_sd_aimpoint"												"<c(FFAF00)>M4А1 с<c(4d6ff7)> Aimpoint<c(FFFFFF)> и<c(CCCCCC)> ПБС<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>58<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4a1_sd_aimpoint_tactical"									"<c(FFAF00)>M4А1<c(FFFFFF)> Tactical<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>58<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4acog"														"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>66<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4aimpoint"													"<c(FFAF00)>M4<c(FFFFFF)> с<c(4d6ff7)> Aimpoint<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4empy"														"<c(FFAF00)>M4<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m4iron"														"<c(FFAF00)>M4А1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4laz"														"<c(FFAF00)>M4<c(FFFFFF)> с<c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M4S"															"<c(FFAF00)>M4A1<c(FFFFFF)> с<c(4d6ff7)> Acog<c(FFFFFF)>,<c(FF1F00)> ЛЦУ<c(FFFFFF)> и M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>66<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"M-16"															"<c(FFAF00)>M16<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A1"														"<c(FFAF00)>M16A1<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A2"														"<c(FFAF00)>M16A2<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"m16a2_m203"													"<c(FFAF00)>M16A2<c(FFFFFF)> c M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,65<c(FFFFFF)> moa."}
		{"M16A4"														"<c(FFAF00)>M16A4<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4_m203_acog"												"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> с M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4acog"													"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4empy"													"<c(FFAF00)>M16A4<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4full"													"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(4d6ff7)> Acog<c(FFFFFF)> c<c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m16a4laz"														"<c(FFAF00)>M16A4<c(FFFFFF)> c<c(FF1F00)> ЛЦУ<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa."}
		{"m27iar"														"<c(FFAF00)>M27 IAR<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"m27iar_acog"													"<c(FFAF00)>M27 IAR<c(FFFFFF)> с<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"masaf"														"<c(FFAF00)>Masaf<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,5<c(FFFFFF)> moa.\n оптика "}
		{"mk17_acog_black"												"<c(FFAF00)>FN<c(FFFFFF)><c(00FF00)> Scar-H<c(FFFFFF)> с<c(4d6ff7)> Acog<c(FFFFFF)>\n калибр 7,62x51 мм \n дальность - <c(FFAF00)>72<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"mp5sd"														"Пистолет-пулемёт<c(00FF00)> HK<c(FFFFFF)><c(FFAF00)> MP-5SD3<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"pp_vityaz"													"Пистолет-пулемёт<c(FFAF00)> ПП-19-01<c(FFFFFF)><c(00FF00)> «Витязь»<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa."}
		{"pp_vityaz_pbs"												"Пистолет-пулемёт<c(FFAF00)> ПП-19-01<c(FFFFFF)><c(00FF00)> «Витязь»<c(FFFFFF)> с ПБС\n калибр 9x19 мм \n дальность - <c(FFAF00)>26<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n коллиматор "}
		{"pp_vityaz_spec"												"Пистолет-пулемёт<c(FFAF00)> ПП-19-01<c(FFFFFF)><c(00FF00)> «Витязь»<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 10<c(FFFFFF)> moa.\n оптика "}
		{"qbz_191"														"<c(FFAF00)>QBZ-191<c(FFFFFF)>\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. \n оптика QMK152"}	
		{"qbz_191_silence"												"<c(FFAF00)>QBZ-191<c(FFFFFF)> с глушителем\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. \n оптика QMK152"}	
	    {"qbz95"														"<c(FFAF00)>QBZ-95<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
	    {"qbz95_qlg10a"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> с QLG-10A\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_qlg10a_scope"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> c оптикой и QLG-10A \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_qlg91"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> с ГП<c(CCCCCC)> Type 91<c(FFFFFF)>\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_scope"													"<c(FFAF00)>QBZ-95<c(FFFFFF)> c оптикой \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_scope_qlg91"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> с оптикой и ГП<c(CCCCCC)> Type 91<c(FFFFFF)>\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>73<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}
		{"qbz95_silence"												"<c(FFAF00)>QBZ-95<c(FFFFFF)> с глушителем\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95_silence_scope"											"<c(FFAF00)>QBZ-95<c(FFFFFF)> с оптикой и глушителем\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>64<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa. "}	
		{"qbz95b"														"<c(FFAF00)>QBZ-95B<c(FFFFFF)> \n калибр 5,8x42 мм \n дальность - <c(FFAF00)>55<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,5<c(FFFFFF)> moa. "}	
		{"rugerm14"														"<c(00FF00)>Ruger<c(FFFFFF)><c(FFAF00)> Mini-14<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>61<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,0<c(FFFFFF)> moa."}
		{"Scar-l"														"<c(FFAF00)>FN<c(FFFFFF)><c(00FF00)> Scar-L<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"SP3_vihr"														"<c(FFAF00)>СР-3<c(00FF00)><c(00FF00)> «Вихрь»<c(FFFFFF)>\n калибр 9x39 мм \n дальность - <c(FFAF00)>38<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"SP3_vihr_1"													"<c(FFAF00)>СР-3<c(00FF00)><c(00FF00)> «Вихрь»<c(FFFFFF)> c ПБС\n калибр 9x39 мм \n дальность - <c(FFAF00)>34<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"SP3_vihr_2"													"<c(FFAF00)>СР-3<c(00FF00)><c(00FF00)> «Вихрь»<c(FFFFFF)> c ПБС\n калибр 9x39 мм \n дальность - <c(FFAF00)>34<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"tar21"														"<c(FFAF00)>TAR-21<c(FFFFFF)> c<c(4d6ff7)> Mars<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"tavor_m203"													"<c(FFAF00)>TAR-21<c(FFFFFF)> c<c(4d6ff7)> Mars<c(FFFFFF)> и M203\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>68<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,0<c(FFFFFF)> moa."}
		{"tmp"															"Пистолет-пулемёт<c(00FF00)> Steyr<c(FFFFFF)><c(FFAF00)> TMP<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 5,0<c(FFFFFF)> moa."}
		{"type87_smg"													"<c(FFAF00)>QBZ-03<c(FFFFFF)>\n калибр 5,8x42 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 1,55<c(FFFFFF)> moa. "}	
		{"type89"														"<c(FFAF00)>HOWA89<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>62<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 2,75<c(FFFFFF)> moa. "}	
		{"uzi"															"Пистолет-пулемёт<c(00FF00)> «Uzi»<c(FFFFFF)>\n калибр 9x19 мм \n дальность - <c(FFAF00)>30<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 6,0<c(FFFFFF)> moa."}
		{"vz58"															"<c(00FF00)>CZ<c(FFFFFF)><c(FFAF00)> vz.58<c(FFFFFF)>\n калибр 7,62x39 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
		{"wz96_beryl"													"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_kbk-g_sk3"											"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> mod 2004 с ГП Pallad\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_mod_sk3"											"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> mod 2004 с коллиматором\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"wz96_beryl_sk3"												"<c(FFAF00)>WZ-96 Beryl<c(FFFFFF)> с коллиматором\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>67<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,2<c(FFFFFF)> moa."}
		{"xm8"															"<c(FFAF00)>XM8<c(FFFFFF)>\n калибр 5,56x45 мм \n дальность - <c(FFAF00)>50<c(FFFFFF)> м.\n кучность -<c(4d6ff7)> 3,0<c(FFFFFF)> moa."}
	}
;smokegun
	{"ammo"
		
	}
	{"stuff"
		
	}
	{"weapon"
		{"2xepocha_c"													"Дым. гранатомёт"}
		{"2xepocha_d"													"Дым. гранатомёт"}
		{"4xepocha_a"													"Дым. гранатомёт"}
		{"4xepocha_b"													"Дым. гранатомёт"}
		{"6xepocha_a"													"Дым. гранатомёт"}
		{"6xepocha_b"													"Дым. гранатомёт"}
		{"10xshtora"													"Дым. гранатомёт"}
		{"24xafganit_l"													"Дым. гранатомёт КАЗ «Афганит»"}
		{"24xafganit_r"													"Дым. гранатомёт КАЗ «Афганит»"}
		{"muss_puma"													"КОЭП «MUSS»"}
		{"trophy_mortar"												"Мортира КАЗ «Trophy»"}
	}
;smokeguns
	{"ammo"
		{"afganit"														"Боеприпас для КАЗ <c(00FF00)>«Афганит»<c(FFFFFF)>\n С его помощью солдат может перезарядить КАЗ «Афганит»"}
		{"arena"														"Боеприпас для КАЗ <c(00FF00)>«Арена»<c(FFFFFF)>\n С его помощью солдат может перезарядить КАЗ «Арена»"}
		{"drozd"														"Боеприпас для КАЗ <c(00FF00)>«Дрозд»<c(FFFFFF)>\n С его помощью солдат может перезарядить КАЗ «Дрозд»"}
		{"smoke"														"Граната<c(FFAF00)> 3Д6<c(FFFFFF)> для дым. гранатомета<c(00FF00)> «Туча»<c(FFFFFF)>\n - для постановки перед объектом дымовой завесы маскирующего действия - "}
		{"smoke_kzvp"													"Граната для КАЗ <c(00FF00)>«Афганит»<c(FFFFFF)>\n - для постановки перед объектом дымовой завесы маскирующего и помехового действия - "}
		{"smoke_shtora"													"Граната<c(FFAF00)> 3Д17<c(FFFFFF)> для ТШУ <c(00FF00)>«Штора 1»<c(FFFFFF)>\n - для постановки перед объектом дымовой завесы маскирующего и помехового действия - "}
		{"trophy"														"Граната для КАЗ <c(00FF00)>«Trophy»<c(FFFFFF)>\n - для поражения противотанковых средств - "}
		{"trophy_rpg_initiator"											"<c(CF9FFF)>Initiator Trophy</c>"}	;t
	}
	{"stuff"
		{"trophy_mortar"												"Мортира КАЗ «Trophy»"}
	}
	{"weapon"
		{"2xsmokegun"													"Дым. гранатомёт"}
		{"3xshtora"														"Дым. гранатомёт"}
		{"3xsmokegun_bmp2"												"Дым. гранатомёт"}
		{"3xsmokegun_bmp3"												"Дым. гранатомёт"}
		{"3xsmokegun_m60"												"Дым. гранатомёт"}
		{"3xsmokegun_msta"												"Дым. гранатомёт"}
		{"4xshtora"														"Дым. гранатомёт"}
		{"4xsmokegun_bredly"											"Дым. гранатомёт"}
		{"5xsmokegun_T72A_right"										"Дым. гранатомёт"}
		{"6xshtora"														"Дым. гранатомёт"}
		{"6xsmokegun"													"Дым. гранатомёт"}
		{"6xsmokegun_abrams"											"Дым. гранатомёт"}
		{"6xsmokegun_adrams"											"Дым. гранатомёт"}
		{"6xsmokegun_btr"												"Дым. гранатомёт"}
		{"7xshtora"														"Дым. гранатомёт"}
		{"7xsmokegun_T72A_left"											"Дым. гранатомёт"}
		{"8xsmokegun_T72b"												"Дым. гранатомёт"}
		{"12xsmokegun_pt91"												"Дым. гранатомёт"}
	}
;special
	{"ammo"
		{"ponton_pmp"													"Понтон<c(FFAF00)> ПМП<c(FFFFFF)>"}
	}
	{"stuff"
		{"2b14_podnos"													"Миномет<c(FFAF00)> 2Б14<c(FFFFFF)><c(00FF00)> «Поднос»<c(FFFFFF)>\n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"AGS17_stan"													"Гранатомет<c(FFAF00)> АГС-17<c(FFFFFF)><c(00FF00)> «Пламя»<c(FFFFFF)>\n дальность - <c(FFAF00)>92..105<c(FFFFFF)> м."}
		{"Ags30_stan"													"Гранатомет<c(FFAF00)> АГС-30<c(FFFFFF)><c(00FF00)> «Атлант»<c(FFFFFF)>\n дальность - <c(FFAF00)>92..105<c(FFFFFF)> м."}
		{"b33r"															"<c(ffff60)>Ящик пива</c>"}	;vanilla
		{"barbwire_kit"													"<c(ffff60)>Колючая проволока</c>\nБлокируйте проволокой проход пехоты."}
		{"blackbox"														"<c(ffff60)>Черный ящик (аварийный самописец)</c>"}
		{"browning_m2hb_stan"											"Пулемёт<c(00FF00)> «Browning»<c(FFFFFF)><c(FFAF00)> M2HB<c(FFFFFF)> \n калибр 12,7x99 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}	
		{"buksir_tros"													"<c(ffff60)>Буксирный трос </c>\n прикажите солдату применить трос \n на ходовую часть для буксировки\n<c(00FF00)>Вес тягача ≥ Вес прицепа = Можно тянуть <c(FFFFFF)>\n<c(FF1F00)>Вес тягача < Вес прицепа = Нельзя тянуть <c(FFFFFF)>"}
		{"cord_wood"													"<c(ffff60)>Вязанка дров</c>"}	;vanilla
		{"cumulative_charge"											"<c(CF9FFF)>cumulative_charge</c>"}	;t
		{"cumulative_launcher"											"<c(CF9FFF)>cumulative_launcher</c>"}	;t
		{"documents"													"<c(ffff60)>Документы</c>"}
		{"dollar"														"<c(ffff60)>Доллары США</c>"}
		{"eleron_catapult"												"Пневматическая катапульта - служит для запуска БПЛА  Элерон-3СВ"}
		{"eleron_control"												"Пульт управления - служит для управления БПЛА Элерон-3СВ"}
		{"empty_stuff"													"<c(ffff60)>Пусто</c>"}
		{"field_bag"													"<c(ffff60)>Вещмешок</c>"}	;vanilla
		{"flag_handle"													"<c(ffff60)>Флаг</c>"}	;vanilla
		{"flag_handle_1_arm_div"										"Знамя 1 Arm. Division"}
		{"gmg_stan"														"Станк.<c(FFAF00)> GMG<c(FFFFFF)>"}
		{"hedgehog_kit"													"<c(ffff60)>Противотанковый еж</c>\nБлокируйте ежами проезд для техники."}
		{"hj73_stan"													"Станк. <c(FFAF00)> HJ-73<c(FFFFFF)>"}
		{"human"														"<c(ffff60)>Труп</c>"}
		{"Kord_stan"													"Станк.<c(FFAF00)> Корд<c(FFFFFF)>"}
		{"Kornet_stan"													"Станк.<c(FFAF00)> Корнет<c(FFFFFF)>"}
		{"l16_mortar"													"Миномет<c(FFAF00)> L-16<c(FFFFFF)>"}
		{"light"														"<c(CF9FFF)>Light</c>"}	;t	;vanilla
		{"m2_stan"														"Станк. <c(FFAF00)> M2<c(FFFFFF)>"}
		{"m252_stan"													"Миномет<c(FFAF00)> М252<c(FFFFFF)>"}
		{"malytka_stan"													"Станк.<c(FFAF00)> Малютка<c(FFFFFF)>"}
		{"marlboro"														"<c(ffff60)>Сигареты Марлборо</c>"}
		{"matchbox"														"<c(ffff60)>Коробок спичек</c>\nИспользуйте для зажигания горючих материалов."}
		{"metis_hand"													"ПТРК <c(FFAF00)> 9К115-2<c(FFFFFF)><c(00FF00)> «Метис-М»<c(FFFFFF)> \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."} 
		{"mg3_stan"														"Станк. <c(FFAF00)> MG3<c(FFFFFF)>"}
		{"milan_stan"													"Станк.<c(FFAF00)> Милан<c(FFFFFF)>"}
		{"mine_detector"												"<c(ffff60)>Миноискатель</c>\nИспользуйте для поиска мин."}
		{"Mk19_stan"													"Станк.<c(FFAF00)> Mk19<c(FFFFFF)>"}
		{"mstar_v6_stan"												"Станк. РЛС<c(FFAF00)> MSTAR V6<c(FFFFFF)>"}
		{"mstar_v6usa_stan"												"Станк. РЛС<c(FFAF00)> MSTAR V6<c(FFFFFF)>"}
		{"netting_kit"													"<c(ffff60)>Маскировочная сеть</c>"}
		{"notebook"														"<c(ffff60)>Ноутбук</c>"}
		{"pkm_stan"														"Станк.<c(FFAF00)> ПКМ<c(FFFFFF)>"}
		{"plant"														"<c(ffff60)>Куст</c>"}
		{"prima"														"<c(ffff60)>Сигареты Прима</c>"}
		{"psnr5_stan"													"Станк. РЛС<c(FFAF00)> ПНСР-5<c(FFFFFF)>"}
		{"psnr5m_stan"													"Станк. РЛС<c(FFAF00)> ПНСР-5М<c(FFFFFF)>"}
		{"ptur_hj8"														"Станк.<c(FFAF00)>HJ-8<c(FFFFFF)>"}
		{"ptur_konkurs"													"Станк.<c(FFAF00)> Конкурс<c(FFFFFF)>"}
		{"ptur_mmp"														"Станк.<c(FFAF00)> MMP<c(FFFFFF)>"}
		{"ptur_tow"														"Станк.<c(FFAF00)> TOW<c(FFFFFF)>"}
		{"qjz-89_stan"													"Пулемёт<c(FFAF00)> QJZ-89<c(FFFFFF)>\n калибр 12,7x108 мм \n дальность - <c(FFAF00)>100<c(FFFFFF)> м."}
		{"qlz04_stan"													"Гранатомет<c(FFAF00)> QLZ-04<c(FFFFFF)>\n дальность - <c(FFAF00)>92<c(FFFFFF)> м."}
		{"rad"															"<c(ffff60)>Странный ящик</c>"}	;vanilla
		{"radar_bs903_stan"												"Станк. РЛС<c(FFAF00)> BS-903<c(FFFFFF)>"}
		{"radio_station"												"<c(ffff60)>Радиостанция</c>"}
		{"rus_las_designator_stan"										"Станк. ЛЦУ<c(FFAF00)> 1Д26<c(FFFFFF)>"}
		{"sandbag_kit"													"<c(ffff60)>Мешки и саперная лопата</c>\nИспользуйте для рытья малых окопов и установки мешков с песком."}
		{"sandbag_kit2"													"<c(CF9FFF)>Entity Sandbag_kit2</c>"}	;t
		{"sardini"														"<c(ffff60)>Консервированные сардины</c>"}
		{"scud_dummy"													"<c(ffff60)>Надувной макет 9К14</c>"}
		{"searchlight"													"<c(CF9FFF)>Searchlight</c>"}	;t	;vanilla
		{"spade_inv"													"<c(ffff60)>Лопата</c>\nИспользуйте для рытья малых и средних окопов."}
		{"spg_9_stan"													"Станк.<c(FFAF00)> СПГ-9<c(FFFFFF)>"}
		{"spike_stan"													"Станк.<c(FFAF00)> Spike-ER<c(FFFFFF)>"}
		{"spike_stan_idf"												"Станк.<c(FFAF00)> Spike-ER<c(FFFFFF)>"}
		{"turret_dir_detector"											"<c(CF9FFF)>Service turret_dir_detector</c>"}	;t
		{"tushonka"														"<c(ffff60)>Тушенка</c>"}
		{"type_pp87_stan"												"82мм<c(FFAF00)> PP-87<c(FFFFFF)>\n дальность - <c(FFAF00)>140<c(FFFFFF)> м."}
		{"ur_83p_stan"													"Станк.<c(FFAF00)> УР-83П<c(FFFFFF)>"}
		{"vant_vm_shield_stan"											"Тактический щит <c(FFAF00)>Вант-ВМ<c(FFFFFF)>"}
		{"wind"															"<c(CF9FFF)>Service Wind</c>"}	;t
		{"wirecutters"													"<c(ffff60)>Кусачки</c>\nИспользуйте для резки колючей проволоки."}
	}
	{"weapon"
		{"binocular"													"<c(ffff60)>Бинокль</c>"}
		{"ponton_bridge"												"Понтон<c(FFAF00)> ПМП<c(FFFFFF)>"}
	}
;vanilla
	{"stuff"
		{"bandage"														"<c(ffff60)>Личный медпакет</c>"}
		{"case"															"<c(ffff60)>Секретные документы</c>"}
		{"chicken"														"<c(ffff60)>Курица</c>"}
		{"filling_empty"												"<c(ffff60)>пусто</c>"}		
		{"morphine"														"<c(ffff60)>Санитарная сумка</c>"}
		{"steak"														"<c(ffff60)>Бифштекс</c>"}
		{"petrol"														"<c(ffff60)>Топливо</c>"}
		{"repair_kit"													"<c(ffff60)>Ремкомплект</c>\n<c(FFFFFF)>Используйте для ремонта техники и орудий."}
	}
;Future projects