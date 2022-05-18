/*
    File: lab_B.cpp
    Author: LordSmaul
    Date: 11/03/2021
    Purpose: To validate user input for correct variable type entered and correct range of variables.
*/

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // Declare variables
    int input;

    cout << "Enter a number between 9 and 77 (including 9 and 77): ";
    cin >> input;

    // Validates correct user variable input
    do
    {
        while (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Oops! It looks like you didn't enter a number." << endl;
            cout << "\nEnter a number between 9 and 77 (including 9 and 77): ";
            cin >> input;
        }

        // Validates correct user input range
        if (input < 9 || input > 77)
        {
            cout << "Oops! You need to enter a number between 9 & 77 (including 9 and 77)." << endl;
            cout << "\nEnter a number between 9 and 77 (including 9 and 77): ";
            cin >> input;
        }
    } 
    while (input < 9 || input > 77);

    cout << "You entered a valid number!" << endl;
}