//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_FIREMAGE_H
#define DRAGON_S_LAIR_FIREMAGE_H


#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class FireMage : public Enemy {
public:
    class Fireball : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Area of effect damage fireball"};
        FireMage &fire;
    };

    class FireShield : public EnemyAbilities{
    public:
        void Do() override;
        void ObtainarmorIncrease();
        void ObtainreposteIncrease();

    private:
        std::string description {"Gains a fire shield that damage who attacks him"};
        FireMage &fire;
    };

    class RingOfFire : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Single target flame attack"};
        FireMage &fire;
    };



private:
    int reposte;
    int armorIncrease;
    int reposteIncrease;
    int DamageTurnMage;


};


#endif //DRAGON_S_LAIR_FIREMAGE_H
