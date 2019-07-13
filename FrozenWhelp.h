//
// Created by hueci on 09/07/2019.
//

#ifndef DRAGON_S_LAIR_FROZENWHELP_H
#define DRAGON_S_LAIR_FROZENWHELP_H


#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"


class FrozenWhelp : public Enemy {
public:

    class IceBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"If part of the damage is dealt on the enemy hit points, stuns them"};
        FrozenWhelp &whelp;
    };

    class Crystallize : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Surrounds himself in ice, gaining protection from damage and restoring health"};
        FrozenWhelp &whelp;
    };

    class WinterWind : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Aoe ice attack"};
        FrozenWhelp &whelp;
    };


private:
    int DamageTurnWhelp;

};


#endif //DRAGON_S_LAIR_FROZENWHELP_H
