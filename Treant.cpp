//
// Created by hueci on 17/06/2019.
//

#include "Treant.h"

void Treant::MinorTaunt::Do() {
    //TODO: implement taunt mechs

}

void Treant::DeepRoots::Do() {
    if(!cast)
        ObtainturnHealing();
    if(!c.immobile){
        c.immobile=true;
    }
}

void Treant::DeepRoots::ObtainturnHealing() {
    if(c.level<2)
        c.turnHealing=4;
    if(c.level>=2 && c.level<5)
        c.turnHealing=6;
    if(c.level>=5 && c.level<10)
        c.turnHealing=8;
    else
        c.turnHealing=12;

}

void Treant::DeepRoots::EOTDeepRoots(){
    //TODO
}

void Treant::ParasiticSeed::Do() {
    if(!cast){

    }

}

void Treant::ParasiticSeed::ObtainplantAbsorbtion() {
    if(c.level<2)
        c.plantAbsorbtion=4;
    if(c.level>=2 && c.level<5)
        c.plantAbsorbtion=6;
    if(c.level>=5 && c.level<10)
        c.plantAbsorbtion=8;
    else
        c.plantAbsorbtion=12;
}


void Treant::HealingLeaf::Do() {
    //TODO Missing heal on allies
    //int healHL=c.level*5;

}

void Treant::EngunlfingLianas::Do() {
    //TODO Missing enemy access
    int paralysisEL=10+3*c.level;

}

void Treant::ForestAid::Do() {
    c.plantAbsorbtion=c.plantAbsorbtion/100*150;
    c.turnHealing=c.turnHealing/100*150;
    //TODO: heal allies
    int healFA=c.level*4+40;



}

void Treant::Attack() {
    damageTurn=1*level+strenght;
}

void Treant::Defend() {
    armor+=5*level;
}

void Treant::LevelUp() {
    level++;
    maxHealth+=5;
}
