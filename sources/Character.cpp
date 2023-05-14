#include "Character.hpp"

Character::Character(string name, const Point &location, int hp)
    : name(name), location(location), hp(hp) {}

bool Character::isAlive() { return false; }
double Character::distance(const Character &other) { return 0.0; }
void Character::hit(int damage) {}
string Character::getName() { return "name"; }
Point Character::getLocation() { return location; }
string Character::print() { return name; }