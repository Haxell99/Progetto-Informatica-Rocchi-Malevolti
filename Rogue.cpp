//
// Created by hueci on 17/06/2019.
//

#include "Rogue.h"

void Rogue::Attack() {
    damageTurn=5*level+strenght;
}

void Rogue::Defend() {
    armor+=3*level;
}

void Rogue::LevelUp() {
    level++;
    maxHealth+=4;
}

void Rogue::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Shadow Fade" << std::endl;
    std::cout << "4. Use Poisoned Blade" << std::endl;
    std::cout << "5. Use Backstab" << std::endl;
    std::cout << "6. Use Thousand Cuts" << std::endl;
    std::cout << "7. Use Cloack and Dagger" << std::endl;
    std::cout << "8. Use Eviscerate" << std::endl;

    bool validchoice = false;
    while (!validchoice){
        std::cin >> choice;
        if(choice > 0 && choice < 9)
            validchoice = true;
    }

    switch (choice)
    {
        case 1:
            Attack();
            break;
        case 2:
            Defend();
            break;
        case 3:
            ShadowFade.Do();
            break;
        case 4:
            PoisonedBlade.Do();
            break;
        case 5:
            Backstab.Do();
            break;
        case 6:
            ThousandCuts.Do();
            break;
        case 7:
            CloackandDagger.Do();
            break;
        case 8:
            Eviscerate.Do();
            break;
    }
}

void Rogue::ShadowFade::Do() {
    g.protect=true;
    g.hidden=true;

}

void Rogue::PoisonedBlade::ObtainvenomDamage() {
    if(g.level<2)
        g.venomDamage=3;
    if(g.level<=5 && g.level>2)
        g.venomDamage=6;
    if(g.venomDamage<=10 && g.level>5)
        g.venomDamage=9;
    else
        g.venomDamage=12;

}


void Rogue::PoisonedBlade::Do() {
    if(g.venomDamage==0 || !cast) {
        ObtainvenomDamage();
        g.poisonedB = true;
    }
    else if(g.poisonedB)
        g.venomDamage=g.venomDamage+g.venomDamage/3;

    if(g.hidden)
        g.hidden=false;
}


void Rogue::Backstab::Do() {
    int d=10+g.strenght+g.venomDamage;
    if(g.hidden) {
        d += 8;
        d=d*2;
        g.hidden=false;
    }
    g.damageTurn=d;

}

void Rogue::ThousandCuts::Do() {
    int d=2*(5+g.strenght+g.venomDamage);
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.damageTurn=d;

}

void Rogue::CloakandDagger::Do() {
    int d=(5+g.strenght+g.venomDamage);
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.armor=g.armor+10;
    g.damageTurn=d;


}

void Rogue::Eviscerate::Do() {
    int d=6+g.strenght+g.venomDamage;
    //TODO if enemy target has low health deals more damage
    if(g.hidden){
        d=d*2;
        g.hidden=false;
    }
    g.damageTurn=d;

}
