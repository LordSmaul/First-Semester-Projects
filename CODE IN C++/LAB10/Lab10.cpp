/*
    File Name: Lab10.cpp
    Author: LordSmaul
    Date: 11/11/2021
    Purpose: To get and validate a password from user input
             while testing for certain conditions
*/

#include <iostream>
#include <cctype>
#include <cstring>
#include <limits>
#include <windows.h>
using namespace std;

// Function prototypes
bool testPassword(char*);

int main()
{
    // Declare variables
    int passwordLength = 0;
    bool isValid = false;

    cout << "How many characters should the password be (must be at least 4)? ";
    cin >> passwordLength;

    // Validating user input for correct range and length of variable
    while (!cin || passwordLength < 4)
    {
        // Validates for correct input variable range
        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "\nThere was a problem with what you entered." << endl;
        cout << "\nHow many characters should the password be (must be at least 4)? ";
        cin >> passwordLength;
    }

    // Creates c-string for password
    cin.ignore();
    passwordLength += 1;
    char *password = new char[passwordLength];

    // Checks password validity
    while (!isValid)
    {
        // Validates user input for password to determine if the number of characters entered equals passwordLength - 1
        cout << "\nEnter a password consisting of exactly " << passwordLength - 1 << " characters." << endl;
        cout << "You must have at least one capital letter, one lowercase letter, one digit," << endl;
        cout << "and one punctuation character (examples: !#$%.?@)." << endl;
        cout << "The password can't contain any spaces." << endl;

        cin.getline(password, passwordLength);

        // Checks for correct string length and correct variable range
        while (!cin || strlen(password) != passwordLength - 1)
        {
            // Validates for correct input variable range
            if (!cin)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "\n\nThere was a problem with what you entered." << endl;
            cout << "Maybe you didn't enter " << passwordLength - 1 << " characters? Please try again: " << endl;
            cin.getline(password, passwordLength);
        }

        // Sleeps terminal thread for 3 seconds
        cout << "\nPlease wait - your password is being verified\n\n";
        Sleep(3000);

        // Checks for valid password
        isValid = testPassword(password);
        
        if (isValid) { cout << "You came up with a valid password!" << endl; }
        else {  cout << "----------Invalid Password!----------" << endl; }
    }

    return 0;
}

// Checks vailidity of the password
bool testPassword(char *pass)
{
    // Declare variables
    bool space = false, punct = false, upper = false, lower = false, digit = false;

    // Checks for correct characters in password
    for (int i = 0; i < strlen(pass); i++)
    {
        if (isdigit(pass[i])) { digit = true; }
        else if (islower(pass[i])) { lower = true; }
        else if (isupper(pass[i])) { upper = true; }
        else if (ispunct(pass[i])) { punct = true; }
        else if (isspace(pass[i])) { space = true; }
    }

    // Prints out any error messages for missing characters
    if (space) { cout << "Oops! Your password contains a space!" << endl; }
    if (!digit) { cout << "Oops! You didn't enter at least one digit!" << endl; }
    if (!lower) { cout << "Oops! You didn't enter at least one lowercase letter!" << endl; }
    if (!upper) { cout << "Oops! You didn't enter at least one uppercase letter!" << endl; }
    if (!punct) { cout << "Oops! You didn't enter at least one punctuation mark!" << endl; }

    if (space || !punct || !upper || !lower || !digit)  { return false; }
    else { return true; }
}