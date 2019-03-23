 
 ############################## 
 # Country definition for IRQ # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = IRQ 
   puppet                 = ENG 
   # Resource Reserves 
energy                 = 360
metal                  = 180
rare_materials         = 90
   transports = 100
   oil                    = 1000 
   supplies               = 500 
   manpower               = 65 
   money                  = 10 
   capital                = 1034 
      
   ai_settings = { flags = {   puppetLevel2 = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 5 
     freedom           = 4 
     free_market       = 6 
     professional_army = 5 
     defense_lobby     = 2 
     interventionism   = 6 
    } 
claimedprovinces = {
#External claims
	1089
#	1041
#	1082
#	1084

	#Syria/Lebanon
	1016
	1018
	1019
	1020
	1021
	1014
	1017
	1015
	1054 

	#Jordan
	1022
	1023
	1024
	1025
	1026

	#Palestine
	1172
	1004
	1005
	1006
	1007
	1008
	1009
	1010
	1011
	1013

#Internal claims
#	1029
	1027
	1036
}
   nationalprovinces      = 
{  
	1029
	1041
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1030 #Karbala
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
} 
   ownedprovinces         = 
{  
	1036 #Kirkuk
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
	1030 #Karbala
	1027 #Arbil=>Samarra
	1029 #Mosul
} 
   controlledprovinces    = 
{  
	1036 #Kirkuk
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
	1030 #Karbala
	1027 #Arbil=>Samarra
	1029 #Mosul
} 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps = {
		#Static Defense
		6680
  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#Basic Armoured Car  
2860 2870 2880 2020  
#Great War Heavy Field Artillery 
2290 2300 2310 
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AST value = 100  } 
     relation = {  tag = BHU value = 100  } 
     relation = {  tag = CAN value = 100  } 
     relation = {  tag = ENG value = 100 access = yes  } 
     relation = {  tag = FRA value = 100  } 
     relation = {  tag = GER value = 25  } 
     relation = {  tag = ITA value = 25  } 
     relation = {  tag = NEP value = 100  } 
     relation = {  tag = NZL value = 100  } 
     relation = {  tag = OMN value = 125  } 
     relation = {  tag = PER value = 125  } 
     relation = {  tag = SAF value = 100  } 
     relation = {  tag = SAU value = 125  } 
     relation = {  tag = USA value = 120  } 
     relation = {  tag = YEM value = 125  } 
    } 
   SpyInfo                = {  country = "IRQ" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 365001  } 
   headofgovernment       = {  type = 9 id = 365002  } 
   foreignminister        = {  type = 9 id = 365003  } 
   armamentminister       = {  type = 9 id = 365004  } 
   ministerofsecurity     = {  type = 9 id = 365005  } 
   ministerofintelligence = {  type = 9 id = 365006  } 
   chiefofstaff           = {  type = 9 id = 365007  } 
   chiefofarmy            = {  type = 9 id = 365008  } 
   chiefofnavy            = {  type = 9 id = 365009  } 
   chiefofair             = {  type = 9 id = 365010  } 
   landunit = 
   {  id       = {  type = 22500 id = 3  } 
     name     = "Royal Iraqi Army" 
     location = 1035 
     Division = 
     {  id       = {  type = 22500 id = 4  } 
       name     = "1. Iraqi Infantry Division" 
       strength = 100 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 22500 id = 5  } 
       name     = "2. Iraqi Infantry Division" 
       strength = 100 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 22500 id = 6  } 
       name     = "3. Iraqi Infantry Division" 
       strength = 30 
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 4
      } 
     Division = 
     {  id       = {  type = 22500 id = 7  } 
       name     = "4. Iraqi Infantry Division" 
       strength = 30 
       type     = infantry 
	   model    = 7
      } 
	}
	
   airunit = 
   {  id       = {  type = 22500 id = 8  } 
     name     = "Royal Army Air Force" 
     location = 1035 
     base     = 1035 
     Division = 
     {  id       = {  type = 22500 id = 9  } 
       name     = "1. RIAF Bomber Group" 
       strength = 30 
       type     = tactical_bomber 
       model    = 4
      } 
	 Division = 
     {  id       = {  type = 22500 id = 2  } 
       name     = "1. RIAF Fighter Group" 
       strength = 90 
       type     = interceptor 
       model    = 6
      } 
    } 
  } 
 