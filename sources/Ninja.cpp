#include "Ninja.hpp"
#include "Character.hpp"
Ninja::Ninja(string name, const Point &location, int health, int speed)
    : Character(name, location, health), speed(speed) {}
void Ninja::move(const Character *enemy) {
  setLocation(Point::moveTowards(getLocation(), enemy->getLocation(), speed));
}
void Ninja::slash(Character *enemy) {
  if (isAlive() && getLocation().distance(enemy->getLocation()) < 1)
    enemy->hit(40);
}
string Ninja::print() {
  if (isAlive())
    return "name: N" + getName() + ", health: " + to_string(getHealth()) +
           ", location: " + getLocation().print();
  return "name: (N" + getName() + "), location: " + getLocation().print();
}