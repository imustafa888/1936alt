 
 ######################################## 
 # Country definition for ETH by Cardus # 
 ######################################## 
  

 country = 
 {  tag                    = ETH 
   # Resource Reserves 
	energy                 = 1060
	metal                  = 1180
	rare_materials         = 490
   oil                    = 100 
   supplies               = 100 
   money                  = 500 
   capital                = 825 
   manpower               = 255 
   belligerence           = 1
   #ground_def_eff         = 0.600 
#      
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 3 
     professional_army = 7 
     defense_lobby     = 5 
     interventionism   = 2 
    } 
   claimedprovinces       = {
					# Ethiopia proper
					818 824 826 827 828 829 830 831
					# Eritrea
					815 816 
					#Somalia
					832 833 834 835 836 837 838 839
					}
   nationalprovinces      = {  820 819 821 822 823 817 825 } 
   ownedprovinces         = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
   controlledprovinces    = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
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
# Inf support 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800
#SW Tank 
7600 7610
#Early Infantry Division  
1010 1020 1030 1040 1050 1060 1070
#Early Mountain Division
1160  1170 1180 1190 1200 1210 1220 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Interwar Fighter  
4500 4510 4520 4530 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6570
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 

 }
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 50  } 
     relation = {  tag = FRA value = 25  } 
     relation = {  tag = IRE value = 100  } 
     relation = {  tag = ITA value = -200  } 
     relation = {  tag = JAP value = 35  } 
    } 
   SpyInfo                = {  country = "ETH" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 245001  } 
   headofgovernment       = {  type = 9 id = 245002  } 
   foreignminister        = {  type = 9 id = 245003  } 
   armamentminister       = {  type = 9 id = 245004  } 
   ministerofsecurity     = {  type = 9 id = 245005  } 
   ministerofintelligence = {  type = 9 id = 245006  } 
   chiefofstaff           = {  type = 9 id = 245007  } 
   chiefofarmy            = {  type = 9 id = 245008  } 
   chiefofnavy            = {  type = 9 id = 245009  } 
   chiefofair             = {  type = 9 id = 245010  } 
  #################################################################################### 
 #OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus 
 # ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War 
 # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia 
 # ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force#Early_years_.281929-1935.29 
 ##################################################################################### 
  
         landunit =
       {  id       = {  type = 31000 id = 1  }
         location = 825
         name     = "Imperial Army"
         Division =
         {  id       = {  type = 31000 id = 2  }
           name     = "Imperial Guard Kebur Zabangna"
           type     = infantry
           strength = 60
           model    = 6
          }
       Division =
         {  id       = {  type = 31000 id = 3  }
           name     = "Cadet school"
           type     = militia
           strength = 90
           model    = 4
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 4  }
         location = 819
         name     = "Army of the Left"
      # Ras Imru Haile Selassie
         Division =
         {  id       = {  type = 31000 id = 5  }
           name     = "Gojjam  Provincial Armed Forces"
        # Ras Imru Haile Selassie
           type     = infantry
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 6  }
           name     = "Wolqayt and Semien Sefari"
        # Fitawrari Ayalew Birru
           type     = bergsjaeger
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 7  }
           name     = "Gojjam Levies"
        #Dejazmach Gessesse Belew  (later deserted, revolted) 
           type     = infantry
           strength = 100
           model    = 5
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 8  }
         location = 823
         name     = "Mahel Sefari" #Army of the Center - 70,000 regulars
      #Ras  Mulugeta Yeggazu of Illubabor
         Division =
         {  id       = {  type = 31000 id = 9  }
           name     = "Amino Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 10  }
           name     = "Gubba Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 11  }
           name     = "Gurage Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 12  }
           name     = "Jimma Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 13  }
           name     = "Mui Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 14  }
           name     = "Mui Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 15  }
           name     = "Om Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 16  }
           name     = "Sela Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 17  }
           name     = "Sodo Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 18  }
           name     = "Welega Provincial Sefari"
           type     = infantry
           strength = 90
           model    = 4
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 19  }
         location = 821
         name     = "Army of the Right" # about 50,000 men
      #Ras Kassa Haile Darge (Qegnazmach = "General/Commander of the right")
         Division =
         {  id       = {  type = 31000 id = 20  }
           name     = "1. Begemder  Sefari"
           type     = militia
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 21  }
           name     = "2. Begemder  Sefari"
           type     = militia
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 22  }
           name     = "3. Begemder  Sefari"
           type     = militia
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 23  }
           name     = "4. Begemder  Sefari"
           type     = militia
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 24  }
           name     = "5. Begemder  Sefari"
           type     = militia
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 25  }
           name     = "Tigray Sefari Sefari"
        # Leul Ras Seyum Mangasha
           type     = infantry
           strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 26  }
           name     = "1. Wag Sefari"
        #Dejazmatch Haile Kebbede
           type     = infantry
           strength = 90
           model    = 6
          }
         Division =
         {  id       = {  type = 31000 id = 27  }
           name     = "2. Wag Sefari"
        #Dejazmatch Haile Kebbede
           type     = infantry
           strength = 100
           model    = 5
          }
         Division =
         {  id       = {  type = 31000 id = 28  }
           name     = "Lasta Sefari"
        #Fitawrari Andarge
           type     = infantry
           strength = 90
           model    = 6
          }
         Division =
         {  id       = {  type = 31000 id = 29  }
           name     = "Yejju Sefari"
        #Dejazmach Admassu Birru
           type     = infantry
           strength = 90
           model    = 5
          }
         Division =
         {  id       = {  type = 31000 id = 301  }
           name     = "3. Wag Sefari"
        #Dejazmach Admassu Birru
           type     = infantry
           strength = 90
           model    = 6
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 30  }
         location = 821
         name     = "Danakil Army"
      #Dejazmach Kassa Sebhat
         Division =
         {  id       = {  type = 31000 id = 31  }
           name     = "Ifrata Sefari"
        #Ras Kebbede
           type     = infantry
           strength = 90
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 32  }
           name     = "Welega-Ardjo Sefari"
        #Bitwoded Makonnen Demissie
           type     = infantry
           strength = 100
           model    = 4
        extra = anti_air
		brigade_model = 1
          }
         Division =
         {  id       = {  type = 31000 id = 33  }
           name     = "Kaffa Sefari"
        #Ras Getachew Abate
           type     = infantry
           strength = 90
           model    = 4
          }
        }
       
       landunit =
       {  id       = {  type = 31000 id = 34  }
         location = 825
         name     = "Wollo Army" # To subdue Gojjam revolt
      #Crown Prince Asfaw Wossen Tafari
         Division =
         {  id       = {  type = 31000 id = 35  }
           name     = "Wollo Sefari"
        #Nevraid Aregai
           type     = infantry
           strength = 60
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 36  }
           name     = "Lekemt Sefari"
        #Dejazmach Hapte Gabre Mariam Gabre
           type     = infantry
           strength = 60
           model    = 4
          }
       }
       landunit =
       {  id       = {  type = 31000 id = 37  }
         location = 827
         name     = "Ogaden Army"
      #Grazmach Afawarq Walda Samayat
         Division =
         {  id       = {  type = 31000 id = 38  }
           name     = "Ogaden Sefari"
           type     = infantry
           strength = 80
           model    = 4
        extra = artillery
		brigade_model = 4
       }
         Division =
         {  id       = {  type = 31000 id = 302  }
           name     = "2. Ogaden Sefari"
           type     = infantry
           strength = 90
           model    = 5
        extra = artillery
		brigade_model = 5
       }
       }   
       landunit =
       {  id       = {  type = 31000 id = 39  }
         location = 827
         name     = "Hararghe  Sefari"
      #Grazmach Afawarq Walda Samayat
         Division =
         {  id       = {  type = 31000 id = 40  }
           name     = "Guard Battalion"
           type     = infantry
           strength = 60
           model    = 6
       }
         Division =
         {  id       = {  type = 31000 id = 41  }
           name     = "Illubabor Sefari"
        #Dejazmach Makonnen Endelkachew
           type     = infantry
           strength = 100
           model    = 4
       }
         Division =
         {  id       = {  type = 31000 id = 42  }
           name     = "Gemu Gofa Battalion"
        #Dejazmach Abebe Damtew
           type     = militia
           strength = 70
           model    = 4
       }
         Division =
         {  id       = {  type = 31000 id = 43  }
           name     = "Arusi Sefari"
        #Dejazmach Amde Mikael
           type     = militia
           strength = 70
           model    = 4
       }
         Division =
         {  id       = {  type = 31000 id = 44  }
           name     = "Kula Sefari"
        #Dejazmach Hapte Mikael
           type     = militia
           strength = 60
           model    = 4
       }
       }   
       landunit =
       {  id       = {  type = 31000 id = 45  }
         location = 826
         name     = "Webi Shebelle Army"
      #Dejazmach Beine Merid
         Division =
         {  id       = {  type = 31000 id = 46  }
           name     = "Bale Sefari"
           type     = militia
           strength = 80
           model    = 5
          }
       } 
       landunit =
       {  id       = {  type = 31000 id = 47  }
         location = 826
         name     = "Juba Army"
      #Dejazmach Beine Merid
         Division =
         {  id       = {  type = 31000 id = 48  }
           name     = "1. Sidamo Sefari"
        #Ras Desta Damtew
           type     = infantry
           strength = 100
           model    = 5
          }
         Division =
         {  id       = {  type = 31000 id = 49  }
           name     = "2. Sidamo Sefari"
        #Fitawraris Ademe Anbassu and Tedeamme Zelleka
           type     = infantry
           strength = 100
           model    = 5
        extra = anti_air
		brigade_model = 1
          }
         Division =
         {  id       = {  type = 31000 id = 50  }
           name     = "Guards Battalion"
        #Qegnazmach Bezibibeh Sileshi
           type     = infantry
           strength = 60
           model    = 5
          }
       } 
       landunit =
       {  id       = {  type = 31000 id = 53  }
         location = 820
         name     = "International Volunteer Army"
      #Dejazmach Beine Merid
         Division =
         {  id       = {  type = 31000 id = 54  }
           name     = "1. International volunteers"
        #Ras Desta Damtew
           type     = infantry
           strength = 100
           model    = 6
          }
         Division =
         {  id       = {  type = 31000 id = 55  }
           name     = "2. International volunteers"
        #Fitawraris Ademe Anbassu and Tedeamme Zelleka
           type     = infantry
           strength = 100
           model    = 6
		   }
         Division =
         {  id       = {  type = 31000 id = 56  }
           name     = "3. International volunteers"
        #Qegnazmach Bezibibeh Sileshi
           type     = infantry
           strength = 60
           model    = 6
          }
       } 

     
        airunit =
       {  location = 825
         base     = 825
         id       = {  type = 31000 id = 51  }
         name     = "Imperial Ethiopian Air Force"
      #Hubert Julian - Head of Ethiopian Air Force ref http://en.wikipedia.org/wiki/Hubert_Julian
         Division =
         {  id       = {  type = 31000 id = 52  }
           name     = "Imperial fighter bomber wing"
           strength = 60
           type     = interceptor
           model    = 4
          }
        } 
}