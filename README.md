
```mermaid
---
title: Heroes
---
classDiagram
    direction TB
    
    class WeaponType {
        <<enumeration>>
        Universal
        Mage
        Warrior
    }
    
    class Weapon {
        - WeaponType _type
        - string _name
        - unsigned int _damage
        # Weapon(WeaponType type, const string& name, unsigned int damage)
    }
    
    class MageWeapon {
        + MageWeapon(const string& name, unsigned int damage)
    }
    
    class WarriorWeapon {
        + WarriorWeapon(const string& name, unsigned int damage)
    }
    
    class UniversalWeapon {
        + UniversalWeapon(const string& name, unsigned int damage)
    }
    
    class Hero {
        - const unsigned int MAX_HEALTH = 100
        - string _name
        - unsigned int _health
        - unsigned int _damage
        - weapon : Weapon
        # Hero(const string& name, unsigned int damage)
    }
    
    class Mage {
        - const unsigned int DAMAGE_DEFAULT = 10
        + Mage(const string& name)
    }
    
    class Warrior {
        - const unsigned int DAMAGE_DEFAULT = 15
        + Warrior(const string& name)
    }
    
    %% Наследование для оружия
    Weapon <|-- MageWeapon
    Weapon <|-- WarriorWeapon
    Weapon <|-- UniversalWeapon
    
    %% Наследование для героев
    Hero <|-- Mage
    Hero <|-- Warrior
    
    %% Зависимости (использование enum)
    Weapon *--> WeaponType 
    Hero *--> Weapon
```

