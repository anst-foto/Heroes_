#ifndef HEROES_WARRIORWEAPON_H
#define HEROES_WARRIORWEAPON_H

#include "Weapon.h"

class WarriorWeapon : public Weapon {
public:
    WarriorWeapon(const std::string& name, unsigned int damage)
        : Weapon(WeaponType::Warrior, name, damage) {
    }
};


#endif //HEROES_WARRIORWEAPON_H