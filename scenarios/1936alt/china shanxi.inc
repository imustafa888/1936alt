 
 ############################## 
 # Country definition for CSX # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CSX 
   regular_id             = CHI 
   intrinsic_gov_type     = paternal_autocrat 
   extra_tc               = 10 
   # Resource Reserves 
energy                 = 480
metal                  = 240
rare_materials         = 120
   oil                    = 100 
   supplies               = 100 
   money                  = 50 
   capital                = 1247 # Beijing
   manpower               = 173 
   dissent                = 0 
   ai_settings = { flags = {   legitIndie = 1 } }   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 6
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 5
    } 
  
	ownedprovinces =      {
	1321 1319 1327 1336 1339 1333 1332 1329 1324

	1323 #Anyang->Handan
 	1241 #Tianjin
 	1247 #Beijing
 	1246 #Zhangyan->Kalgan
 	1251 #Datong
 	1242 #Shijazhuang
 	1254 #Hequ->Taihuan
 	1252 #Taiyuan->Taihuan
 	1253 #Linfen->Changzhi
 	1248 #Changzhi
 	1249 #Yangquan->Taihuan/Changzhi
 	1250 #Lingqui->Baoding
 	1243 #Baoding
 	1244 #Changzhou->Yucheng
 	1330 #Jinan
	}

	controlledprovinces = {
	1321 1319 1327 1336 1339 1333 1332 1329 1324

 	1323 #Anyang->Handan
 	1241 #Tianjin
 	1247 #Beijing
 	1246 #Zhangyan->Kalgan
 	1251 #Datong
 	1242 #Shijazhuang
 	1254 #Hequ->Taihuan
 	1252 #Taiyuan->Taihuan
 	1253 #Linfen->Changzhi
 	1248 #Changzhi
 	1249 #Yangquan->Taihuan/Changzhi
 	1250 #Lingqui->Baoding
 	1243 #Baoding
 	1244 #Changzhou->Yucheng
 	1330 #Jinan
	}

claimedprovinces = {
#Japan
	1563
#USSR
	1119 #Tuva
	1104 #Khorugh
#India        
	1278 #Sumdo 
	1455 #Itanagar
	1458 #Mipi
	1414 #Putao

#Korea-Manchuria
 	1212 #Yanji->Jilin/Liaoyuan
 	1211 #Hunjiang->Adong/Liaoyuan
#Outer Mongolia 
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
#Outer Tibet      
	1286 #Senge Khabab=>Gar
	1287 #Sger Rtse=>Nagqu
 	1288 #Rgyal Rtse=>Kagar/Xigaze
 	1289 #Lhasa
 	1290 #Ri Bo Che=>Quamdo
	1295 #Nying Khri=>Quamdo
	1294 #Chab Mdo=>Quamdo 
#Inner Tibet
	1285 #Yushu
	1384 #Luxi=>Baoshan(split)
	1389 #Baoshan
	1385 #Dali
	1292 #Ya'an
	1293 #Panzhihua=>Kangding
	1291 #Xichang=>Ya'an(split)
	1262 #Linxia=>Xining(split)
	1284 #Xining
	1283 #Ge'ermu=>Golmud
#Sinkiang        
	1279 #Kaxgar=>Kashgar
 	1274 #Qarqan=>Hotan
 	1275 #Aqsu=>Aksu
 	1280 #Ghulja
 	1273 #Aletai=>Altay
 	1276 #Karamay
#Guangxi
	1306 #Kaili
 	1381 #Bose
 	1376 #Debao->Bose
 	1382 #Hechi->Lizhou
 	1379 #Nanning
 	1374 #Pingxiang->Quinzhou
}

   nationalprovinces      = 
{
	1331 #Yantai
	1328 #Quingdao
	1329 #Weifang
	1333 #Huaiyin
	1332 #Zaozhuang
	1261 #Longnan
	1303 #Anshun
	1339 #Suzhou
	1323 #Anyang
	1321 #Xinxiang=>Anyang
	1334 #Nantong
	1336 #Xuzhou
	1340 #Hefei
	1341 #Fuyang
	1319 #Kaifeng
	1322 #Luoyang
	1324 #Zhengzhou
	1325 #Nanyang
	1326 #Xinyang
	1316 #Suizhou=>Xiangfan
	1317 #Wuhan=>Hankou
	1344 #Anqing
	1342 #Xuanzhou=>Wuhu
	1337 #Nanjing
	1338 #Shanghai
	1345 #Hangzhou
	1346 #Ningbo
	1347 #Wenzhou
	1348 #Jinhua=>Ningbo(split)
	1357 #Nanping
	1358 #Fuzhou
	1359 #Sanming
	1360 #Xiamen
	1354 #Ganzhou
	1353 #Jiujiang
	1318 #Huangshi
	1355 #Ji'an=>Zhuzhou
	1309 #Xiangtan=>Shaoyang(split)
	1311 #Chenzhou
	1312 #Hengyang
	1310 #Changde
	1304 #Zunyi
	1302 #Wanxian
	1258 #Xi'an
	1257 #Tongguan=>Xi'an(split)
	1296 #Guanxiang=>Ya'an(split)
	1297 #Chengdu
	1298 #Luzhou=>Zigong
	1305 #Guiyang
	1313 #Shashi
	1307 #Huaihua
	1308 #Changsha
	1356 #Zhangzhou=>Longyang
	1349 #Xingan=>Pingxiang
	1335 #Yancheng=>Nantong(split)
	1314 #Shiyan=>Enshi
	1315 #Yichang
	1267 #Ankang/Nancheng
	1320 #Xuchang
	1299 #Chongqing
	1343 #Huainan=>Yangzhou
	1301 #Fuling
	1350 #Jindezhen=>Quzhou
	1351 #Shangrao
	1352 #Nanchang
	1264 #Lanzhou
	1263 #Tianshui
	1256 #Baoji
#Yunnan          
	1390 #Kunming
	1386 #Pu'er=>Jinghong(split)
	1387 #Jinghong
	1388 #Gejiung
	1300 #Yibin
#Guangxi-Clique
 	1378 #Guilin
 	1380 #Liuzhou
	1383 #Wuzhou
 	1368 #Shaoguan
 	1369 #Guangzhou
 	1375 #Shantou->Chao´an
 	1370 #Lufeng->Bao´an
 	1373 #Jiangmen
 	1377 #Yulin->Maoming
 	1367 #Naoming->Zhanjiang, Maoming
 	1365 #Haikou->Hainan
#Shanxi       
	1241 #Tianjin
	1247 #Beiping
	1246 #Zhangyan=>Kalgan
	1251 #Datong
	1242 #Shijiazhuang
	1254 #Hequ=>Taiyuan
	1252 #Taiyuan
	1253 #Linfen=>Changzhi(split)
	1248 #Changzhi
	1249 #Yangquan=>Handan
	1250 #Lingqui
	1327 #Heze
	1243 #Baoding
	1244 #Changzhou=>Yucheng
	1245 #Tangshan
	1330 #Jinan 
#Manchuria
	1214 #Shenyang->Mukden
	1207 #Jilin->Xinjing
 	1202 #Jiamusi->Jixi/Jiamusi
 	1204 #Jixi
 	1205 #Mudanjiang->Jilin/Mudanjiang
 	1199 #Harbin
 	1203 #Qiqihaer
 	1213 #Baicheng->Ulan Hot
 	1220 #Dandong->Dalian
 	1218 #Panjin->Jinxi
 	1201 #Heihe
 	1208 #Changchun->Mukden
 	1215 #Fushun->Adong
 	1217 #Anshan->Dalian
 	1197 #Hegang->Heihe
 	1245 #Tangshan
 	1236 #Chengde->Changde
 	1235 #Fuxin->Changde
 	1216 #Jinzhou->Jinxi 
#Xibei san ma            
	1268 #Yinchuan
	1271 #Wuzhong=>Guyuan
	1265 #Zhangye=>Jinchang
	1266 #Yumen=>Dunhuang
	1262 #Linxia=>Xining(split)
#Sinkiang
 	1277 #Qumul=>Altay
	1281 #Urumqi
 	1282 #Xoten=>Taklimakan Desert
#Communist China      
	1259 #Yan'an
	1260 #Yulin
	1255 #Pingliang
#Japan In China     
	1219 #Port Arthur
#European Possessions     
	1371 #Hongkong
	1372 #Macao
#Taiwan     
	1361 #Gaoxiong
	1362 #Taipei
	1363 #Taizhong
	1364 #Hualian
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
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200 } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 200 access = yes } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHC value = 200  } 
    } 
   SpyInfo                = {  country = "CSX" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 6006001  }  #Yan Xishan
   headofgovernment       = {  type = 9 id = 6006012  }  #Wang Jingwei
   foreignminister        = {  type = 9 id = 6006003  }  #Wang Zuanxu
   armamentminister       = {  type = 9 id = 6006004  }  #Fu Zuoy
   ministerofsecurity     = {  type = 9 id = 6006005  }  #Qu Yangke
   ministerofintelligence = {  type = 9 id = 6006006  }  #Shang Zhen
   chiefofstaff           = {  type = 9 id = 6006007  }  #Yan Xishan
   chiefofarmy            = {  type = 9 id = 6006008  }  #Yan Xishan
   chiefofnavy            = {  type = 9 id = 6006009  }  #Dmitrij Krolcheff
   chiefofair             = {  type = 9 id = 6006010  }  #Yan Xishan
   # ###### 
   # SHANXI Land 1904 OOB 
   # TYPE: 22300 
   # ###### 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "Shanxi Jingbei" 
     # ## leader = # Yan Xishan 
     id       = {  type = 22300 id = 1  } 
     Division = 
     {  id       = {  type = 22300 id = 2  } 
       name     = "1. Duli Lü" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 7  } 
       name     = "1. Qibing Shi" 
       type     = cavalry 
       strength  = 40 
       model    = 6
      } 
    } 
   landunit = 
   {  location = 1253 # Changzhi 
     name     = "34. Jun" 
     # ## leader = # Yang Aiyuan 
     id       = {  type = 22300 id = 9  } 
     Division = 
     {  id       = {  type = 22300 id = 10  } 
       name     = "66. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 12  } 
       name     = "71. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "35. Jun" 
     # ## leader = # Fu Zuoyi 
     id       = {  type = 22300 id = 13  } 
     Division = 
     {  id       = {  type = 22300 id = 14  } 
       name     = "72. Bubing Shi" 
       type     = garrison 
       strength  = 40 
       model    = 2
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "Suiyuan Jingbei" 
     id       = {  type = 22300 id = 16  } 
     Division = 
     {  id       = {  type = 22300 id = 17  } 
       name     = "Suiyuan Baoantui" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1250 # Lingqiu 
     name     = "29. Jun" 
     # ## leader = # Song Zheyuan 
     id       = {  type = 22300 id = 18  } 
     Division = 
     {  id       = {  type = 22300 id = 19  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 20  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 21  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 22  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 23  } 
       name     = "9. Qibing Shi" 
       type     = cavalry 
       strength  = 40 
       model    = 5 
      } 
     Division = 
     {  id       = {  type = 22300 id = 24  } 
       name     = "39. Duli Lü" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "Chahar Jingbei" 
     id       = {  type = 22300 id = 28  } 
     Division = 
     {  id       = {  type = 22300 id = 29  } 
       name     = "Chahar Baoantui" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "12. Jun" 
     # ## leader = # Sun Tongxuan 
     id       = {  type = 22300 id = 35  } 
     Division = 
     {  id       = {  type = 22300 id = 36  } 
       name     = "20. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 37  } 
       name     = "81. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "Suiyuan Jun" 
     id       = {  type = 22300 id = 38  } 
     Division = 
     {  id       = {  type = 22300 id = 39  } 
       name     = "Suiyuan Baoantui 2" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "13. Jun" 
     # ## leader = 50278 # Tang Enbo 
     id       = {  type = 22000 id = 27  } 
     Division = 
     {  id    = {  type = 22000 id = 28  } 
       name  = "13. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "19. Jun" 
     # ## leader = # Li Shengda 
     id       = {  type = 22000 id = 43  } 
     Division = 
     {  id    = {  type = 22000 id = 44  } 
       name  = "19. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1254 # Handan 
     name     = "32. Jun" 
     # ## leader = 50253 # Shang Zhen 
     id       = {  type = 22000 id = 79  } 
     Division = 
     {  id    = {  type = 22000 id = 80  } 
       name  = "32. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1251 # Datong 
     name     = "33. Jun" 
     # ## leader = 50296 # Xu Yongchang 
     id       = {  type = 22000 id = 83  } 
     Division = 
     {  id    = {  type = 22000 id = 84  } 
       name  = "33. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1253 # Changzhi 
     name     = "42. Jun" 
     # ## leader = # ??? 
     id       = {  type = 22000 id = 103  } 
     Division = 
     {  id    = {  type = 22000 id = 104  } 
       name  = "42. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "63. Jun" 
     # ## leader = # Feng Zhanhai 
     id       = {  type = 22000 id = 136  } 
     Division = 
     {  id    = {  type = 22000 id = 137  } 
       name  = "63. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "Dongbei Qibing Jun" 
     # ## leader = 50091 # He Zhuguo 
     id       = {  type = 22000 id = 145  } 
     Division = 
     {  id    = {  type = 22000 id = 146  } 
       name  = "Dongbei Qibing Jun" 
       type  = cavalry 
	   strength  = 40 
       model = 6 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "Ji-Cai-Sui-Jing Gongshu" 
     # ## leader = # 
     id       = {  type = 22000 id = 205  } 
     Division = 
     {  id    = {  type = 22000 id = 206  } 
       name  = "Ji-Cai-Sui-Jing Gongshu" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "Shanxi Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 266  } 
     Division = 
     {  id    = {  type = 22000 id = 267  } 
       name  = "Shanxi Baoantui" 
       type  = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
  } 
 