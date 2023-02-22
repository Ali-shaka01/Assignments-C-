#include "PrivateCircle class .h"
#define M_PI 3.14159265359

void PrivateCircle::setRadius(float r)
{
	if (r >= 0) {
		radius = r;
	}
}

float PrivateCircle::getRadius() const
{
	return radius;
}

float PrivateCircle::getPerimeter() const
{
	return (2 * M_PI * getRadius());
}

float PrivateCircle::getArea() const
{
	return ( M_PI * (getRadius() * getRadius()) );
}

PrivateCircle::PrivateCircle(float r)
{
	if (r >= 0) {
		radius = r;
	}
}
