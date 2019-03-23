 
 ############################## 
 # Country definition for MON # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MON 
   puppet                 = SOV 
   control                = SOV 
   # Resource Reserves 
energy                 = 300
metal                  = 150
rare_materials         = 75
   oil                    = 200 
   supplies               = 500 
   money                  = 10 
   manpower               = 100 
   capital                = 1124 
   ai_settings = { flags = {   puppetLevel3 = 1 } }
   diplomacy = 
   {  relation = {  tag = CHC value = 25  } 
     relation = {  tag = MON value = 150  } 
     relation = {  tag = TAN value = 200  } 
    } 
   SpyInfo                = {  country = "MON" NumberOfSpies = 3  } 
    ownedprovinces =      {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan
	}
    controlledprovinces = {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan		
	}

claimedprovinces = {
#Inner Mongolia
	1236 #Chengde
	1246 #Zhangyuan
	1251 #Datong

#Russia
	1169 #Chita
	1161 #Kalakan
	1166 #Cheremkhovo
	1168 #Borzya
}

    nationalprovinces =   {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan
#Inner Mongolia
	1272 #Linhe=>Bayan Nur(split)
	1270 #Bayan Hot=>Bayan Nur
	1269 #Uqai=>Yuling
	1238 #Huhehaote=>Hohot
	1239 #Jining 
 	1240 #Sili-yin Qota->Xilinhot/Erenhot
 	1237 #Ulayanqada->Xililnhot/Erenhot
 	1209 #Wulanhaote->Ulan Hot/Xilinhot
 	1206 #Haila'er
 	1198 #Butehaqi->Qiqihar
 	1200 #Human->Mohe
 	1210 #Tongliyao Hot->Chifeng

#Russia
	1162 #Irkutsk
	1167 #Ulan-Ude

#China
	1284 #Xining
	1281 #Urumqi
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
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
# Land Doctrines WW1 - Entente Line (Default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

 } 
 inventions = { 3000027 }
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 7 
     freedom           = 5 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 4 
     interventionism   = 1 
    } 
   headofstate            = {  type = 9 id = 300001  } 
   headofgovernment       = {  type = 9 id = 300002  } 
   foreignminister        = {  type = 9 id = 300003  } 
   armamentminister       = {  type = 9 id = 300004  } 
   ministerofsecurity     = {  type = 9 id = 300005  } 
   ministerofintelligence = {  type = 9 id = 300006  } 
   chiefofstaff           = {  type = 9 id = 300007  } 
   chiefofarmy            = {  type = 9 id = 300008  } 
   chiefofnavy            = {  type = 9 id = 300009  } 
   chiefofair             = {  type = 9 id = 300010  } 
   landunit = 
   {  location = 1124 
     name     = "Armija Mongol Nayramdakh" 
     id       = {  type = 30500 id = 1  } 
     Division = 
     {  id   = {  type = 30500 id = 3  } 
       name = "2. Nayramdakh Kavaleriyskaya Div." 
	   strength     = 10
       type = cavalry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 30500 id = 4  } 
       name = "3. Nayramdakh Opolcheniya Div." 
	   strength     = 10
       type = militia 
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 30500 id = 5  } 
       name = "4. Nayramdakh Opolcheniya Div." 
	   strength     = 10
       type = militia 
	   model    = 3
      } 
    } 
  } 
 
