#include "PrivateCylinder class.h"
#define M_PI 3.14159265359

void PrivateCylinder::setHeight(float h)
{
	if (h >= 0) {
		height = h;
	}
}

float PrivateCylinder::getHeight() const
{
	return height;
}

float PrivateCylinder::getArea() const
{
	return ( 2 * M_PI * getRadius() * getHeight() + 2 * M_PI * (getRadius() * getRadius()));
}

float PrivateCylinder::getVolume() const
{
	return (M_PI * (getRadius() * getRadius() ) * getHeight());
}

PrivateCylinder::PrivateCylinder(float r, float h): PrivateCircle(r)
{
	if (h >= 0) {
		height = h;
	}
}
