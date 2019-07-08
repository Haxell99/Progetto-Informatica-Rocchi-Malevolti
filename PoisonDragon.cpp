//
// Created by hueci on 08/07/2019.
//

#include "PoisonDragon.h"

void PoisonDragon::ParalyzingVenom::Do() {
    //TODO apply paralysis 60 to an enemy
}

void PoisonDragon::PoisonBreath::Do() {
    //TODO aoe dmg+ poison
}

void PoisonDragon::ThoughScales::Do() {
    if(brokenScales)
        greendragon.armor+=greendragon.level*2;
    else
        greendragon.armor+=greendragon.level*4;
}

void PoisonDragon::Neurotoxin::Do() {
    //TODO triples poison on enemies
}
