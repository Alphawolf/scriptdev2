-- Mirror Image
UPDATE `creature_template` SET `speed_walk` = 2.5, `minlevel` = 80, `maxlevel` = 80, `AIName` = '', `ScriptName`='npc_mirror_image' WHERE `entry` = 31216;

-- Heroic training dummy
UPDATE `creature_template` SET `AIName` = 'NullAI' WHERE `entry` =31146;
