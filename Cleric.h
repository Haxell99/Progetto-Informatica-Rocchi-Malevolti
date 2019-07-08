//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_CLERIC_H
#define DRAGON_S_LAIR_CLERIC_H

#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"

class Cleric : public Hero {
public:
    int getHeal() const;

    void setHeal(int heal);

    Cleric();

    ~Cleric()final;

    void Attack() override;

    void Defend() override;

    void LevelUp() override;

    void ChooseAction() override;

    class HolyTouch : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"Cures bleed"};
        Cleric &a;
    };

    class LesserCureWounds : public Skill{
    public:
        void Do() override;

    private:
        std::string description{"Cures an ally"};
        Cleric &a;
    };

    class WordOfStun : public Spell{
    public:
        void Do() override;

    private:
        std::string description{"Stuns the enemy, costs a lot of mana"};
        Cleric &a;
    };

    class Blessing : public Spell{
    public:
        void Do() override;

    private:
        std::string description{"Gives strenght to an ally"};
        Cleric &a;
    };

    class MajorCureWounds : public Spell{
    public:
        void Do() override;

    private:
        std::string description{"Heals all team"};
        Cleric &a;
    };

    class GiftOfImmortality : public Spell{
    public:
        void Do() override;

    private:
        std::string description{"Gives a 3 turn invulnerable condition on an ally"};
        Cleric &a;

        //TODO: implement ObtainHeal etc
    };

private:
    int heal;
    int damageTurn;
    Cleric::HolyTouch HolyTouch=Cleric::HolyTouch;
    Cleric::LesserCureWounds LesserCureWounds=Cleric::LesserCureWounds;
    Cleric::WordOfStun WordOfStun=Cleric::WordOfStun;
    Cleric::Blessing Blessing=Cleric::Blessing;
    Cleric::MajorCureWounds MajorCureWounds=Cleric::MajorCureWounds;
    Cleric::GiftOfImmortality GiftOfImmortality=Cleric::GiftOfImmortality;
};


#endif //DRAGON_S_LAIR_CLERIC_H
