// Ali_Mansour_0402.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProtectedCylinder class.h"
#include "PrivateCylinder class.h"
using namespace std;

int main()
{
    cout << "Cylinder App \n";
    cout << "--------------------\n";

    float r;
    float h;

    cout << "Enter Radius: ";
    cin >> r;
    cout << "Enter Height: ";
    cin >> h;
   

    ProtectedCylinder C1;
    C1.setRadius(r);
    C1.setHeight(h);
    
    cout << "Cylinder area: " << C1.getArea() << endl;
    cout << "Cylinder Volume: " << C1.getVolume() << endl;

    cout << endl;


    float r2;
    float h2;

    cout << "Enter Radius: ";
    cin >> r2;
    cout << "Enter Height: ";
    cin >> h2;
    

    PrivateCylinder C2;
    C2.setRadius(r2);
    C2.setHeight(h2);

    cout << "Cylinder area: " << C2.getArea() << endl;
    cout << "Cylinder Volume: " << C2.getVolume() << endl;


}
