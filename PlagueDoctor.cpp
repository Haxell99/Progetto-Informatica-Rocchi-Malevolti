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
