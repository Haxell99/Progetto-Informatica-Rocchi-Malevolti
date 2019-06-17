//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_WARRIOR_H
#define DRAGON_S_LAIR_WARRIOR_H

#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"


//TODO: the class will need forceofwill support in the receivedamage category
class Warrior : public Hero {
public:
    Warrior();
    ~Warrior()final;

    class Reposte : public Skill {
    public:

        void Do() override;
        void Obtainreposte();

    private:
        std::string description{"The enemies receive damage when they attack the warrior"};
        Warrior &h;
    };

    class MajorTaunt : public Spell {
    public:

        void Do() override;

    private:
        std::string description{"The enemy is forced to attack the warrior"};
        Warrior &h;
    };

    class Warmaster : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"Gains armor equal to the reposte"};
        Warrior &h;
    };

    class RelentlessAttack : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"Loses part of the reposte, dealing damage equal to double the lost reposte"};
        Warrior &h;
    };

    class TrueResolve : public Spell {
    public:

        void Do() override;

    private:
        std::string description{"Cures status based on the amount of reposte he has"};
        Warrior &h;
    };

    class ForceOfWill : public Skill {
    public:

        void Do() override;
        void Obtaininvincible();

    private:
        std::string description{"Gains a cap on how much damage can receive during the durn"};
        Warrior &h;
    };



private:
    int reposte;
    bool forceofwill;
    int invincible;
    int currentReposte;
    int DamageTurnWarrior;

};


#endif //DRAGON_S_LAIR_WARRIOR_H
