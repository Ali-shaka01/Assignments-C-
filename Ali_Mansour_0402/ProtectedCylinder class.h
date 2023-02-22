#pragma once
#include <iostream>
#include "ProtectedCircle class.h"

class ProtectedCylinder: public ProtectedCircle{
private:
	float height;

public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	ProtectedCylinder(float r = 0, float h = 0);

};