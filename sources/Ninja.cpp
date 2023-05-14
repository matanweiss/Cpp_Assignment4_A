#include "Ninja.hpp"
#include "Character.hpp"
Ninja::Ninja(string name, const Point &location, int health, int speed)
    : Character(name, location, health), speed(speed) {}
void Ninja::move(const Character *enemy) {}
void Ninja::slash(Character *enemy) {}
