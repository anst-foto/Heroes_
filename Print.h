#ifndef HEROES_PRINT_H
#define HEROES_PRINT_H

#include <iostream>
#include <string>

#include "Heroes/Hero.h"
#include "Weapons/Weapon.h"

void printHero(Hero* hero) {
    std::cout << "Name: " << hero->getName() << std::endl;
    std::cout << "Health: " << hero->getHealth() << std::endl;
    std::cout << "Damage: " << hero->getDamage() << std::endl;
}

void printWeapon(Weapon* weapon) {
    std::cout << "Name: " << weapon->getName() << std::endl;
    std::cout << "Damage: " << weapon->getDamage() << std::endl;
}

#endif //HEROES_PRINT_H