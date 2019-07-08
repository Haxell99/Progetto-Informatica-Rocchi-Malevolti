//
// Created by hueci on 08/07/2019.
//

#include "Bandit.h"


void Bandit::GlassKnife::Do() {
    if(!band.brokenKnife)
        //call fist instead
    band.DamageTurnBandit=band.level*2+band.incomingBreak;
    band.incomingBreak--;
    if(band.incomingBreak<=0)
        band.brokenKnife=true;
}

void Bandit::SmokeBomb::Do() {
    band.protect=true;
}

void Bandit::Fist::Do() {
    band.DamageTurnBandit=band.level+2;
}
