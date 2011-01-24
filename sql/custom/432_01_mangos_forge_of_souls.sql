-- instance forge of souls fixes

-- fix creatures
UPDATE `creature_template` SET `ScriptName`='mob_soul_fragment', `modelid_3`= 30233, `AIName` ='' WHERE `entry`=36535;
UPDATE `creature_template` SET `AIName`='', `Scriptname`='boss_devourer_of_souls' WHERE `entry` IN (36502);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_well_of_soul' WHERE `entry` IN (36536);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_unleashed_soul' WHERE `entry` IN (36595);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_jaina_and_sylvana_FSintro' WHERE `entry` IN (37597, 37596);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_jaina_and_sylvana_FSextro' WHERE `entry` IN (38160, 38161);
UPDATE `creature_template` SET `scale`='0.8' WHERE `entry` IN (37597, 38160, 36993, 38188, 37221, 36955, 36658, 37225, 37223, 37226, 37554);
UPDATE `creature_template` SET `npcflag`='0' WHERE `entry` IN (38160, 38161);
UPDATE `creature_template` SET `npcflag`='3' WHERE `entry` IN (37596, 36990);
UPDATE `creature_template` SET `equipment_id`='1290' WHERE `entry` IN (37596, 38161, 37223, 37554);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soulguard_watchman' where `entry` IN (36478);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soulguard_reaper' where `entry` IN (36499);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soulguard_adept' where `entry` IN (36620);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soulguard_bonecaster' where `entry` IN (36564);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soulguard_animator' where `entry` IN (36516);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_soul_horror' where `entry` IN (36522);
UPDATE `creature_template` SET `AIName`='', `Scriptname`='npc_npc_spectral_warden' where `entry` IN (36666);
UPDATE creature_template SET mechanic_immune_mask = '617299803' WHERE entry IN (36497,36502,37629,37677);
