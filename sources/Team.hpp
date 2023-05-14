#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include <vector>

class Team {
  Character *leader;
  vector<Character *> team;

public:
  Team(Character *leader);
  void add(Character *member);
  void attack(Team *other);
  int stillAlive();
  void print();
  ~Team();
};

namespace ariel {};
