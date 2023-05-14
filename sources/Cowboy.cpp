#include "Cowboy.hpp"
#include "Character.hpp"
Cowboy::Cowboy(string name, Point &location)
    : Character(name, location, 100), ammo(60) {}
void Cowboy::shoot(Character *enemy) {}
bool Cowboy::hasBullets() { return false; }
void Cowboy::reload() {}