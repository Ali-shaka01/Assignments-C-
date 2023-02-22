#include "ProtectedCylinder class.h"
#define M_PI 3.14159265359


void ProtectedCylinder::setHeight(float h)
{
    if (h >= 0) {
        height = h;
    }
}

float ProtectedCylinder::getHeight() const
{
    return height;
}

float ProtectedCylinder::getArea() const
{
    return (2 * M_PI * getRadius() * getHeight() + 2 * M_PI * (getRadius() *getRadius())) ;
}

float ProtectedCylinder::getVolume() const
{
    return (M_PI * (getRadius() * getRadius()) * getHeight() );
}

ProtectedCylinder::ProtectedCylinder(float r, float h) :ProtectedCircle(r) {
    
    if (h >= 0) {
        height = h;
    }
}
