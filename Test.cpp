#include "doctest.h"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include "sources/Team.hpp"
#include "sources/SmartTeam.hpp"

TEST_CASE("Point test") {
  Point p1(0, 3);
  Point p2(5, 0);
  CHECK(p1.distance(Point(0, 0)) == 3);
  CHECK_FALSE(p1.distance(Point(0, 0)) == 6);
  CHECK(p2.distance(Point(0, 0)) == 5);
  CHECK_FALSE(p1.distance(Point(0, 0)) == 10);

  // lower distance than the distance between p1 and p2
  Point p3 = Point::moveTowards(p1, p2, 1.2);
  CHECK(p1.distance(p3) == 1.2);

  // higher distance than the distance between p1 and p2
  Point p4 = Point::moveTowards(p1, p2, 21);
  CHECK(p1.distance(p4) == p1.distance(p2));
}

TEST_CASE("Cowboy test") {
  Cowboy c("Yossi", Point(1, 2));
  OldNinja o("Oogway", Point(5, 5));

  // cannot shoot itself
  CHECK_THROWS(c.shoot(&c));

  // shoot without bullets
  c.shoot(&o);
  c.shoot(&o);
  c.shoot(&o);
  c.shoot(&o);
  c.shoot(&o);
  c.shoot(&o);
  int hp = o.getHealth();
  CHECK(c.hasBullets());
  c.shoot(&o);
  CHECK(hp == o.getHealth());
  CHECK_FALSE(c.hasBullets());
  
  // reload
  c.reload();
  CHECK(c.hasBullets());
  c.shoot(&o);
  CHECK(hp!=o.getHealth());
}

TEST_CASE("Ninja test"){
  TrainedNinja t("Shimi",Point(0,0));
  OldNinja o("Tavor",Point(0,2));
  
  // slash doesn't damage when enemy further than 1m
  int beforeHP = o.getHealth();
  t.slash(&o);
  CHECK(beforeHP==o.getHealth());
}

TEST_CASE("Team test") {
  Cowboy *c1 = new Cowboy("Arnon", Point(2, 2));
  Cowboy *c2 = new Cowboy("Juan", Point(6, 0));
  Team t1(c1);
  CHECK_THROWS(t1.attack(NULL));
  CHECK_THROWS(t1.attack(&t1));

  // add leader again
  CHECK_THROWS(t1.add(c1));

  // add the same member twice
  t1.add(c2);
  CHECK_THROWS(t1.add(c2));

  // add more than 10 members
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  t1.add(new Cowboy("Amnon", Point(3, 1)));
  CHECK_THROWS(t1.add(new Cowboy("Amnon", Point(3, 1))));
}

TEST_CASE("SmartTeam test"){
  Cowboy c1("c1",Point(0,0));
  Cowboy c2("c2",Point(0,0));
  Cowboy c3("c3",Point(0,0));
  OldNinja n1("n1",Point(0,1));
  TrainedNinja n2("n2",Point(0,1));
  YoungNinja n3("n3",Point(0,1));
  SmartTeam st(&c1);
  Team t(&c1);
  st.add(&c2);
  t.add(&c2);
  st.add(&c3);
  t.add(&c3);
  st.add(&n1);
  t.add(&n1);
  st.add(&n2);
  t.add(&n2);
  st.add(&n3);
  t.add(&n3);
  while(t.stillAlive()&&st.stillAlive()){
    st.attack(&t);
    if(t.stillAlive())
      t.attack(&st);
  }
  CHECK(st.stillAlive());
  CHECK_FALSE(t.stillAlive());
}
