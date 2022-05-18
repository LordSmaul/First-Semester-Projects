/*
    File Name: Lab3d.cpp
    Date: LordSmaul
    Purpose: To set a user password from user input.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    //Declare variables
    char firstNameLetter;
    int yearNumber, pos;
    string input, yearString, lastName, firstName, lastNameSub, username;

    cout << "Please enter your login information: ";
    getline(cin, input);

    // Gets the individual values from the input
    firstName = input.substr(0, input.find(" "));
    yearString = input.substr(input.rfind(" ") + 1);

    //Cuts out the firstName variable; makes finding lastName variable easier
    pos = input.find(" ");
    input = input.substr(pos + 1);

    lastName = input.substr(0, input.find(" "));

    // Gets the last two numbers of the number input
    yearNumber = stoi(yearString);
    yearNumber %= 100;
    
    if (yearNumber < 10)
    {
        yearString = to_string(0) + to_string(yearNumber);
    }
    else
    {
           yearString = to_string(yearNumber);
    }

    //Gets first character of the first name
    firstNameLetter = firstName[0];

    // Sets value of lastNameSub, making sure to add full last name if the input is less than 5 characters
    if (lastName.size() > 5)
    {
        lastNameSub = lastName.substr(0, 5);
    }
    else
    {
        lastNameSub = lastName;
    }

    username = lastNameSub + firstNameLetter + yearString;

    cout << "Your login name is: " << username;

    return 0;
}