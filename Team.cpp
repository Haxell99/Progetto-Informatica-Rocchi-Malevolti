//
// Created by Alessio Rocchi on 11/06/2019.
//

#include "Team.h"

Team::Team() {
    team=new std::vector<Hero>;
    relicsObtained=new std::vector<Relic>;
    gold=0;
    experience=0;
    expForLvlUp=200; //Randomic for now
}

Team::~Team() {
    delete team;
    delete relicsObtained;
}

void Team::LevelUp() {
    for (auto i = team->begin(); i < team->end() ; i++) {
        //ToDo avevo pensato che visto che ognuno cambia a modo suo perchè non si fa che ogni hero c ha il suo lvlUp che qui se no ci si sta un mese a farlo
    }
}
void Team::HandleCharacterDeath(Hero &hero) {
    //todo bisogna vedeere come farlo
}
