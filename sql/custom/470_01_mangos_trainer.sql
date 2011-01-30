-- general trainer fixxes

-- Frostweave Bandage & heavy netherweave bandage skillfix
-- mantis bug #0003231
UPDATE `npc_trainer` SET `reqskillvalue` = 330 WHERE `spell` = 27033;
UPDATE `npc_trainer` SET `reqskillvalue` = 350 WHERE `spell` = 45545;

-- jewelcrafting
-- NPC 18774 (Tatiana - Hellfire Peninsula)
DELETE FROM `npc_trainer` WHERE `entry` = '18774' AND `spell` IN (28905,34590,28938,28914,28925,28910,28917);
INSERT INTO `npc_trainer`(`entry`, `spell`, `spellcost`, `reqskill`, `reqskillvalue`, `reqlevel`) VALUES 
('18774', '28905', '10000', '755', '305', '0'),
('18774', '34590', '10000', '755', '305', '0'),
('18774', '28938', '10000', '755', '300', '0'),
('18774', '28914', '10000', '755', '315', '0'),
('18774', '28925', '10000', '755', '300', '0'),
('18774', '28910', '10000', '755', '300', '0'),
('18774', '28917', '10000', '755', '305', '0');
