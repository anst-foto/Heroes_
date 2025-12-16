#ifndef HEROES_MAGEWEAPON_H
#define HEROES_MAGEWEAPON_H

#include "Weapon.h"

class MageWeapon : public Weapon {
public:
    MageWeapon(const std::string &name, unsigned int damage)
        : Weapon(WeaponType::Mage, name, damage) {
    }
};


#endif //HEROES_MAGEWEAPON_H