//
// Created by hueci on 08/07/2019.
//

#ifndef DRAGON_S_LAIR_POISONDRAGON_H
#define DRAGON_S_LAIR_POISONDRAGON_H

#include "Boss.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"
#include "Enemy.h"

class PoisonDragon : public Boss{
public:
    class ParalyzingVenom : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Parlysis"};
        PoisonDragon &greendragon;
    };

    class PoisonBreath : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Area of effect poison"};
        PoisonDragon &greendragon;
    };

    class ThoughScales : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Gains armor, the quantity is massive if scales are not broken yet"};
        bool brokenScales {false};
        PoisonDragon &greendragon;
    };

    class Neurotoxin : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Triples the poison on enemies"};
        PoisonDragon &greendragon;
    };

private:
    int scales;

};


#endif //DRAGON_S_LAIR_POISONDRAGON_H
