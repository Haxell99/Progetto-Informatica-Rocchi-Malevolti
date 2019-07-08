//
// Created by hueci on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_SHADOWMAGE_H
#define DRAGON_S_LAIR_SHADOWMAGE_H

#include "Hero.h"
#include "Spell.h"
#include "GameCharacter.h"
#include "Skill.h"
#include "Ability.h"

class ShadowMage : public Hero {
public:

    ShadowMage();

    int getDarkness() const;

    void setDarkness(int darkness);

    bool isChannelingPower() const;

    void setChannelingPower(bool channelingPower);

    int getStartingDarkness() const;

    void setStartingDarkness(int startingDarkness);

    void Defend() override;

    void LevelUp() override;

    void ChooseAction() override;

    class Meditate : public Skill{
    public:
        void Do() override;
        void obtainManaGain();

        int getManaGain() const;

        void setManaGain(int manaGain);


    private:
        int manaGain {0};
        std::string description {"Grants mana scaling with level"};
        ShadowMage &e;
    };

    class DarkSphere : public Spell{
    public:
        void Do() override;
        void obtaindarknessIncreaseDS();
        int getDarknessIncreaseDS() const;

        void setDarknessIncreaseDS(int darknessIncreaseDS);
    private:
        std::string description {"Damage orb that also increases darkness"};
        int darknessIncreaseDS {0};
        ShadowMage &e;
    };

    class DemoniPact : public Spell{
    public:
        void Do() override;
        void obtaindarknessMultiplier();

        int getDarknessMultiplier() const;

        void setDarknessMultiplier(int darknessMultiplier);

    private:
        std::string description {"Drains all current mana to multiply the dakness of the hero"};
        int darknessMultiplier {0};
        ShadowMage &e;
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
        ShadowMage &e;
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
        ShadowMage &e;
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
        ShadowMage &e;
    };


private:
    static int damageTotal;
    int damageTurn;
    int darkness;
    bool channelingPower;
    int startingDarkness;
    ShadowMage::Meditate Meditate=ShadowMage::Meditate;
    ShadowMage::DarkSphere DarkSphere=ShadowMage::DarkSphere;
    ShadowMage::DemoniPact DemonicPact=ShadowMage::DemonicPact;
    ShadowMage::DarkEmbrace DarkEmbrace=ShadowMage::DarkEmbrace;
    ShadowMage::Annihilation Annihilation=ShadowMage::Annihilation;
    ShadowMage::NeverEndingNightmare NeverEndingNightmare=ShadowMage::NeverEndingNightmare;
};




#endif //DRAGON_S_LAIR_SHADOWMAGE_H
