#include "doctest.h"
#include "sources/Cowboy.hpp"
#include "sources/Team.hpp"

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
