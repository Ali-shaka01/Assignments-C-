#pragma once
#include <iostream>

class Circle {
private: 
	float radius;

public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
	Circle(float r = 0);

};