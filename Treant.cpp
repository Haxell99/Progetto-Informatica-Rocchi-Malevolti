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


