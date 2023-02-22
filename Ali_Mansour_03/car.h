#pragma once

#include <iostream>
#include <string>

using namespace std;
class car {
private:
	int maxSpeed;
	string model;
	string color;
	float price;

public: 
	void setmaxSpeed(int s);
	void setmodel(string m);
	void setcolor(string c);
	void setprice(float p);

	int getmaxSpeed() const;
	string getmodel() const;
	string getcolor() const;
	float getprice() const;


	car();
	car(int s, string m, string c, float p);
	~car();

	void display();

};
