﻿DELETE FROM script_texts WHERE entry IN (-1039980, -1039979, -1039978);
INSERT INTO `script_texts` (`entry`, `content_default`, `content_loc1`, `content_loc2`, `content_loc3`, `content_loc4`, `content_loc5`, `content_loc6`, `content_loc7`, `content_loc8`, `sound`, `type`, `language`, `emote`, `comment`) VALUES
('-1039980', 'Yes! Im finally free to go!', NULL, NULL, 'Ja, endlich frei!', NULL, NULL, NULL, NULL, NULL, '0', '0', '0', '0', ' Das deutsche ist frei übersetzt.'),
('-1039979', 'Undankbarer User! Guck wenigstens hin, wenn hier was so liebevoll gescriptet wurde!', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, '0', '1', '0', '0', 'custom'),
('-1039978', 'Guten Flug!', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, '0', '1', '0', '0', 'custom');
