//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_SPELL_H
#define DRAGON_S_LAIR_SPELL_H

#include "Ability.h"

class Spell : public Ability{
public:
    int getManaCost() const {
        return manaCost;
    }

    void setManaCost(int manaCost) {
        Spell::manaCost = manaCost;
    }
private:
    int manaCost;
};

#endif //DRAGON_S_LAIR_SPELL_H
