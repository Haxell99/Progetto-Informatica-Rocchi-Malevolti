//
// Created by hueci on 18/06/2019.
//

#include "Fungus.h"

//TODO implement overheal

void Fungus::DeepRoots::Do() {
    if(!cast)
        ObtainturnHealing();
    if(!fungus.immobile){
        fungus.immobile=true;
    }
}

void Fungus::DeepRoots::ObtainturnHealing() {
    if(fungus.level<2)
        fungus.turnHealing=4;
    if(fungus.level>=2 && fungus.level<5)
        fungus.turnHealing=6;
    if(fungus.level>=5 && fungus.level<10)
        fungus.turnHealing=8;
    else
        fungus.turnHealing=12;
}

void Fungus::DeepRoots::EOTDeepRoots() {
    //TODO

}

void Fungus::PoisonedSpore::Do() {
    //TODO implement aoe damage on allies
    if(!cast)
        Obtainpoison();
    int poisonPS=fungus.poison;


}

void Fungus::PoisonedSpore::Obtainpoison() {
    fungus.poison=fungus.level+3;
}

void Fungus::LesserParalysis::Do() {
    //TODO implement allies
    if(!cast)
        Obtainparalysis();


}

void Fungus::LesserParalysis::Obtainparalysis() {
    fungus.paralysis=fungus.level*2+5;

}
