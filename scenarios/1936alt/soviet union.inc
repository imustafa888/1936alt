 
 ############################## 
 # Country definition for SOV # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
 
 country = 
 {  tag                    = SOV 
   regular_id             = RUS 
   intrinsic_gov_type     = leninist 
   capital                = 572 
   # Resource Reserves 
energy                 = 12000
metal                  = 6000
rare_materials         = 3000
   oil                    = 500 
   supplies               = 500 
   money                  = 30 
   manpower               = 1953 
   dissent                = 1
   transports             = 600 
   escorts                = 20 
     research_mod = 0.75

   
   diplomacy = 
   {  relation = 
     {  tag        = AFG 
       value      = 1 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = BRA value = -50  } 
     relation = 
     {  tag        = BUL 
       value      = 15 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = CHC value = 100  } 
     relation = {  tag = CZE value = 100  } 
     relation = {  tag = ENG value = -25  } 
     relation = 
     {  tag        = EST 
       value      = -30 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = FIN value = 1  } 
     relation = 
     {  tag        = FRA 
       value      = 100 
       guaranteed = {  day = 7 month = january year = 1935  } 
      } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = GRE value = 15  } 
     relation = {  tag = IRE value = 1  } 
     relation = {  tag = JAP value = -10  } 
     relation = 
     {  tag        = LAT 
       value      = -30 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = 
     {  tag        = LIT 
       value      = 75 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = MON value = 150 access = yes  } 
     relation = 
     {  tag        = PER 
       value      = -20 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = POL value = -50  } 
     relation = {  tag = ROM value = 1  } 
     relation = {  tag = SAU value = 1  } 
     relation = {  tag = SIK value = 125  } 
     relation = {  tag = SPR value = -10  } 
     relation = 
     {  tag        = TAN 
       value      = 200 
       guaranteed = {  day = 16 month = may year = 1935  } 
       access     = yes 
      } 
     relation = 
     {  tag        = TUR 
       value      = 100 
       guaranteed = {  day = 30 month = december year = 1935  } 
      } 
     relation = {  tag = URU value = -100  } 
     relation = {  tag = USA value = 35  } 
     relation = 
     {  tag        = SCH 
       value      = 1 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
    } 
   SpyInfo                = {  country = "SOV" NumberOfSpies = 10  } 
    
claimedprovinces = {
#External claims
#Balts
	274 #Narva
	270
	271
	272
	273
	275
	265
	264
	267
	269
	268
	#266 #Daugavpils
	260
	262
	259
	263
	258 #Wilno
	255 #Grodno

#Finns
	511
	512
	513
	514
	515
	516
	517
	518
	519
	520
	521
	522
	523
	524
	525
	526
	527
	528
	529
	530	
	531
	532
	533

#Poles (historical only)
	223
	228
	227
	229
	230
	231
	232
	233
	234
	237
	243
	246
	250
	252
	253
	254
	
	

#Ukrainians
	249
	245
	244
	240
	238
	241
	242
	239
	238
	213
	215
	300
	302
	306
	236

#Byelorussians
	248
	247
	251
	256
	257

#Armenians
	386
	1067
	1063

#Azeris
	1083
	1081
	1082
	1080

#Tajiks/Turkmens/Uzbeks
	1097
	2168
	2170
	2173
	1279
	1280
	1276
	1273
	1123

#Moldovans
	305
	304
	303
	621
	620

#Japan
	1541
	1542
	1543
	1219

#Turkey
	409
	384

#Internal Claims
#Karelia
	539
	538
	540

#Northern Finns/Turks
	534
	685
	686
	1179
	1177

#Mongols
	1167 #Russian majority
	1185
	1146
	1147

#Tatars/Bashkirs
	1131
	690
	671
	664
	673
	674
	675

#Germans
	666

#Kalmyks
	699 #Russian plurality
	1119

#Caucasians
	700
	701
	702
	703
	704
	705
	707
	708
	709
	710
	711
	712
	713
	714

#Crimean Tartars
	638
	637

#Ukrainianians in SSR
	632
	636 #Kharkiv
	623
	624
	606
	629
	610
	605
	608
	607
	609
	616
	611
	617 #Kiev
	614
	612
	618
	619
	620
	625
	626 #Odessa
	621
	615
	613
	628
	622
	627

#Byelorussians in SSR
	595
	597
	598
	601
	600
	594
	596
	592
	599 #Minsk
	591
	692
	590
	593
	
#Kazakhs in SSR
	1108
	1109
	1110
	1111
	1112
	1118

#Uzbeks in SSR
	1101
	1102
	1100
	1103
	1099

#Kyrghiz in SSR
	1106 #Osh
	1107 #Frunze

#Tajiks in SSR
	1104
	1105

#Turkmens in SSR
	1097
	1098

#Manchuria
	1211 #Hunjiang->Adong/Liaoyuan
 	1212 #Yanji->Jilin/Liaoyuan
	1214 #Shenyang->Mukden
	1215 #Fushun->Adong
	1216 #Jinzhou->Jinxi
	1217 #Anshan->Dalian
	1218 #Panjin->Jinxi
	1219 #Port Arthur
	1220 #Dandong->Dalian
	1235 #Fuxin->Changde
	1202 #Jiamusi->Jixi/Jiamusi
	1204 #Jixi
	1205 #Mudanjiang->Jilin/Mudanjiang
	1199 #Harbin
	1203 #Qiqihaer
	1200 #Human->Mohe
	1206 #Haila'er
	1213 #Baicheng->Ulan Hot
	1237 #Ulayanqada->Xililnhot/Erenhot
	1201 #Heihe
	1208 #Changchun->Mukden
	1209 #Wulanhaote->Ulan Hot/Xilinhot
	1210 #Tongliyao Hot->Chifeng
	1197 #Hegang->Heihe
	1198 #Butehaqi->Qiqihar
	1245 #Tangshan
	1240 #Sili-yin Qota->Xilinhot/Erenhot
	1236 #Chengde->Changde
	1207 #Jilin->Xinjing
}

nationalprovinces = {  
    1191 #Vladivostok
	1193 #Nakhodka
	1192 #Semyonovka
	1196 #Nikolsk-Ussurysky
	1195 #Tetyukhe
	1190 #Khabarovsk
	1187 #Komsomolsk-on-Amur
	1188 #Elban
	1175 #Birobidzhan
	1174 #Kuybyshevka-Vostochnaya
	1189 #Nikolayevsk-on-Amur
	1176 #Blagoveshchensk
	1180 #Verkhoyansk
	1181 #Magadan
	1182 #Anadyr
	1183 #Palana
	1184 #Petropavlovsk-Kamchatsky
	1194 #Lesozavodsk
	1178 #Nezametny
	1168 #Borzya
	1169 #Chita
	1164 #Ust-Kut
	1163 #Bodaybo
	1162 #Irkutsk
	1166 #Cheremkhovo
	1186 #Okhotsk
    1165 #Bratsk
	1150 #Ostyako-Vogulsk
	1154 #Surgut
	507 #Ust-Kamenogorosk
    498 #Pavlodar
    1153 #Uray
	1152 #Salekhard
	1145 #Stalinsk
	1158 #Minusinsk
	1156 #Krasnoyarsk
    1157 #Kansk
	1144 #Kemerovo
	1143 #Biysk
	1129 #Vorkuta
	1142 #Novosibirsk
	1140 #Barnaul
	1148 #Tomsk
	1155 #Norilsk
	544 #Kichmensky Gorodok
	546 #Molotovsk
	545 #Velsk
	568 #Solnechnogorsk
	564 #Opochka
	588 #Bryansk
	1138 #Omsk
	1139 #Tara
	583 #Efremov
	1136 #Tyumen
	1135 #Tobolsk
	502 #Akmolinsk
	501 #Kokchetav
	1151 #Sverdlovsk
	1130 #Berezniki
	1137 #Kurgan
	1132 #Chelyabinsk
	1133 #Orsk
	1115 #Kustanay
	1113 #Uralsk
	687 #Perm
	689 #Solikamsk
	688 #Ukhta
	542 #Arkhangelsk
	584 #Tula
	681 #Kostroma
	543 #Totma
	547 #Kirllov
	537 #Kem
	536 #Kandalaksha
	534 #Kola
	535 #Murmansk
	706 #Astrakhan
	701 #Nalchik
	696 #Cherkessk
	695 #Sochi
	697 #Volgodonsk
	698 #Voroshilovsk
	645 #Konstantinovsk
	659 #Kalach-on-Don
	669 #Saratow
	662 #Kotelnikovo
	623
	630
	631
	661 #Kamyshin
	660 #Volzhsky
	639 #Dzhankoy
	1134 #Orenburg
	665 #Volsk
	658 #Penza
	668 #Kuybyshev
	641 #Sevastopol
	640 #Kerch
	670 #Saransk
	667 #Tolyatti
	672 #Kazan
	684 #Kirov
	663 #Stalingrad
	655 #Uryupinsk
	642 #Surovikino
	651 #Borisoglebsk
	650 #Tambov
	656 #Ulyanovsk
	578 #Sasovo
	683 #Arzamas
	682 #Ivanovo
	679 #Murom
	571 #Orekhovo-Zuyevo
	680 #Gorky
	678 #Vladimir
	677 #Yaroslavl
	676 #Rybinsk
	548 #Vologda
	556 #Vytegra
	554 #Kinry
	569 #Kalinini
	572 #Moscow #########
	570 #Zagorsk
	585 #Kozelsk
	574 #Vyazma	
	541 #Belomorsk
	559 #Borovichi
	561 #Staraya Russa
	551 #Krasnogvardeysk
	557 #Tikhvin
	549 #Luga
	553 #Leningrad
	550 #Kingisepp
	552 #Gdov
	560 #Novgorod
	566 #Pskov
	586 #Roslavl
	581 #Oryol
	587 #Klintsy
	582 #Livny
	579 #Ryazan
	657 #Balashov
	654 #Voronezh
	604 #Kursk
	580 #Yelets
	636 #Kharkov
	603 #Belgorod
	602 #Zheleznogorsk
	647 #Stary Oskol
	646 #Alexeyevka
	644 #Rostov-on-Don
	643 #Morozovsk
	567 #Serpukhov
	573 #Velikiye Luki
	565 #Dno
	589 #Smolensk
	577 #Nelidovo
	562 #Kirishi
	558 #Rzhev
	563 #Torzhok
	1149 #Asino
	1141 #Barabinsk
	576 #Kaluga
	555 #Cherepovets
	1126 #Kungur
	1127 #Pervouralsk
	1128 #Nizhny Tagil
	1069 #Tayshet
	1070 #Kachug
	1161 #Kalakan
	1170 #Never
	1171 #Ekimchan
	575 #Safonovo
	652 #Lipetsk
	499 #
	685 #Syktyvkar
	686
	
#Russianized Ukrainians and Russians in Ukraine
	633
	648
	649
	653
	634
	635
	
#Baltics
	274
	266
	
#Kazakstan (had a Russian majority in 1939)
	1114
	1117
	1116
	500
	505
	506
	504
	503 #Karaganda
	
#Kyrghizstan (had sizable Russian minority in 1939)
	1107 #Frunze
	
#Mongols
	1167 #Russian majority

#Kalmyks
	699

#Caucasians
	700
	
#Tatars/Bashkirs
	1131
	690
	671
#	664
	673
	674
#	675
	
#Karelia
	539
	538
	540
	
#Ukrainians in Kuban
	691
	692
	693
	694
} 
	
ownedprovinces = {  
		#Manchurei
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
		1207 #Jilin->Xinjing

    1191 #Vladivostok
	1193 #Nakhodka
	1192 #Semyonovka
	1196 #Nikolsk-Ussurysky
	1195 #Tetyukhe
	1190 #Khabarovsk
	1187 #Komsomolsk-on-Amur
	1188 #Elban
	1175 #Birobidzhan
	1174 #Kuybyshevka-Vostochnaya
	1541 #Oha
	1189 #Nikolayevsk-on-Amur
	1176 #Blagoveshchensk
	1180 #Verkhoyansk
	1181 #Magadan
	1182 #Anadyr
	1183 #Palana
	1184 #Petropavlovsk-Kamchatsky
	1194 #Lesozavodsk
	1179 #Yakutsk
	1178 #Nezametny
	1168 #Borzya
	1177 #Nyurba
	1169 #Chita
	1164 #Ust-Kut
	1163 #Bodaybo
	1162 #Irkutsk
	1167 #Ulan-Ude
	1166 #Cheremkhovo
	1186 #Okhotsk
    1165 #Bratsk
	1150 #Ostyako-Vogulsk
	1154 #Surgut
	507 #Ust-Kamenogorosk
	505 #Sar
    498 #Pavlodar
    1153 #Uray
	1152 #Salekhard
	1145 #Stalinsk
	1146 #Oyrot-Tura
	1147 #Abakan
	1158 #Minusinsk
	1156 #Krasnoyarsk
    1157 #Kansk
	1144 #Kemerovo
	1143 #Biysk
	1129 #Vorkuta
	1142 #Novosibirsk
	1140 #Barnaul
	1148 #Tomsk
	685 #Syktyvkar
	1155 #Norilsk
	544 #Kichmensky Gorodok
	546 #Molotovsk
	545 #Velsk
	568 #Solnechnogorsk
	615 #Uman
	625 #Ochakov
	564 #Opochka
	621 #Tiraspol
	588 #Bryansk
	584 #Tula
	500 #Balkhash
	1138 #Omsk
	1139 #Tara
	583 #Efremov
	1136 #Tyumen
	1135 #Tobolsk
	1111 #Fyodorovka
	1110 #Kzyl-Orda
	504 #Alma-Ata
	1112 #Novokazalinsk
	1102 #Nakus
	1101 #Zheleznodorozhny
	1118 #Shevchenko
	502 #Akmolinsk
	501 #Kokchetav
	1151 #Sverdlovsk
	1130 #Berezniki
	1137 #Kurgan
	598 #Rechytsa
	1132 #Chelyabinsk
	1131 #Ufa
	1133 #Orsk
	1115 #Kustanay
	1116 #Derzhavinsk
	503 #Karaganda
	1117 #Chelkar
	1114 #Aktyubinsk
	1113 #Uralsk
	690 #Sterlitamak
	699 #Elista
	632 #Dnepropetrovsk
	592 #Borisov
	687 #Perm
	689 #Solikamsk
	688 #Ukhta
	542 #Arkhangelsk
	686 #Kudymkar
	681 #Kostroma
	543 #Totma
	547 #Kirllov
	538 #Segezha
	539 #Petrozavodsk
	537 #Kem
	536 #Kandalaksha
	534 #Kola
	535 #Murmansk
	706 #Astrakhan
	702 #Grozny
	704 #Makhachkala
	703 #Vladikavkaz
	709 #Tbilisi
	708 #Kutaisi
	710 #Sukhumi
	701 #Nalchik
	696 #Cherkessk
	695 #Sochi
	694 #Novorossiysk
	691 #Krasnodar
	692 #Salsk
	697 #Volgodonsk
	698 #Voroshilovsk
	700 #Khasavyurt
	645 #Konstantinovsk
	659 #Kalach-on-Don
	662 #Kotelnikovo
	661 #Kamyshin
	660 #Volzhsky
	666 #Engel's
	639 #Dzhankoy
	1134 #Orenburg
	665 #Volsk
	669 #Saratov
	658 #Penza
	668 #Kuybyshev
	637 #Yevpatoria
	641 #Sevastopol
	640 #Kerch
	670 #Saransk
	667 #Tolyatti
	675 #Cheboksary
	674 #Zelenodolsk
	672 #Kazan
	664 #Naberezhnye Chelny
	671 #Izhevsk
	673 #Yoshkar-Ola
	684 #Kirov
	663 #Stalingrad
	693 #Maykop
	618 #Kamenets-Podolsky
	655 #Uryupinsk
	642 #Surovikino
	651 #Borisoglebsk
	650 #Tambov
	656 #Ulyanovsk
	638 #Simferopol
	578 #Sasovo
	683 #Arzamas
	682 #Ivanovo
	679 #Murom
	571 #Orekhovo-Zuyevo
	680 #Gorky
	678 #Vladimir
	677 #Yaroslavl
	676 #Rybinsk
	548 #Vologda
	556 #Vytegra
	554 #Kinry
	569 #Kalinini
	572 #Moscow #########
	570 #Zagorsk
	585 #Kozelsk
	574 #Vyazma
	540 #Kestenga
	541 #Belomorsk
	559 #Borovichi
	561 #Staraya Russa
	551 #Krasnogvardeysk
	557 #Tikhvin
	549 #Luga
	553 #Leningrad
	550 #Kingisepp
	552 #Gdov
	560 #Novgorod
	566 #Pskov
	599 #Minsk
	595 #Mozyr
	616 #Novograd-Volynsky
	611 #Zhitomir
	612 #Vinnitsa
	619 #Mogilev-Podolsky
	620 #Balta
	626 #Odessa
	622 #Nikolayev
	624 #Kherson
	623 #Melitopol
	627 #Kirvoy Rog
	628 #Kirovograd
	613 #Cherkasy
	617 #Kiev
	608 #Nezhin
	609 #Korosten
	600 #Mogilev
	596 #Slutsk
	607 #Chernigov
	597 #Luban
	601 #Gomel
	586 #Roslavl
	581 #Oryol
	587 #Klintsy
	582 #Livny
	579 #Ryazan
	657 #Balashov
	654 #Voronezh
	604 #Kursk
	580 #Yelets
	630 #Zaporozhye
	631 #Mariupol
	634 #Voroshilovgrad
	636 #Kharkov
	603 #Belgorod
	602 #Zheleznogorsk
	647 #Stary Oskol
	646 #Alexeyevka
	644 #Rostov-on-Don
	643 #Morozovsk
	614 #Proskurov
	633 #Kupyansk
	649 #Kamensk-Shakhtinsky
	653 #Pavlovsk
	648 #Rossosh
	1097 #Ashkhabad
	1098 #Merv
	1105 #Stalinabad
	1104 #Khorugh
	1099 #Samarkand
	1103 #Tashkent
	1106 #Osh
	1109 #Chimkent
	1108 #Dzambul
	1107 #Frunze
	567 #Serpukhov
	573 #Velikiye Luki
	565 #Dno
	590 #Vitebsk
	591 #Orsha
	589 #Smolensk
	594 #Bobruisk
	605 #Konotop
	629 #Poltava
	577 #Nelidovo
	562 #Kirishi
	558 #Rzhev
	563 #Torzhok
	707 #Tshinvali
	1185 #Sovetskaya Gavan
	506 #Taldy-Kurgan
	1100 #Bukhara
	711 #Yerevan
	712 #Stepanakert
	713 #Baku
	1149 #Asino
	1141 #Barabinsk
	499 #Ekibastuz
	593 #Polotsk
	714 #Nakhchivan
	576 #Kaluga
	555 #Cherepovets
	705 #Nazran
	1126 #Kungur
	1127 #Pervouralsk
	1128 #Nizhny Tagil
	1069 #Tayshet
	1070 #Kachug
	1161 #Kalakan
	1170 #Never
	1171 #Ekimchan
	575 #Safonovo
	606 #Sumy
	635 #Stalino
	652 #Lipetsk
	610 #Kremenchug
	} 
	
   controlledprovinces  = { 
		#Manchurei
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
		1207 #Jilin->Xinjing

    1191 #Vladivostok#
	1193 #Nakhodka#
	1192 #Semyonovka#
	1196 #Nikolsk-Ussurysky#
	1195 #Tetyukhe#
	1190 #Khabarovsk#
	1187 #Komsomolsk-on-Amur#
	1188 #Elban#
	1175 #Birobidzhan#
	1174 #Kuybyshevka-Vostochnaya#
	1541 #Okha#
	1189 #Nikolayevsk-on-Amur#
	1176 #Blagoveshchensk#
	1180 #Verkhoyansk#
	1181 #Magadan#
	1182 #Anadyr#
	1183 #Palana#
	1184 #Petropavlovsk#
	1194 #Lesozavodsk#
	1179 #Yakutsk#
	1178 #Nezametny#
	1168 #Borzya#
	1177 #Nyurba#
	1169 #Chita#
	1164 #Ust-Kut#
	1163 #Bodaybo#
	1162 #Irkutsk#
	1167 #Ulan-Ude#
	1166 #Cheremkhovo#
	1186 #Okhotsk#
    1165 #Bratsk#
	1150 #Ostyako-Vogulsk#
	1154 #Surgut#
	507 #Ust-Kamenogorosk#
	505 #Sar#
    498 #Pavlodar#
    1153 #Uray#
	1152 #Salekhard#
	1145 #Kusnezk#
	1146 #Oyrot-Tura#
	1147 #Abakan#
	1158 #Minusinsk#
	1156 #Krasnoyarsk#
        1157 #Kansk#
	1144 #Kemerovo#
	1143 #Biysk#
	1129 #Vorkuta#
	1142 #Novosibirsk#
	1140 #Barnaul#
	1148 #Tomsk#
	685 #Syktyvkar#
	1155 #Norilsk#
	544 #Kichmensky Gorodok#
	546 #Molotovsk#
	545 #Velsk#
	568 #Solnechnogorsk#
	615 #Uman#
	625 #Ochakov#
	564 #Opochka#
	621 #Tiraspol#
	588 #Bryansk#
	584 #Tula#
	500 #Balkhash#
	1138 #Omsk#
	1139 #Tara#
	583 #Efremov#
	1136 #Tyumen#
	1135 #Tobolsk#
	1111 #Fyodorovka#
	1110 #Kzyla-Orda#
	504 #Alma-Ata#
	1112 #Novokazalinsk#
	1102 #Nakus#
	1101 #Zheleznodorozhny#
	1118 #Fort Alexandrovsky#
	502 #Akmolinsk#
	501 #Kokchetav#
	1151 #Sverdlovsk#
	1130 #Berezniki#
	1137 #Kurgan#
	598 #Rechytsa#
	1132 #Chelyabinsk#
	1131 #Ufa#
	1133 #Orsk#
	1115 #Kustanay#
	1116 #Derzhavinsk#
	503 #Karaganda#
	1117 #Chelkar#
	1114 #Aktyubinsk#
	1113 #Uralsk#
	690 #Sterlitamak#
	699 #Elista#
	632 #Dnepropetrovsk#
	592 #Borisov#
	687 #Perm#
	689 #Solikamsk#
	688 #Ukhta#
	542 #Arkhangelsk#
	686 #Kudymkar#
	681 #Kostroma#
	543 #Totma#
	547 #Kirillov#
	538 #Segezha#
	539 #Petrozavodsk#
	537 #Kem#
	536 #Kandalaksha#
	534 #Kola#
	535 #Murmansk#
	706 #Astrakhan#
	702 #Grozny#
	704 #Makhachkala#
	703 #Vladikavkaz#
	709 #Tbilisi#
	708 #Kutaisi#
	710 #Sukhumi#
	701 #Nalchik#
	696 #Cherkessk#
	695 #Sochi#
	694 #Novorossiysk#
	691 #Krasnodar#
	692 #Salsk#
	697 #Volgodonsk#
	698 #Voroshilovsk#
	700 #Khasavyurt#
	645 #Konstantinovsk#
	659 #Kalach-on-Don#
	662 #Kotelnikovo#
	661 #Kamyshin#
	660 #Volzhsky#
	666 #Engel's#
	639 #Dzhankoy#
	1134 #Orenburg#
	665 #Volsk#
	669 #Saratov#
	658 #Penza#
	668 #Kuybyshev#
	637 #Yevpatoria#
	641 #Sevastopol#
	640 #Kerch#
	670 #Saransk#
	667 #Tolyatti#
	675 #Cheboksary#
	674 #Zelenodolsk#
	672 #Kazan#
	664 #Naberezhnye Chelny#
	671 #Izhevsk#
	673 #Yoshkar-Ola#
	684 #Kirov#
	663 #Stalingrad#
	693 #Maykop#
	618 #Kamenets-Podolsky#
	655 #Uryupinsk#
	642 #Surovikino#
	651 #Borisoglebsk#
	650 #Tambov#
	656 #Ulyanovsk#
	638 #Simferopol#
	578 #Sasovo#
	683 #Arzamas#
	682 #Ivanovo#
	679 #Murom#
	571 #Orekhovo-Zuyevo#
	680 #Gorky#
	678 #Vladimir#
	677 #Yaroslavl#
	676 #Rybinsk#
	548 #Vologda#
	556 #Vytegra#
	554 #Kinry#
	569 #Kalinin#
	572 #Moscow #########
	570 #Zagorsk#
	585 #Kozelsk#
	574 #Vyazma#
	540 #Kestenga#
	541 #Belomorsk#
	559 #Borovichi#
	561 #Staraya Russa#
	551 #Krasnogvardeysk#
	557 #Tikhvin#
	549 #Luga#
	553 #Leningrad#
	550 #Kingisepp#
	552 #Gdov#
	560 #Novgorod#
	566 #Pskov#
	599 #Minsk#
	595 #Mozyr#
	616 #Novograd-Volynsky#
	611 #Zhitomir#
	612 #Vinnitsa#
	619 #Mogilev-Podolsky#
	620 #Balta#
	626 #Odessa#
	622 #Nikolayev#
	624 #Kherson#
	623 #Melitopol#
	627 #Kirvoy Rog#
	628 #Kirovograd#
	613 #Cherkasy#
	617 #Kiev#
	608 #Nezhin#
	609 #Korosten#
	600 #Mogilev#
	596 #Slutsk#
	607 #Chernigov#
	597 #Luban#
	601 #Gomel#
	586 #Roslavl#
	581 #Oryol#
	587 #Klintsy#
	582 #Livny#
	579 #Ryazan#
	657 #Balashov#
	654 #Voronezh#
	604 #Kursk#
	580 #Yelets#
	630 #Zaporozhye#
	631 #Mariupol#
	634 #Voroshilovgrad#
	636 #Kharkov#
	603 #Belgorod#
	602 #Zheleznogorsk#
	647 #Stary Oskol#
	646 #Ostrogozhsk#
	644 #Rostov-on-Don#
	643 #Morozovsk#
	614 #Proskurov#
	633 #Kupyansk#
	649 #Kamensk-Shakhtinsky#
	653 #Pavlovsk#
	648 #Rossosh#
	1097 #Ashkhabad#
	1098 #Merv#
	1105 #Stalinabad#
	1104 #Khorugh#
	1099 #Samarkand#
	1103 #Tashkent#
	1106 #Osh#
	1109 #Chimkent#
	1108 #Dzambul#
	1107 #Frunze#
	567 #Serpukhov#
	573 #Velikiye Luki#
	565 #Dno#
	590 #Vitebsk#
	591 #Orsha#
	589 #Smolensk#
	594 #Bobruisk#
	605 #Konotop#
	629 #Poltava#
	577 #Nelidovo#
	562 #Kirishi#
	558 #Rzhev#
	563 #Torzhok#
	707 #Tshinvali#
	1185 #Sovetskaya Gavan#
	506 #Taldy-Kurgan#
	1100 #Bukhara#
	711 #Yerevan#
	712 #Stepanakert#
	713 #Baku#
	1149 #Asino#
	1141 #Barabinsk#
	499 #Ekibastuz#
	593 #Polotsk#
	714 #Nakhchivan#
	576 #Kaluga#
	555 #Cherepovets#
	705 #Nazran#
	1126 #Kungur#
	1127 #Pervouralsk#
	1128 #Nizhny Tagil#
	1069 #Tayshet#
	1070 #Kachug#
	1161 #Kalakan#
	1170 #Never#
	1171 #Ekimchan#
	575 #Safonovo#
	606 #Sumy#
	635 #Stalino#
	652 #Lipetsk#
	610 #Kremenchug

}
	# ################ 
	techapps = {

		#1931 Infantry Division  
		1010 1020 1030 1040 1050 1060 1070 1080 1090
		#1930 Mountain Division 
		1160 1170 1180 1190 1200 1210 1220 1230 1240
		#SEMI-MOTORIZED CAVALRY 
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
		#1935 Motorized Inf
		1396
		# Airborne Inf
		1670
		#Engineers
		1830 1840 1850
		#Interbellum 1930 Supply 
		1910 1920 1930 1940 1950 1960 1970
		#Early Tank 
		7600 7610 2620 2010 2630 2640 2646 2650 2030 2100
		#Basic Armoured Car  
		2860 2870 2880 2020
		#Early Field Artillery 
		2290 2300 2310 2900 2910 2920 2930 2940
		#Early Static Anti-Air Artillery 
		2800 2450 21180
		#Anti-Air Artillery Brigade
		2810 2820 
 
		#Improved Destroyer 
		3010 3020 3030 3040 3050 3060
		#Interwar Light Cruiser 
		3110 3120 3130 3140 3150 3160
		#Improved Heavy Cruiser 
		3210 3220 3230 3240 3250 3260
		#Great War Battlecruiser  
		3310 3320 3330 3340
		#Early Battleship 
		3410 3420 3430 3440 3450 3456 3460
		#Short Range Submarine 
		3610 3620 3630 3640 3650
		#Seaplane Carrier
		12100
		#Torpedo & ASW 18
		3720 3730 3736 3740 3750 3900
		#Troopships
		3810
	
		#Early Fighter  
		4500 4510 4520 4530 4540 4550 4010 4020
		#Early CAS
		4400
		#Early Bomber 
		4600 4610 4620 4630 4120 4130
		#Multirole fighter
		4300 4310 4320 4330 4340
		#ww1 strategic bomber
		4800 4810 4820
		#ww1 navalbomber
		4700 4710
		# Transports
		4290
		#SEAPLANES
		4740 4750 4760 4770
	
		#Modern Agriculture  
		5700 5710
		#Computers & cryptografi
		5310 54010 54020 54030 5316 5326
		#manufactoring
		5810 5820
		#Construction Engineering 
		5800 5080
		#Basic Oil Refining 
		5190
		#Medicine
		5600 5610 5620 
		#Exp. Rocket
		5560

		#Great War Hospital System 
		14000
		# Great War Land Doctrines (central powers)
		6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
		#Land Doctrines
		6570 6300 6900

		# Naval Doctrines 
		# Theory
		8070 8010 8020 8030 8040 8050 8060 8070 8080
		# Amphib
		82300
		# Logistics
		82500
		# Naval Interdiction
		8500 8510 8550 8560 8600 8610
		# Indirect Approach
		81300 81310 81320 81330 81340
		# Naval Supremacy
		8100 8110 8120 8150 8160 8200

		#Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040
 
	} 
inventions = { 3000027 }
   blueprints             = {   } 
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     freedom           = 1 
     free_market       = 1 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 3 
    } 
   headofstate            = {  type = 9 id = 30001  } # Kalinin 
   headofgovernment       = {  type = 9 id = 30146  } # Trotsky
   foreignminister        = {  type = 9 id = 30003  } 
   armamentminister       = {  type = 9 id = 30004  } 
   ministerofsecurity     = {  type = 9 id = 30005  } 
   ministerofintelligence = {  type = 9 id = 30006  } 
   chiefofstaff           = {  type = 9 id = 30007  } 
   chiefofarmy            = {  type = 9 id = 30008  } 
   chiefofnavy            = {  type = 9 id = 30009  } 
   chiefofair             = {  type = 9 id = 30010  } 
#1936



# Moscow okrug - Belov I.P.
# Leningrad okrug - Shaposhnikov B.
# Kiev okrug - Yakir
# Kharkov okrug - Dubovoi I.N.
# Belorusskij okrug - Uborevich
# Severokavkazskij - Kashirin N.D.
# Privolzhskij - Dybenko P.E.
# Uralskij - Garkavyj I.I.
# Sredneaziatskij - Velikanov M.D.
# Sibirskij - Kujbyshev N.V.
# Zakavkazskij Voennyj Okrug - Levandovsky
# Zabajkalsky voennyj okrug - Gryaznov I.K.
# Osobaya Krasnoznamennaja Dalnevostochnaja Armiya - Blukher


   landunit = 
   {  id       = {  type = 10848 id =  1 } 
     name     = "Raboche-Krest'yanskaya Krasnaya Armyia" 
     location = 572 #Moscow 
     Division = 
     {  id       = {  type = 10848 id = 2  } 
       name     = "Generalnyi Shtab RKKA" 
       strength = 100
       type     = HQ
	   model    = 2
	   } 
 } 
landunit = { 
	id = { type = 10848 id = 3 }
	name = "Vozdushno Desantnye Voiska" 
	location = 572 # Moscow 	

	division = { 
	id = { type = 10848 id = 4 } 
		name = "1-i Vozdushno-Desantnyi Korpus" 
		strength = 25 
		type = paratrooper
		model = 0
		} 
	}
landunit = { 
	id = { type = 10848 id = 5 }
	name = "Voiska NKVD" 
	location = 572 # Moscow 	

	division = { 
	id = { type = 10848 id = 6 } 
		name = "1-ya Konvoynaya Diviziya NKVD" 
		strength = 100 
		type = garrison 
		model = 4
			} 
	division = { 
	id = { type = 10848 id = 7 } 
		name = "Diviziya o. n. Dzerzhinskogo" 
		strength = 100 
		type = motorized 
		model = 0 
		extra = armored_car
		brigade_model = 3
		} 
	}

   landunit = 
   {  id       = {  type = 10848 id =  8 } 
     name     = "Leningradskyi Voennyi Okrug" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 9  } 
       name     = "Leningradskyi Voennyi Okrug" 
       strength = 100 
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model = 0
	   } 
     Division = 
     {  id       = {  type = 10848 id =  10 } 
       name     = "25-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = heavy_armor
	brigade_model = 1
      } 
      Division = 
     {  id       = {  type = 10848 id = 11  } 
       name     = "7-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = heavy_armor
	   brigade_model    = 1	   
      } 	  
 } 
   landunit = 
   {  id       = {  type = 10848 id =  12 } 
     name     = "1-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 13  } 
       name     = "16-ya Ulianovskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 7		   
      }
     Division = 
     {  id       = {  type = 10848 id = 14  } 
       name     = "18-ya Yaroslavskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model = 7
      }
     Division = 
     {  id       = {  type = 10848 id = 15  } 
       name     = "20-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = heavy_armor
	   brigade_model = 1
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  16 } 
     name     = "19-i Strelkovyi Korpus" 
     location = 550 #Kingisepp 
     Division = 
     {  id       = {  type = 10848 id = 17  } 
       name     = "4-ya Turkestanskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model = 6
      }
     Division = 
     {  id       = {  type = 10848 id = 18  } 
       name     = "56-ya Moskovskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      }
 } 
	landunit = 
   {  id       = {  type = 10848 id = 19  } 
     name     = "5-i Kavaleriiski Korpus" 
     location = 566 # Pskov
      Division = 
     {  id       = {  type = 10848 id = 20  } 
       name     = "3-ya Bessarabskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 21  } 
       name     = "14-ya Maykopskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 22  } 
       name     = "16-ya Sibirskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
 }
   landunit = 
   {  id       = {  type = 10848 id =  23 } 
     name     = "33-i Strelkovyi Korpus" 
     location = 550 # Kingisepp
     Division = 
     {  id       = {  type = 10848 id = 24  } 
       name     = "11-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 25  } 
       name     = "158-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  26 } 
     name     = "29-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 27  } 
       name     = "54-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 28  } 
       name     = "153-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
 } 

   landunit = 
   {  id       = {  type = 10848 id = 29  } 
     name     = "Severnyi Voennyi Kommissariat" 
     location = 542 # Arkhangelsk
     Division = 
     {  id       = {  type = 10848 id =  30 } 
       name     = "10-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id =  31 } 
       name     = "88-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 32  } 
     name     = "Uralskyi Voennyi Okrug" 
     location = 1151 # Sverdlovsk
     Division = 
     {  id       = {  type = 10848 id =  34 } 
       name     = "65-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = engineer
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id =  35 } 
       name     = "82-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		extra = anti_air
		brigade_model = 0   
      } 
     Division = 
     {  id       = {  type = 10848 id = 36  } 
       name     = "85-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 37  } 
       name     = "29-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
	extra = light_armor_brigade
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 38  } 
       name     = "110-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 39  } 
       name     = "112-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 40  } 
       name     = "86-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 41  } 
       name     = "87-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 4
      }
	} 

   landunit = 
   {  id       = {  type = 10848 id = 42  } 
     name     = "Belorusskyi Voennyi Okrug" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 43  } 
       name     = "Belorusskyi Voennyi Okrug" 
       strength = 100 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 0
	   } 
      Division = 
     {  id       = {  type = 10848 id = 44  } 
       name     = "24-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = armored_car
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 45  } 
       name     = "27-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 46  } 
     name     = "4-i Strelkovyi Korpus" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 47  } 
       name     = "27-ya Omskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 48  } 
       name     = "2-ya Belorusskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 49  } 
       name     = "8-ya Minskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 50  } 
     name     = "5-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
      Division = 
     {  id       = {  type = 10848 id = 51  } 
       name     = "4-ya Smolenskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 52  } 
       name     = "37-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 53  } 
       name     = "43-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	extra = engineer
	brigade_model = 2
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 54  } 
     name     = "11-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
      Division = 
     {  id       = {  type = 10848 id = 55  } 
       name     = "5-ya Vitebskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 56  } 
       name     = "29-ya Finskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 57  } 
       name     = "64-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 58  } 
     name     = "16-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 59  } 
       name     = "33-ya Belorusskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 60  } 
       name     = "48-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 61  } 
       name     = "81-ya Kaluzhskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
	} 
		landunit = 
   {  id       = {  type = 10848 id = 62  } 
     name     = "3-i Kavaleriiski Korpus" 
     location = 599 # Minsk
      Division = 
     {  id       = {  type = 10848 id = 63  } 
       name     = "7-ya Samarskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 64  } 
       name     = "11-ya Orenburgskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 65  } 
     name     = "6-i Kavaleriiski Korpus" 
     location = 609 # Korosten
      Division = 
     {  id       = {  type = 10848 id = 66  } 
       name     = "6-ya Changarskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 67  } 
     name     = "7-i Kavaleriiski Korpus" 
     location = 596 # Slutsk
      Division = 
     {  id       = {  type = 10848 id = 68  } 
       name     = "4-ya Leningradskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
 }
    landunit = 
   {  id       = {  type = 10848 id =  69 } 
     name     = "22-i Strelkovyi Korpus" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 70  } 
       name     = "63-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 71  } 
       name     = "67-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  72 } 
     name     = "23-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
     Division = 
     {  id       = {  type = 10848 id = 73  } 
       name     = "76-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 74  } 
       name     = "155-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  75 } 
     name     = "24-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
     Division = 
     {  id       = {  type = 10848 id = 76  } 
       name     = "150-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 77  } 
       name     = "145-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  78 } 
     name     = "28-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 79  } 
       name     = "62-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 80  } 
       name     = "66-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 81  } 
       name     = "120-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 		
	
   landunit = 
   {  id       = {  type = 10848 id = 82 } 
     name     = "Moskovskyi Voennyi Okrug" 
     location = 572 #Moscow 
     Division = 
     {  id       = {  type = 10848 id =  83 } 
       name     = "Moskovskyi Voennyi Okrug" 
       strength = 100 
       type     = HQ
	   model    = 2
		extra = anti_air
		brigade_model = 0   
	 } 
      Division = 
     {  id       = {  type = 10848 id = 84  } 
       name     = "Osobaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 85  } 
       name     = "30-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = engineer
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 86  } 
       name     = "5-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = heavy_armor
	   brigade_model    = 1	   
      } 
     Division = 
     {  id       = {  type = 10848 id = 87  } 
       name     = "Moskovskaya Proletarskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 10848 id = 88  } 
       name     = "126-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id =  89 } 
     name     = "2-i Territorialnyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id =  90 } 
       name     = "14-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		} 
      Division = 
     {  id       = {  type = 10848 id =  91 } 
       name     = "49-ya Krasnozamennaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		} 
     Division = 
     {  id       = {  type = 10848 id = 92  } 
       name     = "55-ya Kurskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 5		   
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  93 } 
     name     = "3-i Territorialnyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id =  94 } 
       name     = "6-ya Orlovskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		} 
     Division = 
     {  id       = {  type = 10848 id =  95 } 
       name     = "52-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id =  96 } 
       name     = "84-ya Tulskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  97 } 
     name     = "10-i Territorialnyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id =  98 } 
       name     = "17-ya Gorkovskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 99  } 
       name     = "19-ya Voronezhskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 5		   
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 100  } 
     name     = "20-i Strelkovyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id = 101  } 
       name     = "68-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 102  } 
       name     = "113-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 103  } 
       name     = "142-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 104  } 
     name     = "21-i Strelkovyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id = 105  } 
       name     = "77-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 106  } 
       name     = "38-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 107  } 
     name     = "30-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
      Division = 
     {  id       = {  type = 10848 id = 108  } 
       name     = "59-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 109  } 
       name     = "39-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 110  } 
     name     = "40-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id = 111  } 
       name     = "60-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 112  } 
       name     = "42-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 113  } 
     name     = "41-i Strelkovyi Korpus" 
     location = 678 # Vladimir
     Division = 
     {  id       = {  type = 10848 id = 114  } 
       name     = "127-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 115 } 
     name     = "Privoljsyi Voennyi Okrug" 
     location = 672 # Kazan
      Division = 
     {  id       = {  type = 10848 id = 117  } 
       name     = "125-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 118  } 
       name     = "128-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 119  } 
       name     = "159-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 120  } 
       name     = "79-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 121  } 
     name     = "12-i Territorialnyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 122  } 
       name     = "1-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 5		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 123  } 
       name     = "31-ya Stalingradskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		extra = anti_air
		brigade_model = 0   
      } 
     Division = 
     {  id       = {  type = 10848 id = 124  } 
       name     = "53-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 125  } 
       name     = "61-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 126  } 
       name     = "70-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
	} 
    landunit = 
   {  id       = {  type = 10848 id = 127  } 
     name     = "34-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 128  } 
       name     = "111-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 129  } 
       name     = "97-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 130  } 
     name     = "26-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 131  } 
       name     = "129-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 132  } 
       name     = "102-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 133  } 
     name     = "42-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 134  } 
       name     = "108-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 135 } 
     name     = "Kievskyi Voennyi Okrug" 
     location = 617 # Kiev 
     Division = 
     {  id       = {  type = 10848 id =  136 } 
       name     = "Kievskyi Voennyi Okrug" 
       strength = 100 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 0
	 } 
      Division = 
     {  id       = {  type = 10848 id = 137  } 
       name     = "23-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = armored_car
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 138  } 
       name     = "26-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
      Division = 
     {  id       = {  type = 10848 id = 139  } 
       name     = "28-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = engineer
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 140  } 
       name     = "45-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = heavy_armor
	   brigade_model    = 1	   
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id = 141  } 
     name     = "6-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 142  } 
       name     = "2-ya Kavkazskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 143  } 
       name     = "24-ya Zheleznaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 7		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 144  } 
       name     = "46-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 145  } 
     name     = "8-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 146  } 
       name     = "44-ya Kievskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 7		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 147  } 
       name     = "51-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 148  } 
       name     = "95-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 149  } 
     name     = "15-i Strelkovyi Korpus" 
     location = 614 # Proskurov
     Division = 
     {  id       = {  type = 10848 id = 150  } 
       name     = "2-ya Turkestanskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
      Division = 
     {  id       = {  type = 10848 id = 151  } 
       name     = "99-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = heavy_armor
	   brigade_model    = 1
      } 
     Division = 
     {  id       = {  type = 10848 id = 152  } 
       name     = "100-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 6		   
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 153  } 
     name     = "17-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 154  } 
       name     = "7-ya Chernigovskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 155  } 
       name     = "15-ya Sivashskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
      Division = 
     {  id       = {  type = 10848 id = 156  } 
       name     = "96-ya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 6		
      } 
     Division = 
     {  id       = {  type = 10848 id = 157  } 
       name     = "58-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
		}
    } 
   landunit = 
   {  id       = {  type = 10848 id = 158  } 
     name     = "1-i Kavaleriiski Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 159  } 
       name     = "1-ya Lenina Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 10848 id = 160  } 
       name     = "2-ya Krasnogo Znameni Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
  }
   landunit = 
   {  id       = {  type = 10848 id = 161  } 
     name     = "2-i Kavaleriiski Korpus" 
     location = 612 # Zhitomir
     Division = 
     {  id       = {  type = 10848 id = 162  } 
       name     = "5-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 10848 id = 163  } 
       name     = "9-ya Krimskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 164  } 
     name     = "35-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 165  } 
       name     = "159-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 166  } 
     name     = "36-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
      Division = 
     {  id       = {  type = 10848 id = 167  } 
       name     = "160-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 168  } 
       name     = "161-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 169  } 
     name     = "27-i Strelkovyi Korpus" 
     location = 614 # Proskurov
      Division = 
     {  id       = {  type = 10848 id = 170  } 
       name     = "89-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 171  } 
       name     = "101-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 172  } 
       name     = "130-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 173  } 
     name     = "37-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 174  } 
       name     = "131-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 175  } 
       name     = "140-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 176  } 
       name     = "152-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 177  } 
       name     = "47-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 178 } 
     name     = "Kharkovskyi Voennyi Okrug" 
     location = 636 #Kharkov 
      Division = 
     {  id       = {  type = 10848 id = 180  } 
       name     = "75-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = engineer
	   brigade_model    = 2	
      } 
      Division = 
     {  id       = {  type = 10848 id = 181  } 
       name     = "151-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 182  } 
     name     = "7-i Territorialnyi Korpus" 
     location = 630 # Zaporozhie
     Division = 
     {  id       = {  type = 10848 id = 183  } 
       name     = "3-ya Krimskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 7
	extra = anti_air
	brigade_model = 0
      } 
      Division = 
     {  id       = {  type = 10848 id = 184  } 
       name     = "25-ya Chapaeva Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 185  } 
       name     = "41-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 186  } 
     name     = "14-i Territorialnyi Korpus" 
     location = 636 # Kharkov
      Division = 
     {  id       = {  type = 10848 id = 187  } 
       name     = "30-ya Irkutskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 188  } 
       name     = "80-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 189  } 
       name     = "23-ya Kharkovskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 190  } 
     name     = "25-i Strelkovyi Korpus" 
     location = 636 # Kharkov
     Division = 
     {  id       = {  type = 10848 id = 191  } 
       name     = "72-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 192  } 
       name     = "132-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 193  } 
       name     = "83-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 194  } 
       name     = "141-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 195  } 
       name     = "69-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 196  } 
       name     = "156-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 197  } 
       name     = "134-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 198  } 
       name     = "139-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 199 } 
     name     = "Severokavkazskyi Voennyi Okrug" 
     location =  644 # Rostov
      Division = 
     {  id       = {  type = 10848 id =  201 } 
       name     = "10-ya Severokavkazskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
	extra = engineer
	brigade_model = 2
      } 
        Division = 
     {  id       = {  type = 10848 id = 202  } 
       name     = "28-ya Gorskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger
	   model    = 8
	extra = anti_air
	brigade_model = 0
      } 
	  Division = 
     {  id       = {  type = 10848 id = 203  } 
       name     = "12-ya Kubanskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 9
      } 	 
    }
 landunit = 
   {  id       = {  type = 10848 id = 204  } 
     name     = "9-i Territorialnyi Korpus" 
     location =  691 # Krasnodar
     Division = 
     {  id       = {  type = 10848 id = 205  } 
       name     = "9-ya Krasnodarskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 206  } 
       name     = "13-ya Dagestanskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	extra = cavalry_brigade
	brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 207  } 
       name     = "22-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 208  } 
       name     = "74-ya Tamanskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
      } 
	}
    landunit = 
   {  id       = {  type = 10848 id = 209  } 
     name     = "38-i Strelkovyi Korpus" 
     location = 691
     Division = 
     {  id       = {  type = 10848 id = 210  } 
       name     = "103-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 211  } 
       name     = "118-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 212  } 
       name     = "119-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 213  } 
       name     = "157-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 214 } 
     name     = "Zakavkazskyi Voennyi Okrug" 
     location =  709 # Tbilisi
        Division = 
     {  id       = {  type = 10848 id = 217  } 
       name     = "1-ya Gorskaya Kavkazskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger
	   model    = 8
	extra = engineer
	brigade_model = 2
      } 
        Division = 
     {  id       = {  type = 10848 id = 218  } 
       name     = "3-ya Gorskaya Kavkazskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger
	   model    = 8
	extra = anti_air
	brigade_model = 0
      } 
        Division = 
     {  id       = {  type = 10848 id = 219  } 
       name     = "1-ya Gorskaya Gruzinskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 220  } 
       name     = "Gorskaya Azerbaidzhanskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 221  } 
       name     = "Gorskaya Armianskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 222  } 
       name     = "2-ya Gruzinskaya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry
	   model    = 6
      }  
    }

   landunit = 
   {  id       = {  type = 10848 id = 223 } 
     name     = "Sredneaziatskyi Voennyi Okrug" 
     location =  1103#
     Division = 
     {  id       = {  type = 10848 id = 225  } 
       name     = "1-ya Gorskaya Turkestanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger
	   model    = 8
	extra = engineer
	brigade_model = 2
      }	 
     Division = 
     {  id       = {  type = 10848 id = 226  } 
       name     = "3-ya Gorskaya Turkestanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger
	   model    = 8
      }	 
  Division = #SAVO
     {  id       = {  type = 10848 id = 227  } 
       name     = "18-ya Turkmenskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
     } 
  Division = #SAVO
     {  id       = {  type = 10848 id = 228  } 
       name     = "19-ya Turkmenskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
     } 
  Division = #SAVO
     {  id       = {  type = 10848 id = 229  } 
       name     = "21-ya Turkmenskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
     } 
  Division = #SAVO
     {  id       = {  type = 10848 id = 230  } 
       name     = "20-ya Tadzhikskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
     } 
 }

 landunit = 
   {  id       = {  type = 10848 id = 231  } 
     name     = "Sibirskyi Voennyi Okrug" 
     location =  1142 #  Novosibirsk
     Division = 
     {  id       = {  type = 10848 id = 233  } 
       name     = "71-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
	   extra    = engineer 
	   brigade_model    = 2
     } 
     Division = 
     {  id       = {  type = 10848 id = 234  } 
       name     = "73-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 235  } 
       name     = "78-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 236  } 
       name     = "94-ya Strelkovaya Diviziya" 
       strength = 30 
       type     = infantry 
	   model    = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 237  } 
       name     = "133-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 238  } 
       name     = "109-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 239  } 
       name     = "107-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 240  } 
       name     = "91-ya Strelkovaya Diviziya" 
       strength = 10 
       type     = infantry 
	   model    = 5
     } 
    }

 landunit = 
   {  id       = {  type = 10848 id = 241  } 
     name     = "Zabaikalskyi Voennyi Okrug" 
     location =  1169 #  Chita
     Division = 
     {  id       = {  type = 10848 id = 243 } 
       name     = "36-ya Strelkovaya Divizija" 
       strength = 80 
       type     = infantry 
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 244 } 
       name     = "57-ya Strelkovaya Divizija" 
       strength = 80 
       type     = infantry 
	   model    = 8
	extra = anti_air
	brigade_model = 0
     } 
     Division = 
     {  id       = {  type = 10848 id = 245 } 
       name     = "93-ya Strelkovaya Divizija" 
       strength = 30 
       type     = infantry 
	   model    = 6
     } 
      Division = # ZabVO
     {  id       = {  type = 10848 id = 246  } 
       name     = "15-ya Kubanskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
      } 
      Division = # ZabVO
     {  id       = {  type = 10848 id = 247  } 
       name     = "17-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
      } 
      Division = # ZabVO
     {  id       = {  type = 10848 id = 248  } 
       name     = "22-ya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
      } 
       Division = 
     {  id       = {  type = 10848 id =  249 } 
       name     = "11-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	extra = engineer
	brigade_model = 2
      } 
    }


    landunit = 
   {  id       = {  type = 10848 id = 250 } 
     name     = "Osobaya Krasnozamennaya Dalnevostochnaya Armyia" 
     location =  1199 #Habrin
     Division = 
     {  id       = {  type = 10848 id = 251  } 
       name     = "Dalnevostochnyi Voennyi Okrug" 
       strength = 100 
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model    = 0	
     } 
     Division = 
     {  id       = {  type = 10848 id = 252  } 
       name     = "12-ya 'SibRevKoma' Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 7
	  } 
     Division = 
     {  id       = {  type = 10848 id = 253  } 
       name     = "21-ya Permskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
 	   extra    = engineer
	   brigade_model = 2
	  } 
     Division = 
     {  id       = {  type = 10848 id = 254  } 
       name     = "34-ya Srednevolzhskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 255  } 
       name     = "35-ya Sibirskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 256  } 
       name     = "40-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
      Division = 
     {  id       = {  type = 10848 id = 257  } 
       name     = "8-ya Dalnevostochnaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
	extra = light_armor_brigade
	brigade_model = 3
      } 
 }
    landunit = 
	{  id       = {  type = 10848 id = 258  } 
     name     = "18-i Strelkovyi Korpus" 
     location = 1210 # Tongliao Hot
      Division = 
     {  id       = {  type = 10848 id = 259  } 
       name     = "1-ya Tikhookeanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 7
	  } 
     Division = 
     {  id       = {  type = 10848 id = 260  } 
       name     = "26-ya Zlatoustovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 261  } 
       name     = "32-ya Saratovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
	} 	
    landunit = 
    {  id       = {  type = 10848 id = 262  } 
     name     = "Osobyi Kolkhoznyi Korpus" 
     location = 1191# Vladivostok
      Division = 
     {  id       = {  type = 10848 id = 263  } 
       name     = "1-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 7
	  } 
     Division = 
     {  id       = {  type = 10848 id = 264  } 
       name     = "2-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 265  } 
       name     = "3-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 8
	  } 
      Division = 
     {  id       = {  type = 10848 id = 266  } 
       name     = "Kolkhoznaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
	   model    = 8
      } 
	} 	


	
# Air OOB
#MVO
airunit = { 
	id = { type = 10848 id = 7000 } 
	name = "1 AviaKorpus" 
	location = 572 # Moscow 
	base = 572 # Moscow 

	division = { 
	id = { type = 10848 id = 7001 } 
		name = "403.IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
	division = { 
	id = { type = 10848 id = 7002 } 
		name = "23.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	}
airunit = { 
	id = { type = 10848 id = 7003 } 
	name = "11 TBABR MVO" 
	location = 654 # Voronezh 
	base = 654 # Voronezh 
 
	division = { 
	id = { type = 10848 id = 7004 } 
		name = "11.TBABR" 
		strength = 50 
		type = strategic_bomber 
		model = 2 
			}
	}

#LVO
airunit = { 
	id = { type = 10848 id = 7005 } 
	name = "4 AviaKorpus" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 
	division = { 
	id = { type = 10848 id = 7006 } 
		name = "1.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	division = { 
	id = { type = 10848 id = 7007 } 
		name = "2.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	}
airunit = { 
	id = { type = 10848 id = 7008 } 
	name = "LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7009 } 
		name = "53.LBABR" 
		strength = 70 
		type = multi_role 
		model = 3 
			} 
	division = { 
	id = { type = 10848 id = 7010 } 
		name = "100.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			}
	}	
airunit = { 
	id = { type = 10848 id = 7011 } 
	name = "3 ABRON LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7012 } 
		name = "3.ABRON" 
		strength = 70 
		type = transport_plane 
		model = 1 
			} 
	}	
airunit = { 
	id = { type = 10848 id = 7013 } 
	name = "200 IABR LVO" 
	location = 566 # Pskov 
	base = 566 # Pskov 

	division = { 
	id = { type = 10848 id = 7014 } 
		name = "3.IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
	}
	
#BVO
airunit = { 
	id = { type = 10848 id = 7015 } 
	name = "6 AviaKorpus" 
	location = 588 # Bryansk 
	base = 588 # Bryansk 
	division = { 
	id = { type = 10848 id = 7016 } 
		name = "5.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	division = { 
	id = { type = 10848 id = 7017 } 
		name = "9.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	division = { 
	id = { type = 10848 id = 7018 } 
		name = "402.IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
		}
airunit = { 
	id = { type = 10848 id = 7019 } 
	name = "40 LBABR BVO" 
	location = 590 #  Vitebsk
	base = 590 # Vitebsk	
	division = { 
	id = { type = 10848 id = 7020 } 
		name = "40.LBABR" 
		strength = 70 
		type = multi_role 
		model = 3  
			}
		}	
airunit = { 
	id = { type = 10848 id = 7021 } 
	name = "49 TBABR BVO" 
	location = 590 #  Vitebsk
	base = 590 # Vitebsk	
	division = { 
	id = { type = 10848 id = 7022 } 
		name = "49.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			extra = escort
			brigade_model = 0
			}
		}		
airunit = { 
	id = { type = 10848 id = 7023 } 
	name = "132 IABR BVO" 
	location = 600 # Mogilyev 
	base = 600 #  Mogilyev
	division = { 
	id = { type = 10848 id = 7024 } 
		name = "132. IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
		}		
airunit = { 
	id = { type = 10848 id = 7025 } 
	name = "252 LSHABR BVO" 
	location = 600 # Mogilyev 
	base = 600 #  Mogilyev
	division = { 
	id = { type = 10848 id = 7026 } 
		name = "252.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			} 
		}		
airunit = { 
	id = { type = 10848 id = 7027 } 
	name = "116 TBABR BVO" 
	location = 589 # Smolensk 
	base = 589 # Smolensk	
	division = { 
	id = { type = 10848 id = 7028 } 
		name = "116.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			extra = escort
			brigade_model = 0
			}
		}		
airunit = { 
	id = { type = 10848 id = 7029 } 
	name = "47 ABRON BVO" 
	location = 589 # Smolensk 
	base = 589 # Smolensk	 
	division = { 
	id = { type = 10848 id = 7030 } 
		name = "47.ABRON" 
		strength = 70 
		type = transport_plane 
		model = 1 
			}
		}
airunit = { 
	id = { type = 10848 id = 7031 } 
	name = "93 TBABR BVO" 
	location = 563 # Torzhok 
	base = 563 # Torzhok	
	division = { 
	id = { type = 10848 id = 7032 } 
		name = "93.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			extra = escort
			brigade_model = 0
			}
		}
#KVO
airunit = { 
	id = { type = 10848 id = 7033 } 
	name = "13 ABRON KVO" 
	location = 617 # Kiev
	base = 617 # Kiev
	division = { 
	id = { type = 10848 id = 7034 } 
		name = "13.ABRON" 
		strength = 70 
		type = transport_plane 
		model = 0 
			}
		}
airunit = { 
	id = { type = 10848 id = 7035 } 
	name = "5 IABR KVO" 
	location = 617 # Kiev
	base = 617 # Kiev
	division = { 
	id = { type = 10848 id = 7036 } 
		name = "5.IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
		}
airunit = { 
	id = { type = 10848 id = 7037 } 
	name = "404 IABR KVO" 
	location = 611 # Zhitomir
	base = 611 # Zhitomir
	division = { 
	id = { type = 10848 id = 7038 } 
		name = "404.IABR" 
		strength = 80 
		type = interceptor 
		model = 5 
			} 
		}
airunit = { 
	id = { type = 10848 id = 7039 } 
	name = "256 LSHABR KVO" 
	location = 617 # Kiev
	base = 617 # Kiev 
	division = { 
	id = { type = 10848 id = 7040 } 
		name = "256.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			} 
		}	
airunit = { 
	id = { type = 10848 id = 7041 } 
	name = "10 AviaKorpus" 
	location = 628 #  Kirovograd
	base = 628 # Kirovograd	
	division = { 
	id = { type = 10848 id = 7042 } 
		name = "15.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
		}
airunit = { 
	id = { type = 10848 id = 7043 } 
	name = "18 TBABR KVO" 
	location = 654 # Zaporozhye 
	base = 654 # Zaporozhye 
 
	division = { 
	id = { type = 10848 id = 7044 } 
		name = "18.TBABR" 
		strength = 50 
		type = strategic_bomber 
		model = 2 
			}
		}

#KhVO
airunit = { 
	id = { type = 10848 id = 7045 } 
	name = "43 TBABR KhVO" 
	location = 636 # Kharkov 
	base = 636 # Kharkov	
	division = { 
	id = { type = 10848 id = 7046 } 
		name = "43.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			extra = escort
			brigade_model = 0
			}
		}
airunit = { 
	id = { type = 10848 id = 7047 } 
	name = "16 TBABR KhVO" 
	location = 636 # Kharkov 
	base = 636 # Kharkov	
	division = { 
	id = { type = 10848 id = 7048 } 
		name = "16.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
		}

#ZabVO
airunit = { 
	id = { type = 10848 id = 7049 } 
	name = "5 AviaKorpus" 
	location = 1169 #  Chita
	base = 1169 # Chita	
	division = { 
	id = { type = 10848 id = 7050 } 
		name = "29.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
	division = { 
	id = { type = 10848 id = 7051 } 
		name = "32.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			} 
		}

#DVO
airunit = { 
	id = { type = 10848 id = 7052 } 
	name = "26 TBABR DVO" 
	location = 1190 #  Khabarovsk
	base = 1190 # Khabarovsk	
	division = { 
	id = { type = 10848 id = 7053 } 
		name = "26.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
		}
airunit = { 
	id = { type = 10848 id = 7054 } 
	name = "50 LSHABR DVO" 
	location = 1190 #  Khabarovsk
	base = 1190 # Khabarovsk
	division = { 
	id = { type = 10848 id = 7055 } 
		name = "50.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			} 
	}

#SibVO
airunit = { 
	id = { type = 10848 id = 7056 } 
	name = "134 LSHABR  SibVO" 
	location = 1143 #  Biysk
	base = 1143 # Biysk
	division = { 
	id = { type = 10848 id = 7057 } 
		name = "134.LSHABR" 
		strength = 70 
		type = CAS 
		model = 0 
			} 
	}

#SKVO
airunit = { 
	id = { type = 10848 id = 7058 } 
	name = "21 TBABR SKVO" 
	location = 644 # Rostov-na-Donu
	base = 644 # Rostov-na-Donu	
	division = { 
	id = { type = 10848 id = 7059 } 
		name = "21.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 3 
			}
		}
airunit = { 
	id = { type = 10848 id = 7080 } 
	name = "55 LBABR SKVO" 
	location = 644 # Rostov-na-Donu
	base = 644 # Rostov-na-Donu	
	division = { 
	id = { type = 10848 id = 7081 } 
		name = "55.LBABR" 
		strength = 70 
		type = multi_role 
		model = 3  
			}
		}

#TOF
airunit = { 
	id = { type = 10848 id = 7082 } 
	name = "20 TBABR TOF" 
	location = 1190 #  Khabarovsk
	base = 1190 # Khabarovsk
	division = { 
	id = { type = 10848 id = 7083 } 
		name = "20.TBABR" 
		strength = 80 
		type = naval_bomber 
		model = 1 
			}
		}

#CHF
airunit = { 
	id = { type = 10848 id = 7084 } 
	name = "106 TBABR CHF" 
	location = 641 #  Sevastopol
	base = 641 # Sevastopol
	division = { 
	id = { type = 10848 id = 7085 } 
		name = "106.TBABR" 
		strength = 80 
		type = naval_bomber 
		model = 1 
			}
		}
	
	
# Naval OOB
	navalunit = { # Galler L.M.
		id = { type = 10848 id = 5100 } 
		name = "Krasnoznamenny Baltijsky Flot" 
		location = 553 
		base = 553 
		division = { 
			id = { type = 10848 id = 5101 } 
			name = "Marat" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_fire_controll_l
			brigade_model2 = 0			
			} 
		division = { 
			id = { type = 10848 id = 5102 } 
			name = "Oktyabrskaya Revolutsiya" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_fire_controll_l
			brigade_model2 = 0		
			} 
		division = { 
			id = { type = 10848 id = 5103 } 
			name = "1 Brigada Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5104 } 
			name = "2 Brigada Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		}  	
	navalunit = { 
		id = { type = 10848 id = 5150 } 
		name = "1ya Brigada PL KBF" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5151 } 
			name = "1. Divizion Podlodok" 
			type = submarine 
			model = 1
			} 
		}
	navalunit = { 
		id = { type = 10848 id = 5160 } 
		name = "2ya Brigada PL KBF" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5161 } 
			name = "2. Divizion Podlodok" 
			type = submarine 
			model = 3
			} 
		}		
		
	navalunit = { # Kozhanov I.K.
		id = { type = 10848 id = 5200 } 
		name = "Chernomorskiy Flot" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5201 } 
			name = "Parizhskaya Kommuna" 
			type = battleship 
			model = 2
			} 
		division = { 
			id = { type = 10848 id = 5202 } 
			name = "Krasni Kavkaz" 
			type = heavy_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 10848 id = 5203 } 
			name = "Profintern" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5204 } 
			name = "Komintern" 
			type = light_cruiser 
			model = 0 
			} 
		division = { 
			id = { type = 10848 id = 5205 } 
			name = "Chervonaya Ukraina" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5206 } 
			name = "1. Divizion Esmintsev" 
			type = destroyer 
			model = 2
			} 
		division = { 
			id = { type = 10848 id = 5207 } 
			name = "2. Divizion Esmintsev" 
			type = destroyer 
			model = 2 
			}
		} 
       
	navalunit = { # Dushenov K.I.
		id = { type = 10848 id = 5400 } 
		name = "Severnaya Voennaya Flotiliya" 
		location = 535 
		base = 535 
		division = { 
			id = { type = 10848 id = 5401 } 
			name = "3. Divizion Esmintsev" 
			type = destroyer 
			model = 2
			} 
		division = { 
			id = { type = 10848 id = 5402 } 
			name = "3. Divizion Podlodok" 
			type = submarine 
			model = 1
			} 
		} 	

	navalunit = { # Viktorov M.V.
		id = { type = 10848 id = 5500 } 
		name = "Tikhookeanskiy Flot" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 5501 } 
			name = "4. Divizion Esmintsev" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 10848 id = 5502 } 
			name = "5. Divizion Esmintsev" 
			type = destroyer 
			model = 0
			} 
		} 
	navalunit = { 
		id = { type = 10848 id = 5550 } 
		name = "1ya Brigada PL TOF" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 5551 } 
			name = "4. Divizion Podlodok" 
			type = submarine 
			model = 3
			} 
		} 	
	
	# Starting Build Queue
	division_development = {
		name  = "5. Flotiliya Podlodok" 
		type  = submarine 
		model = 4 
		cost  = 0.1 
		id    = {  type = 10848 id = 8501  } 
		date  = {  year = 1936 month = february day = 1  } 
	} 
	division_development = {
		name  = "6. Flotiliya Podlodok" 
		type  = submarine 
		model = 4 
		cost  = 0.1 
		id    = {  type = 10848 id = 8502  } 
		date  = {  year = 1936 month = march day = 1  } 
	} 
	division_development = {
		name  = "Kirov"
		type  = heavy_cruiser
		model = 5
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
		cost  = 0.1
		id    = { type = 10848 id = 8503 }
		date  = { year = 1938 month = september day = 23 }
	}
	division_development = {
		name  = "Voroshilov"
		type  = heavy_cruiser
		model = 5
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
		cost  = 0.1
		id    = { type = 10848 id = 8504 }
		date  = { year = 1940 month = june day = 20 }
	}

 }	
