#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Point
{
    double xAxis;
    double yAxis;

public:
    Point(double xAxis, double yAxis);
    double distance(const Point& other);
    void print();
    static Point moveTowards(Point src, Point dest, double distance);
};
