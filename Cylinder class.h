#pragma once
#include <iostream>
#include "Circle class.h"
using namespace std;

class Cylinder : public Circle {
private: 
	float height;

public: 
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	Cylinder(float r = 0, float h = 0);

};