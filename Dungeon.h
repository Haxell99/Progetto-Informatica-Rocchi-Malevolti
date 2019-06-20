//
// Created by hueci on 21/06/2019.
//

#ifndef DRAGON_S_LAIR_DUNGEON_H
#define DRAGON_S_LAIR_DUNGEON_H

#include <vector>
#include "Event.h"


class Dungeon {
public:
    void CreateDungeon();
    //factory design pattern?
    //http://www.cplusplus.com/reference/vector/vector/ for vectors and their commands
    //Vector of smart pointers or vector of pointers (?)

private:
    int currentLevel;
    int numberOfLevels {16};
    std::vector<Event*> allGameEvents;



};


#endif //DRAGON_S_LAIR_DUNGEON_H
