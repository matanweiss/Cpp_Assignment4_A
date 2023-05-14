#pragma once
#include <iostream>
#include <string>

class Point
{
    double x;
    double y;

public:
    Point(double x, double y);
    double distance(const Point& other);
    void print();
    static Point moveTowards(Point src, Point dest, double distance);
};