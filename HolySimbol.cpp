//
// Created by hueci on 17/06/2019.
//

#include "HolySimbol.h"

void HolySimbol::Apply(){
    int d=a.getHeal();
    d=d/100*150;
    a.setHeal(d);
}
