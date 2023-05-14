#pragma once
#include "Point.hpp"
using namespace std;

class Character {
  string name;
  Point &location;
  int hp;

public:
  Character(string name, Point &location, int hp);
  bool isAlive();
  double distance(const Character &other);
  void hit(int damage);
  string getName();
  Point getLocation();
  void print();
};