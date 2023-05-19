#include "Point.hpp"
#include <string>

Point::Point(double xAxis, double yAxis) : xAxis(xAxis), yAxis(yAxis) {}
double Point::distance(const Point &other) {
  return sqrt(pow(xAxis - other.xAxis, 2) + pow(yAxis - other.yAxis, 2));
}
string Point::print() {
  return "(" + to_string(xAxis)  + "," +to_string(yAxis) + ")" ;
}
Point Point::moveTowards(Point src, Point dest, double distance) {
  if (distance == 0)
    return src;
  if (src.distance(dest) <= distance)
    return dest;
  double m = (src.yAxis - dest.yAxis) / (src.xAxis - dest.xAxis);
  double b = src.yAxis - m * src.xAxis;
  double x = src.xAxis + distance / (pow(b, 2) + 1);
  double y = m * x + b;
  return Point(x, y);
}
