 
 ############################## 
 # Country definition for SAF # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SAF 
 
	puppet			= ENG
	control			= ENG
	regular_id   		= ENG
   # Resource Reserves 
	energy                 = 720
	metal                  = 360
	rare_materials         = 180
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 51 
	capital                = 876 
    ai_settings = { flags = {   puppetLevel2 = 1 } }
	
      policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4
     political_left    = 1 
     freedom           = 4
     free_market       = 8 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 6 
    } 
   
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 35  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } # was access = yes 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRE value = 80  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = POR value = 125  } 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "SAF" NumberOfSpies = 5  } 
    ownedprovinces =      {
	885 #Katima Mulilo
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	883 #Luderitz
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	876 #Jahannesburg
	873 #Pretoria
	872 #Durban
	 }
    controlledprovinces = {
	885 #Katima Mulilo
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	883 #Luderitz
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	876 #Jahannesburg
	873 #Pretoria
	872 #Durban
	  }
    claimedprovinces = {
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	873 #Pretoria
	872 #Durban
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	}
    nationalprovinces =   {
	876 #Jahannesburg
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	885 #Katima Mulilo
	883 #Luderitz
	} 
   # Commonwealth Tech '36 
   # UK 1936 techs 
   # ###################### 
   techapps = {
		#Static Defense
		6680
 
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Basic Armoured Car  
2860 2870 2880 2020
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 
#Great War Tank 
7600 7610 2620 2010 2630
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Basic Cavalry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 5090
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Basic Oil Refining 
##5190 
#Medicine
5600 5610 5620
#Troopships
3810

#Great War Hospital System 
14000 14010 14020
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#Great War Destroyer 
3010 3020 3030 3040
# Census Tabulating Machine 
5310 5316
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  9140 
# Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - Defensive Focus (Commonwealth)
6560
# Engagement Theories
8010 8020 8040 8050 8060 8070 8080
# Naval Supremacy
8100 8110 8120 8150 8160 8200 8210
# Naval Interdiction
8500 8510 8520 8600
# Engagement Tactics
8900 8910 8920 8930 8940
    } 
inventions = { 3000027 }

   headofstate            = {  type = 9 id = 425001  } 
   headofgovernment       = {  type = 9 id = 425002  } 
   foreignminister        = {  type = 9 id = 425003  } 
   armamentminister       = {  type = 9 id = 425004  } 
   ministerofsecurity     = {  type = 9 id = 425005  } 
   ministerofintelligence = {  type = 9 id = 425006  } 
   chiefofstaff           = {  type = 9 id = 425007  } 
   chiefofarmy            = {  type = 9 id = 425008  } 
   chiefofnavy            = {  type = 9 id = 425009  } 
   chiefofair             = {  type = 9 id = 425010  } 
   landunit = 
   {  name     = "South African Army" 
     location = 876 
     id       = {  type = 26600 id = 1  } 
     Division = 
     {  id       = {  type = 26600 id = 2  } 
       name     = "1st South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 3  } 
       name     = "2nd South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 4  } 
       name     = "3rd South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 5  } 
       name     = "1st Mounted Commando Division" 
       type     = cavalry
	   model    = 6 
       strength = 10 
      } 
    } 
 
	navalunit = { 
		id = { type = 26600 id = 7 } 
		name = "South African Navy" 
		location = 880 
		base = 880 
		division = { 
			id = { type = 26600 id = 13 } 
			name = "4th SAN Transport Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 26600 id = 14 } 
			name = "5th SAN Transport Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 26600 id = 15 } 
			name = "6th SAN Transport Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 26600 id = 2326 } 
			name = "1st SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 26600 id = 2327 } 
			name = "2nd SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 26600 id = 2328 } 
			name = "3rd SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 26600 id = 2324 } 
		name = "RSAN Fleet 1" 
		location = 880 
		base = 880 
		division = { 
			id = { type = 26600 id = 2329 } 
			name = "4th SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 26600 id = 2330 } 
			name = "5th SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 26600 id = 2331 } 
			name = "6th SAN Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 26600 id = 10 } 
			name = "1st SAN Transport Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 26600 id = 11 } 
			name = "2nd SAN Transport Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 26600 id = 12 } 
			name = "3rd SAN Transport Flotilla" 
			type = transport 
			} 
		} 
  } 
 