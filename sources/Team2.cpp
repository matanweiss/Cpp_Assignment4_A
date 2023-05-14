#include "Team2.hpp"

Team2::Team2(Character *leader) : team(leader) {}
void Team2::add(Character *member) { team.add(member); }
void Team2::attack(Team *other) {}
int Team2::stillAlive() { return 0; }
void Team2::print() {}
Team2::~Team2() {}