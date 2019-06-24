//
// Created by hueci on 16/06/2019.
//

#ifndef DRAGON_S_LAIR_BERSERKER_H
#define DRAGON_S_LAIR_BERSERKER_H

#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"


class Berserker : public Hero {
public:
    Berserker();

    ~Berserker()final;

    void Defend() override;

    void Attack() override;

    void LevelUp() override;

    void ChooseAction() override;

    void Lifesteal(int dmg);

    class Inflame : public Spell{
    public:
        void Do() override;
        void ObtainstrenghtIncrease();
    private:
        int strenghtIncrease;
        std::string description {"Gains strenght"};
        Berserker &f;

    };

    class GreviousWound : public Skill{
    public:
        void Do() override;
        void ObtainbleedGW();
    private:
        int bleedGW;
        std::string description {"Multiple attacks that also apply bleed"};
        Berserker &f;

    };

    class BloodThirst : public Skill{
    public:
        void Do() override;
        void Obtainlifesteal();
    private:
        std::string description {"Enters a rage state, cannot defend, gains access to Melter and Harvest soul, abilities that cost health, and has an upgraded rampage, that starts costing health too.\\n\"\n"
                                 "        \"Gains lifesteal. Can exit the rage state using the skill again"};
        Berserker &f;
    };

    class Melter : public Spell{
    public:
        void Do() override;
    private:
        std::string description {"Deals the lesser damage between a percentage of his life and his armor."};
        Berserker &f;
    };

    class Rampage : public Skill{
    public:
        Rampage();
        void Do() override;
    private:
        std::string description {"Deals damage, then increases the damage.\\n\"\n"
                                 "        \"In bt form, rampage scales also with strenght."};
        Berserker &f;
    };

    class HarvestSoul : public Skill{
    public:
        void Do() override;
    private:
        std::string description {"Multiattack, if kills the target gains permanent rampage damage"};
        Berserker &f;
    };



private:
    int rampageIncrease;
    int startingRampage;
    int currentRampage;
    bool bloodthirst {false};
    int damageTurn;
    int lifestealPercentage{5};
    Berserker::Inflame Inflame=Berserker::Inflame;
    Berserker::GreviousWound GreviousWound=Berserker::GreviousWound;
    Berserker::BloodThirst BloodThirst=Berserker::BloodThirst;
    Berserker::Melter Melter=Berserker::Melter;
    Berserker::Rampage Rampage=Berserker::Rampage;
    Berserker::HarvestSoul HarvestSoul=Berserker::HarvestSoul;

};


#endif //DRAGON_S_LAIR_BERSERKER_H
