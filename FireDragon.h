//
// Created by hueci on 24/06/2019.
//

#ifndef DRAGON_S_LAIR_FIREDRAGON_H
#define DRAGON_S_LAIR_FIREDRAGON_H


#include "Boss.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"
#include "Enemy.h"

class FireDragon : public Boss {
public:
    class FlameBarrier : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainreposteIncrease();
        void ObtainarmorIncrease();
        void ObtainstreghtSteal();

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        int reposteIncrease;
        int armorIncrease;
        int strenghtSteal;
        FireDragon &reddragon;
    };

    class FlameBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        FireDragon &reddragon;
    };

    class ConeOfFire : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        FireDragon &reddragon;
    };

    class   FerociousBite : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        FireDragon &reddragon;
    };

private:
    int startingReposte;
    int reposte;




};


#endif //DRAGON_S_LAIR_FIREDRAGON_H
