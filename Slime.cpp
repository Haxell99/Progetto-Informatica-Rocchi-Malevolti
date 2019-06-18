//
// Created by hueci on 18/06/2019.
//

#include "Slime.h"

void Slime::AcidicSpit::Do() {
    if(!cast)
        ObtainturnarmorDecrease();
    slime.DamageTurnSlime=10+4*slime.level+slime.strenght;


}

void Slime::AcidicSpit::ObtainturnarmorDecrease() {
    slime.armorDecrease=16+4*slime.level;

}

void Slime::EnergyDrain::Do() {
    if(!cast)
        ObtainstrenghDrain();
    slime.strenght+=slime.strenghtDrain;
    slime.armor+=slime.strenghtDrain;

}

void Slime::EnergyDrain::ObtainstrenghDrain() {
    slime.strenghtDrain=2*slime.level;
}

void Slime::SlimeCrush::Do() {
    int damage=20+2*slime.level;
    //Todo if(se il target ha meno di mezza vita il danno si triplica)

}
