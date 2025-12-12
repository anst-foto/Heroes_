#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

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
};


#endif //HEROES_HERO_H