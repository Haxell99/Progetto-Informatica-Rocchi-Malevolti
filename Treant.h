//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_TREANT_H
#define DRAGON_S_LAIR_TREANT_H

#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"

class Treant : public Hero{
public:
    class MinorTaunt : public Skill{
    public:
        void Do() override;
    private:
        std::string description{"Taunts the enemy, can be used once every three turns"};
        Treant &c;
    };

    class DeepRoots : public Skill{
    public:
        void Do() override;
        void ObtainturnHealing();
        void EOTDeepRoots();
    private:
        std::string description{"Plants itself in the terrain, gaining life each turn but losing the possibility to attack"};
        Treant &c;
    };

    class ParasiticSeed : public Skill{
    public:
        void Do() override;
        void ObtainplantAbsorbtion();
    private:
        std::string description{"Drains hp from the enemy each turn"};
        Treant &c;
    };

    class HealingLeaf : public Skill{
    public:
        void Do() override;
    private:
        std::string description{"Small heal that also removes poison"};
        Treant &c;
    };

    class EngunlfingLianas : public Skill{
    public:
        void Do() override;
    private:
        std::string description{"Applies paralysis"};
        Treant &c;
    };

    class ForestAid : public Skill{
    public:
        void Do() override;
    private:
        std::string description{"Heals all allies and itself, empowers Parasitic Seed and Deep Roots"};
        Treant &c;
    };

private:
    int turnHealing;
    int plantAbsorbtion;
    bool immobile {false};

};


#endif //DRAGON_S_LAIR_TREANT_H
