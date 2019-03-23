 
 ############################## 
 # Country definition for YUG # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = YUG 
   # Resource Reserves 
energy                 = 1500
metal                  = 750
rare_materials         = 375
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 15 
   capital                = 338 
   manpower 			  = 36
      
   diplomacy = 
   {  relation = {  tag = BUL value = 25  } 
     relation = {  tag = CZE value = 50 guaranteed = {  day = 30 month = december year = 1932  } } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 50  } 
     relation = {  tag = GER value = 50  } 
     relation = 
     {  tag        = GRE 
       value      = 100 
       guaranteed = {  day = 30 month = december year = 1934  } 
      } 
     relation = {  tag = HUN value = 80  } 
     relation = {  tag = ITA value = 75  } 
     relation = 
     {  tag        = ROM 
       value      = 100 
       guaranteed = {  day = 30 month = december year = 1934  } 
      } 
     relation = 
     {  tag        = TUR 
       value      = 100 
       guaranteed = {  day = 30 month = december year = 1934  } 
      } 
    } 
   SpyInfo                = {  country = "YUG" NumberOfSpies = 7  } 
    ownedprovinces =      {
 	346 #Maribor
 	349 #Ljubljana
 	345 #Bjelovar
 	352 #Zagreb
 	347 #Karlovac=>Rijeka
 	350 #Split
 	357 #Bihac=>Banja Luka
 	353 #Banja Luka
	343 #Dubrovnik
 	344 #Osijek
 	341 #Novi Sad
 	337 #Ruma=>Osijek
 	354 #Tuzla=>Sarajevo
 	358 #Travnik=Zenica
 	351 #Knin=>Split
 	356 #Mostar
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac=>Uzice
 	338 #Belgrade
 	336 #Petrovgrad=>Zrenjanin
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	329 #Pristina
 	335 #Prijepolje=>Uzice
 	332 #Cetinje=>Podgorica
 	334 #Tetovo=>Pristina
 	333 #Skopje
 	328 #Kumanovo=Stip
 	331 #Prirot=>Nis
	 }
    controlledprovinces = {
	346 #Maribor
 	349 #Ljubljana
 	345 #Bjelovar
 	352 #Zagreb
 	347 #Karlovac=>Rijeka
 	350 #Split
 	357 #Bihac
 	353 #Banja Luka
 	344 #Osijek
 	341 #Novi Sad
 	337 #Ruma
 	354 #Tuzla
 	358 #Travnik=Zenica
 	351 #Knin
 	356 #Mostar
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac
 	338 #Belgrade
 	336 #Petrovgrad=>Zrenjanin
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	329 #Pristina
 	335 #Prijepolje
 	332 #Cetinje=>Podgorica
 	334 #Tetovo
 	333 #Skopje
 	328 #Kumanovo=Stip
 	331 #Prirot=>Nis
	343 #Dubrovnik
	  }

claimedprovinces = {
#External claims
	403
	404
	406
	359
	360
	361
	362
	366
	365

#Internal claims
#Slovenia
	346
	349

#Vojvodno-Serbia
	341
	336

#Kosovo
	329

#Macedonia
	333
	334
	328

#Montenegro (non-Serb part)
	343
	332

#Croatia-Bosnia
#	355 #Sarajevo
#	347 #Krajina serbs
	344 #Krajina serbs

	345
	352
	350
	351
	356
	357
	354
}

    nationalprovinces =   {
	336
	341
 	347 #Karlovac=>Rijeka
 	353 #Banja Luka
 	337 #Ruma
 	358 #Travnik=Zenica
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac
 	338 #Belgrade
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	335 #Prijepolje
 	331 #Prirot=>Nis
	  }

   # Eastern Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps = {
		#Static Defense
		6680
  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610 2620 2010
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Engineers
1830 1840 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Manufactoring
5810 5820 5050 5830
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190
#Interwar Bomber 
4600 4610 4620 4630 4120
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Short Range Submarine 
3610 3620
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 #5620
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Naval Doctrines
8010 8040 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?
#Improved Great War Hospital System
14000 #14010
} 
inventions = { 3000027 }
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 4
     freedom           = 5 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 4 
     interventionism   = 6 
    } 
   headofstate            = {  type = 9 id = 100001  } 
   headofgovernment       = {  type = 9 id = 100002  } 
   foreignminister        = {  type = 9 id = 100003  } 
   armamentminister       = {  type = 9 id = 100004  } 
   ministerofsecurity     = {  type = 9 id = 100005  } 
   ministerofintelligence = {  type = 9 id = 100006  } 
   chiefofstaff           = {  type = 9 id = 100007  } 
   chiefofarmy            = {  type = 9 id = 100008  } 
   chiefofnavy            = {  type = 9 id = 100009  } 
   chiefofair             = {  type = 9 id = 100010  } 
   landunit = 
   {  id       = {  type = 19800 id = 1  } 
     location = 338 
     name     = "IV. Kraljevska Jugoslavenska Armija" 
     Division = 
     {  id       = {  type = 19800 id = 2  } 
       name     = "27. Savska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 3  } 
     location = 338 
     name     = "VII. Kraljevska Jugoslavenska Armija" 
     Division = 
     {  id       = {  type = 19800 id = 4  } 
       name     = "32. Triglavska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 6
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 5  } 
       name     = "Triglavski Odred" 
       strength = 50 # 70
       type     = bergsjaeger 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 6  } 
       name     = "1. Konjicka Divizija" 
       strength = 50 # 70
       type     = cavalry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 7  } 
     name     = "I. Kraljevska Jugoslavenska Armija" 
     location = 338 
     Division = 
     {  id       = {  type = 19800 id = 8  } 
       name     = "7. Potiska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 9  } 
       name     = "3. Konjicka Divizija" 
       strength = 50 # 70
       type     = cavalry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 10  } 
     location = 354 
     name     = "II. Kraljevska Jugoslavenska Armija" 
     Division = 
     {  id       = {  type = 19800 id = 11  } 
       name     = "10. Bosanska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 19800 id = 12  } 
       name     = "17. Vrbaska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 13  } 
     location = 329 
     name     = "III. Kraljevska Jugoslavenska Armija" 
     Division = 
     {  id       = {  type = 19800 id = 14  } 
       name     = "13. Hercegovacka Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 15  } 
       name     = "15. Zetska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 16  } 
     location = 350 
     name     = "III. Kraljevska Teritorijalna Armija" 
     Division = 
     {  id       = {  type = 19800 id = 17  } 
       name     = "5. Sumadijska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 19800 id = 18  } 
       name     = "20. Bregalnicka Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 19800 id = 19  } 
       name     = "22. Ibarska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 20  } 
     location = 349 
     name     = "V. Nezavisna Armija" 
     Division = 
     {  id       = {  type = 19800 id = 21  } 
       name     = "8. Krajinska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 22  } 
       name     = "9. Timocka Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 23  } 
       name     = "2. Konjicka Divizija" 
       strength = 50 # 70
       type     = cavalry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 24  } 
     location = 338 
     name     = "VI. Nezavisna Armija" 
     Division = 
     {  id       = {  type = 19800 id = 25  } 
       name     = "3. Dunavska Pesadijska Divizija" 
       strength = 50 # 70
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 26  } 
       name     = "4. Konjicka Divizija" 
       strength = 50 # 70
       type     = cavalry
	   model    = 7
	   
      } 
    } 
   # ########################## 
   # ########################## 
   navalunit = 
   {  id       = {  type = 19800 id = 30  } 
     name     = "Kraljevska Jugoslavenska Ratna Mornarica" 
     location = 350 
     base     = 350 
     Division = 
     {  id       = {  type = 19800 id = 32  } 
       name     = "1. Razaracka Flotila" 
       type     = destroyer 
       model    = 1 
       strength = 40 
      } 
     Division = 
     {  id    = {  type = 19800 id = 33  } 
       name  = "1. Podmornicka Flotila" 
       type  = submarine 
       model = 2 
      } 
    } 
   airunit = 
   {  location = 338 
     base     = 338 
     id       = {  type = 19800 id = 27  } 
     name     = "Operativno Zrakoplovstvo" 
     Division = 
     {  id       = {  type = 19800 id = 28  } 
       name     = "2. Vazduhoplovni Lovacki Puk" 
       strength = 30 
       type     = interceptor 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 19800 id = 29  } 
       name     = "26. Takticki Bombarderski Puk" 
       strength = 30 
       type     = tactical_bomber 
       model    = 4 
      } 
    } 
  } 
 