#include "RectangleType class.h"
#include "point2D.h"
#include <iostream>

using namespace std;


int RectangleType::getX0() const
{
    return p0.getX();
}

int RectangleType::getY0() const
{
    return p0.getY();
}

int RectangleType::getX1() const
{
    return p1.getX();
}

int RectangleType::getY1() const
{
    return p1.getY();
}

int RectangleType::getWidth() const
{
    return abs(getY1() - getY0());
}

int RectangleType::getLength() const
{
    return abs(getX1() - getX0());
}

int RectangleType::getPerimeter() const
{
    return 2 * (getWidth() + getLength());
}

int RectangleType::getArea() const
{
    return getWidth() * getLength();
}

RectangleType::RectangleType(int ax0, int ay0, int ax1, int ay1) : p0(ax0, ay0), p1(ax1, ay1)
{
    p0 = Point2D(ax0, ay0);
    p1 = Point2D(ax1, ay1);
}

