#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include <string>

Character::Character(string name, const Point &location, int health)
    : name(name), location(location), health(health) {}

bool Character::isAlive() { return 0 < health; }
double Character::distance(const Character &other) {
  return location.distance(other.location);
}
void Character::hit(int damage) { health = max(0, health - damage); }
string Character::getName() { return name; }
Point Character::getLocation() { return location; }
int Character::getHealth() { return health; }
