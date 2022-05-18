/*
    File Name: Lab3b.cpp
    Date: 9/13/2021
    Author: LordSmaul
    Purpose: To find if the input year is a leap year or not
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int inputYear;

    cout << "Please enter a year: ";
    cin >> inputYear;
    
    if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0)
    {
        cout << "True. " << inputYear << " is a leap year." << endl;
    }
    else 
    {
        cout << "False. " << inputYear << " is not a leap year." << endl;
    }

    return 0;
}