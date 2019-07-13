//
// Created by hueci on 21/06/2019.
//

#ifndef DRAGON_S_LAIR_ETHEREALASSASSIN_H
#define DRAGON_S_LAIR_ETHEREALASSASSIN_H


#include "Enemy.h"
#include "GameCharacter.h"
#include "Enemy Abilities.h"
#include "Ability.h"
#include "Hero.h"

class EtherealAssassin : public Enemy {
public:

    EtherealAssassin();
    ~EtherealAssassin();

    class DeathMark : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Marks to death an enemy, damaging him when going in ethereal form"};
        EtherealAssassin &assassin;


    };

    class EtherealForm : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"Becomes ghostly, avoiding damage and damaging the marked enemy"};
        EtherealAssassin &assassin;

    };


    class DeathWhisper : public EnemyAbilities{
    public:
        void Do() override;

    private:
        std::string description {"An attack that deals double damage against marked targets"};
        EtherealAssassin &assassin;
    };

private:
    Hero*marked;
    int markDamage;
    bool markedEnemy;
    int DamageTurnAssassin;


};


#endif //DRAGON_S_LAIR_ETHEREALASSASSIN_H
