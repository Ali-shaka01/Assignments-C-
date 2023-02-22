#pragma once

#include <iostream>
using namespace std;

class Square {

private:
	float length;

public:
	void setLength(float le);
	float getLength() const;
	float getArea() const;
	Square(float le = 0);

};