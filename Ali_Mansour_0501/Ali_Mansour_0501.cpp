// Ali_Mansour_0501.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "RectangleType class.h"
#include "point2D.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Rectangle App!\n";
    cout << "-----------------\n";

    int x0, x1, y0{}, y1{};
    cout << "Enter x0 and y0: ";
    cin >> x0 >>  y0;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    RectangleType rec1(x0, y0, x1, y1);

    cout << "Rectangle information: ";
    cout << "Width: " << rec1.getWidth() << endl;
    cout << "Length: " << rec1.getLength() << endl;
    cout << "perimeter: " << rec1.getPerimeter() << endl;
    cout << "Area: " << rec1.getArea() << endl;
}
