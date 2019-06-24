//
// Created by Alessio Rocchi on 11/06/2019.
//

#include "Team.h"

Team::Team() {
    team=std::vector<Hero>;
    relicsObtained=std::vector<Relic>;
    gold=0;
    experience=0;
    expForLvlUp=200; //Randomic for now
}

Team::~Team() {
    for(int i = 0; i < team.size(); i++){
        delete team[i];
    }
    for(int i = 0; i < relicsObtained.size() ; i++){
        delete relicsObtained[i];
    }
}

void Team::LevelUp() {
    for (int i = 0; i < team.size(); i++) {
        team[i]->LevelUp();
    }
}
void Team::HandleCharacterDeath(Hero &hero) {
    //todo bisogna vedeere come farlo
}
