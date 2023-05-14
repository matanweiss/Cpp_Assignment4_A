#include "Point.hpp"
using namespace std;
Point::Point(double xAxis, double yAxis) : xAxis(xAxis), yAxis(yAxis) {}
double Point::distance(const Point &other) { return 0.0; }
void Point::print() { cout << "()" << endl; }
Point Point::moveTowards(Point src, Point dest, double distance) {
  return Point(0.0, 0.0);
}
