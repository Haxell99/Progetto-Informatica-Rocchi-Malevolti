//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_HERO_H
#define DRAGON_S_LAIR_HERO_H

#include "GameCharacter.h"

class Hero : public GameCharacter{
public:
    Hero();

    ~Hero() override;

    virtual void Defend()=0;

    const std::string &getHeroType() const {
        return heroType;
    }

    void setHeroType(const std::string &heroType) {
        Hero::heroType = heroType;
    }

    int getManaIncrease() const {
        return manaIncrease;
    }

    void setManaIncrease(int manaIncrease) {
        Hero::manaIncrease = manaIncrease;
    }

    int getHealtIncrese() const {
        return healtIncrese;
    }

    void setHealtIncrese(int healtIncrese) {
        Hero::healtIncrese = healtIncrese;
    }

    int getStrenghtIncrease() const {
        return strenghtIncrease;
    }

    void setStrenghtIncrease(int strenghtIncrease) {
        Hero::strenghtIncrease = strenghtIncrease;
    }

    int getMana() const {
        return mana;
    }

    void setMana(int mana) {
        Hero::mana = mana;
    }

    bool isAlive() const {
        return alive;
    }

    void setAlive(bool alive) {
        Hero::alive = alive;
    }

private:
    std::string heroType;
    int manaIncrease;
    int healtIncrese;
    int strenghtIncrease;
    int mana;
    bool alive;
};

#endif //DRAGON_S_LAIR_HERO_H

