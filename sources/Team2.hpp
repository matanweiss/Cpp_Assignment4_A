#pragma once
#include "Character.hpp"
#include "Team.hpp"

class Team2 {
  Team team;

public:
  Team2(Character *leader);
  void add(Character *member);
  void attack(Team &other);
  int stillAlive();
  void print();
  ~Team2();
};