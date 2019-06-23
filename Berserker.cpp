//
// Created by hueci on 16/06/2019.
//

#include "Berserker.h"

void Berserker::Inflame::ObtainstrenghtIncrease() {
    if(f.level<=2)
        strenghtIncrease=4;
    if(f.level<=5 && f.level>2)
        strenghtIncrease=6;
    if(f.level<=10 && f.level>5)
        strenghtIncrease=8;
    else
        strenghtIncrease=10;

}

void Berserker::Inflame::Do() {
    if(strenghtIncrease==0 || !cast)
        ObtainstrenghtIncrease();

    f.strenght=f.strenght+strenghtIncrease;
    cast=true;
}

void Berserker::GreviousWound::ObtainbleedGW() {
    if(!f.level)
        bleedGW=f.level+1;

}

void Berserker::GreviousWound::Do() {
    if(bleedGW==0 || !cast)
        ObtainbleedGW();
    f.damageTurn=2*(3+f.strenght);
    //TODO: come visto prima, manca da assegnare bleedGW a un nemico
    cast=true;
}

//Enters a rage state, cannot defend, gains access to Melter and Harvest soul, abilities that cost health, and has an upgraded rampage, that starts costing health too.\\n\"\n"
//              Gains lifesteal
void Berserker::BloodThirst::Do() {
    if(!cast)
        Obtainlifesteal();
    if(!f.bloodthirst)
        f.bloodthirst=true;
    else
        f.bloodthirst= false;
    cast=true;
}

void Berserker::BloodThirst::Obtainlifesteal() {
    if(f.level<=2)
        f.lifestealPercentage=5;
    if(f.level<=5 && f.level>2)
        f.lifestealPercentage=10;
    if(f.level<=10 && f.level>5)
        f.lifestealPercentage=15;
    else
        f.lifestealPercentage=20;
}




void Berserker::Melter::Do() {
    //TODO: pt. 3, nemici non implementati, manca un riferimento al nemico attuale
    //Fa il danno minore fra una percentuale della vita del bersaglio e tutta la sua armatura.
    // || !cast

    cast=true;

}


void Berserker::Rampage::Do() {
    if(!cast){
        f.currentRampage=f.startingRampage+f.rampageIncrease;
        cast=true;
    }

    if(!f.bloodthirst) {
        f.damageTurn = 8 + f.currentRampage;
        f.currentRampage = f.currentRampage + f.rampageIncrease;
    }
    else{
        f.damageTurn= 10 + f.currentRampage;
        f.currentRampage=f.currentRampage+f.strenght+f.rampageIncrease;
        f.Lifesteal(f.damageTurn);
    }
    cast=true;

}



void Berserker::Lifesteal(int dmg) {
    int d=dmg/100*lifestealPercentage;
    if(healt+d>maxHealth)
        healt=maxHealth;
    else
        healt=healt+d;
}

void Berserker::Attack() {
    damageTurn=10+strenght;
    if(bloodthirst)
        Lifesteal(damageTurn);

}

void Berserker::Defend() {
    armor+=2*level;
}

void Berserker::LevelUp() {
    level++;
    maxHealth+=5;
    startingStrenght+=1;
}

void Berserker::ChooseAction() {
    int choice;

    std::cout << "Choose what to do:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Use Rampage" << std::endl;
    std::cout << "4. Use Inflame" << std::endl;
    std::cout << "5. Use Grevious Wound" << std::endl;
    std::cout << "6. Go in Bloodthirst mode" << std::endl;
    if(bloodthirst) {
        std::cout << "7. Use Melter" << std::endl;
        std::cout << "8. Use Harvest Soul" << std::endl;
    }

    bool validchoice= false;
    while (!validchoice){
        std::cin >> choice;
        if(choice>0 && choice<9) {
            if (bloodthirst)
                validchoice= true;
            else
                if(choice>0 && choice<7)
                    validchoice=true;
        }
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
            //Rampage::Do();
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }

}

void Berserker::HarvestSoul::Do() {
    if(f.bloodthirst){
        f.damageTurn=4*(8+f.strenght);
        f.Lifesteal(f.damageTurn);
        //TODO: if damage kills the target gain permanent damage on rampage
        //if(currentEnemy.health<damageTurnBerserker)
        //rampageIncrease++
        cast=true;
    }

}

