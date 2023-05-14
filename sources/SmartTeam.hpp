#pragma once
#include "Character.hpp"
#include "Team.hpp"

class SmartTeam {
  Team team;

public:
  SmartTeam(Character *leader);
  void add(Character *member);
  void attack(Team &other);
  int stillAlive();
  void print();
  ~SmartTeam();
};