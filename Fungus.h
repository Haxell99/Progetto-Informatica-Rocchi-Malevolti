//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_FUNGUS_H
#define DRAGON_S_LAIR_FUNGUS_H

#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class Fungus : public Enemy {
public:
    class DeepRoots : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainturnHealing();
        void EOTDeepRoots();
    private:
        std::string description {"Plants itself into the terrain, healing each turn"};
        Fungus &fungus;
    };

    class PoisonedSpore : public EnemyAbilities{
    public:
        void Do() override;
        void Obtainpoison();
    private:
        std::string description {""};
        Fungus &fungus;
    };

    class LesserParalysis : public EnemyAbilities{
    public:
        void Do() override;
        void Obtainparalysis();
    private:
        std::string description {""};
        Fungus &fungus;
    };


private:
    std::string description {"The fungus tries to slowly kill his enemies with debuffs, while sustaining itself"};
    bool immobile {false};
    int turnHealing;
    int poison;
    int paralysis;

};


#endif //DRAGON_S_LAIR_FUNGUS_H
