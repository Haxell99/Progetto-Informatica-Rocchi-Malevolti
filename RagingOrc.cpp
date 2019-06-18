//
// Created by hueci on 18/06/2019.
//

#include "RagingOrc.h"

void RagingOrc::Rage::Do() {
    if(!cast){
        r.rage=true;
        ObtainstrenghtIncrease();
    }
    r.strenght+=r.strenghtIncrease;

}

void RagingOrc::Rage::ObtainstrenghtIncrease() {
    r.strenghtIncrease=3+r.level;

}

void RagingOrc::Bash::Do() {
    r.DamageTurnOrc=2*r.strenght;
}

void RagingOrc::SliceAndDice::Do() {
    //TODO aoe dmg
    r.DamageTurnOrc=(5+r.strenght)*r.numberAttacks;
    r.numberAttacks++;
}




