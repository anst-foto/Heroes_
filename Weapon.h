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

public:
    WeaponType getType() const {
        return _type;
    }

    std::string getName() const {
        return _name;
    }

    unsigned int getDamage() const {
        return _damage;
    }
};


#endif //HEROES_WEAPON_H