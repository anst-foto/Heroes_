#ifndef HEROES_MAGE_H
#define HEROES_MAGE_H

#include "../Hero.h"

class Mage : public Hero {
private:
    const unsigned int DAMAGE_DEFAULT = 10;

public:
    Mage(const string& name)
        : Hero(name, DAMAGE_DEFAULT)
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