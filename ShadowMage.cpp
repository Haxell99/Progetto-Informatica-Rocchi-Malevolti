//
// Created by hueci on 11/06/2019.
//

#include "ShadowMage.h"
#include "GameCharacter.h"

void ShadowMage::Meditate::Do(){

    //Example of C++ nested class cpp file
}

void ShadowMage::Defend() {
    if (darkness>0)
        darkness--;
    int a= getArmor();
    a+=8;
    setArmor(a);
}

//Getter and Setter methods of the Class

int ShadowMage::getDarkness() const {
    return darkness;
}

void ShadowMage::setDarkness(int darkness) {
    ShadowMage::darkness = darkness;
}

bool ShadowMage::isChannelingPower() const {
    return channelingPower;
}

void ShadowMage::setChannelingPower(bool channelingPower) {
    ShadowMage::channelingPower = channelingPower;
}

int ShadowMage::getStartingDarkness() const {
    return startingDarkness;
}

void ShadowMage::setStartingDarkness(int startingDarkness) {
    ShadowMage::startingDarkness = startingDarkness;
}


//Nested Classes Getter and Setter Methods

int ShadowMage::Meditate::getManaGain() const {
    return manaGain;
}

void ShadowMage::Meditate::setManaGain(int manaEachTurn) {
    Meditate::manaGain = manaEachTurn;
}

//TODO: test è un tentativo di fare il Do() del Meditate. Bisogna inserire come riferimento

void ShadowMage::Meditate::test(ShadowMage &e) {
    int mana=e.getMana();
    mana+= getManaGain();
    e.setMana(mana);
}


int ShadowMage::DarkSphere::getDarknessIncreaseDS() const {
    return darknessIncreaseDS;
}

void ShadowMage::DarkSphere::setDarknessIncreaseDS(int darknessIncreaseDS) {
    DarkSphere::darknessIncreaseDS = darknessIncreaseDS;
}

int ShadowMage::DemoniPact::getDarknessMultiplier() const {
    return darknessMultiplier;
}

void ShadowMage::DemoniPact::setDarknessMultiplier(int darknessMultiplier) {
    DemoniPact::darknessMultiplier = darknessMultiplier;
}

int ShadowMage::DarkEmbrace::getDarknessIncreaseDE() const {
    return darknessIncreaseDE;
}

void ShadowMage::DarkEmbrace::setDarknessIncreaseDE(int darknessIncreaseDE) {
    DarkEmbrace::darknessIncreaseDE = darknessIncreaseDE;
}

int ShadowMage::DarkEmbrace::getManaIncreaseDE() const {
    return manaIncreaseDE;
}

void ShadowMage::DarkEmbrace::setManaIncreaseDE(int manaIncreaseDE) {
    DarkEmbrace::manaIncreaseDE = manaIncreaseDE;
}

int ShadowMage::Annihilation::getDamagePerOrb() const {
    return damagePerOrb;
}

void ShadowMage::Annihilation::setDamagePerOrb(int damagePerOrb) {
    Annihilation::damagePerOrb = damagePerOrb;
}

int ShadowMage::NeverEndingNightmare::getOrbToStun() const {
    return orbToStun;
}

void ShadowMage::NeverEndingNightmare::setOrbToStun(int orbToStun) {
    NeverEndingNightmare::orbToStun = orbToStun;
}