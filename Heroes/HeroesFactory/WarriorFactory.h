#ifndef HEROES_WARRIORFACTORY_H
#define HEROES_WARRIORFACTORY_H

#include "HeroFactory.h"
#include "../Warrior.h"

class WarriorFactory : public HeroFactory {
private:
    unsigned int _damage;

public:
    WarriorFactory() {
        _damage = 15;
    }

    Hero* createHero(const std::string &name) override {
        return new Warrior(name, _damage);
    }
};


#endif //HEROES_WARRIORFACTORY_H