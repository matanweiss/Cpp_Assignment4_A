#pragma once
#include "Point.hpp"
using namespace std;

class Character {
  string name;
  Point location;
  int health;

public:
  Character(string name,  const Point &location, int health);
  bool isAlive();
  double distance(const Character &other);
  void hit(int damage);
  string getName();
  Point getLocation();
  string print();
  int getHealth();
};
