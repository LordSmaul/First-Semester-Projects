/*
    File Name: Lab6.cpp
    Author: LordSmaul
    Date: 10/04/2021
    Purpose: To create a menu-based program that will allow the user to
    calculate the area for a few different shapes:
    square, rectangle, parallelogram, and circle.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Lab6.h"
using namespace std;

int main()
{
    // Declare variables and setting precision points
    int input;
    double input1, input2;
    cout << setprecision(2) << fixed << showpoint;

    do
    {
        displayMenu();
        cin >> input;

        // Validates user input
        if (input < 1 || input > 5)
        {
            while (input < 1 || input > 5)
            {
                cout << "\nInvalid input." << endl;
                cout << "CHOOSE 1-5: ";
                cin >> input;
            }
        }

        // Determines right function from user input
        switch (input)
        {
        case 1:
            cout << "Enter the height of the square:" << endl;
            cin >> input1;
            areaSquare(input1);
            break;
        case 2:
            cout << "Enter the height & width of the retangle, separated by a space:" << endl;
            cin >> input1;
            cin >> input2;
            areaRectangle(input1, input2);
            break;
        case 3:
            cout << "Enter the base & width of the parallelogram, separated by a space:" << endl;
            cin >> input1;
            cin >> input2;
            areaParallelogram(input1, input2);
            break;
        case 4:
            cout << "Enter the radius of the circle:" << endl;
            cin >> input1;
            areaCircle(input1);
            break;
        default:
            break;
        }
    } 
    while (input != 5);

    return 0;
}