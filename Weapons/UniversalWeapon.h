#ifndef HEROES_UNIVERSALWEAPON_H
#define HEROES_UNIVERSALWEAPON_H

#include "Weapon.h"

class UniversalWeapon : public Weapon {
public:
    UniversalWeapon(const std::string& name, unsigned int damage)
        : Weapon(WeaponType::Universal, name, damage) {
    }
};


#endif //HEROES_UNIVERSALWEAPON_H