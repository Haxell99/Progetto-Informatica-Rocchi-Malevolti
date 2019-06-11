//
// Created by hueci on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_SHADOWMAGE_H
#define DRAGON_S_LAIR_SHADOWMAGE_H

#include "Hero.h"
#include "Skill.h"
#include "Spell.h"

class ShadowMage : public Hero {
public:
    void Attack()=0;
    void Defend() override;

private:
    int darkness;
    bool channelingPower;
    int startingDarkness;

    class Meditate : public Skill{
    public:
        void Do() override;
        void obtainmanaEachTurn();

    private:
        int manaEachTurn;
        std::string description {"Grants mana scaling with level"};
    };

    class DarkSphere : public Spell{
    public:
        void Do() override;
        void obtaindarknessIncreaseDS();
    private:
        std::string description {"Damage orb that also increases darkness"};
        int darknessIncreaseDS;
    };

    class DemoniPact : public Spell{
    public:
        void Do() override;
        void obtaindarknessMultiplier();
    private:
        std::string description {"Drains all current mana to multiply the dakness of the hero"};
        int darknessMultiplier {2};
    };

    class DarkEmbrace : public Spell{
    public:
        void Do() override;
        void obtaindarknessIncreaseDE();
        void obtainmanaIncreaeDE();
    private:
        std::string description {"After the activation grants mana and darkness each turn"};
        int darknessIncreaseDE;
        int manaIncreaseDE;
    };

    class Annihilation : public Spell{
    public:
        void Do() override;
        void obtaindamagePerOrb();

    private:
        int damagePerOrb;
        std::string description {"Consumes all accumulated darkness to deal damage depending on how much darkness was used"};
    };

    class NeverEndingNightmare : public Spell{
    public:
        void obtainorbToStun();
        void Do()override;

    private:
        int orbToStun;
        std::string description {"Consumes all accumulated darkness to stun depending on how much darkness was used"};
    };


};


#endif //DRAGON_S_LAIR_SHADOWMAGE_H
