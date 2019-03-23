 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN 
	manpower               = 5 
	capital                = 284 
   # Resource Reserves 
	energy                 = 1740
	metal                  = 870
	rare_materials         = 435
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
    
   
   diplomacy = 
   {  relation = 
     {  tag        = AUS 
       value      = 100 
       guaranteed = {  day = 17 month = march year = 1934  } 
      } 
     relation = {  tag = CZE value = -50  } 
     relation = {  tag = ENG value = -50  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = FRA value = -70  } 
     relation = {  tag = GER value = 100  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = ITA value = 125  } 
     relation = {  tag = POL value = 50  } 
     relation = {  tag = ROM value = 1  } 
     relation = {  tag = YUG value = 80  } 
    } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
   ownedprovinces =      {
 	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
 	284 #Budapest  
	}
    controlledprovinces = {
 	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
	284 #Budapest  	
	}
    nationalprovinces =   {
	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
 	284 #Budapest  

	#Claim on Romania
	296 #Oradea
	293 #Miercurea Ciuc
	288 #Cluj
	#292 #Bistritata
	#301 #Suceava
	#299 #Bacau
	#287 #Turda

	#Claim on Czecho-Slovakia
	#208 #Bratislava
	#212 #Zilina
	#211 #BanskaBystrica
	210 #Komarno=>Bratislava
	209 #Kosice
	#214 #Presov=>Kosice
	#213 #Chust=>Presov
	215 #Uzhorod=>Presov
	
	#Claim on Yugoslavia
	341 #Novisad 
	}
	claimedprovinces = {
	# Austria
	188 #Eisenstadt
	# Slovakia
	208 #Bratislava
	212 #Zilina
	211 #BanskaBystrica
	214 #Presov=>Kosice
	213 #Chust=>Presov
	# Romania
	292 #Bistritata
	287 #Turda
	#288 #Cluj
	291 #Sibiu
	289 #Alba Iulia
	286 #Arad
	285 #Timisoara
	295 #Resita
	# Yugoslavia
	336 #Petrovgrad
	337 #Ruma
	344 #Osijek
	345 #Bjelovar
	352 #Zagreb
	347 #Karlovac
	} 

   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps = {
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Interwar Bomber 
4600 4610 4620 4630 4120
#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Early Anti-Tank Artillery 
#2400
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Mechanized Agriculture 
5700 5710 5010 5020
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190 

#Great War Hospital System 
14000 14010 14020
#Medicine
5600 5610 5620 5630
#Improved Great War Hospital System
14000 14010
#Engineers
1830 1840 1850 1860
# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 1 
     free_market       = 4 
     freedom           = 3 
     professional_army = 3 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105002  } 
   foreignminister        = {  type = 9 id = 105003  } 
   armamentminister       = {  type = 9 id = 105004  } 
   ministerofsecurity     = {  type = 9 id = 105005  } 
   ministerofintelligence = {  type = 9 id = 105006  } 
   chiefofstaff           = {  type = 9 id = 105007  } 
   chiefofarmy            = {  type = 9 id = 105008  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105010  } 
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Kiralyi Honvédség" 
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Magyar Kiralyi Honvédség Föhadiszallas" 
       strength     = 30
       type     = hq
	   model = 2
      } 
     Division = 
     {  id       = {  type = 20500 id = 3  } 
       name     = "1. Gyalogdandar" 
       strength     = 25
       type     = infantry
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 4  } 
       name     = "2. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 5  } 
       name     = "3. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 6  } 
       name     = "4. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "5. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "6. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "7. Gyalogdandar" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 10  } 
       name     = "1. Lovasdandar" 
       strength     = 40
       type     = cavalry 
	   model = 8
      } 
     Division = 
     {  id       = {  type = 20500 id = 11  } 
       name     = "2. Lovasdandar" 
       strength     = 40
       type     = cavalry 
	   model = 8
      } 
    } 
   airunit = 
   {  id       = {  type = 20500 id = 12  } 
     name     = "I Légí Hadsereg" 
     location = 284 
     base     = 284 
     Division = 
     {  id       = {  type = 20500 id = 13  } 
       name     = "I.Vadászosztály" 
       type     = interceptor 
       model    = 5
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20500 id = 14  } 
       name     = "I.Vadászbombázó Osztály" 
       type     = tactical_bomber 
       model    = 4 
       strength = 30 
      } 
    } 
  } 
 