// Ali_Mansour_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
    int size;

    cout << "Triangle App! \n";
    cout << "-------------------\n";
    cout << "Enter the size of the triangles[3, 4, 5, 6, 7]: ";

    cin >> size;

    if (size < 3 || size > 7) {
        cout << "Invalid input. Try again.\n\n";

    }
    // triangle 1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
       }
        cout << endl;
    }

    cout << endl;


    //triangle 2
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i  ; j++) {
            cout << " ";
           
        }
        for (int j = 0; j < size - i; j++) {
            cout << "*";
        }
        cout << endl;
        
    }

    cout << endl;

    // triangle 3
    for (int i = 0; i < size; i++) {

        for (int j = size - i; j > 0 +1; j--) {
            cout << " ";
        }
        for (int j = 0; j < i +1; j++) {
            cout << "*";
        }

        cout << endl;
      
    }

    cout << endl;


    // triangle 4
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}


