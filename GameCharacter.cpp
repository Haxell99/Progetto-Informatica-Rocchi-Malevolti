//
// Created by Alessio Rocchi on 23/06/2019.
//
#include "GameCharacter.h"

void GameCharacter::RecieveDamage(int damage) {
    if(damage>armor){
        healt=healt-(damage-armor);
        armor=0;
    }
    else
        armor-=damage;
}
