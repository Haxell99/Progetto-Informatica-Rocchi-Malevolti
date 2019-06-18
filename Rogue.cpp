//
// Created by hueci on 17/06/2019.
//

#include "Rogue.h"

void Rogue::Attack() {


}

void Rogue::ShadowFade::Do() {
    g.protect=true;
    g.hidden=true;

}

void Rogue::poisonedBlade::ObtainvenomDamage() {
    if(g.level<2)
        g.venomDamage=3;
    if(g.level<=5 && g.level>2)
        g.venomDamage=6;
    if(g.venomDamage<=10 && g.level>5)
        g.venomDamage=9;
    else
        g.venomDamage=12;

}


void Rogue::poisonedBlade::Do() {
    if(g.venomDamage==0 || !cast) {
        ObtainvenomDamage();
        g.poisonedB = true;
    }
    else if(g.poisonedB)
        g.venomDamage=g.venomDamage+g.venomDamage/3;

    if(g.hidden)
        g.hidden=false;
}


void Rogue::Backstab::Do() {
    int d=10+g.strenght+g.venomDamage;
    if(g.hidden) {
        d += 8;
        d=d*2;
        g.hidden=false;
    }
    g.DamageTurnRogue=d;

}

void Rogue::ThousandCuts::Do() {
    int d=2*(5+g.strenght+g.venomDamage);
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.DamageTurnRogue=d;

}

void Rogue::CloakandDagger::Do() {
    int d=(5+g.strenght+g.venomDamage);
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.armor=g.armor+10;
    g.DamageTurnRogue=d;


}

void Rogue::Eviscerate::Do() {
    int d=6+g.strenght+g.venomDamage;
    //TODO if enemy target has low health deals more damage
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.DamageTurnRogue=d;

}
