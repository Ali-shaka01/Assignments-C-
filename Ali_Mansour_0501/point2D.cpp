#include "point2D.h"

int Point2D::getX() const
{
    return x;
}

int Point2D::getY() const
{
    return y;
}

Point2D::Point2D(int ax, int ay)
{
    x = ax;
    y = ay;
}


