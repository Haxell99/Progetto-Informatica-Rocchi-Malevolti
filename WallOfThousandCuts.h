//
// Created by hueci on 09/07/2019.
//

#ifndef DRAGON_S_LAIR_WALLOFTHOUSANDCUTS_H
#define DRAGON_S_LAIR_WALLOFTHOUSANDCUTS_H

#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"


class WallOfThousandCuts : public Enemy {
public:
    class MoreKnives  : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WallOfThousandCuts &angrywall;
    };

    class StormOfSteel  : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WallOfThousandCuts &angrywall;
    };

    class Defend  : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        WallOfThousandCuts &angrywall;
    };


private:
    int reposte;
    int startingReposte {level};
    int DamageTurnWall;
};


#endif //DRAGON_S_LAIR_WALLOFTHOUSANDCUTS_H
