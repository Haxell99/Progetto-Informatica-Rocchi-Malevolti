//
// Created by hueci on 21/06/2019.
//

#include "EtherealAssassin.h"

void EtherealAssassin::DeathMark::Do() {
    //TODO: mark an enemy
    if(!cast)
        assassin.markedEnemy=true;
    assassin.markDamage=assassin.strenght+2*assassin.level;
}





void EtherealAssassin::EtherealForm::Do() {
    assassin.protect=true;
    //TODO remove the status next turn
    if(assassin.marked!= nullptr){
        //TODO stun the marked target and damage him
        assassin.DamageTurnAssassin=(assassin.markDamage);
    }


}

void EtherealAssassin::DeathWhisper::Do() {
    assassin.DamageTurnAssassin=assassin.strenght+10+assassin.level;
    if(assassin.markedEnemy){
        assassin.DamageTurnAssassin+=assassin.markDamage;
        assassin.DamageTurnAssassin*=2;
    }

}
