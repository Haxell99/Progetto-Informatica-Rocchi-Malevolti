//
// Created by hueci on 08/07/2019.
//

#ifndef DRAGON_S_LAIR_BANDIT_H
#define DRAGON_S_LAIR_BANDIT_H

#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"

class Bandit : public Enemy {
public:
    Bandit();
    ~Bandit();

    class GlassKnife : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Attacks with a glass knife. After some attacks, it will break"};
        Bandit &band;
    };

    class SmokeBomb : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Hides, gaining protection from damage"};
        Bandit &band;
    };

    class Fist : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"It will be used by the bandit when the glass knife breaks"};
        Bandit &band;
    };

private:
    bool brokenKnife {false};
    int incomingBreak {5};
    int DamageTurnBandit;

};


#endif //DRAGON_S_LAIR_BANDIT_H
