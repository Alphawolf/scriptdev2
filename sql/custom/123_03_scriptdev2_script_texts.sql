﻿-- Forge of souls
DELETE FROM `script_texts` WHERE `entry` BETWEEN -1632099 AND -1632000;
INSERT INTO `script_texts` (`entry`,`content_default`,`content_loc1`,`content_loc2`,`content_loc3`,`content_loc4`,`content_loc5`,`content_loc6`,`content_loc7`,`content_loc8`,`sound`,`type`,`language`,`emote`,`comment`) VALUES
-- Bronjham
(-1632001,'Finally...a captive audience!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Наконец то! Гости пожаловали!',16595,6,0,0,'Bronjham SAY_AGGRO'),
(-1632002,'Fodder for the engine!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Скормлю тебя машине!',16596,6,0,0,'Bronjham SAY_SLAY_1'),
(-1632003,'Another soul to strengthen the host!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Еще одна душа обогатит вместилище!',16597,6,0,0,'Bronjham SAY_SLAY_2'),
(-1632004,'Oooooo...',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Аааааааааааа...',16598,6,0,0,'Bronjham SAY_DEATH'),
(-1632005,'The vortex of the harvested calls to you!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вихрь погубленных душ, взываю к вам!',16599,3,0,0,'Bronjham SAY_SOUL_STORM'),
(-1632006,'I will sever the soul from your body!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Я вырву душу из твоего тела!',16600,6,0,0,'Bronjham SAY_CORRUPT_SOUL'),

-- Devourer of Souls
(-1632010,'You dare look upon the host of souls? I SHALL DEVOUR YOU WHOLE!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вы осмелились взглянуть на вместилище душ! Я сожру вас заживо!',16884,1,0,0,'Devoureur SAY_FACE_ANGER_AGGRO'),
(-1632011,'You dare look upon the host of souls? I SHALL DEVOUR YOU WHOLE!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16890,1,0,0,'Devoureur SAY_FACE_DESIRE_AGGRO'),
(-1632012,'Damnation!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Проклинаю тебя!',16885,1,0,0,'Devoureur SAY_FACE_ANGER_SLAY_1'),
(-1632013,'Damnation!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16896,1,0,0,'Devoureur SAY_FACE_SORROW_SLAY_1'),
(-1632014,'Damnation!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16891,1,0,0,'Devoureur SAY_FACE_DESIRE_SLAY_1'),
(-1632015,'Doomed for eternity!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Обрекаю тебя на вечные муки!',16886,1,0,0,'Devoureur SAY_FACE_ANGER_SLAY_2'),
(-1632016,'Doomed for eternity!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16897,1,0,0,'Devoureur SAY_FACE_SORROW_SLAY_2'),
(-1632017,'Doomed for eternity!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16892,1,0,0,'Devoureur SAY_FACE_DESIRE_SLAY_2'),
(-1632018,'The swell of souls will not be abated! You only delay the inevitable!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вместилише душ не ослабнет! Вы лишь пытаетесь отсрочить неизбежное.',16887,1,0,0,'Devoureur SAY_FACE_ANGER_DEATH'),
(-1632019,'The swell of souls will not be abated! You only delay the inevitable!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16898,1,0,0,'Devoureur SAY_FACE_SORROW_DEATH'),
(-1632020,'The swell of souls will not be abated! You only delay the inevitable!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16893,1,0,0,'Devoureur SAY_FACE_DESIRE_DEATH'),
(-1632021,'Devourer of Souls begins to cast Mirrored Soul!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,0,3,0,0,'Devoureur EMOTE_MIRRORED_SOUL'),
(-1632022,'Devourer of Souls begins to Unleash Souls!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,0,3,0,0,'Devoureur EMOTE_UNLEASH_SOUL'),
(-1632023,'SUFFERING! ANGUISH! CHAOS! RISE AND FEED!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Страдание, мучение, хаос! Восстаньте и пируйте!',16888,1,0,0,'Devoureur SAY_FACE_ANGER_UNLEASH_SOUL'),
(-1632024,'SUFFERING! ANGUISH! CHAOS! RISE AND FEED!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16899,1,0,0,'Devoureur SAY_FACE_SORROW_UNLEASH_SOUL'),
(-1632025,'SUFFERING! ANGUISH! CHAOS! RISE AND FEED!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16894,1,0,0,'Devoureur SAY_FACE_DESIRE_UNLEASH_SOUL'),
(-1632026,'Devourer of Souls begins to cast Wailing Souls!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,0,3,0,0,'Devoureur EMOTE_WAILING_SOUL'),
(-1632027,'Stare into the abyss, and see your end!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вглядитесь в бездну, и узрите свою смерть!',16889,1,0,0,'Devoureur SAY_FACE_ANGER_WAILING_SOUL'),
(-1632028,'Stare into the abyss, and see your end!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,16895,1,0,0,'Devoureur SAY_FACE_DESIRE_WAILING_SOUL'),
(-1632029,'Excellent work, champions! We shall set up our base camp in these chambers. My mages will get the Scourge transport device working shortly. Step inside it when you''re ready for your next mission. I will meet you on the other side.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вы справились. Мы разобьем лагерь в этих покоях. Вскоре мои маги заставят портал плети работать! Войдите в него, когда будете готовы к следующему заданию. Я присоеденусь к вам чуть позже.',16625,1,0,0,'Jaina SAY_JAINA_OUTRO'),
(-1632030,'Excellent work, champions! We shall set up our base camp in these chambers. My mages will get the Scourge transport device working shortly. Step inside when you are ready for your next mission. I will meet you on the other side.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Превосходно! Мы разобьем лагерь в этих покоях! Вскоре мои маги заставят портал плети работать, войдите в него когда будете готовы к следующему заданию! Я присоединюсь к вам позже.',17044,1,0,0,'Sylvanas SAY_SYLVANAS_OUTRO'),

-- Jaina
(-1632040,'Thank the light for seeing you here safely. We have much work to do if we are to defeat the Lich King and put an end to the Scourge.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Слава свету! Вы целы и невредимы нам предстоит многое сделать, если мы хотим покончить с королем личем и плетью.',16617,0,0,0,'Jaina SAY_INTRO_1'),
(-1632041,'Our allies within the Argent Crusade and the Knights of the Ebon Blade have broken through the front gate of Icecrown and are attempting to establish a foothold within the Citadel.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Серебряный Авангард и рыцари черного клинка прорвались через главные ворота и пытаются укрепить свои позиции в цитадели!',16618,0,0,0,'Jaina SAY_INTRO_2'),
(-1632042,'Their success hinges upon what we discover in these cursed halls. Although our mission is a wrought with peril, we must persevere!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Их успех зависит от того что мы найдем этих ужасных залах. Пусть наша миссия опасна, но мы должны выстоять.',16619,0,0,0,'Jaina SAY_INTRO_3'),
(-1632043,'With the attention of the Lich King drawn toward the front gate, we will be working our way through the side in search of information that will enable us to defeat the Scourge - once and for all.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Пока король лич отвлекся на главные ворота, мы проникнем внутрь другим путем и постараемся узнать как можно покончить с плетью раз и навсегда.',16620,0,0,0,'Jaina SAY_INTRO_4'),
(-1632044,'King Varian''s SI7 agents have gathered information about a private sanctum of the Lich King''s deep within a place called the Halls of Reflection.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Разведчики SI7 отправленные Варианом сообщают что покои короля находятся в глубине дворца! Это место называется Залами отражений.',16621,0,0,0,'Jaina SAY_INTRO_5'),
(-1632045,'We will carve a path through this wretched place and find a way to enter the Halls of Reflection. I sense powerful magic hidden away within those walls... Magic that could be the key to destroy the Scourge.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Мы проложим себе путь сквозь это проклятое место и найдем вход в залы отражений. Я чувствую что в них сокрыта могушественная магия, которая поможет нам сокрушить плеть!',16622,0,0,0,'Jaina SAY_INTRO_6'),
(-1632046,'Your first mission is to destroy the machines of death within this malevolent engine of souls, and clear a path for our soldiers.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Ваша первая задача разрушить машины смерти в этом механизме душ, это откроет путь нашим солдатам.',16623,0,0,0,'Jaina SAY_INTRO_7'),
(-1632047,'Make haste, champions! I will prepare the troops to fall in behind you.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Спешите герои, я прикажу солдатам следовать за вами!',16624,0,0,0,'Jaina SAY_INTRO_8'),

-- Sylvanas
(-1632050,'The Argent Crusade and the Knights of the Ebon Blade have assaulted the gates of Icecrown Citadel and are preparing for a massive attack upon the Scourge. Our missition is a bit more subtle, but equally as important.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Серебряный Авангард и рыцари черного клинка штурмуют ворота цитадели ледяной короны! И готовятся нанести решаюший удар! Мы будем действовать незаметно, но не менее эффективно.',17038,0,0,0,'Sylvanas SAY_INTRO_1'),
(-1632051,'With the attention of the Lich King turned towards the front gate, we''ll be working our way through the side in search of information that will enable us to defeat the Lich King - once and for all.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Пока Король-Лич отвлекся мы проникнем внутрь другим путем и постараемся понять как можно покончить с ним раз и навсегда.',17039,0,0,0,'Sylvanas SAY_INTRO_2'),
(-1632052,'Our scouts have reported that the Lich King has a private chamber, outside of the Frozen Throne, deep within a place called the Halls of Reflection. That is our target, champions.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Наши разведчики сообщили что покои короля лича находятся в глубине дворца, недалеко от ледяного трона. Это место называется залами отражений, туда и лежит наш путь.',17040,0,0,0,'Sylvanas SAY_INTRO_3'),
(-1632053,'We will cut a swath of destruction through this cursed place and find a way to enter the Halls of Reflection. If there is anything of value to be found here, it will be found in the Halls.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Мы проложим себе путь сквозь это проклетое место и найдем и найдем вход в залы отражений! Если в цитадели и есть что то достойное внимания оно ждет нас именно там.',17041,0,0,0,'Sylvanas SAY_INTRO_4'),
(-1632054,'Your first mission is to destroy the machines of death within this wretched engine of souls, and clear a path for our soldiers.',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Вашей первой задачей будет  разрушение машин смерти в этом гнусном механизме душ, это откроет путь к нашим солдатам',17042,0,0,0,'Sylvanas SAY_INTRO_5'),
(-1632055,'The Dark Lady watches over you. Make haste!',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'Темная госпожа будет наблюдать за вами, спешите!',17043,0,0,0,'Sylvanas SAY_INTRO_6');


-- Trials of the Crusader
-- TOC original texts/sounds (thanks to griffonheart)
-- english translation by Cristy
-- reworked by rsa

DELETE FROM `script_texts` WHERE `entry` BETWEEN -1713799 AND -1713499;
INSERT INTO `script_texts`
(`comment`,`sound`, `entry`,`content_loc8`,`type`,`language`,`emote`,`content_default`) VALUES
('34996','16036','-1713500','Добро пожаловать, герои! Вы услышали призыв Серебряного Авангарда и без колебаний откликнулись на него! В этом колизее вам предстоит сразиться с опаснейшими противниками. Те из вас, кто смогут пережить испытания, войдут в ряды Серебряного Авангарда, который направится в Цитадель Ледяной Короны.','6','0','0','Welcome champions, you have heard the call of the argent crusade and you have boldly answered. It is here in the crusaders coliseum that you will face your greatest challenges. Those of you who survive the rigors of the coliseum will join the Argent Crusade on its marsh to ice crown citadel.'),
('34996','16038','-1713501','Из самых глубоких и темных пещер Грозовой Гряды был призван Гормок Пронзающий Бивень! В бой, герои!','6','0','0','Hailing from the deepest, darkest carverns of the storm peaks, Gormok the Impaler! Battle on, heroes!'),
('34990','16069','-1713502','Твои чудовища не чета героям Альянса, Тирион!','6','0','0','Your beast will be no match for my champions Tirion!'),
('34995','16026','-1713702','Я видел и более достойных соперников в багровом круге. Ты напрасно тратишь наше время, паладин.','6','0','0','Your beast will be no match for my champions Tirion!'),
('34796','0','-1713601','Мои рабы! Уничтожьте врага!','3','0','0','My slaves! Destroy the enemy!'),
('34996','16039','-1713503','Приготовьтесь к схватке с близнецами-чудовищами, Кислотной Утробой и Жуткой Чешуей!','6','0','0','Steel yourselves, heroes, for the twin terrors Acidmaw and Dreadscale. Enter the arena!'),
('34799','0','-1713504','После гибели товарища %s приходит в ярость!','3','0','0','After the death of sister %s goes berserk!'),
('34996','16040','-1713505','В воздухе повеяло ледяным дыханием следующего бойца: на арену выходит Ледяной Рев! Сражайтесь или погибните, чемпионы!','6','0','0','The air freezes with the introduction of our next combatant, Icehowl! Kill or be killed, champions!'),
('34797','0','-1713506','%s глядит на |3-3($n) и испускает гортанный вой!','3','0','0','%S looks at |3-3($n) and emits a guttural howl!'),
('34797','0','-1713507','%s врезается в стену Колизея и теряет ориентацию!','3','0','0','%S crashes into a wall of the Colosseum and lose focus!'),
('34797','0','-1713508','|3-3(%s) охватывает кипящая ярость, и он растаптывает всех на своем пути!','3','0','0','|3-3(%s) covers boiling rage, and he tramples all in its path!'),
('34996','16041','-1713509','Все чудовища повержены!','6','0','0','All the monsters defeated!'),
('34996','16042','-1713709','Прискорбно. Как яростно они не бились, чудовища Нордскола оказались сильнее. Почтим память павших героев минутой молчания.','6','0','0',''),
('34996','16043','-1713510','Сейчас великий чернокнижник Вилфред Непопамс призовет вашего нового противника. Готовьтесь к бою!','6','0','0','Grand Warlock Wilfred Fizzlebang will summon forth your next challenge. Stand by for his entry!'),
('35458','16268','-1713511','Благодарю, Верховный лорд. А теперь, смельчаки, я приступаю к ритуалу призыва. Когда я закончу, появится грозный демон!','6','0','0','Thank you, Highlord! Now challengers, I will begin the ritual of summoning! When I am done, a fearsome Doomguard will appear!'),
('35458','16269','-1713512','Готовьтесь к забвению!','6','0','0','Prepare for oblivion!'),
('35458','16270','-1713513','АГА! Получилось! Трепещи перед всевластным Вилфредом Непопамсом, мастером призыва! Ты покорен мне, демон!','6','0','0','Ah ha! Behold the absolute power of Wilfred Fizzlebang, master summoner! You are bound to ME, demon!'),
('34780','16143','-1713514','Ничтожный гном! Тебя погубит твоя самоуверенность!','6','0','0','Trifling gnome, your arrogance will be your undoing!'),
('35458','16271','-1713515','Тут я главный!','6','0','0','But I am in charge here-'),
('35458','0','-1713715','Ну вот, опять я облажался...','6','0','0','Agonized Scream!!!'),
('34996','16044','-1713516','Быстрей, герои, расправьтесь с повелителем демонов, прежде чем он откроет портал в свое темное царство!','6','0','0','Quickly, heroes! Destroy the demon lord before it can open a portal to its twisted demonic realm!'),
('34780','16144','-1713517','Перед вами Джараксус, эредарский повелитель Пылающего Легиона!','6','0','0','You face Jaraxxus, eredar lord of the Burning Legion!'),
('34780','0','-1713518','На вас направлено |cFFFF0000Пламя Легиона!|r','3','0','0','You have been sent |cFFFF0000Plamya Legion!|R'),
('34780','0','-1713519','%s создает врата Пустоты!','3','0','0','%S creates the gates of the Void!'),
('34780','0','-1713520','%s создает |cFF00FF00Вулкан инферналов!|r','3','0','0','%S creates |cFF00FF00Vulkan Infernals!|R'),
('34780','16150','-1713521','Явись, сестра! Господин зовет!','6','0','0','Come forth, sister! Your master calls!'),
('34780','0','-1713522','$n $gподвергся:подверглась; |cFF00FFFFИспепелению плоти!|r Исцелите $gего:ее;!','3','0','0','$N $gpodvergsya:been; |cFF00FFFFIspepeleniyu flesh!|R Heal $gego:it;!'),
('34780','16149','-1713523','ПЛОТЬ ОТ КОСТИ!','6','0','0','FLESH FROM BONE!'),
('34780','16151','-1713524','ИНФЕРНАЛ!','6','0','0','INFERNO!'),
('34780','16147','-1713525','Мое место займут другие. Ваш мир обречен...','6','0','0','Another will take my place. Your world is doomed.'),
('34996','16045','-1713526','Гибель Вилфреда Непопамса весьма трагична и должна послужить уроком тем, кто смеет беспечно играть с темной магией. К счастью, вы победили демона, и теперь вас ждет новый противник.','6','0','0','The loss of Wilfred Fizzlebang, while unfortunate, should be a lesson to those that dare dabble in dark magic. Alas, you are victorious and must now face the next challenge.'),
('34995','16021','-1713527','Подлые собаки Альянса! Вы выпустили повелителя демонов на воинов Орды? Ваша смерть будет быстрой!','6','0','0','Treacherous Alliance dogs! You summon a demon lord against warriors of the Horde!? Your deaths will be swift!'),
('34990','16064','-1713528','Альянсу не нужна помощь повелителя демонов, чтобы справиться с ордынским отродьем, пес!','6','0','0','The Alliance doesnt need the help of a demon lord to deal with Horde filth. Come, pig!'),
('34996','16046','-1713529','Тише! Успокойтесь! Никакого заговора здесь нет. Чернокнижник заигрался и поплатился за это. Турнир продолжается!','6','0','0','Everyone, calm down! Compose yourselves! There is no conspiracy at play here. The warlock acted on his own volition - outside of influences from the Alliance. The tournament must go on!'),
('34996','16047','-1713530','В следующем бою вы встретитесь с могучими рыцарями Серебряного Авангарда! Лишь победив их, вы заслужите достойную награду.','6','0','0','The next battle will be against the Argent Crusades most powerful knights! Only by defeating them will you be deemed worthy...'),
('34995','16023','-1713531','Орда требует справедливости! Мы вызываем Альянс на бой! Позволь нам встать на место твоих рыцарей, паладин. Мы покажем этим псам, как оскорблять Орду!','6','0','0','The Horde demands justice! We challenge the Alliance. Allow us to battle in place of your knights, paladin. We will show these dogs what it means to insult the Horde!'),
('34995','16066','-1713731','Они хотели запятнать честь Альянса, они пытались нас оклеветать! Я требую справедливости! Тириорн, позволь моим чемпионам сражаться вместо твоих рыцарей. Мы бросаем вызов Орде!','6','0','0','Our honor has been besmirched! They make wild claims and false accusations against us. I demand justice! Allow my champions to fight in place of your knights, Tirion. We challenge the Horde!'),
('34996','16048','-1713532','Хорошо. Да будет так. Сражайтесь с честью!','','0','0','Very well, I will allow it. Fight with honor!'),
('34995','16022','-1713533','Не щадите никого, герои Орды! ЛОК-ТАР ОГАР!','6','0','0','Show them no mercy, Horde champions! LOK-TAR OGAR!'),
('34995','16065','-1713733','Сражайтесь во славу Альянса, герои! Во имя вашего короля!','6','0','0','Fight for the glory of the Alliance, heroes! Honor your king and your people!'),
('34990','16067','-1713534','СЛАВА АЛЬЯНСУ!','6','0','0','GLORY OF THE ALLIANCE!'),
('34990','16024','-1713734','Это было лишь пробой того, что ждёт нас в будущем. За Орду!','6','0','0','LOK-TAR OGAR!'),
('34996','16049','-1713535','Пустая и горькая победа. После сегодняшних потерь мы стали слабее как целое. Кто еще, кроме Короля-лича, выиграет от подобной глупости? Пали великие воины. И ради чего? Истинная опасность еще впереди - нас ждет битва с Королем-личом.','6','0','0','A shallow and tragic victory. We are weaker as a whole from the losses suffered today. Who but the Lich King could benefit from such foolishness? Great warriors have lost their lives. And for what? The true threat looms ahead - the Lich King awaits us all in death.'),
('34996','16050','-1713536','Лишь сплотившись, вы сможете пройти последнее испытание. Из глубин Ледяной Короны навстречу вам подымаются две могучие воительницы Плети: жуткие валькирии, крылатые вестницы Короля-лича!','6','0','0','Only by working together will you overcome the final challenge. From the depths of Icecrown come two of the Scourges most powerful lieutenants: fearsome valkyr, winged harbingers of the Lich King!'),
('34996','16037','-1713537','Пусть состязания начнутся!','6','0','0','Let the games begin!'),
('34497','0','-1713538','%s начинает читать заклинание|cFFFFFFFFСветлая воронка!|r Переключение к |cFFFFFFFFСветлой|r сущности!','3','0','0','%S begins to read a spell |cFFFFFFFFSvetlaya funnel!|R switch to |cFFFFFFFFSvetloy|r essence!'),
('34497','0','-1713539','%s начинает читать заклинание Договор близнецов!','3','0','0','%S begins to read the spell Treaty twins!'),
('34496','0','-1713540','%s начинает читать заклинание |cFF9932CDТемная воронка!|r Переключение к |cFF9932CDТемной|r сущности!','3','0','0','%S begins to read a spell |cFF9932CDTemnaya funnel!|R switch to |cFF9932CDTemnoy|r essence!'),
('34497','16272','-1713541','Во имя темного повелителя. Во имя Короля-лича. Вы. Умрете.','6','0','0','In the name of our dark master. For the Lich King. You. Will. Die.'),
('34496','16272','-1713741','Во имя светлого повелителя. Во имя Короля-лича. Вы. Умрете.','6','0','0','In the name of our dark master. For the Lich King. You. Will. Die.'),
('34496','16279','-1713542','Да поглотит вас Свет!','6','0','0','Let the light consume you!'),
('34496','16277','-1713543','Пустое место!','6','0','0','Empty place!'),
('34497','16276','-1713544','Тебя оценили и признали ничтожеством.','6','0','0','You appreciated and acknowledged nothing.'),
('34497','16274','-1713545','ХАОС!','3','0','0','CHAOS!'),
('34496','16278','-1713546','Да поглотит вас Тьма!','6','0','0','Let the dark consume you!'),
('34496','16275','-1713547','Плеть не остановить...','6','0','0','The Scourge cannot be stopped...'),
('34990','16068','-1713548','Против Альянса не выстоять даже самым сильным прислужникам Короля-лича! Все славьте наших героев!','6','0','0','Against the Alliance can not stand even the most powerful henchmen of the Lich King! All glorify our heroes!'),
('34995','16025','-1713748','Ты все еще сомневаешься в могуществе Орды, паладин? Мы примем любой вызов!','6','0','0','Against the Horde does not withstand even the most powerful henchmen of the Lich King! All glorify our heroes!'),
('34996','16051','-1713549','Король-лич понес тяжелую потерю! Вы проявили себя как бесстрашные герои Серебряного Авангарда! Мы вместе нанесем удар по Цитадели Ледяной Короны и разнесем в клочья остатки Плети! Нет такого испытания, которое мы бы не могли пройти сообща!','6','0','0','A mighty blow has been dealt to the Lich King! You have proven yourselves able bodied champions of the Argent Crusade. Together we will strike at Icecrown Citadel and destroy what remains of the Scourge! There is no challenge that we cannot face united!'),
('16980','16321','-1713550','Будет тебе такое испытание, Фордринг.','6','0','0','You will have your challenge, Fordring.'),
('34996','16052','-1713551','Артас! Нас гораздо больше! Сложи Ледяную Скорбь, и я подарю тебе заслуженную смерть.','6','0','0','Arthas! You are hopelessly outnumbered! Lay down Frostmourne and I will grant you a just death.'),
('35877','16322','-1713552','Нерубианцы воздвигли целую империю под льдами Нордскола. Империю, на которой вы так бездумно построили свои дома. МОЮ ИМПЕРИЮ.','6','0','0','The Nerubians built an empire beneath the frozen wastes of Northrend. An empire that you so foolishly built your structures upon. MY EMPIRE.'),
('16980','16323','-1713553','Души твоих павших чемпионов будут принадлежать мне, Фордринг.','6','0','0','The souls of your fallen champions will be mine, Fordring.'),
('34564','16235','-1713554','А вот и гости заявились, как и обещал господин.','6','0','0','Ahhh... Our guests arrived, just as the master promised.'),
('34564','16234','-1713555','Это место станет вашей могилой!','3','0','0','This place will serve as your tomb!'),
('34564','16240','-1713556','Ауум на-л ак-к-к-к, ишшш. Вставайте, слуги мои. Время пожирать...','6','0','0','Auum na-l ak-k-k-k, isshhh. Rise, minions. Devour...'),
('34564','0','-1713557','%s зарывается в землю!','3','0','0','%S buries itself in the earth!'),
('34660','0','-1713558','Шипы %s преследуют $n!','3','0','0','%s spikes  pursuing $n!'),
('34564','0','-1713559','%s вылезает на поверхность!','3','0','0','%S getting out of the ground!'),
('34564','16241','-1713560','Стая поглотит вас!','6','0','0','The swarm shall overtake you!'),
('34564','0','-1713561','%s выпускает рой жуков-трупоедов, чтобы восстановить здоровье!','3','0','0','%S produces a swarm of beetles Peon to restore your health!'),
('34564','16236','-1713562','Ф-лаккх шир!','6','0','0','F-lakkh shir!'),
('34564','16237','-1713563','Еще одна душа накормит хозяина.','6','0','0','Another soul to sate the host.'),
('34564','16238','-1713564','Я подвел тебя, господин...','6','0','0','I have failed you, master...'),
('36095','0','-1713565','Чемпионы, вы прошли испытание великого крестоносца! Знайте, что только самые сильные искатели приключений могли рассчитывать завершить это испытание.','6','0','0','Champions, you are alive! Not only have you defeated every challenge of the Trial of the Crusader, but thwarted Arthas directly! Your skill and cunning will prove to be a powerful weapon against the Scourge. Well done! Allow one of my mages to transport you back to the surface!'),
('36095','0','-1713566','Позвольте вручить вам эти сундуки в качестве заслуженной награды, и пусть его содержимое послужит вам верой и правдой в походе против Артаса в самом центре Цитадели Ледяной Короны!','6','0','0','Let me hand you the chests as a reward, and let its contents will serve you faithfully in the campaign against Arthas in the heart of the Icecrown Citadel!');