//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_PLAGUEDOCTOR_H
#define DRAGON_S_LAIR_PLAGUEDOCTOR_H

#include "Hero.h"
#include "Spell.h"
#include "GameCharacter.h"
#include "Skill.h"
#include "Ability.h"

class PlagueDoctor : public Hero {
public:
    PlagueDoctor();

    ~PlagueDoctor();

    void Attack() override;

    void Defend() override;

    void LevelUp() override;

    class PoisonDart : public Skill{
    public:
        void Do() override;
    private:
        std::string description {"Poisons the enemy"};
        PlagueDoctor &p;
    };

    class ParalyzingDust : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Gives paralysis"};
        PlagueDoctor &p;
    };

    class ExperimentalCure : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Heals but gives bleed"};
        PlagueDoctor &p;
    };

    class Panacea : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Removes all statuses from allies"};
        PlagueDoctor &p;
    };

    class DebilitatingPotion : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Removes strenght"};
        PlagueDoctor &p;
    };

    class PotionOfMadness : public Skill{
    public:
        void Do() override;
    private:
        std::string description {"Gives a lot of strenght, decaying each turn"};
        PlagueDoctor &p;
    };

private:
    int damageTurn;
    int heal;
};


#endif //DRAGON_S_LAIR_PLAGUEDOCTOR_H
