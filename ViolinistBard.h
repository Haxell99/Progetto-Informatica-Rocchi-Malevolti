//
// Created by hueci on 18/06/2019.
//

#ifndef DRAGON_S_LAIR_VIOLINISTBARD_H
#define DRAGON_S_LAIR_VIOLINISTBARD_H

#include "Hero.h"
#include "Spell.h"
#include "GameCharacter.h"
#include "Skill.h"
#include "Ability.h"

class ViolinistBard : public Hero {
public:
    class LesserCureWounds : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Minor healing"};
        ViolinistBard &l;
    };

    class SymphonyOfPower : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Gives strenght to an ally"};
        ViolinistBard &l;
    };

    class SymphonyOfSibelius : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Gives mana regeneration"};
        ViolinistBard &l;
    };

    class SymphonyOfFortitude : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Gives armor to an ally"};
        ViolinistBard &l;
    };

    class SymphonyOfEstro : public Skill{
    public:
        void Do() override;
        void ObtainGlobes();
    private:
        std::string description {"Gives invulnerability"};
        ViolinistBard &l;
    };

    class Caprice : public Skill{
    public:
        void Do() override;
    private:
        std::string description {"Doubles the damage an ally would deal next turn"};
        ViolinistBard &l;
    };


private:
    int globes;
//TODO pensare a un altro nome per i globi
    int remainingGlobes;


};


#endif //DRAGON_S_LAIR_VIOLINISTBARD_H
