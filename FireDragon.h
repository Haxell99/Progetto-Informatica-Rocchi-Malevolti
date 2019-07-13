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
        std::string description {"Surrounds himself in fire, gaining armor and increasing the reposte."};
        int reposteIncrease;
        int armorIncrease;
        int strenghtSteal;
        FireDragon &reddragon;
    };

    class FlameBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"A powerful area of effect fire attack"};
        FireDragon &reddragon;
    };

    class ConeOfFire : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Single target fire damage"};
        FireDragon &reddragon;
    };

    class   FerociousBite : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Massive damage and bleed to a target"};
        FireDragon &reddragon;
    };

private:
    int startingReposte;
    int reposte;




};


#endif //DRAGON_S_LAIR_FIREDRAGON_H
