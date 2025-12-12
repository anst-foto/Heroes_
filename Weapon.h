#ifndef HEROES_WEAPON_H
#define HEROES_WEAPON_H

#include <string>

enum class WeaponType {
    Universal, Mage, Warrior
};

class Weapon {
private:
    WeaponType _type;
    std::string _name;
    unsigned int _damage;

protected:
    Weapon(WeaponType type, const std::string& name, unsigned int damage)
        : _type(type),
          _name(name),
          _damage(damage)
    {}
};


#endif //HEROES_WEAPON_H