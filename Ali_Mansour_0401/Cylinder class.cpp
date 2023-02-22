#include "Cylinder class.h"
#include <math.h>
#define M_PI    3.14159265358979323846


void Cylinder::setHeight(float h)
{
    if (h >= 0) {
        height = h;
    }
}

float Cylinder::getHeight() const
{
    return height;
}

float Cylinder::getArea() const
{
    return (2 * M_PI * Circle::getRadius() * getHeight() + 2 * M_PI * (Circle::getRadius() * Circle::getRadius() ));
}

float Cylinder::getVolume() const
{
    return (M_PI * (Circle::getRadius() * Circle::getRadius() ) * getHeight() );
}

Cylinder::Cylinder(float r, float h) : Circle(r) {
    if (h >= 0) {
        height = h;
  }

}
