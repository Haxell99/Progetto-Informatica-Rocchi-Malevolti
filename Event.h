//
// Created by Alessio Rocchi on 11/06/2019.
//

#ifndef DRAGON_S_LAIR_EVENT_H
#define DRAGON_S_LAIR_EVENT_H

#include <iostream>

class Event{
public:
    Event();

    ~Event();

    virtual void Initialize();

    virtual void End();

    const std::string &getEventType() const {
        return eventType;
    }

private:
    std::string eventType;
};

#endif //DRAGON_S_LAIR_EVENT_H
