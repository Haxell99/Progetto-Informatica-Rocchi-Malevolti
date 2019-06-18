//
// Created by hueci on 18/06/2019.
//

#include "FireMage.h"

void FireMage::Fireball::Do() {
    //TODO Implement aoe dmg
    fire.DamageTurnMage=6+2*fire.level;
}


void FireMage::FireShield::Do() {
    if(!cast){
        ObtainarmorIncrease();
        ObtainreposteIncrease();
    }

    fire.reposte+=fire.reposteIncrease;
    fire.armor+=fire.armorIncrease;
}

void FireMage::FireShield::ObtainarmorIncrease() {
    fire.armorIncrease=fire.level*2;


}

void FireMage::FireShield::ObtainreposteIncrease() {
    fire.reposteIncrease=fire.level/2;
}

void FireMage::RingOfFire::Do() {
    fire.DamageTurnMage=3*fire.level;

}
