#include "ProtectedCircle class.h"
#define M_PI 3.14159265359

void ProtectedCircle::setRadius(float r)
{
    if (r >= 0) {
        radius = r;
    }
}

float ProtectedCircle::getRadius() const
{
    return radius;
}

float ProtectedCircle::getPerimeter() const
{
    return (2 * M_PI * radius);
}

float ProtectedCircle::getArea() const
{
    return (M_PI * (radius * radius));
}

ProtectedCircle::ProtectedCircle(float r)
{
    if (r >= 0) {
        radius = r;
    }
}
