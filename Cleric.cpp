//
// Created by hueci on 17/06/2019.
//

#include "Cleric.h"

void Cleric::Attack() {

}

int Cleric::getHeal() const {
    return heal;
}

void Cleric::setHeal(int heal) {
    Cleric::heal = heal;
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

