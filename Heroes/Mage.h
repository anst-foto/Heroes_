#ifndef HEROES_MAGE_H
#define HEROES_MAGE_H

#include "Hero.h"

class Mage : public Hero {
public:
    Mage(const std::string& name, unsigned int damage)
        : Hero(name, damage)
    {}

    virtual ~Mage() = default;

    bool setWeapon(Weapon* weapon) override {
        if (weapon->getType() == WeaponType::Mage ||
            weapon->getType() == WeaponType::Universal) {
            _weapon = weapon;

            return true;
        }

        return false;
    }
};


#endif //HEROES_MAGE_H