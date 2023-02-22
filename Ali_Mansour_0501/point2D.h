#pragma once
#include <iostream>

using namespace std;

class Point2D {
private:
	int x;
	int y;
public:
	int getX() const;
	int getY() const;


	Point2D(int ax, int ay);

};