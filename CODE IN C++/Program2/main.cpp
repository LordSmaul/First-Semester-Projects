/*
 * Author: LordSmaul
 * 
 * The purpose of this program is to perform a set of standard
 * math fuctions for a given positive number.
 * 
 * Last edited on Ocotber 10th, 2021 7:06 PM CST
*/

#include <iostream>
#include "utils.h"
using namespace std;

int main()
{
    // Declare variables
    int input;

    // Opening Statements
    cout << "Welcome to the Standard Math Program." << endl;
    cout << "Given a postive number (n), this program will compute:" << endl;
    cout << "- Sum from 1 to n" << endl;
    cout << "- Factorial of n" << endl;
    cout << "- Display the times table of n" << endl;
    cout << "- Checks whether n is even or odd" << endl;
    cout << "- Checks whether or not n is a prime number" << endl;
    cout << "- Checks whether or not n is an Armstrong number" << endl;

    do
    {
        cout << "\nPlease enter a positive number (0 to terminate the program): ";
        cin >> input;

        // Checks for valid user input
        if (input < 0)
        {
            while (input < 0)
            {
                cout << "Sorry, no negative numbers please." << endl;
                cout << "Please enter a positive number (0 to terminate the program): ";
                cin >> input;
            }
        }
        else if (input > 0)
        {
            // Printing of all function results
            cout << "\nThe summation from 1 to " << input << " is: " << Sum(input) << endl;
            cout << "\nThe factorial of " << input << " is: " << Factorial(input) << endl;

            // Prints times table
            cout << "\nThe times table for " << input << " is as follows:" << endl;
            TimesTable(input);

            // Checks if even/odd
            if (IsEven(input)) { cout << "\n" << input << " is an even number." << endl; }
            else { cout << "\n" << input << " is an odd number." << endl; }

            // Checks if prime
            if (IsPrime(input)) { cout << "\n" << input << " is a prime number." << endl; }
            else { cout << "\n" << input << " is NOT a prime number." << endl; }

            // Checks if Armstrong number
            if (IsArmstrongNumber(input)) { cout << "\n" << input << " is an Armstrong number." << endl; }
            else { cout << "\n" << input << " is NOT an Armstrong number." << endl; }
        }
    } 
    while (input != 0);

    cout << "Thank you! See you again." << endl;

    return 0;
}