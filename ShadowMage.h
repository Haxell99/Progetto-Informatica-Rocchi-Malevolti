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
    void Attack=0;
    void Defend override;

private:
    int darkness;
    bool channelingPower;
    int startingDarkness;

    class Meditate : public Skill{
    public:
        void Do override;
        int obtainmanaEachTurn;

    private:
        int manaEachTurn;
        std::string description {"Grants mana scaling with level"};
    };

    class DarkSphere : public Spell{
    public:
        void Do override;
        int obtaindarknessIncreaseDS;
    private:
        std::string description {Damage orb that also increases darkness};
        int darknessIncreaseDS;
    };

    class Demonic Pact : public Spell{
    public:
        void Do override;
        int obtaindarknessMultiplier;
    private:
        std::string description {Drains all current mana to multiply the dakness of the hero}
        int darknessMultiplier {2};
    };

};


#endif //DRAGON_S_LAIR_SHADOWMAGE_H
