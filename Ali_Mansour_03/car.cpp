#include "car.h"

void car::setmaxSpeed(int s)
{
	if (s > 0 && s <= 150) {
		maxSpeed = s;
	}
}

void car::setmodel(string m)
{
	model = m;
}

void car::setcolor(string c)
{
	color = c;
}

void car::setprice(float p)
{
	if (p > 0) {
		price = p;
	}
}

int car::getmaxSpeed() const
{
	return maxSpeed;
}

string car::getmodel() const
{
	return model;
}

string car::getcolor() const
{
	return color;
}

float car::getprice() const
{
	return price;
}



car::car()
{
	model = "Unnamed";
	maxSpeed = 100;
	color = "Unnamed";
	price = 10000;

}

car::car(int s, string m, string c, float p)
{
	setmaxSpeed(s);
	setmodel(m);
	setcolor(c);
	setprice(p);
}

car::~car()
{
	cout << "A car Cohesiveness object has been removed from memory.\n";
}

void car::display()
{
	cout << "Max Speed: " << maxSpeed << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Price: " << price << endl;
}

