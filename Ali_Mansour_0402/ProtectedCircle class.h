#pragma once

#include <iostream>

class ProtectedCircle {
private:
	float radius;

public:
	void setRadius(float r);
	float getRadius() const;
	float getPerimeter() const;
	float getArea() const;
	ProtectedCircle(float r = 0);
};

