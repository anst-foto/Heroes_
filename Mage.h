#ifndef HEROES_MAGE_H
#define HEROES_MAGE_H

#include "Hero.h"

class Mage : public Hero {
private:
    const unsigned int DAMAGE_DEFAULT = 10;

public:
    Mage(const string& name)
        : Hero(name, DAMAGE_DEFAULT)
    {}
};


#endif //HEROES_MAGE_H