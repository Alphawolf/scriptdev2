/* Copyright (C) 2006 - 2010 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: Borean_Tundra
SD%Complete: 100
SDComment: Quest support: 11560, 11570, 11590, 11664, 11692, 11676, 11708, 11919, 11940, 11961. Taxi vendors. 
SDCategory: Borean Tundra
EndScriptData */

/* ContentData
npc_fizzcrank_fullthrottle
npc_iruk
npc_kara_thricestar
npc_nesingwary_trapper
go_caribou_trap
npc_surristrasz
npc_tiare
npc_lurgglbr
npc_nexus_drake
go_scourge_cage
npc_beryl_sorcerer
npc_orphaned_calf
npc_nerubar_victim
npc_seaforium_depth_charge
npc_storm_totem
npc_sage_earth_and_sky
go_tadpole_cage
npc_tadpole
npc_bonker_togglevolt
npc_mootoo
EndContentData */

#include "precompiled.h"
#include "escort_ai.h"
#include "ObjectMgr.h"
#include "follower_ai.h"

/*######
## npc_fizzcrank_fullthrottle
######*/

#define GOSSIP_ITEM_GO_ON   "Go on."
#define GOSSIP_ITEM_TELL_ME "Tell me what's going on out here, Fizzcrank."

enum
{
    GOSSIP_TEXTID_FIZZCRANK1    = 12456,
    GOSSIP_TEXTID_FIZZCRANK2    = 12457,
    GOSSIP_TEXTID_FIZZCRANK3    = 12458,
    GOSSIP_TEXTID_FIZZCRANK4    = 12459,
    GOSSIP_TEXTID_FIZZCRANK5    = 12460,
    GOSSIP_TEXTID_FIZZCRANK6    = 12461,
    GOSSIP_TEXTID_FIZZCRANK7    = 12462,
    GOSSIP_TEXTID_FIZZCRANK8    = 12463,
    GOSSIP_TEXTID_FIZZCRANK9    = 12464,

    QUEST_THE_MECHAGNOMES       = 11708
};

bool GossipHello_npc_fizzcrank_fullthrottle(Player* pPlayer, Creature* pCreature)
{
    if (pCreature->isQuestGiver())
        pPlayer->PrepareQuestMenu(pCreature->GetGUID());

    if (pPlayer->GetQuestStatus(QUEST_THE_MECHAGNOMES) == QUEST_STATUS_INCOMPLETE)
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_TELL_ME, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+1);

    pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
    return true;
}

bool GossipSelect_npc_fizzcrank_fullthrottle(Player* pPlayer, Creature* pCreature, uint32 uiSender, uint32 uiAction)
{
    switch(uiAction)
    {
        case GOSSIP_ACTION_INFO_DEF+1:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK1, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+2:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK2, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+3:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 4);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK3, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+4:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 5);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK4, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+5:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 6);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK5, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+6:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 7);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK6, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+7:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 8);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK7, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+8:
            pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_GO_ON, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 9);
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK8, pCreature->GetGUID());
            break;
        case GOSSIP_ACTION_INFO_DEF+9:
            pPlayer->SEND_GOSSIP_MENU(GOSSIP_TEXTID_FIZZCRANK9, pCreature->GetGUID());
            pPlayer->AreaExploredOrEventHappens(QUEST_THE_MECHAGNOMES);
            break;
    }
    return true;
}

/*######
## npc_iruk
######*/

#define GOSSIP_ITEM_IRUK        "<Search corpse for Issliruk's Totem.>"

enum
{
    QUEST_SPIRITS_WATCH_OVER_US     = 11961,
    SPELL_CREATE_TOTEM              = 46816
};

bool GossipHello_npc_iruk(Player* pPlayer, Creature* pCreature)
{
    if (pPlayer->GetQuestStatus(QUEST_SPIRITS_WATCH_OVER_US) == QUEST_STATUS_INCOMPLETE)
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_IRUK, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);

    pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
    return true;
}

bool GossipSelect_npc_iruk(Player* pPlayer, Creature* pCreature, uint32 uiSender, uint32 uiAction)
{
    if (uiAction == GOSSIP_ACTION_INFO_DEF + 1)
    {
        pPlayer->CLOSE_GOSSIP_MENU();
        pPlayer->CastSpell(pPlayer,SPELL_CREATE_TOTEM,true);
    }

    return true;
}

/*######
## npc_kara_thricestar
######*/

#define GOSSIP_ITEM_THRICESTAR1      "Do you think I could take a ride on one of those flying machines?"
#define GOSSIP_ITEM_THRICESTAR2      "Kara, I need to be flown out the Dens of Dying to find Bixie."

enum
{
    QUEST_CHECK_IN_WITH_BIXIE       = 11692,
    SPELL_FIZZCRANK_AIRSTRIP        = 51446
};

bool GossipHello_npc_kara_thricestar(Player* pPlayer, Creature* pCreature)
{
    if (pCreature->isTaxi())
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_TAXI, GOSSIP_ITEM_THRICESTAR1, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);

    if (pPlayer->GetQuestStatus(QUEST_CHECK_IN_WITH_BIXIE) == QUEST_STATUS_COMPLETE)
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_THRICESTAR2, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);

    pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
    return true;
}

bool GossipSelect_npc_kara_thricestar(Player* pPlayer, Creature* pCreature, uint32 uiSender, uint32 uiAction)
{
    switch(uiAction)
    {
        case GOSSIP_ACTION_INFO_DEF + 1:
            pPlayer->GetSession()->SendTaxiMenu(pCreature);
            break;
        case GOSSIP_ACTION_INFO_DEF + 2:
            pPlayer->CLOSE_GOSSIP_MENU();
            pPlayer->CastSpell(pPlayer, SPELL_FIZZCRANK_AIRSTRIP, false);
            break;
    }

    return true;
}

/*######
## npc_nesingwary_trapper
######*/

enum
{
    NPC_NESINGWARY_TRAPPER  = 25835,
    GO_QUALITY_FUR          = 187983,

    SAY_PHRASE_1            = -1000599,
    SAY_PHRASE_2            = -1000600,
    SAY_PHRASE_3            = -1000601,
    SAY_PHRASE_4            = -1000602
};

struct MANGOS_DLL_DECL npc_nesingwary_trapperAI : public ScriptedAI
{
    npc_nesingwary_trapperAI(Creature* pCreature) : ScriptedAI(pCreature) { Reset(); }

    uint8 m_uiPhase;
    uint32 m_uiPhaseTimer;
    uint64 m_uiPlayerGUID;
    uint64 m_uiGobjectTrapGUID;

    void Reset()
    {
        m_uiPhase = 0;
        m_uiPhaseTimer = 0;
        m_uiPlayerGUID = 0;
        m_uiGobjectTrapGUID = 0;
    }

    void StartAction(uint64 uiPlayerGUID, uint64 uiGoTrapGUID)
    {
        m_uiPhase = 1;
        m_uiPhaseTimer = 3000;
        m_uiPlayerGUID = uiPlayerGUID;
        m_uiGobjectTrapGUID = uiGoTrapGUID;

        switch (urand(0, 3))
        {
            case 0: DoScriptText(SAY_PHRASE_1, m_creature); break;
            case 1: DoScriptText(SAY_PHRASE_2, m_creature); break;
            case 2: DoScriptText(SAY_PHRASE_3, m_creature); break;
            case 3: DoScriptText(SAY_PHRASE_4, m_creature); break;
        }
    }

    void UpdateAI(const uint32 uiDiff)
    {
        if (!m_creature->getVictim() && m_uiPhase)
        {
            if (m_uiPhaseTimer <= uiDiff)
            {
                switch(m_uiPhase)
                {
                    case 1:
                        if (GameObject* pTrap = m_creature->GetMap()->GetGameObject(m_uiGobjectTrapGUID))
                        {
                            if (pTrap->isSpawned())
                                m_creature->GetMotionMaster()->MovePoint(0, pTrap->GetPositionX(), pTrap->GetPositionY(), pTrap->GetPositionZ());
                        }
                        break;
                    case 2:
                        if (GameObject* pTrap = m_creature->GetMap()->GetGameObject(m_uiGobjectTrapGUID))
                        {
                            if (pTrap->isSpawned())
                            {
                                pTrap->Use(m_creature);

                                if (Player* pPlayer = m_creature->GetMap()->GetPlayer(m_uiPlayerGUID))
                                {
                                    if (pPlayer->isAlive())
                                        pPlayer->KilledMonsterCredit(m_creature->GetEntry());
                                }
                            }
                        }
                        break;
                }

                m_uiPhase = 0;
            }
            else
                m_uiPhaseTimer -= uiDiff;
        }
    }

    void MovementInform(uint32 uiType, uint32 uiPointId)
    {
        m_creature->HandleEmote(EMOTE_ONESHOT_LOOT);
        m_uiPhaseTimer = 2000;
        m_uiPhase = 2;
    }
};

CreatureAI* GetAI_npc_nesingwary_trapper(Creature* pCreature)
{
    return new npc_nesingwary_trapperAI(pCreature);
}

/*######
## go_caribou_trap
######*/

bool GOUse_go_caribou_trap(Player* pPlayer, GameObject* pGo)
{
    float fX, fY, fZ;
    pGo->GetClosePoint(fX, fY, fZ, pGo->GetObjectBoundingRadius(), 2*INTERACTION_DISTANCE, frand(0, M_PI_F*2));

    if (Creature* pCreature = pGo->SummonCreature(NPC_NESINGWARY_TRAPPER, fX, fY, fZ, pGo->GetOrientation(), TEMPSUMMON_TIMED_OR_DEAD_DESPAWN, 10000))
    {
        if (npc_nesingwary_trapperAI* pTrapperAI = dynamic_cast<npc_nesingwary_trapperAI*>(pCreature->AI()))
            pTrapperAI->StartAction(pPlayer->GetGUID(), pGo->GetGUID());

        pGo->SetFlag(GAMEOBJECT_FLAGS, GO_FLAG_IN_USE);

        if (GameObject* pGoFur = GetClosestGameObjectWithEntry(pGo, GO_QUALITY_FUR, INTERACTION_DISTANCE))
        {
            if (!pGoFur->isSpawned())
            {
                pGoFur->SetRespawnTime(10);
                pGoFur->Refresh();
            }
        }
    }

    return true;
}

/*######
## npc_surristrasz
######*/

#define GOSSIP_ITEM_FREE_FLIGHT "I'd like passage to the Transitus Shield."
#define GOSSIP_ITEM_FLIGHT      "May I use a drake to fly elsewhere?"

enum
{
    SPELL_ABMER_TO_COLDARRA     = 46064
};

bool GossipHello_npc_surristrasz(Player* pPlayer, Creature* pCreature)
{
    if (pCreature->isQuestGiver())
        pPlayer->PrepareQuestMenu(pCreature->GetGUID());

    if (pCreature->isTaxi())
    {
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_FREE_FLIGHT, GOSSIP_SENDER_MAIN, GOSSIP_OPTION_GOSSIP);
        pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_TAXI, GOSSIP_ITEM_FLIGHT, GOSSIP_SENDER_MAIN, GOSSIP_OPTION_TAXIVENDOR);
    }

    pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
    return true;
}

bool GossipSelect_npc_surristrasz(Player* pPlayer, Creature* pCreature, uint32 uiSender, uint32 uiAction)
{
    if (uiAction == GOSSIP_OPTION_GOSSIP)
    {
        pPlayer->CLOSE_GOSSIP_MENU();

        //TaxiPath 795 (amber to coldarra)
        pPlayer->CastSpell(pPlayer, SPELL_ABMER_TO_COLDARRA, true);
    }

    if (uiAction == GOSSIP_OPTION_TAXIVENDOR)
        pPlayer->GetSession()->SendTaxiMenu(pCreature);

    return true;
}

/*######
## npc_tiare
######*/

#define GOSSIP_ITEM_TELEPORT    "Teleport me to Amber Ledge, please."

enum
{
    SPELL_TELEPORT_COLDARRA     = 50135
};

bool GossipHello_npc_tiare(Player* pPlayer, Creature* pCreature)
{
    pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_ITEM_TELEPORT, GOSSIP_SENDER_MAIN, GOSSIP_OPTION_GOSSIP);
    pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
    return true;
}

bool GossipSelect_npc_tiare(Player* pPlayer, Creature* pCreature, uint32 uiSender, uint32 uiAction)
{
    if (uiAction == GOSSIP_OPTION_GOSSIP)
    {
        pPlayer->CLOSE_GOSSIP_MENU();
        pPlayer->CastSpell(pPlayer, SPELL_TELEPORT_COLDARRA, true);
    }
    return true;
}

/*######
## npc_lurgglbr
######*/

enum
{
    QUEST_ESCAPE_FROM_WINTERFIN_CAVERNS = 11570,
    GO_CAGE                             = 187369,

    SAY_START_1                         = -1000575,
    SAY_START_2                         = -1000576,
    SAY_END_1                           = -1000577,
    SAY_END_2                           = -1000578
};

struct MANGOS_DLL_DECL npc_lurgglbrAI : public npc_escortAI
{
    npc_lurgglbrAI(Creature* pCreature) : npc_escortAI(pCreature)
    {
        m_uiSayTimer = 0;
        m_uiSpeech = 0;
        Reset();
    }

    uint32 m_uiSayTimer;
    uint8 m_uiSpeech;

    void Reset()
    {
        if (!HasEscortState(STATE_ESCORT_ESCORTING))
        {
            m_uiSayTimer = 0;
            m_uiSpeech = 0;
        }
    }

    void JustStartedEscort()
    {
        if (GameObject* pCage = GetClosestGameObjectWithEntry(m_creature, GO_CAGE, INTERACTION_DISTANCE))
        {
            if (pCage->GetGoState() == GO_STATE_READY)
                pCage->Use(m_creature);
        }
    }

    void WaypointStart(uint32 uiPointId)
    {
        switch(uiPointId)
        {
            case 1:
                if (Player* pPlayer = GetPlayerForEscort())
                    DoScriptText(SAY_START_2, m_creature, pPlayer);

                // Cage actually closes here, however it's normally determined by GO template and auto close time

                break;
        }
    }

    void WaypointReached(uint32 uiPointId)
    {
        switch(uiPointId)
        {
            case 0:
                if (Player* pPlayer = GetPlayerForEscort())
                {
                    m_creature->SetFacingToObject(pPlayer);
                    DoScriptText(SAY_START_1, m_creature, pPlayer);
                }
                break;
            case 25:
                if (Player* pPlayer = GetPlayerForEscort())
                {
                    DoScriptText(SAY_END_1, m_creature, pPlayer);
                    m_uiSayTimer = 3000;
                }
                break;
        }
    }

    void UpdateEscortAI(const uint32 uiDiff)
    {
        if (!m_creature->SelectHostileTarget() || !m_creature->getVictim())
        {
            if (m_uiSayTimer)
            {
                if (m_uiSayTimer <= uiDiff)
                {
                    Player* pPlayer = GetPlayerForEscort();

                    if (!pPlayer)
                    {
                        m_uiSayTimer = 0;
                        return;
                    }

                    m_creature->SetFacingToObject(pPlayer);

                    switch(m_uiSpeech)
                    {
                        case 0:
                            DoScriptText(SAY_END_2, m_creature, pPlayer);
                            m_uiSayTimer = 3000;
                            break;
                        case 1:
                            pPlayer->GroupEventHappens(QUEST_ESCAPE_FROM_WINTERFIN_CAVERNS, m_creature);
                            m_uiSayTimer = 0;
                            break;
                    }

                    ++m_uiSpeech;
                }
                else
                    m_uiSayTimer -= uiDiff;
            }

            return;
        }

        DoMeleeAttackIfReady();
    }
};

bool QuestAccept_npc_lurgglbr(Player* pPlayer, Creature* pCreature, const Quest* pQuest)
{
    if (pQuest->GetQuestId() == QUEST_ESCAPE_FROM_WINTERFIN_CAVERNS)
    {
        if (npc_lurgglbrAI* pEscortAI = dynamic_cast<npc_lurgglbrAI*>(pCreature->AI()))
        {
            pCreature->setFaction(FACTION_ESCORT_N_NEUTRAL_PASSIVE);
            pEscortAI->Start(false, pPlayer->GetGUID(), pQuest);
        }
    }
    return true;
}

CreatureAI* GetAI_npc_lurgglbr(Creature* pCreature)
{
    return new npc_lurgglbrAI(pCreature);
}

/*######
## npc_nexus_drake_hatchling
######*/

enum
{
    SPELL_DRAKE_HARPOON             = 46607,
    SPELL_RED_DRAGONBLOOD           = 46620,
    SPELL_DRAKE_HATCHLING_SUBDUED   = 46691,
    SPELL_SUBDUED                   = 46675,

    NPC_RAELORASZ                   = 26117,
    DRAKE_HUNT_KILL_CREDIT          = 26175,

    QUEST_DRAKE_HUNT                = 11919,
    QUEST_DRAKE_HUNT_D              = 11940

};

struct MANGOS_DLL_DECL npc_nexus_drakeAI : public FollowerAI
{
    npc_nexus_drakeAI(Creature* pCreature) : FollowerAI(pCreature) { Reset(); }
    
     uint64 uiHarpoonerGUID;
     bool bWithRedDragonBlood;
     bool bIsFollowing;

     void Reset()
     {
         bWithRedDragonBlood = false;
         bIsFollowing = false;
     }

     void EnterCombat(Unit* pWho)
     {
         AttackStart(pWho);
     }
     
     void SpellHit(Unit* pCaster, SpellEntry const* pSpell)
     {
            if (pSpell->Id == SPELL_DRAKE_HARPOON && pCaster->GetTypeId() == TYPEID_PLAYER)
            {
                uiHarpoonerGUID = pCaster->GetGUID();
                DoCast(m_creature, SPELL_RED_DRAGONBLOOD, true);
            }
            m_creature->Attack(pCaster,true);
            bWithRedDragonBlood = true;
     }

     void MoveInLineOfSight(Unit *pWho)
     {
         FollowerAI::MoveInLineOfSight(pWho);


         if (pWho->GetEntry() == NPC_RAELORASZ && m_creature->IsWithinDistInMap(pWho, INTERACTION_DISTANCE))
         {
           if (Player *pHarpooner = m_creature->GetMap()->GetPlayer(uiHarpoonerGUID))
                 {
                    
                     pHarpooner->KilledMonsterCredit(DRAKE_HUNT_KILL_CREDIT,m_creature->GetGUID());
                     pHarpooner->RemoveAurasByCasterSpell(SPELL_DRAKE_HATCHLING_SUBDUED,uiHarpoonerGUID);
                     SetFollowComplete();
                     uiHarpoonerGUID = 0;
                     m_creature->ForcedDespawn(1000);
                 }
              
          }
      }
     
     void UpdateAI(const uint32 uidiff)
        {
            if (bWithRedDragonBlood && uiHarpoonerGUID && !m_creature->HasAura(SPELL_RED_DRAGONBLOOD))
            {
                if (Player *pHarpooner = m_creature->GetMap()->GetPlayer(uiHarpoonerGUID))
                {
                    EnterEvadeMode();
                    StartFollow(pHarpooner, 35, NULL);

                    DoCast(m_creature, SPELL_SUBDUED, true);
                    pHarpooner->CastSpell(pHarpooner, SPELL_DRAKE_HATCHLING_SUBDUED, true);

                    m_creature->AttackStop();
                    bIsFollowing = true;
                    bWithRedDragonBlood = false;
                }
            }
            if(bIsFollowing && !m_creature->HasAura(SPELL_SUBDUED))
            {
                m_creature->ForcedDespawn(1000);
            }

            if (!m_creature->getVictim())
                return;

            DoMeleeAttackIfReady();
        }
};

CreatureAI* GetAI_npc_nexus_drake(Creature* pCreature)
{
    return new npc_nexus_drakeAI(pCreature);
}

/*#####
## go_scourge_cage
#####*/

enum
{
    QUEST_MERCIFUL_FREEDOM      =  11676,
    NPC_SCOURGE_PRISONER        =  25610,
};

bool GOHello_go_scourge_cage(Player* pPlayer, GameObject* pGo)
{
    if (pPlayer->GetQuestStatus(QUEST_MERCIFUL_FREEDOM) == QUEST_STATUS_INCOMPLETE)
    {
        Creature *pCreature = GetClosestCreatureWithEntry(pGo, NPC_SCOURGE_PRISONER, INTERACTION_DISTANCE);
        if(pCreature)
        {
            pPlayer->KilledMonsterCredit(NPC_SCOURGE_PRISONER, pCreature->GetGUID());
            pCreature->CastSpell(pCreature, 43014, false);
        }
    }
    return false;
};

/*######
## npc_beryl_sorcerer
######*/

enum eBerylSorcerer
{
    NPC_CAPTURED_BERLY_SORCERER         = 25474,
    NPC_LIBRARIAN_DONATHAN              = 25262,

    SPELL_ARCANE_CHAINS                 = 45611,
    SPELL_COSMETIC_CHAINS               = 54324,
    SPELL_COSMETIC_ENSLAVE_CHAINS_SELF  = 45631
};

struct MANGOS_DLL_DECL npc_beryl_sorcererAI : public FollowerAI
{
    npc_beryl_sorcererAI(Creature* pCreature) : FollowerAI(pCreature) { 
        m_uiNormalFaction = pCreature->getFaction();
        Reset(); 
    }

    bool bEnslaved;
    uint64 uiChainerGUID;
    uint32 m_uiNormalFaction;

    void Reset()
    {
         m_creature->setFaction(m_uiNormalFaction);
         bEnslaved = false;
    }
    void EnterCombat(Unit* pWho)
    {
            AttackStart(pWho);
    }
    
    void SpellHit(Unit* pCaster, SpellEntry const* pSpell)
    {
        if (pSpell->Id == SPELL_ARCANE_CHAINS && pCaster->GetTypeId() == TYPEID_PLAYER && !bEnslaved)
            {
                EnterEvadeMode(); //We make sure that the npc is not attacking the player!
                m_creature->setFaction(35);
                uiChainerGUID = pCaster->GetGUID();
                if(Player *pChainer = m_creature->GetMap()->GetPlayer(uiChainerGUID))
                {
                StartFollow(pChainer, 35, NULL);
                m_creature->UpdateEntry(NPC_CAPTURED_BERLY_SORCERER);
                DoCast(m_creature, SPELL_COSMETIC_ENSLAVE_CHAINS_SELF, true);
               
                bEnslaved = true;
                }
            }
    }

    void MoveInLineOfSight(Unit* pWho)
    {
            FollowerAI::MoveInLineOfSight(pWho);

            if (pWho->GetEntry() == NPC_LIBRARIAN_DONATHAN && m_creature->IsWithinDistInMap(pWho, INTERACTION_DISTANCE))
            {
                if(Player *pChainer = m_creature->GetMap()->GetPlayer(uiChainerGUID))
                {
                    pChainer->KilledMonsterCredit(NPC_CAPTURED_BERLY_SORCERER,m_creature->GetGUID());
                    SetFollowComplete();
                    m_creature->ForcedDespawn(1000);
                }
            }
     }
    void UpdateAI(const uint32 uiDiff)
    {
        if (!m_creature->getVictim())
                return;

            DoMeleeAttackIfReady();
    }

};

CreatureAI* GetAI_npc_beryl_sorcerer(Creature* pCreature)
{
    return new npc_beryl_sorcererAI(pCreature);
}

/*######
## npc_orphaned_calf
######*/

enum
{
    QUEST_KHUNOK_WILL_KNOW      = 11878,
    NPC_KHUNOK                  = 25862,
    NPC_CALF                    = 25861,
};

struct MANGOS_DLL_DECL npc_orphaned_calfAI : public FollowerAI
{
    npc_orphaned_calfAI(Creature* pCreature) : FollowerAI(pCreature) 
    {        
        if (pCreature->GetOwner() && pCreature->GetOwner()->GetTypeId() == TYPEID_PLAYER)
        { 
            if(const Quest *quest = GetQuestTemplateStore(QUEST_KHUNOK_WILL_KNOW))
                StartFollow((Player*)pCreature->GetOwner(),0,quest);
            pCreature->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_NON_ATTACKABLE);  
        }
        Reset();}

    uint32 m_uiTimer;

    void Reset() {m_uiTimer = 900000; }

    void UpdateAI(const uint32 diff)
    {
        // despawn after 15 minutes
        if(m_uiTimer < diff)
            m_creature->ForcedDespawn();
        else m_uiTimer -= diff;
        
        if(Unit* khunok = GetClosestCreatureWithEntry(m_creature,NPC_KHUNOK,5.0f))
            if(Player* pPlyr = (Player*) m_creature->GetOwner())
                if(pPlyr->GetQuestStatus(QUEST_KHUNOK_WILL_KNOW) == QUEST_STATUS_INCOMPLETE)
                {
                    pPlyr->AreaExploredOrEventHappens(QUEST_KHUNOK_WILL_KNOW);
                    SetFollowComplete();
                }
    }
};

CreatureAI* GetAI_npc_orphaned_calf(Creature* pCreature)
{
    return new npc_orphaned_calfAI(pCreature);
}

/*######
## npc_nerubar_victim
######*/

#define WARSONG_PEON            25270
#define QUEST_TAKEN_BY_SCOURGE  11611
#define SPELL_SUMMON_PEON       45532


const uint32 nerubarVictims[3] =
{
    45526, 45527, 45514
};


struct MANGOS_DLL_DECL npc_nerubar_victimAI : public ScriptedAI
{
    npc_nerubar_victimAI(Creature* pCreature) : ScriptedAI(pCreature) { Reset (); }

    void Reset() {}

    void JustDied(Unit* Killer)
    {
        if (Killer->GetTypeId() == TYPEID_PLAYER)
        {
            if (((Player*)Killer)->GetQuestStatus(QUEST_TAKEN_BY_SCOURGE) == QUEST_STATUS_INCOMPLETE)
            {
                uint8 uiRand = urand(0,3);
                if (!uiRand)
                {
                    Killer->CastSpell(m_creature,SPELL_SUMMON_PEON,true);
                    ((Player*)Killer)->KilledMonsterCredit(WARSONG_PEON);
                }
                else if (uiRand <= 2)
                    Killer->CastSpell(m_creature, nerubarVictims[urand(0,2)], true);
            }
        }
    }
};

CreatureAI* GetAI_npc_nerubar_victim(Creature* pCreature)
{
    return new npc_nerubar_victimAI(pCreature);
}

/*######
## npc_seaforium_depth_charge
######*/

enum
{
    SPELL_CHARGE_EXPLODE            = 45502,
};

const uint32 holes[4] =
{
    25402, 25403, 25404, 25405
};

struct MANGOS_DLL_DECL npc_seaforium_depth_chargeAI : public ScriptedAI
{
    npc_seaforium_depth_chargeAI(Creature* pCreature) : ScriptedAI(pCreature){ Reset(); }

    uint32 m_uiExplosionTimer;

    void Reset()
    {
        m_uiExplosionTimer = 5000;
    }

    void UpdateAI(const uint32 uiDiff)
    {
        if(m_uiExplosionTimer)
        {
            if(m_uiExplosionTimer < uiDiff)
            {
                m_creature->CastSpell(m_creature,SPELL_CHARGE_EXPLODE,true);  
                //maybe not nice but works
                std::list<Creature*> list;
                for(int i=0;i<4;i++)
                {
                    //check wich hole was destroyed
                    GetCreatureListWithEntryInGrid(list,m_creature,holes[i],15.0f);
                    if(!list.empty())
                    {
                        if(Player* pPlayer = (Player*) m_creature->GetOwner())
                            pPlayer->KilledMonsterCredit(holes[i]);
                        list.clear();
                    }
                }
                m_uiExplosionTimer = 0;
                m_creature->ForcedDespawn();
            }
            else 
                m_uiExplosionTimer -= uiDiff;
        }
    }
};

CreatureAI* GetAI_npc_seaforium_depth_charge(Creature* pCreature)
{
    return new npc_seaforium_depth_chargeAI(pCreature);
}

/*#####
## npc_storm_totem
#####*/

enum
{
    QUEST_MASTER_THE_STORM  = 11895,
    NPC_STORM_TEMPEST       = 26045,
    NPC_STORM_TOTEM         = 26048
};

struct MANGOS_DLL_DECL npc_storm_totemAI : public ScriptedAI
{
    npc_storm_totemAI(Creature* pCreature) : ScriptedAI(pCreature) { Reset(); }

    Map*    pMap;
    uint32  m_uiCheckTimer;
    std::list<uint64> list;

    void Reset()
    {
        pMap = m_creature->GetMap();
        m_uiCheckTimer = 1000;
    }

    void UpdateAI(const uint32 uiDiff)
    {
        for (std::list<uint64>::iterator itr = list.begin(); itr != list.end(); ++itr)
        {
            if(Player* pPlayer = m_creature->GetMap()->GetPlayer(*itr))
                if(pPlayer->GetQuestStatus(QUEST_MASTER_THE_STORM) == QUEST_STATUS_INCOMPLETE && m_creature->GetDistance2d(pPlayer) < 1.0f)
                {
                    DoSpawnCreature(NPC_STORM_TEMPEST,rand()%5,rand()%5,0,0,TEMPSUMMON_DEAD_DESPAWN,30000);
                    list.clear();
                    return;
                }
        }
    }
};

CreatureAI* GetAI_npc_storm_totem(Creature* pCreature)
{
    return new npc_storm_totemAI(pCreature);
}

/*#####
## npc_sage_earth_and_sky
#####*/

bool QuestAccept_npc_sage_earth_and_sky(Player* pPlayer, Creature* pCreature, const Quest* pQuest)
{
    if (pQuest->GetQuestId() == QUEST_MASTER_THE_STORM)
    {
        if(Creature* pTotem = GetClosestCreatureWithEntry(pCreature,NPC_STORM_TOTEM,30.0f))
            ((npc_storm_totemAI*) pTotem->AI())->list.push_back(pPlayer->GetGUID());
    }
    return true;
}

/*#####
## go_tadpole_cage
#####*/

enum
{
    NPC_TADPOLE = 25201,
    QUEST_TADPOLES = 11560
};

const int32 textNotOnQuest[3] =
{
-1039999, -1039998, -1039997      
};

const int32 textOnQuest[4] =
{
   -1039996, -1039995, -1039994, -1039993 
};

bool ProcessEventId_go_tadpole_cage(uint32 uiEventId, Object* pSource, Object* pTarget, bool bIsStart)
{
    if(Player* pPlayer = (Player*) pSource)
        if(GameObject* pGo = (GameObject*) pTarget)
        {
            if(Creature* pTadpole = GetClosestCreatureWithEntry(pGo,NPC_TADPOLE,0.5))
                if(pPlayer->GetQuestStatus(QUEST_TADPOLES) == QUEST_STATUS_INCOMPLETE)
                {
                    DoScriptText(textOnQuest[urand(0,3)],pTadpole,pPlayer);
                    ((FollowerAI*)pTadpole->AI())->StartFollow(pPlayer);
                    pPlayer->KilledMonsterCredit(NPC_TADPOLE);
                    // FIXME: GO has to be set not-usable instead of despawn
                    // pGo->Delete();
                }
                else
                    DoScriptText(textNotOnQuest[urand(0,2)],pTadpole,pPlayer);
        }
    return true;
}

/*#####
## npc_tadpole
#####*/

//maybe a simple followerAI can be made easier then this?
struct MANGOS_DLL_DECL npc_tadpoleAI : public FollowerAI
{
    npc_tadpoleAI(Creature* pCreature) : FollowerAI(pCreature) { Reset(); }

    uint32 m_uiDespawnTimer;

    void Reset(){ m_uiDespawnTimer = 60000; }

    void UpdateFollowerAI(const uint32 uiDiff)
    {
        // despawn after following 1 minute
        if(HasFollowState(STATE_FOLLOW_INPROGRESS))
            if(m_uiDespawnTimer < uiDiff)
            {
                SetFollowComplete(false);
                m_creature->ForcedDespawn();
            }

        FollowerAI::UpdateFollowerAI(uiDiff);
    }
};

CreatureAI* GetAI_npc_tadpole(Creature* pCreature)
{
    return new npc_tadpoleAI(pCreature);
}

/*#####
## npc_bonker_togglevolt
#####*/

enum
{
    SAY_BEGIN                     = -1029999,
    SAY_ANGRY                     = -1029998,
    SAY_COMPLETE                  = -1029997,

    QUEST_GET_ME_OUTA_HERE        = 11673
};

struct MANGOS_DLL_DECL npc_bonker_togglevoltAI : public npc_escortAI
{
    npc_bonker_togglevoltAI(Creature* pCreature) : npc_escortAI(pCreature) { Reset(); }

    void WaypointReached(uint32 i)
    {
        Player* pPlayer = GetPlayerForEscort();

        if (!pPlayer)
            return;

        switch(i)
        {
            case 6:
                DoScriptText(SAY_ANGRY, m_creature, pPlayer);
                break;
			case 13:
				DoScriptText(SAY_COMPLETE, m_creature, pPlayer);
				pPlayer->GroupEventHappens(QUEST_GET_ME_OUTA_HERE, m_creature);
				break;
        }
    }

    void Reset() {}
};

bool QuestAccept_npc_bonker_togglevolt(Player* pPlayer, Creature* pCreature, const Quest* pQuest)
{
    if (pQuest->GetQuestId() == QUEST_GET_ME_OUTA_HERE)
    {
        DoScriptText(SAY_BEGIN, pCreature, pPlayer);

        if (npc_bonker_togglevoltAI* pEscortAI = dynamic_cast<npc_bonker_togglevoltAI*>(pCreature->AI()))
        {
            pEscortAI->Start(false, pPlayer->GetGUID(), pQuest);
        }
    }
    return true;
}

CreatureAI* GetAI_npc_bonker_togglevolt(Creature* pCreature)
{
    return new npc_bonker_togglevoltAI(pCreature);
}

/*#####
## npc_mootoo
#####*/

enum
{
    SAY_START         = -1999932,
    SAY_MIDDLE        = -1999933,
    SAY_END           = -1999934,

    QUEST_ESCAPE_DUST = 11664
};

struct MANGOS_DLL_DECL npc_mootooAI : public npc_escortAI
{
    npc_mootooAI(Creature* pCreature) : npc_escortAI(pCreature) { Reset(); }

    void WaypointReached(uint32 i)
    {
        Player* pPlayer = GetPlayerForEscort();

        if (!pPlayer)
            return;

        switch(i)
        {
            case 10:
                DoScriptText(SAY_MIDDLE, m_creature, pPlayer);
                break;
            case 15:
                DoScriptText(SAY_END, m_creature, pPlayer);
                pPlayer->GroupEventHappens(QUEST_ESCAPE_DUST, m_creature);
                break;
        }
    }

    void Reset() {}
};

bool QuestAccept_npc_mootoo(Player* pPlayer, Creature* pCreature, const Quest* pQuest)
{
    if (pQuest->GetQuestId() == QUEST_ESCAPE_DUST)
    {
        DoScriptText(SAY_START, pCreature, pPlayer);

        if (npc_mootooAI* pEscortAI = dynamic_cast<npc_mootooAI*>(pCreature->AI()))
        {
            pEscortAI->Start(false, pPlayer->GetGUID(), pQuest);
            pCreature->SetStandState(UNIT_STAND_STATE_STAND);
            //pCreature->SetByteValue(UNIT_FIELD_BYTES_1, 0, 0);
        }
    }
    return true;
}

CreatureAI* GetAI_npc_mootoo(Creature* pCreature)
{
    return new npc_mootooAI(pCreature);
}

void AddSC_borean_tundra()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "npc_fizzcrank_fullthrottle";
    newscript->pGossipHello = &GossipHello_npc_fizzcrank_fullthrottle;
    newscript->pGossipSelect = &GossipSelect_npc_fizzcrank_fullthrottle;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_iruk";
    newscript->pGossipHello = &GossipHello_npc_iruk;
    newscript->pGossipSelect = &GossipSelect_npc_iruk;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_kara_thricestar";
    newscript->pGossipHello = &GossipHello_npc_kara_thricestar;
    newscript->pGossipSelect = &GossipSelect_npc_kara_thricestar;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_nesingwary_trapper";
    newscript->GetAI = &GetAI_npc_nesingwary_trapper;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "go_caribou_trap";
    newscript->pGOUse = &GOUse_go_caribou_trap;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_surristrasz";
    newscript->pGossipHello = &GossipHello_npc_surristrasz;
    newscript->pGossipSelect = &GossipSelect_npc_surristrasz;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_tiare";
    newscript->pGossipHello = &GossipHello_npc_tiare;
    newscript->pGossipSelect = &GossipSelect_npc_tiare;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_lurgglbr";
    newscript->GetAI = &GetAI_npc_lurgglbr;
    newscript->pQuestAcceptNPC = &QuestAccept_npc_lurgglbr;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_nexus_drake";
    newscript->GetAI = &GetAI_npc_nexus_drake;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "go_scourge_cage";
    newscript->pGOUse = &GOHello_go_scourge_cage;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_beryl_sorcerer";
    newscript->GetAI = &GetAI_npc_beryl_sorcerer;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_orphaned_calf";
    newscript->GetAI = &GetAI_npc_orphaned_calf;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_nerubar_victim";
    newscript->GetAI = &GetAI_npc_nerubar_victim;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_seaforium_depth_charge";
    newscript->GetAI = &GetAI_npc_seaforium_depth_charge;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_storm_totem";
    newscript->GetAI = &GetAI_npc_storm_totem;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_sage_earth_and_sky";
	newscript->pQuestAcceptNPC = &QuestAccept_npc_sage_earth_and_sky;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "go_tadpole_cage";
    newscript->pProcessEventId = &ProcessEventId_go_tadpole_cage;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_tadpole";
    newscript->GetAI = &GetAI_npc_tadpole;
    newscript->RegisterSelf();

	newscript = new Script;
    newscript->Name = "npc_bonker_togglevolt";
    newscript->GetAI = &GetAI_npc_bonker_togglevolt;
    newscript->pQuestAcceptNPC = &QuestAccept_npc_bonker_togglevolt;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name = "npc_mootoo";
    newscript->GetAI = &GetAI_npc_mootoo;
    newscript->pQuestAcceptNPC = &QuestAccept_npc_mootoo;
    newscript->RegisterSelf();
}
