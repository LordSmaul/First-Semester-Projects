/*
    File Name: Lab5c.cpp
    Author: LordSmaul
    Date: 9/27/2021
    Purpose: To get the average of the consecutive numbers between two integer inputs
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int first, last, interMean, dividend = 0;

    cout << "Please enter the beginning positive integer: " << endl;
    cin >> first;

    cout << "Please enter the ending positive integer: " << endl;
    cin >> last;

    // Checks for any negative numbers and if the last number is greater than the first
    if (first > last || first < 0 || last < 0)
    {
        cout << "Invalid input - integers must be positive and last number must be >= to first." << endl;
        return 0;
    }
    
    // Checks if the last number is right after the first number
    else if (first == last - 1)
    {
        cout << "No integers within this range. Exiting the program..." << endl;
        return 0;
    }
    else
    {
        for (int i = first + 1; i <= last; i++)
        {
            interMean += i;
            dividend++;
        }
    }

    interMean /= dividend;

    cout << "The mean average of the consecutive integers from " << first << " to " << last << " is " << interMean << "." << endl;

    return 0;
}