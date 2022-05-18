/*
    File: lab_c.cpp
    Author: LordSmaul
    Date: 11/03/2021
    Purpose: Practice with pointer arithmetic.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing variables
    int length, width, area;
    int* lengthPtr = nullptr;
    int* widthPtr = nullptr;

    // Initializing pointers
    lengthPtr = &length;
    widthPtr = &width;

    // Getting user input
    cout << "Please input the length of the rectangle." << endl;
    cin >> *lengthPtr;
    cout << "Please input the width of the rectangle." << endl;
    cin >> *widthPtr;

    area = *lengthPtr * *widthPtr;

    cout << "The area is " << area << endl;

    // length or width greater
    if (*lengthPtr > *widthPtr) { cout << "The length is greater than the width." << endl; }
    else if (*lengthPtr < *widthPtr) { cout << "The width is greater than the length." << endl; }
    else { cout << "The lengths and width are the same" << endl; }

    return 0;
}