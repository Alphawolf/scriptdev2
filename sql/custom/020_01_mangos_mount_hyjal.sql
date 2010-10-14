-- update instance mount hyjal

UPDATE creature_template SET armor=10000, dmg_multiplier=14, lootid=17818 WHERE entry IN (17895, 17897, 17898, 17899, 17905, 17906, 17907, 17908); 
/* Trash modifications */
UPDATE creature_template SET armor=10000, dmg_multiplier=14, lootid=0 WHERE entry=17818; 
/* Thrall */
UPDATE creature_template SET dmg_multiplier=14, rank=1 WHERE entry=17852; 
/* Tyrande Whisperwind */
UPDATE `creature_template` SET `npcflag` = npcflag|1 WHERE `entry` = '17948';
/* Respawntime: Thrall and Jaina Proudmore */
UPDATE creature SET spawntimesecs=600 WHERE id IN (17852, 17772); 
UPDATE creature_template SET rank=1 WHERE entry = 17772;

DELETE FROM creature_ai_scripts WHERE id=1781801;
INSERT INTO creature_ai_scripts VALUES
(1781802, 17818, 0, 0, 100, 3, 2000, 2000, 2000, 2000, 11, 36057, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'Towering Infernal - Cast Burning Maul as DMG AoE');

/* Infernal in Anetheron-Fight */
UPDATE creature_template SET maxhealth=293000, minhealth=293000 WHERE entry=17818; 
/* Ghul */
UPDATE creature_template SET maxhealth=160000, minhealth=160000 WHERE entry=17895; 
/* Crypt Fiend */
UPDATE creature_template SET maxhealth=220000, minhealth=220000 WHERE entry=17897; 
/* Abomination*/
UPDATE creature_template SET maxhealth=230000, minhealth=230000 WHERE entry=17898; 
/* Shadowy Necromancer */
UPDATE creature_template SET maxhealth=150000, minhealth=150000 WHERE entry=17899; 
/* Banshee */
UPDATE creature_template SET maxhealth=110000, minhealth=110000 WHERE entry=17905; 
/* Giant Infernal */
UPDATE creature_template SET maxhealth=120000, minhealth=120000 WHERE entry=17908; 
/* Anetheron */
UPDATE creature_template SET armor=11000, mindmg=413, maxdmg=590, maxhealth=6193000, minhealth=6193000 WHERE entry=17808; 
/* Furor Winterchill */
UPDATE creature_template SET armor=11000, mindmg=413, maxdmg=590, maxhealth=5523000, minhealth=5523000 WHERE entry=17767; 
/* Kaz'rogal */
UPDATE creature_template SET armor=11000, mindmg=413, maxdmg=590, maxhealth=5913000, minhealth=5913000 WHERE entry=17888; 
/* Azgalor */
UPDATE creature_template SET armor=11000, mindmg=413, maxdmg=590, maxhealth=7432000, minhealth=7432000 WHERE entry=17842; 
/* Archimonde */
UPDATE creature_template SET armor=11000, mindmg=413, maxdmg=590, maxhealth=8124000, minhealth=8124000 WHERE entry=17968; 

-- eventAI update
/* Banshee Curse */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=3000, event_param2=3000, event_param3=12000, event_param4=12000, action1_param2=4 WHERE id=1790501;
/* Bunshee Wail */ 
UPDATE creature_ai_scripts SET event_chance=100, event_param1=4000, event_param2=6000, event_param3=12000, event_param4=12000 WHERE id=1790502; 
/* Bunshee Shield */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=7000, event_param2=8000, event_param3=30000, event_param4=30000 WHERE id=1790503; 
/* Anetheron Cast Infernal*/
UPDATE creature_ai_scripts SET event_chance=100, event_param1=45000, event_param2=45000, event_param3=45000, event_param4=45000 WHERE id=1780805; 
/* Anetheron Cast Sleep */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=20000, event_param2=20000, event_param3=25000, event_param4=27000 WHERE id=1780803; 
UPDATE creature_ai_scripts SET event_type=0, event_param1=500, event_param2=1000, event_param3=60000, event_param4=65000 WHERE id=1781802;
/* Furor Winterchill Death and Decay*/
UPDATE creature_ai_scripts SET event_chance=100, event_param1=35000, event_param2=35000, event_param3=35000, event_param4=40000 WHERE id=1776703; 
/* Furor Winterchill Ice Bolt*/
UPDATE creature_ai_scripts SET event_chance=100, event_param1=3000, event_param2=3000, event_param3=5000, event_param4=5500 WHERE id=1776705; 
/* Azgalor Doom */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=35000, event_param2=35000, event_param3=25000, event_param4=30000 WHERE id=1784203; 
/* Frostwyrm Frost Breath */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=4000, event_param2=4000, event_param3=8000, event_param4=8000 WHERE id=1790701; 
/* Gargoyle Gargoyle Strike */
UPDATE creature_ai_scripts SET event_chance=100, event_param1=4000, event_param2=4000, event_param3=7000, event_param4=7000 WHERE id=1790601; 

/* Create New Loot Template for all Trashes */
/* this is probably not needed any more

UPDATE creature_template set lootId = 17818 where entry IN (17895, 17897, 17898, 17899, 17905, 17906, 17907, 17908);

DELETE FROM creature_loot_template WHERE entry=17818;
INSERT INTO creature_loot_template VALUES
	(17818, 32609, 1, 1, 1, 1, 0, 0, 0), -- Boots of the Divine Light
	(17818, 32591, 1, 1, 1, 1, 0, 0, 0), -- Choker of Serrated Blades
	(17818, 32592, 1, 1, 1, 1, 0, 0, 0), -- Chestguard of Relentless Storms
	(17818, 34009, 1, 1, 1, 1, 0, 0, 0), -- Hammer of Judgement
	(17818, 34010, 1, 1, 1, 1, 0, 0, 0), -- Pepe's Shroud of Pacifiction
	(17818, 32589, 1, 1, 1, 1, 0, 0, 0), -- Hellfire-Ecased Pendant
	(17818, 32946, 1, 1, 1, 1, 0, 0, 0), -- Claw of Molten Fury
	(17818, 32590, 1, 1, 1, 1, 0, 0, 0), -- Nethervoid Cloak
	(17818, 32945, 1, 1, 1, 1, 0, 0, 0), -- Fist of Molten Fury
	(17818, 32755, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Mantle of Nimble Thought
	(17818, 32736, 1, 1, 1, 1, 0, 0, 0), -- Plans: Swiftsteel Bracers
	(17818, 32745, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Shoulderpads of Renewed Life
	(17818, 32751, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Living Earth Shoulders
	(17818, 32752, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Swiftheal Wraps
	(17818, 32748, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Bindings of Lightning Reflexes
	(17818, 32746, 1, 1, 1, 1, 0, 0, 0), -- Pattern: Swiftstrike Bracers
	(17818, 32739, 1, 1, 1, 1, 0, 0, 0), -- Plans: Dawnsteel Shoulders
	(17818, 32428, 7, 2, 1, 1, 0, 0, 0), -- Heart of Darkness
	(17818, 32897, 6, 2, 1, 1, 0, 0, 0), -- Mark of the Illidari	
	(17818, 21877, 26, 0, 3, 4, 0, 0, 0); -- Netherweave Cloth
*/