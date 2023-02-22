// Ali_Mansour_0301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CSCdate.h"
#include <string>

using namespace std;
int main()
{
    cout << "CSCdate app!\n";
    cout << "----------------------------------\n";
    
    CSCdate d1;
    cout << "First CSCdate: " << d1.getDay() << "-" << d1.getMonth() << "-" << d1.getYear() << endl;

    d1.setDay(21);
    d1.setMonth(4);
    d1.setYear(2005);

    cout << "Updated first CSCdate: " << d1.getDay() << "-" << d1.getMonth() << "-" << d1.getYear() << endl;

    CSCdate d2;
    d2.setDay(18);
    d2.setMonth(6);
    d2.setYear(2021);

    cout << "Second CSCdate: " << d2.getDay() << "-" << d2.getMonthName() << "-" << d2.getYear();

    

}


