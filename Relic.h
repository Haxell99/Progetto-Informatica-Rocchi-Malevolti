//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_RELIC_H
#define DRAGON_S_LAIR_RELIC_H

#include <iostream>

class Relic{
public:
    Relic();

    ~Relic();

    virtual void Apply();

    const std::string &getName() const {
        return name;
    }

    int getCost() const {
        return cost;
    }

    const std::string &getDescription() const {
        return description;
    }

private:
    std::string name;
    int cost;
    std::string description;
};

#endif //DRAGON_S_LAIR_RELIC_H
