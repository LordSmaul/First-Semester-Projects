/*
    File Name: Lab5a.cpp
    Author: LordSmaul
    Date: 9/27/2021
    Purpose: To give the user a nickname with a user input for the first character
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //Declare variables
    char firstLetter, secondLetter, thirdLetter;
    int input, randInt;
    string nickname;

    //Helps randomize numbers
    srand(time(NULL));

    cout << "Hello! Let's figure out a nickname for you!" << endl;
    cout << "Choose a number between (and including) 65 to 90: " << endl;
    cin >> input;

    //Checks for valid user input
    if (input < 65 || input > 90)
    {
        while (input < 65 || input > 90)
        {
            cout << "Oops!  Invalid entry.  Choose between 65-90:" << endl;
            cin >> input;
        }
    }

    //Gets ASCII value of the input number
    firstLetter = char(input);
    
    //Gets vowel character
    randInt = rand() % 5 + 1;
    switch (randInt)
    {
        case 1:
            secondLetter = 'a';
            break;
        case 2:
            secondLetter = 'e';
            break;
        case 3:
            secondLetter = 'i';
            break;
        case 4:
            secondLetter = 'o';
            break;
        case 5:
            secondLetter = 'u';
            break;
        default: 
            break;
    }

    //Gets third character
    randInt = rand() % 25 + 97;
    thirdLetter = char(randInt);

    //Assembles 'nickname' from characters
    nickname.append(1, firstLetter);
    nickname.append(1, secondLetter);
    nickname.append(1, thirdLetter);
    nickname.append(1, 'y');

    cout << "Your nickname is " << nickname << "!" << endl;
    return 0;
}