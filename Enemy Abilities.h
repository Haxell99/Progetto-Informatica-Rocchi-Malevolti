//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_ENEMY_ABILITIES_H
#define DRAGON_S_LAIR_ENEMY_ABILITIES_H

#include "Ability.h"
class EnemyAbilities : public Ability{
public:
    bool isAoe() const {
        return aoe;
    }

    void setAoe(bool aoe) {
        EnemyAbilities::aoe = aoe;
    }
private:
    bool aoe;
};

#endif //DRAGON_S_LAIR_ENEMY_ABILITIES_H
