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
SDName: Boss_Faerlina
SD%Complete: 50
SDComment:
SDCategory: Naxxramas
EndScriptData */

#include "precompiled.h"
#include "naxxramas.h"

enum
{
    SAY_GREET                 = -1533009,
    SAY_AGGRO1                = -1533010,
    SAY_AGGRO2                = -1533011,
    SAY_AGGRO3                = -1533012,
    SAY_AGGRO4                = -1533013,
    SAY_SLAY1                 = -1533014,
    SAY_SLAY2                 = -1533015,
    SAY_DEATH                 = -1533016,

    //SOUND_RANDOM_AGGRO        = 8955,                              //soundId containing the 4 aggro sounds, we not using this

    SPELL_POSIONBOLT_VOLLEY   = 28796,
    H_SPELL_POSIONBOLT_VOLLEY = 54098,
    SPELL_ENRAGE              = 28798,
    H_SPELL_ENRAGE            = 54100,

    SPELL_WIDOWS_EMBRACE      = 28732,

    SPELL_RAINOFFIRE          = 28794                       //Not sure if targeted AoEs work if casted directly upon a pPlayer
};

#define ACHIEV_10			1997
#define ACHIEV_25			2140

static uint32 m_uiWorshippers[4] = {NPC_WORSHIPPER_1,NPC_WORSHIPPER_2,NPC_WORSHIPPER_3,NPC_WORSHIPPER_4}; 

struct MANGOS_DLL_DECL boss_faerlinaAI : public ScriptedAI
{
    boss_faerlinaAI(Creature* pCreature) : ScriptedAI(pCreature)
    {
        m_pInstance = (instance_naxxramas*)pCreature->GetInstanceData();
        m_bIsRegularMode = pCreature->GetMap()->IsRegularDifficulty();
        m_bHasTaunted = false;
        Reset();
    }

    instance_naxxramas* m_pInstance;
    bool m_bIsRegularMode;

    uint32 m_uiPoisonBoltVolleyTimer;
    uint32 m_uiRainOfFireTimer;
    uint32 m_uiEnrageTimer;
    uint8  m_uiDeadWorshippers;
    bool   m_bHasTaunted;
	bool   m_bAchiev;

    void Reset()
    {
        m_uiPoisonBoltVolleyTimer = 8000;
        m_uiRainOfFireTimer = 16000;
        m_uiEnrageTimer = 60000;
        m_uiDeadWorshippers = 0;
		m_bAchiev = true;
    }

    void Aggro(Unit* pWho)
    {
        switch(urand(0, 3))
        {
            case 0: DoScriptText(SAY_AGGRO1, m_creature); break;
            case 1: DoScriptText(SAY_AGGRO2, m_creature); break;
            case 2: DoScriptText(SAY_AGGRO3, m_creature); break;
            case 3: DoScriptText(SAY_AGGRO4, m_creature); break;
        }

        if (m_pInstance)
            m_pInstance->SetData(TYPE_FAERLINA, IN_PROGRESS);
    }

    void MoveInLineOfSight(Unit* pWho)
    {
        if (!m_bHasTaunted && m_creature->IsWithinDistInMap(pWho, 60.0f))
        {
            DoScriptText(SAY_GREET, m_creature);
            m_bHasTaunted = true;
        }

        ScriptedAI::MoveInLineOfSight(pWho);
    }

    void KilledUnit(Unit* pVictim)
    {
        DoScriptText(urand(0, 1)?SAY_SLAY1:SAY_SLAY2, m_creature);
    }

    void SpellHit(Unit* pCaster, const SpellEntry* pSpell) 
    {
        if(pSpell->Id == SPELL_WIDOWS_EMBRACE)
        {
			if (pCaster != m_creature)
				pCaster->DealDamage(pCaster, pCaster->GetHealth(), NULL, DIRECT_DAMAGE, SPELL_SCHOOL_MASK_NORMAL, NULL, false);
            if(m_creature->HasAura(SPELL_ENRAGE,EFFECT_INDEX_2) || m_creature->HasAura(H_SPELL_ENRAGE,EFFECT_INDEX_2))
            {
				m_creature->RemoveAurasDueToSpell(m_bIsRegularMode ? SPELL_ENRAGE : H_SPELL_ENRAGE);
                m_uiEnrageTimer = 60000;
            }
            else
                m_uiEnrageTimer += 30000;
        }
    }

    void JustDied(Unit* pKiller)
    {
        DoScriptText(SAY_DEATH, m_creature);

		if (m_bAchiev)
        {
            Map* pMap = m_creature->GetMap();
            if (pMap && pMap->IsDungeon())
            {
                Map::PlayerList const &players = pMap->GetPlayers();
                for (Map::PlayerList::const_iterator itr = players.begin(); itr != players.end(); ++itr)
					itr->getSource()->CompletedAchievement(m_bIsRegularMode ? ACHIEV_10 : ACHIEV_25);
            }
        }
	
        if (m_pInstance)
            m_pInstance->SetData(TYPE_FAERLINA, DONE);
    }

    void JustReachedHome()
    {
        if (m_pInstance)
            m_pInstance->SetData(TYPE_FAERLINA, FAIL);

        for(int i=0;i<4;i++)
            {
                if(Creature* worshipper = (Creature*) m_creature->GetMap()->GetUnit(m_pInstance->GetData64(m_uiWorshippers[i])))
                {
                    worshipper->Respawn();
                }
            }
    }

    void UpdateAI(const uint32 uiDiff)
    {
        if (!m_creature->SelectHostileTarget() || !m_creature->getVictim())
            return;

        if(m_pInstance)
        {
            uint8 curr = 0;
            // look how many worshippers are dead
            for(int i=0;i<4;i++)
            {
                if(Unit* worshipper = m_creature->GetMap()->GetUnit(m_pInstance->GetData64(m_uiWorshippers[i])))
                {
                    if(!worshipper->isAlive())
                    {
                        curr++;
                    }
                }
            }
            
            // did at a worshipper die?
            if(curr > m_uiDeadWorshippers)
            {
                m_uiDeadWorshippers = curr;
				m_bAchiev = false; // worshipper dead? this group wouldn't earn this achievement
                m_creature->CastSpell(m_creature->getVictim(),SPELL_WIDOWS_EMBRACE,true);
                
                // hack: players get hit by the spell, so remove spell from them
                Map *map = m_creature->GetMap();
                if (!map->IsDungeon())
                return;

                Map::PlayerList const &PlayerList = map->GetPlayers();
                if (PlayerList.isEmpty())
                return;

                for(Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
                    if(i->getSource()->HasAura(SPELL_WIDOWS_EMBRACE))
                        i->getSource()->RemoveAurasDueToSpell(SPELL_WIDOWS_EMBRACE);
            }
        }

        // Poison Bolt Volley
        if (m_uiPoisonBoltVolleyTimer < uiDiff)
        {
			DoCastSpellIfCan(m_creature->getVictim(), m_bIsRegularMode ? SPELL_POSIONBOLT_VOLLEY : H_SPELL_POSIONBOLT_VOLLEY);
            m_uiPoisonBoltVolleyTimer = 7000;
        }
        else
            m_uiPoisonBoltVolleyTimer -= uiDiff;

        // Rain Of Fire
        if (m_uiRainOfFireTimer < uiDiff)
        {
            if (Unit* pTarget = m_creature->SelectAttackingTarget(ATTACKING_TARGET_RANDOM, 0))
                DoCastSpellIfCan(pTarget, SPELL_RAINOFFIRE);

            m_uiRainOfFireTimer = 9000;
        }
        else
            m_uiRainOfFireTimer -= uiDiff;

        //Enrage_Timer
        if (m_uiEnrageTimer < uiDiff)
        {
			DoCastSpellIfCan(m_creature, m_bIsRegularMode ? SPELL_ENRAGE : H_SPELL_ENRAGE);
            m_uiEnrageTimer = 61000;
        }
        else 
            m_uiEnrageTimer -= uiDiff;

        DoMeleeAttackIfReady();
    }
};

CreatureAI* GetAI_boss_faerlina(Creature* pCreature)
{
    return new boss_faerlinaAI(pCreature);
}

void AddSC_boss_faerlina()
{
    Script* NewScript;
    NewScript = new Script;
    NewScript->Name = "boss_faerlina";
    NewScript->GetAI = &GetAI_boss_faerlina;
    NewScript->RegisterSelf();
}
