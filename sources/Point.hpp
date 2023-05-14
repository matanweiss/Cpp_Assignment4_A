#pragma once
#include <iostream>
#include <string>

class Point
{
    double x;
    double y;

private:
    Point(double x, double y);
    double distance(const Point& other);
    void print();
    Point moveTowards(Point src, Point dest, double distance);
};