//
// Created by hueci on 18/06/2019.
//

#include "PlagueDoctor.h"

//TODO enemies and allies missing

void PlagueDoctor::PoisonDart::Do() {
    int poisonPD = 2*p.level+1;
}

void PlagueDoctor::ParalyzingDust::Do() {
    int paralysisPD = 5*p.level;
}

void PlagueDoctor::ExperimentalCure::Do() {
    int healEC= 5*p.level+15;
    int bleedEC= healEC/4-p.level;
    if(bleedEC<=0)
        bleedEC=1;

}

void PlagueDoctor::Panacea::Do() {
    //TODO eheh

}

void PlagueDoctor::DebilitatingPotion::Do() {
    int strenghtDP=1+p.level/2;
    //TODO

}

void PlagueDoctor::PotionOfMadness::Do() {
    //TODO
    int strenghtPOM= 2+2*p.level;
    int strenghtDeecreasePOM= strenghtPOM/4;
}

void PlagueDoctor::Attack() {
    damageTurn=3*level+strenght;
    //apply 1 o 2 poison (?)
}

void PlagueDoctor::Defend() {
    armor+=3*level;
}

void PlagueDoctor::LevelUp() {
    level++;
    maxHealth+=3;
    heal+=1;
}

void PlagueDoctor::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Poison Dart" << std::endl;
    std::cout << "4. Use Paralyzing Dust" << std::endl;
    std::cout << "5. Use Experimental Cure" << std::endl;
    std::cout << "6. Use Panacea" << std::endl;
    std::cout << "7. Use Debilitating Poison" << std::endl;
    std::cout << "8. Use Potion of Madness" << std::endl;

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
            PoisonDart.Do();
            break;
        case 4:
            ParalyzingDust.Do();
            break;
        case 5:
            ExperimentalCure.Do();
            break;
        case 6:
            Panacea.Do();
            break;
        case 7:
            DebilitatingPoison.Do();
            break;
        case 8:
            PotionOfMadness.Do();
            break;
    }
}
