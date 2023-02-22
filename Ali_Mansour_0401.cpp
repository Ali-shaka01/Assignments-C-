// Ali_Mansour_0401.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cylinder class.h"
using namespace std;


int main()
{
    cout << "Cylinder App\n";
    cout << "--------------------\n";

    float r;
    float h;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    Cylinder C1;
    
    C1.setRadius(r);
    C1.setHeight(h);

    cout << "Cylinder area: " << C1.getArea() << endl;
    cout << "Cylinder Volume: " << C1.getVolume() << endl;

}
