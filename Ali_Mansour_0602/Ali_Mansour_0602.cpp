// Ali_Mansour_0602.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CourseGrade.h"
using namespace std;


CourseGrade* maximumGrade(CourseGrade* course0, CourseGrade* course1) {
    if (course0->getGrade() > course1->getGrade())
        return course0;
    else
        return course1;
}

int main()
{
    cout << "Course Grading App!\n";
    cout << "----------------------\n";

    int c1, c2, c3;
    float g1, g2, g3;

    cout << "Enter the code of the first course: ";
    cin >> c1;
    cout << "Enter the grade of the first course: ";
    cin >> g1;
    cout << endl;
    cout << "Enter the code of the second course : ";
    cin >> c2;
    cout << "Enter the grade of the second course: ";
    cin >> g2;
    cout << endl;
    cout << "Enter the code of the third course: ";
    cin >> c3;
    cout << "Enter the grade of the third course: ";
    cin >> g3;

    CourseGrade course1{c1, g1};
    CourseGrade course2{c2, g2};
    CourseGrade course3{c3, g3};

    CourseGrade* ptrcourse1 = &course1;
    CourseGrade* ptrcourse2 = &course2;
    CourseGrade* ptrcourse3 = &course3;

    cout << "------------------------\n";
    cout << "Course" << "\t" << "Grade" << endl;
    cout << "------------------------\n";

    cout << ptrcourse1->getCourse() << "\t" << ptrcourse1->getGrade() << endl;
    cout << ptrcourse2->getCourse() << "\t" << ptrcourse2->getGrade() << endl;
    cout << ptrcourse3->getCourse() << "\t" << ptrcourse3->getGrade() << endl;

    float average = (ptrcourse1->getGrade() + ptrcourse2->getGrade() + ptrcourse3->getGrade()) / 3.0;
    cout << "\nThe average grade is " << average << endl;

    CourseGrade* ptrMax = maximumGrade(maximumGrade(ptrcourse1, ptrcourse2), ptrcourse3);
    cout << "\nThe course with the maximum grade is " << ptrMax->getCourse() << endl;



}

