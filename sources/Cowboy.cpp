#include "Cowboy.hpp"
#include "Character.hpp"

Cowboy::Cowboy(string name, const Point &location)
    : Character(name, location, 110), ammo(6) {}
void Cowboy::shoot(Character *enemy) {
  if (isAlive() && hasBullets()) {
    enemy->hit(10);
    ammo -= 1;
  }
}
bool Cowboy::hasBullets() { return 0 < ammo; }
void Cowboy::reload() { ammo += 6; }
string Cowboy::print() {
  if (isAlive())
    return "name: C" + getName() + ", health: " + to_string(getHealth()) +
           ", location: " + getLocation().print();
  return "name: (C" + getName() + "), location: " + getLocation().print();
}
