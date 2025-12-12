cmake_minimum_required(VERSION 4.0)
project(Heroes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Heroes main.cpp
        Hero.h
        Mage.h
        Warrior.h
        Weapon.h
        MageWeapon.h
        WarriorWeapon.h
        UniversalWeapon.h)
