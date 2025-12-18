#ifndef HEROES_HEROFACTORY_H
#define HEROES_HEROFACTORY_H

#include <string>

#include "../Hero.h"

class HeroFactory {
public:
    virtual Hero* createHero(const std::string& name) = 0;
};


#endif //HEROES_HEROFACTORY_H