cmake_minimum_required(VERSION 4.0)
project(Heroes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Heroes main.cpp
        Heroes/Hero.h
        Heroes/Mage.h
        Heroes/Warrior.h
        Weapons/Weapon.h
        Weapons/MageWeapon.h
        Weapons/WarriorWeapon.h
        Weapons/UniversalWeapon.h)
