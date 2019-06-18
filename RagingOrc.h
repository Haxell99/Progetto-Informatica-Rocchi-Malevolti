//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_RAGINGORC_H
#define DRAGON_S_LAIR_RAGINGORC_H


#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class RagingOrc : Enemy {
public:
    class Rage : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainstrenghtIncrease();

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        RagingOrc &r;
    };

    class Bash : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        RagingOrc &r;
    };

    class SliceAndDice : public EnemyAbilities{
    public:
        void Do() override;
    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        RagingOrc &r;
    };

private:
    bool rage {false};
    int strenghtIncrease;
    int DamageTurnOrc;
    int numberAttacks {1};
};


#endif //DRAGON_S_LAIR_RAGINGORC_H
