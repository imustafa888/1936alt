 
 ############################## 
 # Country definition for PER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
   # Resource Reserves 
energy                 = 540
metal                  = 270
rare_materials         = 135
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1085 
   manpower               = 167 
      
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5 
    } 
	ownedprovinces =      {
	1081 #Rast=>Rasht
 	1083 #Tabriz=>Rast/Rezaiye
 	1082 #Rezaiye
 	1084 #Kermanshah=>Bakhtaran
 	1087 #Hamadan=>Bakhtaran
 	1089 #Ahvaz=>Abadan
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
 	1091 #Gameroon=>Bandar Abbas 
 	1093 #Zahedan=>Chah Bahar
	}
    controlledprovinces = {
	1081 #Rast=>Rasht
 	1083 #Tabriz=>Rast/Rezaiye
 	1082 #Rezaiye
 	1084 #Kermanshah=>Bakhtaran
 	1087 #Hamadan=>Bakhtaran
 	1089 #Ahvaz=>Abadan
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
 	1091 #Gameroon=>Bandar Abbas 
 	1093 #Zahedan=>Chah Bahar	
	}
claimedprovinces = {
#Internal claims
	1082
	1084
	1087
	1083
	1081
	1089
	1093	

#External claims
#Shia communities abroad
	#1016
	#1017
	#1018
	#1019
	#1021
	#1054
	#1056
	#1061
	#1059
	#1072
	#1040
	#1050

#Historical claims
	714
	712
	713
	#1530
	#1532
	1064
	1032
	1028
	1037
	1038
	1030
	1031
	1035
	1033
	1034
	1036
	1027
	1029
	#1020
	1015
	1014
	1060
	1062
	1063
	1064
	386
	709
	707
	711
	702
	703
	#700
	704
	705
	1041
	1538
	1533
	1529
	1537
	#1534
	2169
	2170
	2168

	#1106
	#1103
	#1100
	1099
	#1102
	#1101
	1098
	#1097
}

    nationalprovinces = {
	2172
	2171
	2170
	2173
	1104
	1105
	1043

 	#1087 #Hamadan=>Bakhtaran
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
	1091
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
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
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Medicine
5600
#Engineers
1830 1840 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = DEN value = 50  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = SWE value = 50  } 
     relation = {  tag = TUR value = -50  } 
    } 
   SpyInfo                = {  country = "PER" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 150001  } 
   headofgovernment       = {  type = 9 id = 150002  } 
   foreignminister        = {  type = 9 id = 150003  } 
   armamentminister       = {  type = 9 id = 150004  } 
   ministerofsecurity     = {  type = 9 id = 150005  } 
   ministerofintelligence = {  type = 9 id = 150006  } 
   chiefofstaff           = {  type = 9 id = 150007  } 
   chiefofarmy            = {  type = 9 id = 150008  } 
   chiefofnavy            = {  type = 9 id = 150009  } 
   chiefofair             = {  type = 9 id = 150010  } 
   landunit = 
   {  location = 1085 
     name     = "Lasgar Parsi" 
     id       = {  type = 16600 id = 1  } 
     Division = 
     {  id    = {  type = 16600 id = 2  } 
       name  = "1. Dastebandi Sarbaze Piyade" 
       type  = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 16600 id = 3  } 
       name = "1. Dastebandi Savareh" 
	   model    = 8
       type = cavalry 
      } 
    } 
  } 
 
