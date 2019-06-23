//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_ROGUE_H
#define DRAGON_S_LAIR_ROGUE_H


#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"

class Rogue : public Hero {
public:
    Rogue();

    ~Rogue() final;

    void Attack() override;

    void Defend() override;

    void LevelUp() override;

    class ShadowFade : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Goes invisible, becoming invulnerable. Next turn will deal double damage when using a damage spell"};
        Rogue &g;

    };

    class poisonedBlade : public Skill{
    public:
        void Do() override;
        void ObtainvenomDamage();
    private:
        std::string description {"Envenoms the blade, gaining extra damage for every attack"};
        Rogue &g;

    };

    class Backstab : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Stabs the enemy, if exiting stealht, deals more damage"};
        Rogue &g;

    };

    class ThousandCuts : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Multiattack that uses venom and strenght"};
        Rogue &g;

    };

    class CloakandDagger : public Skill{
    public:
        void Do() override;
    private:
        std::string description {"Deals damage and gains armor"};
        Rogue &g;

    };

    class Eviscerate : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Deals more damage if the enemy has low health"};
        Rogue &g;

    };
private:
    bool poisonedB;
    bool hidden;
    int venomDamage;
    int damageTurn;


};


#endif //DRAGON_S_LAIR_ROGUE_H
