#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

#include "../Weapons/Weapon.h"

class Hero {
private:
    const unsigned int MAX_HEALTH = 100;

    std::string _name;
    int _health;
    unsigned int _damage;

protected:
    Hero(const std::string& name, unsigned int damage) {
        _name = name;
        _health = 10; //FIXME
        _damage = damage;
        _weapon = nullptr;
    }

    ~Hero() {
        delete _weapon;
    }

    Weapon* _weapon;

public:
    bool isAlive() const {
        return _health > 0;
    }

    std::string getName() const {
        return _name;
    }

    int getHealth() const {
        return _health <= 0 ? 0 : _health;
    }

    unsigned int getDamage() const {
        if (_weapon == nullptr) {
            return _damage;
        }
        return _damage + _weapon->getDamage();
    }

    Weapon* getWeapon() const {
        return _weapon;
    }

    virtual bool setWeapon(Weapon* weapon) = 0;

    void attack(Hero* enemy) {
        enemy->_health -= this->getDamage();
    }
};


#endif //HEROES_HERO_H