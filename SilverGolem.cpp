//
// Created by hueci on 17/06/2019.
//

#include "SilverGolem.h"

void SilverGolem::MinorTaunt::Do() {
    //TODO: implement taunt mechs

}

void SilverGolem::Metallicize::Do() {
    if (!cast) {
        Obtainmetallicize();
        b.currentMetallicize = b.metallicize + b.startingMetallicize;
    }
    else
        b.currentMetallicize=b.currentMetallicize+b.metallicize;
}

void SilverGolem::Metallicize::Obtainmetallicize() {
    if(b.level<2)
        b.metallicize=2;
    if(b.level>=2 && b.level<5)
        b.metallicize=3;
    if(b.level>=5 && b.level<10)
        b.metallicize=4;
    else
        b.metallicize=5;
}

void SilverGolem::AutomatedTurret::Do() {
    if(!cast) {
        b.currentTurrets = 1;
        ObtainTurretStats();
    }
    else if(b.currentTurrets<b.maxTurrets)
        b.currentTurrets++;
}

void SilverGolem::AutomatedTurret::EOTTurrets() {
    if(cast) {
        if (b.defensiveMode)
            //TODO: implement shield allies = b.currentTurrets*b.turretShield, delete foo
            int foo;
        else
            b.DamageTurnGolem = b.DamageTurnGolem + (b.currentTurrets * b.turretDamage);
    }

}

void SilverGolem::AutomatedTurret::ObtainTurretStats() {
    if(b.level<2) {
        b.turretDamage = 2;
        b.turretShield = 1;
    }
    if(b.level>=2 && b.level<5){
        b.turretDamage=3;
        b.turretShield=1;
    }

    if(b.level>=5 && b.level<10){
        b.turretShield=2;
        b.turretDamage=4;
    }
    else {
        b.turretDamage = 5;
        b.turretShield=3;
    }

}


void SilverGolem::Upgrade::Do() {
    b.maxTurrets++;
}

void SilverGolem::RepairMode::Do() {
    if(b.defensiveMode)
        b.defensiveMode=false;
    else
        b.defensiveMode=true;


}

void SilverGolem::TechSharing::Do() {

    //TODO: implements ally handling to give them b.armor and lose that much

}

void SilverGolem::Attack() {
    damageTurn=1*level+strenght+(armor/10);
}

void SilverGolem::Defend() {
    armor=6*level;
}

void SilverGolem::LevelUp() {
    level++;
    if(level==5 || level==10)
        maxTurrets++;
    startingArmor+=3;
    maxHealth+=1;
}

void SilverGolem::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Minor Taunt" << std::endl;
    std::cout << "4. Use Metallicize" << std::endl;
    std::cout << "5. Use Automated Turret" << std::endl;
    std::cout << "6. Use Upgrade" << std::endl;
    std::cout << "7. Use Rapair Mode" << std::endl;
    std::cout << "8. Use Tech Sharing" << std::endl;

    bool validchoice = false;
    while (!validchoice){
        std::cin >> choice;
        if(choice > 0 && choice < 9)
            validchoice = true;
    }

    switch (choice)
    {
        case 1:
            Attack();
            break;
        case 2:
            Defend();
            break;
        case 3:
            MinorTaunt.Do();
            break;
        case 4:
            Metallicize.Do();
            break;
        case 5:
            AutomatedTurret.Do();
            break;
        case 6:
            Upgrade.Do();
            break;
        case 7:
            RepairMode.Do();
            break;
        case 8:
            TechSharing.Do();
            break;
    }
}