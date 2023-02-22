// Ali_Mansour_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "car.h"


using namespace std;

int main()
{
    int s, p;
    string m, c;

    car c1;
    car* c1ptr = new car;

    cout << "Enter MaxSpeed of the vehicle: ";
    cin >> s;
    cout << "Enter the model of the vehicle: ";
    cin >> m;
    cout << "Enter color of the vehicle: ";
    cin >> c;
    cout << "Enter price of the vehicle: ";
    cin >> p;

    cout << endl;

    c1ptr->setmaxSpeed(s);
    c1ptr->setmodel(m);
    c1ptr->setcolor(c);
    c1ptr->setprice(p);

    cout << "Maxspeed: " << c1ptr->getmaxSpeed() << endl;
    cout << "Model: " << c1ptr->getmodel() << endl;
    cout << "Color: " << c1ptr->getcolor() << endl;
    cout << "Price: " << c1ptr->getprice() << endl;


   
    return 0;
}

