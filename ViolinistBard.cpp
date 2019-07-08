//
// Created by hueci on 18/06/2019.
//

#include "ViolinistBard.h"

void ViolinistBard::LesserCureWounds::Do() {
    //TODO
}

void ViolinistBard::SymphonyOfPower::Do() {
    //TODO: missing ally support
    int strenghtSOP= l.level*1+1;

}

void ViolinistBard::SymphonyOfSibelius::Do() {
    int manaregenSOS= l.level*5+15;
    //TODO

}

void ViolinistBard::SymphonyOfFortitude::Do() {
    //TODO ally
    int armorSOF= l.level*2+8;

}

void ViolinistBard::SymphonyOfEstro::Do() {
    if (!cast) {
        ObtainGlobes();
        cast = true;
    }

    //TODO ally
    if(l.remainingGlobes>0)
        //do something
        l.remainingGlobes--;
}

void ViolinistBard::SymphonyOfEstro::ObtainGlobes() {
    if(l.level<=2)
        l.globes=1;
    if(l.level<=5 && l.level>2)
        l.globes=2;
    if(l.level<=10 && l.level>5)
        l.globes=3;
    else
        l.globes=4;
    l.remainingGlobes=l.globes;

}

void ViolinistBard::Caprice::Do() {

}

void ViolinistBard::Attack() {
    damageTurn=1*level+strenght;
}

void ViolinistBard::Defend() {
    armor+=3*level;
}

void ViolinistBard::LevelUp() {
    level++;
    maxHealth+=3;
}

void ViolinistBard::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Lesser Cure Wounds" << std::endl;
    std::cout << "4. Use Symphony of Power" << std::endl;
    std::cout << "5. Use Symphony of Sibelius" << std::endl;
    std::cout << "6. Use Symphony of Fortitude" << std::endl;
    std::cout << "7. Use Symphony of Estro" << std::endl;
    std::cout << "8. Use Caprice" << std::endl;

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
            LesserCureWounds.Do();
            break;
        case 4:
            SymphonyOfPower.Do();
            break;
        case 5:
            SymphonyOfSibelius.Do();
            break;
        case 6:
            SymphonyOfFortitude.Do();
            break;
        case 7:
            SymphonyOfEstro.Do();
            break;
        case 8:
            Caprice.Do();
            break;
    }

}
