 
 ############################## 
 # Country definition for CAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CAN
	name = QUE
	puppet			= ENG
	control			= ENG
	regular_id   		= ENG 
   # Resource Reserves 
	energy                 = 2460
	metal                  = 1230
	rare_materials         = 615
    oil                    = 500 
    supplies               = 500 
    money                  = 20 
    manpower               = 18 
    capital                = 2108 
    transports             = 100 
    escorts                = 10
	
   ai_settings = { flags = {   puppetLevel3 = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6
     political_left    = 2 
     free_market       = 8
     freedom           = 4
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 4 
    }


 
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 150  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = HOL value = 80  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = USA value = 175  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "CAN" NumberOfSpies = 6  } 

	control = ENG
	puppet = ENG

	claimedprovinces = {
	2089 #Vancouver
	2092 #Jasper
	2090 #Victoria
	2093 #Telegraph Creek=>Prince George(split)
	2095 #Fort Simpson
	2103 #Edmonton
	2104 #Calgary
	2105 #Grande Prairie=>Fort McMurray
	2102 #Prince Albert
	2099 #Fort Resolution
	2091 #Prince George
	2096 #Yellowknife
	2097 #Rankin Inlet=>Repulse Bay
	2098 #Lake Harbor=>Baffin Island
	2094 #Whitehorse
	2100 #Saskatoon
	2101 #Regina
	2106 #Winnipeg
	2107 #Flin Flon=>Rankin Inlet
	2115 #Fort Severn
	2108 #Ottawa=>Kingston
	2109 #Hamilton=>Windsor
     	2110 #Fort William
	2113 #Pembroke=>Ottawa
	2148 #Prince Rupert=>Vancouver(split)
	2149 #Queen Charlotte=>Vancouver(split)
	2130 #Saint John
	2111 #Toronto
	# 2135 #Saint-Pierre=>Newfoundland(split)
	# 2136 #Goose Bay=>Labrador(split)
	# 2138 #Nain=>Labrador
	# 2137 #St.John's=>Newfoundland
	2132 #Halifax
	2131 #Moncton
	2134 #Glace Bay=>Cape Breton
	2133 #Charlottetown=>Cape Breton(split)
}

	nationalprovinces      = 
{  
	2129
	2114
	2112
	2127
	2116
	2123
	2122
	2121
	2120
	2125
	2124
	2117
	2118
	2119
	2128
	2126
}
   ownedprovinces         = {  2090  2089 2092  2105 2102 2099 2093 2091 2095  2094  2096    2103  2104  2101  2100    2097 2098  2107 2115  2106  2110  2129 2113 2114 2148 2149 2112 2127 2130 2108  2111  2109   2119    2117  2116 2123 2122 2121 2120 2125 2124  2128  2132 2131 2134 2126  2133  2118   } 

   controlledprovinces    = {  2090  2089 2092  2105 2102 2099 2093 2091 2095  2094  2096    2103  2104  2101  2100   2097 2098   2107 2115   2106  2110  2129 2113 2114 2148 2149 2112 2127 2130  
                              2108  2111  2109  2119   2117  2116 2123 2122 2121 2120 2125 2124  2128  2132 2131 2134 2126  2133  2118 
                             } 

   # Commonwealth Tech '36 
   # UK 1936 techs 
   # ###################### 
   techapps = {
		#Static Defense
		6680
 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Basic Cavalry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
#Great War Hospital System 
14000 14010 14020
# Inf support 
1910 1920 1930 1940 1950 1960 1970 1980
#Engineers
1830 1840 1850 1860
#Great War Tank 
7600 7610 2620 2010 2630
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Early Light Cruiser 
3110 3120 3130
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
#SEAPLANES
4740 4750 4760 4770
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Torpedo & ASW 18
3720 3730 3736 3740 3900
#Troopships
3810
#Medicine
5600 5610 5620 5630
#Exp. Rocket
5560
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560 6030
# Engagement Theories
8010 8020 8040 8050 8060 8070 8080
# Naval Supremacy
8100 8110 8120 8150 8160 8200 8210
# Naval Interdiction
8500 8510 8520 8600
# Engagement Tactics
8900 8910 8920 8930 8940

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  9140  
} 
inventions = { 3000027 }

   headofstate            = {  type = 9 id = 220001  } 
   headofgovernment       = {  type = 9 id = 220002  } 
   foreignminister        = {  type = 9 id = 220003  } 
   armamentminister       = {  type = 9 id = 220004  } 
   ministerofsecurity     = {  type = 9 id = 220005  } 
   ministerofintelligence = {  type = 9 id = 220006  } 
   chiefofstaff           = {  type = 9 id = 220007  } 
   chiefofarmy            = {  type = 9 id = 220008  } 
   chiefofnavy            = {  type = 9 id = 220009  } 
   chiefofair             = {  type = 9 id = 220010  } 
   landunit = 
   {  id       = {  type = 20000 id = 1  } 
     name     = "Canadian Army" 
     location = 2108 
     Division = 
     {  id       = {  type = 20000 id = 2  } 
       name     = "1st Canadian Infantry Division" 
       strength = 25 
       type     = infantry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 20000 id = 3  } 
       name     = "2nd Canadian Infantry Division" 
       strength = 5 
       type     = infantry 
       model    = 7 
      } 
    } 
	navalunit = { 
		id = { type = 20000 id = 500 } 
		name = "Canadian Transport Fleet" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 30053 id = 504 } 
			name = "'Empress of Canada' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 505 } 
			name = "'Empress of Russia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 506 } 
			name = "'Empress of Asia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 2279 } 
			name = "Destroyer Flotilla 2" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2280 } 
			name = "Destroyer Flotilla 3" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2281 } 
			name = "Destroyer Flotilla 4" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 20000 id = 7 } 
		name = "Royal Canadian Navy" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 20000 id = 8 } 
			name = "Destroyer Flotilla 1" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 30053 id = 501 } 
			name = "'Empress of Japan' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 502 } 
			name = "'Empress of Australia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 503 } 
			name = "'Empress of Britain' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 2282 } 
			name = "Destroyer Flotilla 5" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2283 } 
			name = "Destroyer Flotilla 6" 
			type = destroyer 
			} 
		} 
  } 
 