#pragma once
#include "Character.hpp"

class Ninja : public Character {
  int speed;

public:
  Ninja(string name, Point &location, int hp, int speed);
  void move(const Character &enemy);
  void slash(Character &enemy);
};