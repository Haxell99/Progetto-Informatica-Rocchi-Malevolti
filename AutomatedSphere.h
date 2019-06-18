//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_AUTOMATEDSPHERE_H
#define DRAGON_S_LAIR_AUTOMATEDSPHERE_H


#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class AutomatedSphere : public Enemy {
public:
    AutomatedSphere();
    ~AutomatedSphere();

    //TODO: obtainmetallicize in the constructor
    class DoubleDefense : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        AutomatedSphere &sphere;
    };

    class CarefulStrike : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainarmorIncrease();

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        AutomatedSphere &sphere;
    };

    class Disintegrate : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        AutomatedSphere &sphere;
    };
private:
    int metallicize {3};
    int armorIncrease;
    int DamageTurnSphere;


};


#endif //DRAGON_S_LAIR_AUTOMATEDSPHERE_H
