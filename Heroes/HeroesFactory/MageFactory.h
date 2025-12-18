#ifndef HEROES_MAGEFACTORY_H
#define HEROES_MAGEFACTORY_H

#include "HeroFactory.h"
#include "../Mage.h"

class MageFactory : public HeroFactory {
private:
    unsigned int _damage;
public:
    MageFactory() {
        _damage = 10;
    }

    Hero* createHero(const std::string& name) override {
        return new Mage(name, _damage);
    }
};


#endif //HEROES_MAGEFACTORY_H