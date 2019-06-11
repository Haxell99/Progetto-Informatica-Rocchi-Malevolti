//
// Created by Alessio Rocchi on 11/06/2019.
//

#include <iostream>

#ifndef DRAGON_S_LAIR_ABILITY_H
#define DRAGON_S_LAIR_ABILITY_H

class Ability {
public:
    Ability();

    virtual ~Ability()=0;

    bool isEnabled() const {
        return enabled;
    }

    void setEnabled(bool enabled) {
        Ability::enabled = enabled;
    }

    const std::string &getDescription() const {
        return description;
    }

    void setDescription(const std::string &description) {
        Ability::description = description;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Ability::name = name;
    }

    bool isUltimate() const {
        return ultimate;
    }

    void setUltimate(bool ultimate) {
        Ability::ultimate = ultimate;
    }

private:
    bool enabled;
    std::string description;
    std::string name;
    bool ultimate;
};

#endif //DRAGON_S_LAIR_ABILITY_H

