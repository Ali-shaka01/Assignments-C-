// Ali_Mansour_0202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct circleStr {
    float radius;
    float perimeter;
    float area;
};

void calculateCirclePerimeterStruct(struct circleStr& circle) {
    circle.perimeter = 2 * 3.14 * circle.radius;
};

void calculateCircleAreaStruct(struct circleStr& circle) {
    circle.area = 3.14 * (circle.radius * circle.radius) ;
};


int main()
{
    circleStr circle1;
    circle1.radius = 15.2;
    calculateCirclePerimeterStruct(circle1);
    calculateCircleAreaStruct(circle1);

    circleStr circle2;
    circle2.radius = 20.1;
    calculateCirclePerimeterStruct(circle2);
    calculateCircleAreaStruct(circle2);

    cout << "Circle App!\n";
    cout << "-----------------------------------\n";
    cout << "RADIUS       PERIMETER       AREA\n";
    cout << "-----------------------------------\n";
    cout << "Struct\n";

    cout << circle1.radius << "\t\t" << circle1.perimeter << "\t\t"<< circle1.area << endl;
    
    cout << circle2.radius << "\t\t" << circle2.perimeter << "\t\t" << circle2.area << endl;

}

