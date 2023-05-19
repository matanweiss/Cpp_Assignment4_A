#include "Cowboy.hpp"
#include "Character.hpp"
Cowboy::Cowboy(string name, const Point &location)
    : Character(name, location, 100), ammo(60) {}
void Cowboy::shoot(Character *enemy) {}
bool Cowboy::hasBullets() { return false; }
void Cowboy::reload() {}
string Cowboy::print(){
      if (isAlive())
    return "name: C" + getName() + ", health: " + to_string(getHealth()) +
           ", location: " + getLocation().print();
  return "name: (C" + getName() + "), location: " + getLocation().print();
}
