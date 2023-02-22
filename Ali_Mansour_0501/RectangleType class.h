#pragma once
#include<iostream>
#include "point2D.h"

using namespace std;

class RectangleType{

private:
	Point2D p0;
	Point2D p1;

public:
	int getX0() const;
	int getY0() const;
	int getX1() const;
	int getY1() const;

	int getWidth() const;
	int getLength() const;
	int getPerimeter() const;
	int getArea() const;

	RectangleType(int ax0, int ay0, int ax1, int ay1);


};