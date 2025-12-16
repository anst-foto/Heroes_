#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

#include "../Weapons/Weapon.h"

class Hero {
private:
    const unsigned int MAX_HEALTH = 100;

    std::string _name;
    unsigned int _health;
    unsigned int _damage;

protected:
    Hero(const std::string& name, unsigned int damage) {
        _name = name;
        _health = MAX_HEALTH;
        _damage = damage;
    }

    ~Hero() {
        delete _weapon;
    }

    Weapon* _weapon;

public:
    bool isAlive() {
        return _health > 0;
    }

    std::string getName() const {
        return _name;
    }

    unsigned int getHealth() const {
        return _health;
    }

    unsigned int getDamage() const {
        return _damage + _weapon->getDamage();
    }

    Weapon* getWeapon() const {
        return _weapon;
    }

    virtual bool setWeapon(Weapon* weapon) = 0;

    void attack(Hero* enemy) {
        enemy->_health -= _damage + _weapon->getDamage();
    }
};


#endif //HEROES_HERO_H