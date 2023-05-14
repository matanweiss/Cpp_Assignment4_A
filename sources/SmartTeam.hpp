#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include <vector>

class SmartTeam {
  Character *leader;
  vector<Character *> team;

public:
  SmartTeam(const SmartTeam& other);
  SmartTeam(Character *leader);
  SmartTeam(SmartTeam&& other)noexcept;
  SmartTeam& operator=(const SmartTeam& other);
  SmartTeam& operator=( SmartTeam&& other)noexcept;
  void add(Character *member);
  void attack(SmartTeam *other);
  int stillAlive();
  void print();
  ~SmartTeam();
};

namespace ariel {};
