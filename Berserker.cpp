//
// Created by hueci on 16/06/2019.
//

#include "Berserker.h"

void Berserker::Inflame::ObtainstrenghtIncrease() {
    if(f.level<2)
        strenghtIncrease=4;
    if(f.level<5)
        strenghtIncrease=6;
    if(f.level<10)
        strenghtIncrease=8;
    else
        strenghtIncrease=10;

}

void Berserker::Inflame::Do() {
    if(strenghtIncrease==0)
        ObtainstrenghtIncrease();

    f.strenght=f.strenght+strenghtIncrease;
}

void Berserker::GreviousWound::ObtainbleedGW() {
    if(!f.level)
        bleedGW=f.level+1;

}

void Berserker::GreviousWound::Do() {
    if(bleedGW==0)
        ObtainbleedGW();
    damageTurnBerserker=2*(3+f.strenght);
    //TODO: come visto prima, manca da assegnare bleedGW a un nemico

}

//Enters a rage state, cannot defend, gains access to Melter and Harvest soul, abilities that cost health, and has an upgraded rampage, that starts costing health too.\\n\"\n"
//              Gains lifesteal
void Berserker::BloodThirst::Do() {
    Obtainlifesteal();
    if(!f.bloodthirst)
        f.bloodthirst;
    else
        f.bloodthirst= false;
}

void Berserker::BloodThirst::Obtainlifesteal() {
    if(f.level<2)
        f.lifestealPercentage=5;
    if(f.level<5)
        f.lifestealPercentage=10;
    if(f.level<10)
        f.lifestealPercentage=15;
    else
        f.lifestealPercentage=20;
}




void Berserker::Melter::Do() {
    //TODO: pt. 3, nemici non implementati, manca un riferimento al nemico attuale
    //Fa il danno minore fra una percentuale della vita del bersaglio e tutta la sua armatura.

}


void Berserker::Rampage::Do() {
    if(!cast){
        f.currentRampage=f.startingRampage+f.rampageIncrease;
        cast=true;
    }

    if(!f.bloodthirst) {
        damageTurnBerserker = 8 + f.currentRampage;
        f.currentRampage = f.currentRampage + f.rampageIncrease;
    }
    else{
        damageTurnBerserker= 10 + f.currentRampage;
        f.currentRampage=f.currentRampage+f.strenght+f.rampageIncrease;
        f.Lifesteal(damageTurnBerserker);
    }

}



void Berserker::Lifesteal(int dmg) {
    int d=dmg/100*lifestealPercentage;
    if(healt+d>maxHealth)
        healt=maxHealth;
    else
        healt=healt+d;
}

void Berserker::HarvestSoul::Do() {
    if(f.bloodthirst){
        damageTurnBerserker=4*(8+f.strenght);
        f.Lifesteal(damageTurnBerserker);
        //TODO: if damage kills the target gain permanent damage on rampage
        //if(currentEnemy.health<damageTurnBerserker)
        //rampageIncrease++
    }

}

