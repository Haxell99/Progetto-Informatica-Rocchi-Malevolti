//
// Created by hueci on 11/06/2019.
//

#include "ShadowMage.h"
#include "GameCharacter.h"

//TODO: revisionare il codice con l'aggiunta della funzionalità cast.
void ShadowMage::Meditate::Do(){
    //TODO: inserito nella prima classe spell realizzata, vale per tutte le altre. if(managain==0) deve diventare un OR tra
    //TODO: mana gain e isSpellCast
    if(manaGain==0  || !cast)
        obtainManaGain();
    int m=e.getMana();
    m+= getManaGain();
    e.setMana(m);
    cast=true;

    //Example of C++ nested class cpp file
}

void ShadowMage::Meditate::obtainManaGain() {
    if(e.getLevel()>0)
    manaGain=e.getLevel()*10+30;
}

void ShadowMage::DarkSphere::obtaindarknessIncreaseDS() {
    if(e.level>0)
        darknessIncreaseDS=e.level*1+2;
}


void ShadowMage::DarkSphere::Do() {
    if(darknessIncreaseDS==0  || !cast)
        obtaindarknessIncreaseDS();
    e.darkness=e.darkness+darknessIncreaseDS;
    e.damageTurn=10*e.level;
    cast=true;
}

void ShadowMage::DemoniPact::obtaindarknessMultiplier() {
    if(e.level<=2)
        darknessMultiplier=0;
    if(e.level<5 && e.level>2)
        darknessMultiplier=2;
    if(e.level<10 && e.level>5)
        darknessMultiplier=3;
    else
        darknessMultiplier=4;

}


void ShadowMage::DemoniPact::Do() {
    if(darknessMultiplier==0  || !cast)
        obtaindarknessMultiplier();
    e.darkness=e.darkness*darknessMultiplier;
    e.setMana(0);
    cast=true;
}


void ShadowMage::DarkEmbrace::obtaindarknessIncreaseDE() {
    if(e.level>0)
        darknessIncreaseDE=e.level*1+1;
}

void ShadowMage::DarkEmbrace::obtainmanaIncreaeDE() {
    if(e.level>0)
        manaIncreaseDE=e.level*30+30;
}


void ShadowMage::DarkEmbrace::Do() {
    if(darknessIncreaseDE==0 || !cast)
        obtaindarknessIncreaseDE();
    if(manaIncreaseDE==0 || !cast)
        obtainmanaIncreaeDE();
    if(!e.channelingPower)
        e.channelingPower=true;
    else{
        int m=e.getMana();
        int d=e.getDarkness();
        int tm=m+manaIncreaseDE;
        int td=d+darknessIncreaseDE;
        e.setDarkness(td);
        e.setMana(tm);
    }
    cast=true;
}



void ShadowMage::Annihilation::obtaindamagePerOrb() {
    damagePerOrb=e.level*25+25;
}

void ShadowMage::Annihilation::Do() {
    if(damagePerOrb==0 || !cast)
        obtaindamagePerOrb();
    e.damageTurn=damagePerOrb*e.darkness;
    //darkness reduction should be based on damage dealt
    e.darkness=0;
    cast=true;
}

void ShadowMage::NeverEndingNightmare::obtainorbToStun() {
    if(e.level<=2)
        orbToStun=15;
    if(e.level<5 &&e.level>2)
        orbToStun=10;
    if(e.level<10 &&e.level>=5)
        orbToStun=8;
    else
        orbToStun=5;



}

void ShadowMage::NeverEndingNightmare::Do() {
    if(orbToStun==0 || !cast)
        obtainorbToStun();
    int r=e.darkness%orbToStun;

    //TODO: apply a e.darkness/orbToStun to the enemy (enenmy not implemented yet)

    e.darkness=r;
    cast=true;
}

void ShadowMage::Defend() {
    if (darkness>0)
        darkness--;
    int a= getArmor();
    a+=8;
    setArmor(a);
}

void ShadowMage::LevelUp() {
    level++;
    maxHealth+=4;
    startingDarkness+=1;
}

void ShadowMage::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Defend" << std::endl;
    std::cout << "2. Use Meditate" << std::endl;
    std::cout << "3. Use Dark Sphere" << std::endl;
    std::cout << "4. Use Demonic Pact" << std::endl;
    std::cout << "5. Use Dark Embrace" << std::endl;
    std::cout << "6. Use Annihilation" << std::endl;
    std::cout << "7. Use Never Ending Nightmare" << std::endl;

    bool validchoice = false;
    while (!validchoice){
        std::cin >> choice;
        if(choice > 0 && choice < 8)
            validchoice = true;
    }

    switch (choice)
    {
        case 1:
            Defend();
            break;
        case 2:
            Meditate.Do();
            break;
        case 3:
            DarkSphere.Do();
            break;
        case 4:
            DemonicPact.Do();
            break;
        case 5:
            DarkEmbrace.Do();
            break;
        case 6:
            Annihilation.Do();
            break;
        case 7:
            NeverEndingNightmare.Do();
            break;
    }
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

