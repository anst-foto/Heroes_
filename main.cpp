#include <iostream>
#include <string>

#include "Heroes/Hero.h"
#include "Heroes/Mage.h"
#include "Heroes/Warrior.h"

#include "Weapons/Weapon.h"
#include "Weapons/MageWeapon.h"
#include "Weapons/WarriorWeapon.h"
#include "Weapons/UniversalWeapon.h"

#include  "Print.h"

int main() {
    Hero* hero = new Mage("Mage");
    Hero* enemy = new Warrior("Warrior");

    Weapon* weapon1 = new UniversalWeapon("weapon1",10);
    Weapon* weapon2 = new MageWeapon("weapon2",10);
    Weapon* weapon3 = new WarriorWeapon("weapon3",10);

    do {

        hero->setWeapon(weapon2);
        std::cout << "HERO: " << std::endl;
        printHero(hero);
        printWeapon(hero->getWeapon());
        std::cout << "--- --- ---" << std::endl;

        std::cout << "HERO: " << std::endl;
        printHero(enemy);
        std::cout << "--- --- ---" << std::endl;

        if (!hero->isAlive() || !enemy->isAlive())
            break;

        hero->attack(enemy);
        enemy->attack(hero);

        bool result = enemy->setWeapon(weapon2);
        if (!result) {
            std:: cout << "Enemy has no weapon" << std::endl;
            enemy->setWeapon(weapon1);
        }
    } while (true);


    return 0;
}