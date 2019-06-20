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
        std::string description {"Plants itself into the terrain, healing each turn"};
        WitherDragon &purpledragon;
    };

    class WitheringBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WitherDragon &purpledragon;
    };

    class DescentIntoMadness : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WitherDragon &purpledragon;
    };

    class Elderspell : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WitherDragon &purpledragon;
    };


private:
    bool empowered;

};


#endif //DRAGON_S_LAIR_WITHERDRAGON_H
