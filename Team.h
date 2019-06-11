//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_TEAM_H
#define DRAGON_S_LAIR_TEAM_H

#include <vector>
#include "Hero.h"
#include "GenericRelic.h"

class Team{
public:
    Team();

    ~Team();

    void LevelUp();

    void HandleCharacterDeath(Hero& hero);

    std::vector<Hero> *getTeam() const {
        return team;
    }

    void setTeam(std::vector<Hero> *team) {
        Team::team = team;
    }

    std::vector<Relic> *getRelicsObtained() const {
        return relicsObtained;
    }

    void setRelicsObtained(std::vector<Relic> *relicsObtained) {
        Team::relicsObtained = relicsObtained;
    }

    int getGold() const {
        return gold;
    }

    void setGold(int gold) {
        Team::gold = gold;
    }

    int getExperience() const {
        return experience;
    }

    void setExperience(int experience) {
        Team::experience = experience;
    }

    int getExpForLvlUp() const {
        return expForLvlUp;
    }

    void setExpForLvlUp(int expForLvlUp) {
        Team::expForLvlUp = expForLvlUp;
    }

private:
    std::vector<Hero>* team;
    std::vector<Relic>* relicsObtained;
    int gold;
    int experience;
    int expForLvlUp;
};

#endif //DRAGON_S_LAIR_TEAM_H
