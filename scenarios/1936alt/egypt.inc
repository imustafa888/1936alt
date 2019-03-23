    ############################## 
     # Country definition for EGY - Egypt #  
      ##############################  
    
      #####################  
      # Country main data #  
      #####################  
    
      country =  
      {  	tag                    = EGY  
   		# ai                   = "EGY.ai"  
   		capital                = 787 # Cairo / Al-Qahirah  
   		puppet    = ENG # UK  
     		# Resource Reserves  
		energy                 = 540
		metal                  = 270
		rare_materials         = 135
		oil                    = 500  
		supplies               = 250 # No army - no supply reserves  
		money                  = 50  
		manpower               = 490 # No army - no reserves  
		dissent                = 0
		transports             = 100  
		escorts                = 0  
         
    
		ai_settings = { flags = {   puppetLevel2 = 1 } }
        diplomacy = {   
    			relation = {   tag = GER value = 80 access = no   }   
      }  
    			SpyInfo                = {   country = "EGY" NumberOfSpies = 3   }  
    
      
	ownedprovinces =      
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
	799 #Moghara#
	779 #Siwah#

	1004
	1005
	1006
	1007

   789 #Alexandria
   783 #El Alamein
   784 #Fuqa
   785 #Matruh
   780 #Sidi Barrani
   781 #As Sollum
   778 #Bir Fuda
   782 #Bir Baylih
   791 #Pur Said
   786 #Dimyat
   796 #El Ghardaqah
   797 #El Uqsur 
   790 #Tanta
}
	controlledprovinces = 
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
	799 #Moghara#
	779 #Siwah#

	1004
	1005
	1006
	1007

   #Ägypten
   789 #Alexandria
   783 #El Alamein
   784 #Fuqa
   785 #Matruh
   780 #Sidi Barrani
   781 #As Sollum
   778 #Bir Fuda
   782 #Bir Baylih
   791 #Pur Said
   786 #Dimyat
   796 #El Ghardaqah
   797 #El Uqsur 
   790 #Tanta
}

claimedprovinces = {
	#South Sudan
	807
	808
	809

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
	1008
	1009
	1010
	1011
	1013

	#East Libya
	761 #Benghazi
	768 #Darnah
	760 #Masus
	766 #El Mukhayla
	765 #Tobruk
	771 #Al Bardia
	769 #Bir Hakeim
	770 #El Jaghbub
	773 #Jalu
	774 #Al Jawf
	777 #Ayn Ath Thalab
	763 #Qaminis
	775 #Wadi al Hamim
	764 #Al Bayda
	767 #Gazala
	772 #Bir al Ghabi
}

	nationalprovinces =
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
	799 #Moghara#
	779 #Siwah#
	789 #Alexandria#
	783 #El Alamein#
	784 #Fuqa#
	785 #Matruh#
	780 #Sidi Barrani#
	781 #As Sollum#
	778 #Bir Fuad#
	782 #Bir Baylih#
	791 #Bur Said#
	786 #Dimyat#
	900 #Suez#
	796 #El Ghardaqah#
	797 #El Uqsur# 
	790 #Tanta#

	#1012
	1006
	1007
	1005
	1004
	804
	803
	813
	814
	805
	811
	810
	812
	806
	
	}
     
       techapps = {
		#Static Defense
		6680
  
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Anti-Tank Artillery 
#2400
#Early Static Anti-Air Artillery 
2800 2450 
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Improved Construction Engineering 
5800 5080 

1830 1840   
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810

#Engineers
#Medicine
5600 5610 5620


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560
#Naval Doctrines
8010 8020 8050  

 }  
     inventions = { 3000027 }    
      
    policy =  
    {   date              = {   year = 0 month = january day = 0   }  
      democratic        = 6  
      political_left    = 4
      free_market       = 7  
      freedom           = 5  
      professional_army = 6  
      defense_lobby     = 3  
      interventionism   = 2  
      }  
    headofstate            = {   type = 9 id = 340001   }  # Fuad I  
    headofgovernment       = {   type = 9 id = 340002   }  # Ali Mahir Pasha  
    foreignminister        = {   type = 9 id = 340003   }  # Ali Mahir Pasha  
    armamentminister       = {   type = 9 id = 340004   } # Mohammed al Fransawi  
    ministerofsecurity     = {   type = 9 id = 340005   } # Mustafa an-Nahhas Pasha  
    ministerofintelligence = {   type = 9 id = 340006   } # Mohammed Hilmi Issa  
    chiefofstaff           = {   type = 9 id = 340007   } # Hassan Sabry Pasha  
    chiefofarmy            = {   type = 9 id = 340008   } # Hassan Sabry Pasha  
    chiefofnavy            = {   type = 9 id = 340009   } # Abdallah Ziwar Pasha;  
    chiefofair             = {   type = 9 id = 340010   }  # Fuad I  
     
     landunit = {   
        id = {  type = 19600 id = 1  }  
        location = 787  
        name = "Royal Egyptian Army"  
           Division = {   
              id = {  type = 19600 id = 2  }  
              name = "Royal Guard"  
              strength = 12  
              max_strength = 12  
              type = infantry  
              model = 7
            experience = 20  
            }  
           Division = {   
              id = {  type = 19600 id = 3  }  
                      name = "1st Egyptian Infantry" # No army for Egypt allowed, except some 10,000 men  
              strength = 100  
              type = infantry 
				model = 6			  
            }  
         }  
    
     airunit = {   
        id = {  type = 19600 id = 4  }  
        location = 789  
		base     = 789
        name = "Egyptian Army Air Force"  
           Division = {   
              id = {  type = 19600 id = 5  }  
              name = "Egyptian Army Air Force"  
              strength = 50  
              type = interceptor
			  model = 4
            }  
                 }  
    
         }