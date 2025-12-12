#ifndef HEROES_WARRIOR_H
#define HEROES_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {
private:
    const unsigned int DAMAGE_DEFAULT = 15;
public:
    Warrior(const std::string &name)
        : Hero(name, DAMAGE_DEFAULT)
    {}
};


#endif //HEROES_WARRIOR_H