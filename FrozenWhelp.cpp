//
// Created by hueci on 09/07/2019.
//

#include "FrozenWhelp.h"

void FrozenWhelp::IceBreath::Do() {
    //TODO stun se dmg>armor del nemico
    whelp.DamageTurnWhelp=whelp.level*3;


}

void FrozenWhelp::Crystallize::Do() {
    whelp.protect=true;

}


void FrozenWhelp::WinterWind::Do() {
    //TODO aoe dmg
    whelp.DamageTurnWhelp=whelp.level+5;

}
