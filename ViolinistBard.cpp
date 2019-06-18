//
// Created by hueci on 18/06/2019.
//

#include "ViolinistBard.h"

void ViolinistBard::LesserCureWounds::Do() {
    //TODO
}

void ViolinistBard::SymphonyOfPower::Do() {
    //TODO: missing ally support
    int strenghtSOP= l.level*1+1;

}

void ViolinistBard::SymphonyOfSibelius::Do() {
    int manaregenSOS= l.level*5+15;
    //TODO

}

void ViolinistBard::SymphonyOfFortitude::Do() {
    //TODO ally
    int armorSOF= l.level*2+8;

}

void ViolinistBard::SymphonyOfEstro::Do() {
    if (!cast) {
        ObtainGlobes();
        cast = true;
    }

    //TODO ally
    if(l.remainingGlobes>0)
        //do something
        l.remainingGlobes--;
}

void ViolinistBard::SymphonyOfEstro::ObtainGlobes() {
    if(l.level<=2)
        l.globes=1;
    if(l.level<=5 && l.level>2)
        l.globes=2;
    if(l.level<=10 && l.level>5)
        l.globes=3;
    else
        l.globes=4;
    l.remainingGlobes=l.globes;

}

void ViolinistBard::Caprice::Do() {

}
