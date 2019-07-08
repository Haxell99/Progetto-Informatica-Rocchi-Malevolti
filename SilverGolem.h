//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_SILVERGOLEM_H
#define DRAGON_S_LAIR_SILVERGOLEM_H

#include "Hero.h"
#include "GameCharacter.h"
#include "Ability.h"
#include "Skill.h"
#include "Spell.h"

class SilverGolem : public Hero {
public:
    SilverGolem();

    ~SilverGolem();

    void Attack() override;

    void Defend() override;

    void LevelUp() override;

    void ChooseAction() override;

    class MinorTaunt : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"Taunts the enemy, can be used once every three turns"};
        SilverGolem &b;
    };

    class Metallicize : public Spell {
    public:

        void Do() override;
        void Obtainmetallicize();

    private:
        std::string description{"Gains metallicize, that gives armor each turn"};
        SilverGolem &b;
    };

    class AutomatedTurret : public Skill {
    public:
        void EOTTurrets();
        void ObtainTurretStats();

        void Do() override;

    private:
        std::string description{"Spawns an automated turret that deals damage each turn. If activated again creates anpther turret, if it has not reached the maz number of turrets available"};
        SilverGolem &b;
    };

    class Upgrade : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"Increases the amount of max turrets available"};
        SilverGolem &b;
    };

    class RepairMode : public Skill {
    public:

        void Do() override;

    private:
        std::string description{"The turrets stop dealing damage and start shielding allies. Activate again to switch to offensive mode"};
        SilverGolem &b;
    };

    class TechSharing : public Spell {
    public:

        void Do() override;

    private:
        std::string description{"Loses all armor, all allies gain that much"};
        SilverGolem &b;
    };


private:
    int metallicize;
    int currentMetallicize;
    int startingMetallicize;
    bool taunt;
    int maxTurrets {3};
    int currentTurrets;
    bool defensiveMode {false};
    int DamageTurnGolem;
    int turretDamage;
    int turretShield;
    int damageTurn;
    SilverGolem::MinorTaunt MinorTaunt=SilverGolem::MinorTaunt;
    SilverGolem::Metallicize Metallicize=SilverGolem::Metallicize;
    SilverGolem::AutomatedTurret AutomatedTurret=SilverGolem::AutomatedTurret;
    SilverGolem::Upgrade Upgrade=SilverGolem::Upgrade;
    SilverGolem::RepairMode RepairMode=SilverGolem::RepairMode;
    SilverGolem::TechSharing TechSharing=SilverGolem::TechSharing;

};


#endif //DRAGON_S_LAIR_SILVERGOLEM_H
