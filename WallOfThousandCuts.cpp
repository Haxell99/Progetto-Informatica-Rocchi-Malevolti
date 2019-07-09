//
// Created by hueci on 09/07/2019.
//

#include "WallOfThousandCuts.h"

void WallOfThousandCuts::MoreKnives::Do() {
    angrywall.reposte+=angrywall.reposte/2;

}

void WallOfThousandCuts::StormOfSteel::Do() {
    //TODO apply bleed
    angrywall.DamageTurnWall=angrywall.reposte/2;
}


void WallOfThousandCuts::Defend::Do() {
    angrywall.armor+=angrywall.reposte+angrywall.level+4;
}
