#include "Team.hpp"
#include "Character.hpp"
#include <vector>

Team::Team(const Team &other) : leader(other.leader) {}

Team::Team(Character *leader) : leader(leader) { team.push_back(leader); }

Team::Team(Team &&other)noexcept {
  leader = other.leader;
  team = other.team;
}

Team &Team::operator=(const Team &other) {
  leader = other.leader;
  team = other.team;
  return *this;
}

Team &Team::operator=( Team &&other) noexcept{
  leader = other.leader;
  team = other.team;
  return *this;
}

void Team::add(Character *member) {
  if (team.size() == 10)
    return;
  team.push_back(member);
}

void Team::attack(Team *other) {}

int Team::stillAlive() { return 0; }

void Team::print() {}

Team::~Team() {}