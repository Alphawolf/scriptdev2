DELETE FROM `script_texts` WHERE entry IN (-1533082,-1533083,-1533160,-1533161);
INSERT INTO `script_texts`  (entry,content_default,sound,TYPE,LANGUAGE,emote,COMMENT) VALUES
(-1533082,'%s takes in a deep breath.',0,3,0,0,'sapphiron EMOTE_BREATH'),
(-1533083,'%s lifts off into the air!',0,3,0,0,'sapphiron EMOTE_FLY'),
(-1533160,'%s resumes hit attacks!',0,3,0,0,'sapphiron EMOTE_GROUND'),
(-1533161,'%s enrages!',0,3,0,0,'sapphiron EMOTE_ENRAGE');

UPDATE script_texts SET content_loc3 = 'Eure armselige Magie kann die Macht der Geißel niemals kontollieren!' WHERE entry = -1533106;
