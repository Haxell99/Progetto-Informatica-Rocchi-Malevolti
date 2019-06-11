//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_SPECIFICRELIC_H
#define DRAGON_S_LAIR_SPECIFICRELIC_H

#include "Relic.h"

class SpecificRelic : public Relic{
public:
    const std::string &getUniqueHero() const {
        return uniqueHero;
    }
private:
    std::string uniqueHero;
};

#endif //DRAGON_S_LAIR_SPECIFICRELIC_H
