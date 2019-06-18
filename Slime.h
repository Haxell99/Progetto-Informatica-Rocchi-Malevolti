//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_SLIME_H
#define DRAGON_S_LAIR_SLIME_H

#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class Slime : public Enemy{
public:
    class AcidicSpit : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainturnarmorDecrease();

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        Slime &slime;
    };

    class EnergyDrain : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainstrenghDrain();

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        Slime &slime;
    };

    class SlimeCrush : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        Slime &slime;
    };

private:
    int armorDecrease;
    int DamageTurnSlime;
    int strenghtDrain;


};


#endif //DRAGON_S_LAIR_SLIME_H
