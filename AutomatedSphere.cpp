~//
// Created by hueci on 18/06/2019.
//

#include "AutomatedSphere.h"

void AutomatedSphere::DoubleDefense::Do() {
    sphere.metallicize=sphere.metallicize*2;

}

void AutomatedSphere::CarefulStrike::Do() {
    if(!cast)
        ObtainarmorIncrease();
    sphere.DamageTurnSphere=2*sphere.level+5;
    sphere.armor+=sphere.armorIncrease;

}

void AutomatedSphere::CarefulStrike::ObtainarmorIncrease() {
    sphere.armorIncrease=sphere.level*3+1;
}

void AutomatedSphere::Disintegrate::Do() {
    sphere.DamageTurnSphere=sphere.metallicize;
}
