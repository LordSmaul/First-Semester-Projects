/*
    File Name: Lab3a.cpp
    Date: 9/13/2021
    Author: LordSmaul
    Purpose: To find the smallest number of 3 values input by the user
*/
#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num1, num2, num3, min;

    cout << "Enter three numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 == num2 && num2 == num3)
    {
        cout << "All of the numbers are equal.";
        return 0;
    }
    else if (num1 < num2 && num1 < num3)
    {
        min = num1;
    }
    else if (num2 < num3 && num2 < num1)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }

    cout << "\nFirst Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Third Number: " << num3 << endl;
    cout << "Smallest Number is: " << min << endl;

    return 0;
}