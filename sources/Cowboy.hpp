#pragma once
#include "Character.hpp"

class Cowboy: public Character {
    int ammo;
    private:
    void shoot(Character enemy);
    bool hasBullets();
    void reload();
};