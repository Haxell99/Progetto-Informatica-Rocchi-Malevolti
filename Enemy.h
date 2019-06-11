//
// Created by Alessio Rocchi on 10/06/2019.
//

#ifndef DRAGON_S_LAIR_ENEMY_H
#define DRAGON_S_LAIR_ENEMY_H

#endif //DRAGON_S_LAIR_ENEMY_H

#include "GameCharacter.h"

class Enemy : public GameCharacter{
public:
    Enemy();

    virtual ~Enemy()=0;

    int getGivenGold() const {
        return givenGold;
    }

    void setGivenGold(int givenGold) {
        Enemy::givenGold = givenGold;
    }

    int getGivenExp() const {
        return givenExp;
    }

    void setGivenExp(int givenExp) {
        Enemy::givenExp = givenExp;
    }

    bool isTaunted() const {
        return taunted;
    }

    void setTaunted(bool taunted) {
        Enemy::taunted = taunted;
    }

    const std::string &getDescription() const {
        return description;
    }

    void setDescription(const std::string &description) {
        Enemy::description = description;
    }

private:
    int givenGold;
    int givenExp;
    bool taunted;
    std::string description;
};