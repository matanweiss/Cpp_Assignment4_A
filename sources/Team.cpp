#include "Team.hpp"
#include "Character.hpp"
#include <vector>

Team::Team(Character &leader) : leader(leader) { team.push_back(leader); }

void Team::add(Character &member) {
  if (team.size() == 10)
    return;
  team.push_back(member);
}

void Team::attack(Team &other) {}

int Team::stillAlive() { return 0; }

void Team::print() {}

Team::~Team() {}