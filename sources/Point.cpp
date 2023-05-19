#include "Point.hpp"
using namespace std;
Point::Point(double xAxis, double yAxis) : xAxis(xAxis), yAxis(yAxis) {}
double Point::distance(const Point &other) {
  return sqrt(pow(xAxis - other.xAxis, 2) + pow(yAxis - other.yAxis, 2));
}
void Point::print() { cout << "(" << xAxis << "," << yAxis << ")" << endl; }
Point Point::moveTowards(Point src, Point dest, double distance) {
  double m = (src.yAxis-dest.yAxis)/(src.xAxis-dest.xAxis);
  
  return Point(0.0, 0.0);
}
