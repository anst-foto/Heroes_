#ifndef HEROES_WARRIOR_H
#define HEROES_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {
public:
    Warrior(const std::string &name, unsigned int damage)
        : Hero(name, damage)
    {}

    virtual ~Warrior() = default;

    bool setWeapon(Weapon *weapon) override {
        if (weapon->getType() == WeaponType::Warrior ||
            weapon->getType() == WeaponType::Universal) {
            _weapon = weapon;
            return true;
        }

        return false;
    }
};


#endif //HEROES_WARRIOR_H