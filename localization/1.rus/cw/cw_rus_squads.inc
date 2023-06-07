;Создано maaa - DTTGOC
;LocalGen2
;Проверено Bizon и zkv2000
;Перепроверено и переделано за Bizon и zkv2000
;rev 05.07.2022

;Note: 
;1- Row order is from left to right.
;2- Item definers can be extracted from set\multiplayer\units (unit_nation.set,and soldiers.set) or from the in-game multiplayer reinforcements menu

;Ordinal number of row:
	;1 ряд
	;2 ряд 
	;3 ряд
	;4 ряд
	;5 ряд
	;6 ряд

;nation
	;brigade name
		;ordinal number of row
			;item definer(squad, vehicle, etc.)		;item name	
	
;________________________________________________________________________________________________________


{"regular_non_mech_peha(iregular)" 						"<c(FFFFFF)e(shadow)>Иррегулярная пехота</c>"}
{"regular_at2(iregular)" 						"<c(FFFFFF)e(shadow)>Истребители танков</c>"}
{"gaz_66i" 						"<c(FFFFFF)e(shadow)>Пехота на ГАЗ-66</c>"}
{"btr60i" 						"<c(FFFFFF)e(shadow)>Пехота на БТР-60</c>"}
{"bmp1_newi" 						"<c(FFFFFF)e(shadow)>Пехота на БМП-1</c>"}
{"pzrk(iregular)" 						"<c(FFFFFF)e(shadow)>Отряд ПЗРК</c>"}
{"pzrk2_iregular" 						"<c(FFFFFF)e(shadow)>Мобильный отряд ПЗРК</c>"}
{"brdm2_strelaii" 						"<c(FFFFFF)e(shadow)>СТРЕЛА-1</c>"}
{"Shilka_i" 						"<c(FFFFFF)e(shadow)>ЗСУ-23-4 Шилка</c>"}
{"9k35_strela-10" 						"<c(FFFFFF)e(shadow)>9К35 Стрела-10</c>"}
{"type63_rocket2i" 						"<c(FFFFFF)e(shadow)>Тип 63</c>"}
{"zu23-2i" 						"<c(FFFFFF)e(shadow)>ЗУ-23-2</c>"}
{"2c3_akaciya_irg" 						"<c(FFFFFF)e(shadow)>2С3 Акация</c>"}
{"bmp2_new_irg" 						"<c(FFFFFF)e(shadow)>БМП-2</c>"}
{"bmd1pi" 						"<c(FFFFFF)e(shadow)>Отряд быстрого реагирования на БМД-1П</c>"}
{"m113a_irg" 						"<c(FFFFFF)e(shadow)>Отряд пехоты на М113</c>"}
{"sso_irg" 						"<c(FFFFFF)e(shadow)>Диверсанты на МИ-17</c>"}

{"tankman(iregular)" 						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
{"vehicle_supporter(iregular)" 						"<c(FFFFFF)e(shadow)>Операторы воор./техн.</c>"}
{"pilot(iregular)" 						"<c(FFFFFF)e(shadow)>Пилот</c>"}
;Китай
	;общие войска
		;1st row
		
			{"bazookers2(cn)" 						"<c(FFFFFF)e(shadow)>Расчет РПГ</c>"}
			{"pzrk(cn)"								"<c(FFFFFF)e(shadow)>Расчет ПЗРК</c>"}
		;4th row	
			{"zsl-92ai"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(срочн.) на ZSL-92A</c>"} 
			{"shaanxi_sx2190_passengeri"			"<c(FFFFFF)e(shadow)>Отделение мотострелков(срочн.) на Shaanxi SX2190</c>"}
	;бригада поддержки
		;2 ряд
			{"tankman(cn)"							"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans(cn)"							"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankman3(cn)"							"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans3(cn)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"vehicle_supporter(cn)"				"<c(FFFFFF)e(shadow)>Оператор воор./техн.</c>"}
		;3 ряд
			{"pilot(cn)"							"<c(FFFFFF)e(shadow)>Пилот</c>"}	
			{"operator_bpla(cn)"					"<c(FFFFFF)e(shadow)>CH-802 Rainbow БПЛА</c>"}
	;Авиационная бригада
		;3 ряд	
			{"sso_cn"								"<c(FFFFFF)e(shadow)>Отделение разведчиков на Ми-171</c>"}
	;Бригада ПВО
		;5 ряд
			{"p-37_cn"								"<c(FFFFFF)e(shadow)>РЛС П-37</c>"}
	;артбригада
		;1 ряд
			{"miners(cn)"							"<c(FFFFFF)e(shadow)>Минеры</c>"}
			{"sappers(cn)"							"<c(FFFFFF)e(shadow)>Саперы</c>"}
			{"spotters(cn)"							"<c(FFFFFF)e(shadow)>Передовые арткорректировшики</c>"}
	;тяжелая бригада
		;1 ряд
			{"elite(cn)"							"<c(FFFFFF)e(shadow)>Отделение спецназа Xinjiang</c>"}
			{"shaanxi_sx2190_passengeri_cnheavy"	"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на Shaanxi SX2190</c>"} 
            {"zbd86ai"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на ZBD-86A</c>"} 			
		;2 ряд	
			{"zbd04ai"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на ZBD-04A</c>"} 
			{"snipers2(cn)"							"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
			{"at_rifle(cn)"							"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
	;Средняя бригада
		;1 ряд
			{"elite2(cn)"							"<c(FFFFFF)e(shadow)>Отделение спецназа Xinjiang</c>"}
			{"shaanxi_sx2190_passengeri_cnmed"		"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на Shaanxi SX2190</c>"} 
			{"zsl-92bi"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на ZSL-92B</c>"}
			{"zbl_08_atgmi"							"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на ZBL-08</c>"}
		;2 ряд
			{"flamers(cn)"							"<c(FFFFFF)e(shadow)>Огнеметная пара</c>"}
	;Сводный контингент ШОС
;________________________________________________________________________________________________________
;нато
	;общие войска
		;1 ряд
			{"cz_rpg(nato)"							"<c(FFFFFF)e(shadow)>Расчет РПГ M3 MAAWS</c>"}
			{"pzrk(nato)"							"<c(FFFFFF)e(shadow)>Расчет ПЗРК</c>"}
		;4 ряд	
			{"tatra_t810i"							"<c(FFFFFF)e(shadow)>Отделение пехоты Чехии на TATRA T810</c>"}
		;5 ряд
			{"warrior_wrap2i"						"<c(FFFFFF)e(shadow)>Отделение пехоты Чехии на MCV-80 Warrior WRAP-2</c>"}
	;бригада поддержки
		;2 ряд
			{"tankman(nato)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"vehicle_supporter(nato)"				"<c(FFFFFF)e(shadow)>Оператор воор./техн.</c>"}
		;3 ряд
			{"pilot(nato)"							"<c(FFFFFF)e(shadow)>Пилот</c>"}
			{"operator_bpla(nato)"					"<c(FFFFFF)e(shadow)>EMT Aladin БПЛА</c>"}
	;воздушное командование союзников нато
		;4 ряд
			{"nh90sas"								"<c(FFFFFF)e(shadow)>Отделение SAS на NH-90</c>"}
	;противовоздушная и противоракетная оборона нато
		;2 ряд
			{"hawk_rls_nato"						"<c(FFFFFF)e(shadow)>MIM-23 Hawk AN/MPQ-50 IPAR</c>"}
	;полевая артиллерия нато
		;1 ряд
			{"miner(nato)"							"<c(FFFFFF)e(shadow)>Минеры</c>"}
			{"sappers(nato)"						"<c(FFFFFF)e(shadow)>Саперы</c>"}
			{"brit_scouts(nato)"					"<c(FFFFFF)e(shadow)>Передовые арткорректировшики SAS</c>"}
	;бундесвер
		;1 ряд
			{"frg_ksk(nato)"						"<c(FFFFFF)e(shadow)>Отделение KSK</c>"}
			{"frg_snip(nato)"						"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
			{"frg_h_snip(nato)"						"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
		;2 ряд
		    {"man_passenjeri"						"<c(FFFFFF)e(shadow)>Отделение панцергренадеров на Man Kat1</c>"}
			{"marder_1a3i"							"<c(FFFFFF)e(shadow)>Отделение панцергренадеров на Marder 1A3</c>"}
		;3 ряд
			{"boxer_mguni"							"<c(FFFFFF)e(shadow)>Отделение панцергренадеров на Boxer A1</c>"}
			{"boxer_guni"							"<c(FFFFFF)e(shadow)>Отделение панцергренадеров на Boxer IFV Lance</c>"}
			{"pumai"								"<c(FFFFFF)e(shadow)>Отделение панцергренадеров на SpZ Puma</c>"}
	;вооруженные силы ее величества
		;1 ряд
			{"brit_squad_elite(nato)"				"<c(FFFFFF)e(shadow)>Отделение ССО SAS</c>"}
			{"man_sx44i"							"<c(FFFFFF)e(shadow)>Отделение пехоты на Man SX44</c>"}
			{"warriori"								"<c(FFFFFF)e(shadow)>Отделение пехоты на MCV-80 Warrior</c>"}
		;2 ряд
			{"fv432_mk2i"							"<c(FFFFFF)e(shadow)>Отделение пехоты на FV432</c>"}
			{"boxer_gun_noptur_gbi"					"<c(FFFFFF)e(shadow)>Отделение пехоты на ARTEC Boxer</c>"}
		;3 ряд
			{"brit_jav(nato)"						"<c(FFFFFF)e(shadow)>Расчет ПТРК Javelin</c>"}
			{"brit_shipers(nato)"					"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
		;4 ряд
			{"at_rifle_brit(nato)"					"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
	;вооружённые силы франции
		;1st
			{"fr_squad_elite(nato)"					"<c(FFFFFF)e(shadow)>Отделение ССО 1er RPIMa</c>"}
			{"at_rifle_fr(nato)"					"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
			{"marksman_squad_fr(nato)"				"<c(FFFFFF)e(shadow)>Снайперский отряд 1er RPIMa</c>"}
		;3rd
			{"renault_gbc_180i"						"<c(FFFFFF)e(shadow)>Отделение пехоты на Renault GBC 180"}
			{"vbci_vpci"							"<c(FFFFFF)e(shadow)>Отделение пехоты с ПТРК на VBCI VPC</c>"}
			{"vbcii"								"<c(FFFFFF)e(shadow)>Отделение пехоты на VBCI</c>"}
		;4 ряд
			{"vbci_2i"								"<c(FFFFFF)e(shadow)>Отделение пехоты на VBCI-2</c>"}	
;________________________________________________________________________________________________________
;россия
	;общие войска
		;1 ряд
			{"bazookers2(rus)"						"<c(FFFFFF)e(shadow)>Расчет РПГ-29</c>"}
			{"pzrk(rus)"							"<c(FFFFFF)e(shadow)>Расчет ПЗРК</c>"}
		;4 ряд
			{"btr80_newi"							"<c(FFFFFF)e(shadow)>Отделение мотострелков(срочн.) на БТР-80 Обр.2008</c>"}
		;5 ряд
			{"btr82ai"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(срочн.) на БТР-82А</c>"} 
			{"Ural375i"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(срочн.) на Урал-4320</c>"}
			{"mtlbm_odkb"								"<c(FFFFFF)e(shadow)>Отделение Белоруских мотострелков на МТЛБМ</c>"}
			{"bmp1_new_odkb"								"<c(FFFFFF)e(shadow)>Войска ОДКБ(Казахстан) на БМП 1</c>"}
			{"bel_diversant"								"<c(FFFFFF)e(shadow)>Белоруские диверсанты</c>"}
			{"odkb_peha(cn)"								"<c(ABCDEF)e(shadow)>Сухопутные войска Беларуси</c>"}
			{"grad_p"								"<c(cc0000)e(shadow)>Град-П</c>"}
			{"kamaz-6350_churki"								"<c(FFFFFF)e(shadow)>Добровольцы ШОС </c>"}
			{"Hagi_wagner_grup"								"<c(FFFFFF)e(shadow)>Отделение ЧВК 'Хаги Вагнер групп'</c>"}
			{"bmp3idzsso"								"<c(FFFFFF)e(shadow)>Отделение ССО на БМП3 С ДЗ</c>"}
			{"BLR_reservist"								"<c(FFFFFF)e(shadow)>Территориальные войска Беларуси</c>"}
			{"BLR_motopehota"								"<c(FFFFFF)e(shadow)>Мобильные силы Беларуси</c>"}
			
			
			
	;бригада поддержки
		;2 ряд
			{"tankman(rus)"							"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans(rus)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankman3(rus)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans3(rus)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
		;3 ряд
			{"vehicle_supporter(rus)"				"<c(FFFFFF)e(shadow)>Оператор воор./техн.</c>"}
			{"pilot(rus)"							"<c(FFFFFF)e(shadow)>Пилот</c>"}	
	;Бригада ВКС
		;3 ряд
			{"su-34_accurate_2"						"<c(FFFFFF)e(shadow)>Су-34 высокоточный</c>"}
	;Бригада ПВО
		;5 ряд
			{"sso"									"<c(FFFFFF)e(shadow)>Отделение ССО на Ми-8МТВ</c>"}
			{"sso_2"									"<c(FFFFFF)e(shadow)>Отделение ССО на Ми-8МТВ с НУРС</c>"}
	;артбригада
		;1 ряд
			{"miners(rus)"							"<c(FFFFFF)e(shadow)>Минеры</c>"}
			{"sappers(rus)"							"<c(FFFFFF)e(shadow)>Саперы</c>"}
			{"spotters(rus)"						"<c(FFFFFF)e(shadow)>Передовые арткорректировшики</c>"}
	;бригада вдв
		;1 ряд
			{"stormtroopers2(rus)"					"<c(FFFFFF)e(shadow)>Отделение ВДВ</c>"}
		;2 ряд
			{"mi17_unarmedi"						"<c(FFFFFF)e(shadow)>Отделение ВДВ на Ми-8МТВ</c>"}
	;мотострелковая бригада
		;1 ряд
			{"elite(rus)"							"<c(FFFFFF)e(shadow)>Отделение ССО</c>"}
			{"ural375i_mot"							"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на Урал-4320</c>"} 
            {"BMP2_newi"							"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на БМП-2</c>"} 			
		;2 ряд
			{"bmp3_2i"								"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на БМП-3</c>"}
			{"bmp2m_newi"							"<c(FFFFFF)e(shadow)>Отделение мотострелков(контр.) на БМП-2М Бережок</c>"} 
			{"minmen(rus)"							"<c(FFFFFF)e(shadow)>Стрелок с РГ-6</c>"}
		;3 ряд
			{"snipers2(rus)"						"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
			{"at_rifle(rus)"						"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
		;5 ряд
			{"t72b3m"								"<c(FFFFFF)e(shadow)>Т-72Б3М</c>"}
	;бригада морской пехоты
		;1 ряд
			{"morspec(rus)"							"<c(FFFFFF)e(shadow)>Отделение спецназа ВМФ</c>"}
		    {"ural375i_mor"							"<c(FFFFFF)e(shadow)>Отделение морской пехоты на Урал-4320</c>"} 
			{"bmp2_newi2"							"<c(FFFFFF)e(shadow)>Отделение морской пехоты на БМП-2</c>"}
		;2 ряд
			{"bmp3i"								"<c(FFFFFF)e(shadow)>Отделение морской пехоты на БМП-3</c>"} 
			{"snipers(rus)"							"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
			{"at_rifle_mor(rus)"						"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
		;3rd row
			{"mtlbo"								"<c(FFFFFF)e(shadow)>Отряд огнеметчиков на МТ-ЛБ</c>"} 
;________________________________________________________________________________________________________
;usa
	;общие войска
		;1 ряд
			{"bazookers(usa)"						"<c(FFFFFF)e(shadow)>Расчет РПГ M3 MAAWS</c>"}
			{"bazookers2(usa)"						"<c(FFFFFF)e(shadow)>Расчет ПТРК Javelin</c>"}
			{"pzrk(usa)"							"<c(FFFFFF)e(shadow)>Расчет ПЗРК</c>"}
		;3 ряд
			{"m939i"								"<c(FFFFFF)e(shadow)>Стрелковое отделение на М939</c>"} 
		;4 ряд
			{"mtvr_m2i"								"<c(FFFFFF)e(shadow)>Стрелковое отделение на Oshkosh MTVR Mk27</c>"}
	;бригада поддержки
		;2 ряд
			{"tankman(usa)"							"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans(usa)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankman3(usa)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"tankmans3(usa)"						"<c(FFFFFF)e(shadow)>Танкисты</c>"}
			{"vehicle_supporter(usa)"				"<c(FFFFFF)e(shadow)>Оператор воор./техн.</c>"}
		;3 ряд
			{"operator_bpla(usa)"					"<c(FFFFFF)e(shadow)>RQ-11 Raven БПЛА</c>"}
			{"pilot(usa)"							"<c(FFFFFF)e(shadow)>Пилот</c>"}
	;ввс сша (usaf)
		;5 ряд
			{"sso_usa"								"<c(FFFFFF)e(shadow)>Отделение Delta force на MH-6</c>"}
	;отделение полевой артиллерии армии сша
		;1 ряд	
			{"miners(usa)"							"<c(FFFFFF)e(shadow)>Минеры</c>"}
			{"sappers(usa)"							"<c(FFFFFF)e(shadow)>Саперы</c>"}
			{"usaspot(usa)"							"<c(FFFFFF)e(shadow)>Отряд корректировщиков</c>"}
	;цахал (аои)
		;1 ряд
			{"idf_vdv(usa)"							"<c(FFFFFF)e(shadow)>Отделение Sayeret Matkal</c>"}
			{"m113ai"								"<c(FFFFFF)e(shadow)>Отделение на М113</c>"}
			{"nameri"								"<c(FFFFFF)e(shadow)>Отделение на Namer</c>"}
		;2 ряд
			{"idf_at_rifle(usa)"					"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
			{"idf_sniper(usa)"						"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
	;армия сша
		;1 ряд
			{"defend(usa)"							"<c(FFFFFF)e(shadow)>Отделение Delta force</c>"}
			{"m939i_usarmy"							"<c(FFFFFF)e(shadow)>Отделение рейнджеров на М939</c>"}
			{"m2a3_brati"							"<c(FFFFFF)e(shadow)>Отделение рейнджеров на M2A3 Bradley</c>"}
		;2 ряд
			{"m1126jav"								"<c(FFFFFF)e(shadow)>Отделение рейнджеров на M1126 Stryker с ПТРК</c>"}
			{"m1126i"								"<c(FFFFFF)e(shadow)>Отделение рейнджеров на M1126 Stryker с Mk.19</c>"}
			{"us_army_sniper(usa)"					"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
		;3 ряд
			{"at_rifle(usa)"						"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
	;корпус морской пехоты сша (usmc)
		;1 ряд
			{"navy_seals(usa)"						"<c(FFFFFF)e(shadow)>Отделение Navy SEALs</c>"}
			{"m939i_usmc"							"<c(FFFFFF)e(shadow)>Отделение морской пехоты на М939</c>"}
			{"aavp7i"								"<c(FFFFFF)e(shadow)>Отделение морской пехоты на AAVP-7A1 EAKK</c>"}
		;2 ряд
			{"lav25i"								"<c(FFFFFF)e(shadow)>Отделение Морской пехоты на LAV-25</c>"}
			{"usmc_sturm(usa)"						"<c(FFFFFF)e(shadow)>Штурмовой отряд морской пехоты</c>"}
		;3 ряд
			{"usmc_mgun(usa)"						"<c(FFFFFF)e(shadow)>Пулеметный отряд морской пехоты</c>"}
			{"usmc_sniper(usa)"						"<c(FFFFFF)e(shadow)>Снайперская пара</c>"}
			{"usmc_heavy_sniper(usa)"				"<c(FFFFFF)e(shadow)>12.7мм Снайперская пара</c>"}
		;3 ряд	

;________________________________________________________________________________________________________
;другое
    ;china
	    {"box_weapon_cn_krasnopol"					"155мм корректируемый<c(FFAF00)> 3ОФ39<c(FFFFFF)><c(00FF00)> «Краснополь»<c(FFFFFF)>"}
	;nato
		{"bazooker_idf(nato)"						"Гранатометчик"}
		{"brit_squad(nato)"							"Пехота Великобритании"}
		{"cz_squad(nato)"							"Пехота Чешской Республики"}
		{"fr_ptrk(nato)"							"ПТРК ERYX"}
		{"fr_scouts(nato)"							"Диверсант"}
		{"fr_scouts(nato)"							"Диверсионный отряд «1ER Rpima»"}
		{"fr_squad(nato)"							"Пехота Франции"}
		{"frg_rpg(nato)"							"Гранатометчик"}
		{"frg_scouts(nato)"							"Диверсант"}
		{"frg_squad(nato)"							"Панцергренадеры"}
		{"hun_rpg(nato)"							"Расчет РПГ-7 Венгрии"}
		{"hun_squad(nato)"							"Легкая пехота"}
		{"idf_squad(nato)"							"Пехота ЦАХАЛ"}
														  
		{"sapper(nato)"								"<c(FFFFFF)>"}
		{"tpz1a6_uki"								"<c(FFFFFF)>Пехота Великобритании на NBC Fox"}
		{"tpz1a6i"									"Infantry Czech on TpZ 1A6 Fuchs"}
		{"vab_recoi"								"<c(FFFFFF)>Пехота Франции на VAB Reco"}
		{"box_weapon_nato_vulcan"					"155mm корректируемый<c(FFAF00)><c(00FF00)> «Vulcan»<c(FFFFFF)>"}
		
	;россия
		{"ap_miners(rus)"							"ПП минеры"}
		{"at_miners(rus)"							"ПТ минеры"}
		{"bazookers(rus)"							"Расчет РПГ-7"}
		{"bazookers3(rus)"							"Гранатометчик"}
		{"defend(rus)"								"Морская пехота"}
		{"engineer(rus)"							"Инженер"}
		{"flamers(rus)"								"Огнеметчик"}
		{"flamers2(rus)"							"Реакт. огнеметчик"}
		{"mgs(rus)"									"Пулеметчик"}
		{"nav(rus)"									"Наводчик"}
		{"officer(rus)"								"Офицер"}
		{"scout2(rus)"								"Разведчик"}
		{"scouts(rus)"								"Разведчик"}
		{"smgs(rus)"								"Мотострелки"}
		{"spec(rus)"								"<c(FFFFFF)>Спецназ"}
		{"stormtroopers(rus)"						"ОМОН"}
		{"box_weapon_rus_krasnopol"					"152мм корректируемый<c(FFAF00)> 3ОФ39<c(FFFFFF)><c(00FF00)> «Краснополь»<c(FFFFFF)>"}
		{"box_weapon_rus_smerch_cl"					"Смерч<c(FFAF00)> Кассетный противопехотный<c(FFFFFF)>"}
		{"box_weapon_rus_smerch_tb"					"Смерч<c(FFAF00)> (ИМБА НАХУЙ!!!!!)<c(FFFFFF)>"}
		{"box_weapon_rus_tornado_s_fg"				"Торнадо-С<c(FFAF00)> Фугасный высокоточный<c(FFFFFF)>"}
		
	;usa
		{"ap_miners(usa)"							"ПП минеры"}
		{"at_miners(usa)"							"ПТ минеры"}
		{"bazookers3(usa)"							"Гранатометчик"}
		{"elite(usa)"								"Рейнджеры"}
		{"engineer(usa)"							"Инженер"}
		{"flamers(usa)"								"Огнеметчик"}
		{"idf_squad(usa)"							"Пехота ЦАХАЛ"}
		{"marksman(usa)"							"Марксман"}
		{"minmen(usa)"								"Миномётчик"}
		{"officer(usa)"								"Офицер"}
		{"scouts(usa)"								"Разведчик"}
		{"smgs(usa)"								"Пехота"}
		{"snipers(usa)"								"<c(FFFFFF)>Снайперская пара"}
		{"stormtroopers2(usa)"						"Морская пехота"}
		{"box_weapon_usa_excalibur"					"155mm корректируемый<c(FFAF00)> M982<c(FFFFFF)><c(00FF00)> «Excalibur»<c(FFFFFF)> Block 1A-2"}
		{"box_weapon_usa_gmlrs_cl"					"227мм реактивный снаряд<c(FFAF00)> M31A1 кассетный<c(FFFFFF)>"}
;________________________________________________________________________________________________________