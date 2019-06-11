//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_BOSS_H
#define DRAGON_S_LAIR_BOSS_H

#include "Enemy.h"

class Boss : public Enemy{
public:
    static void ChooseBoss();

private:
    bool isBoss{true};
};

#endif //DRAGON_S_LAIR_BOSS_H
