//
// Created by hueci on 17/06/2019.
//

#include "Cleric.h"

void Cleric::Attack() {
    damageTurn=2*level+strenght;
}

int Cleric::getHeal() const {
    return heal;
}

void Cleric::setHeal(int heal) {
    Cleric::heal = heal;
}

void Cleric::Defend() {
    level++;
    armor+=3*level;
}

void Cleric::LevelUp() {
    maxHealth+=3;
    heal+=2;
}

void Cleric::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Holy Touch" << std::endl;
    std::cout << "4. Use Lesser Cure Wounds" << std::endl;
    std::cout << "5. Use Word of Stun" << std::endl;
    std::cout << "6. Use Blessing" << std::endl;
    std::cout << "7. Use Major Cure Wounds" << std::endl;
    std::cout << "8. Use Gift of Immortality" << std::endl;

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
            HolyTouch.Do();
            break;
        case 4:
            LesserCureWounds.Do();
            break;
        case 5:
            WordOfStun.Do();
            break;
        case 6:
            Blessing.Do();
            break;
        case 7:
            MajorCureWounds.Do();
            break;
        case 8:
            GiftOfImmortality.Do();
            break;
    }
}

void Cleric::HolyTouch::Do() {
    //TODO: implement interaction with teamMates, need team.

}



void Cleric::LesserCureWounds::Do() {
    //Choose ally with the lowest health or can select him?

}

void Cleric::WordOfStun::Do() {


}

void Cleric::Blessing::Do() {

}

void Cleric::MajorCureWounds::Do() {

}

void Cleric::GiftOfImmortality::Do() {

}

