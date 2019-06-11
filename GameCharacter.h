//
// Created by Rocchi on 31/05/2019.
//
#include <iostream>
#ifndef DRAGON_S_LAIR_GAMECHARACTER_H
#define DRAGON_S_LAIR_GAMECHARACTER_H

#endif //DRAGON_S_LAIR_GAMECHARACTER_H

class GameCharacter {
public:
    GameCharacter();

    ~GameCharacter();

    virtual void Attack()=0;

    virtual void RecieveDamage()=0;

    virtual void UseAbility()=0;

    int getHealt() const {
        return healt;
    }

    void setHealt(int healt) {
        GameCharacter::healt = healt;
    }

    int getArmor() const {
        return armor;
    }

    void setArmor(int armor) {
        GameCharacter::armor = armor;
    }

    int getStrenght() const {
        return strenght;
    }

    void setStrenght(int strenght) {
        GameCharacter::strenght = strenght;
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int level) {
        GameCharacter::level = level;
    }

    int getStartingArmor() const {
        return startingArmor;
    }

    void setStartingArmor(int startingArmor) {
        GameCharacter::startingArmor = startingArmor;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        GameCharacter::name = name;
    }

    bool isPoisonImmunity() const {
        return poisonImmunity;
    }

    void setPoisonImmunity(bool poisonImmunity) {
        GameCharacter::poisonImmunity = poisonImmunity;
    }

    bool isBleedImmunity() const {
        return bleedImmunity;
    }

    void setBleedImmunity(bool bleedImmunity) {
        GameCharacter::bleedImmunity = bleedImmunity;
    }

    bool isParalyzedImmunity() const {
        return paralyzedImmunity;
    }

    void setParalyzedImmunity(bool paralyzedImmunity) {
        GameCharacter::paralyzedImmunity = paralyzedImmunity;
    }

    bool isStunImmunity() const {
        return stunImmunity;
    }

    void setStunImmunity(bool stunImmunity) {
        GameCharacter::stunImmunity = stunImmunity;
    }

    int getPoisoned() const {
        return poisoned;
    }

    void setPoisoned(int poisoned) {
        GameCharacter::poisoned = poisoned;
    }

    int getBleed() const {
        return bleed;
    }

    void setBleed(int bleed) {
        GameCharacter::bleed = bleed;
    }

    int getParalyzed() const {
        return paralyzed;
    }

    void setParalyzed(int paralyzed) {
        GameCharacter::paralyzed = paralyzed;
    }

    int getStunned() const {
        return stunned;
    }

    void setStunned(int stunned) {
        GameCharacter::stunned = stunned;
    }

    bool isProtect() const {
        return protect;
    }

    void setProtect(bool protect) {
        GameCharacter::protect = protect;
    }

private:
    int healt;
    int armor;
    int strenght;
    int level;
    int startingArmor;
    std::string name;
    bool poisonImmunity;
    bool bleedImmunity;
    bool paralyzedImmunity;
    bool stunImmunity;
    int poisoned;
    int bleed;
    int paralyzed;
    int stunned;
    bool protect;
};