//
// Created by hueci on 17/06/2019.
//

#ifndef DRAGON_S_LAIR_HOLYSIMBOL_H
#define DRAGON_S_LAIR_HOLYSIMBOL_H


#include "SpecificRelic.h"
#include "Relic.h"
#include "Cleric.h"
#include "GameCharacter.h"
#include "Hero.h"

class HolySimbol : SpecificRelic {
public:
    HolySimbol();
    void Apply()override;

private:
    Cleric &a;


};


#endif //DRAGON_S_LAIR_HOLYSIMBOL_H
