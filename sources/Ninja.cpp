#include "Ninja.hpp"
#include "Character.hpp"
Ninja::Ninja(string name, const Point &location, int hp, int speed)
    : Character(name, location, hp), speed(speed) {}
void Ninja::move(const Character *enemy) {}
void Ninja::slash(Character *enemy) {}
