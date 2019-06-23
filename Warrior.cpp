//
// Created by hueci on 17/06/2019.
//

#include "Warrior.h"

void Warrior::Reposte::Do() {
    if(!cast) {
        h.currentReposte = h.reposte;
        Obtainreposte();
    }
    else
        h.currentReposte=h.currentReposte+h.reposte;
}

void Warrior::Reposte::Obtainreposte() {
    if(h.level<2)
        h.reposte=4;
    if(h.level<5 &&h.level>=2)
        h.reposte=6;
    if(h.level<10 && h.level>=5)
        h.reposte=8;
    else
        h.reposte=10;
}


void Warrior::MajorTaunt::Do() {
    //TODO: enemy taunted 1 condition

}


void Warrior::Warmaster::Do() {
    h.armor=h.armor+h.reposte;
}

void Warrior::RelentlessAttack::Do() {
    int d=h.reposte/2;
    h.reposte=h.reposte-d;
    h.damageTurn=2*d+h.strenght;

}


void Warrior::TrueResolve::Do() {
    if(h.reposte>=8)
        h.poisoned=0;
    if(h.reposte>=16)
        h.bleed=0;
    if(h.reposte>=24)
        h.paralyzed=false;
    if(h.reposte>=32){
        h.poisoned=0;
        h.paralyzed=false;
        h.bleed=0;
    }
}


void Warrior::ForceOfWill::Do() {
    Obtaininvincible();
    h.forceofwill=true;


}

void Warrior::ForceOfWill::Obtaininvincible() {
    if(h.level<2)
        h.invincible=50;
    if(h.level<5 &&h.level>=2)
        h.invincible=45;
    if(h.level<10 && h.level>=5)
        h.invincible=40;
    else
        h.invincible=30;


}

void Warrior::Attack() {
    damageTurn=4*level+strenght;
}

void Warrior::Defend() {
    armor+=5*level;
}

void Warrior::LevelUp() {
    level++;
    if(level==3 || level==6 || level==9)
        startingReposte+=3;
    maxHealth+=5;
}

void Warrior::RecieveDamage(int damage) {
    if(forceofwill && damage>invincible)
        damage=invincible;
    GameCharacter::RecieveDamage(damage);
}
