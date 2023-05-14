#pragma once
#include "Character.hpp"

class Cowboy : public Character {
  int ammo;

public:
  Cowboy(string name, Point &location);
  void shoot(Character enemy);
  bool hasBullets();
  void reload();
};