//
// Created by hueci on 21/06/2019.
//

#ifndef DRAGON_S_LAIR_WITHERDRAGON_H
#define DRAGON_S_LAIR_WITHERDRAGON_H


#include "Boss.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"
#include "Enemy.h"
class WitherDragon : Boss {
public:
    class NeglectMagic : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Halves the mana of all heroes"};
        WitherDragon &purpledragon;
    };

    class WitheringBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Deals aoe damage and gives lesser paralysis"};
        WitherDragon &purpledragon;
    };

    class DescentIntoMadness : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Stuns 2 turns a target, increases each time the spell is used"};
        WitherDragon &purpledragon;
    };

    class Elderspell : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Kills an enemy, empowering all his spells"};
        WitherDragon &purpledragon;
    };


private:
    bool empowered;

};


#endif //DRAGON_S_LAIR_WITHERDRAGON_H
