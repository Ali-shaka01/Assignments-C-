// Ali_Mansour_0502.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SquareLib.h"
#include <iostream>
using namespace std;


int main()
{
    cout << "Square App!\n";
    cout << "----------------------\n";
    cout << "Length  Area\n";
    cout << "----------------------\n";

    Square s1;

    s1.setLength(2);
    cout << s1.getLength() << "\t" << s1.getArea() << endl;

    Square s2 = doubleLength_1(s1);
    cout << s2.getLength() << "\t" << s2.getArea() << endl;

    doubleLength_2(s2);
    cout << s2.getLength() << "\t" << s2.getArea() << endl;

    doubleLength_3(&s2);
    cout << s2.getLength() << "\t" << s2.getArea() << endl;
}

