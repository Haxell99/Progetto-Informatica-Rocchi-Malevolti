//
// Created by hueci on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_SHADOWMAGE_H
#define DRAGON_S_LAIR_SHADOWMAGE_H

#include "Hero.h"
#include "Spell.h"
#include "GameCharacter.h"
#include "Skill.h"

class ShadowMage : public Hero {
public:

    int getDarkness() const;

    void setDarkness(int darkness);

    bool isChannelingPower() const;

    void setChannelingPower(bool channelingPower);

    int getStartingDarkness() const;

    void setStartingDarkness(int startingDarkness);

    void Defend() override;

    class Meditate : public Skill{
    public:
        void Do() override;
        void test(ShadowMage& e);

        int getManaGain() const;

        void setManaGain(int manaGain);


    private:
        int manaGain;
        std::string description {"Grants mana scaling with level"};
    };

    class DarkSphere : public Spell{
    public:
        void Do() override;
        void obtaindarknessIncreaseDS();
        int getDarknessIncreaseDS() const;

        void setDarknessIncreaseDS(int darknessIncreaseDS);
    private:
        std::string description {"Damage orb that also increases darkness"};
        int darknessIncreaseDS;
    };

    class DemoniPact : public Spell{
    public:
        void Do() override;
        void obtaindarknessMultiplier();

        int getDarknessMultiplier() const;

        void setDarknessMultiplier(int darknessMultiplier);

    private:
        std::string description {"Drains all current mana to multiply the dakness of the hero"};
        int darknessMultiplier {2};
    };

    class DarkEmbrace : public Spell{
    public:
        void Do() override;
        void obtaindarknessIncreaseDE();
        void obtainmanaIncreaeDE();

        int getDarknessIncreaseDE() const;

        void setDarknessIncreaseDE(int darknessIncreaseDE);

        int getManaIncreaseDE() const;

        void setManaIncreaseDE(int manaIncreaseDE);

    private:
        std::string description {"After the activation grants mana and darkness each turn"};
        int darknessIncreaseDE;
        int manaIncreaseDE;
    };

    class Annihilation : public Spell{
    public:
        void Do() override;
        void obtaindamagePerOrb();

        int getDamagePerOrb() const;

        void setDamagePerOrb(int damagePerOrb);

    private:
        int damagePerOrb;
        std::string description {"Consumes all accumulated darkness to deal damage depending on how much darkness was used"};
    };

    class NeverEndingNightmare : public Spell{
    public:
        void obtainorbToStun();
        void Do()override;

        int getOrbToStun() const;

        void setOrbToStun(int orbToStun);

    private:
        int orbToStun;
        std::string description {"Consumes all accumulated darkness to stun depending on how much darkness was used"};
        friend class ShadowMage;
    };


private:
    int darkness;
    bool channelingPower;
    int startingDarkness;
    friend class Meditate;








};




#endif //DRAGON_S_LAIR_SHADOWMAGE_H
