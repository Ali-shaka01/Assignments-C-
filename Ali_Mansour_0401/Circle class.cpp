#include "Circle class.h"
#define M_PI    3.14159265358979323846

void Circle::setRadius(float r)
{
	if (r >= 0) {
		radius = r;
	}
}

float Circle::getRadius() const
{
	return radius;
}

float Circle::getArea() const
{
	return (M_PI * ( getRadius() * getRadius() ));
}

Circle::Circle(float r)
{
	if (r >= 0) {
		radius = r;
	}
}
