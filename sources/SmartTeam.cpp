#include "SmartTeam.hpp"

SmartTeam::SmartTeam(Character *leader) : team(leader) {}
void SmartTeam::add(Character *member) { team.add(member); }
void SmartTeam::attack(Team *other) {}
int SmartTeam::stillAlive() { return 0; }
void SmartTeam::print() {}
SmartTeam::~SmartTeam() {}