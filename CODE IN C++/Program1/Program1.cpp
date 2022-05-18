/*
    File Name: Program1.cpp
    Author: LordSmaul
    Purpose: To perform basic arithmetic operators on
             two randomly generated numbers based on user input.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL)); // Used for better number randomization

    // Declaring and initializing variables
    int firstRandValue, secondRandValue, userInput, randResult;
    firstRandValue = rand() % 100;
    secondRandValue = rand() % 100;

    // Opening welcome statements
    cout << "Welcome to the Basic Arithmetic Operations with two random numbers." << endl;
    cout << "Please select one arithmetic operation from the choices given below:" << endl;
    cout << "(1) Addition" << endl;
    cout << "(2) Subtraction" << endl;
    cout << "(3) Multiplication" << endl;

    cin >> userInput;

    // Sets arithmetic operator
    switch (userInput)
    {
    case 1:
        cout << "You've selected addition. Please answer the result below - " << endl;
        cout << firstRandValue << " + " << secondRandValue << " = " << endl;
        randResult = firstRandValue + secondRandValue;
        break;
    case 2:
        cout << "You've selected subtraction. Please answer the result below - " << endl;
        cout << firstRandValue << " - " << secondRandValue << " = " << endl;
        randResult = firstRandValue - secondRandValue;
        break;
    case 3:
        cout << "You've selected multiplication. Please answer the result below - " << endl;
        cout << firstRandValue << " * " << secondRandValue << " = " << endl;
        randResult = firstRandValue * secondRandValue;
        break;
    default:
        cout << "Sorry, you've chosen the wrong number." << endl;
        cout << "Exiting the program, please come back again!" << endl;
        return 0;
    }

    // Gets user input to test against randResult variable
    cin >> userInput;

    // Checks if the user input matches the correct result
    if (userInput == randResult)
    {
        cout << "Congratulations! You are right!" << endl;
    }
    else
    {
        cout << "Sorry, the correct answer is " << randResult << endl;
    }

    cout << "Answer the following questions for the correct results (" << randResult << ")" << endl;

    // Check if number is positive, negative, or zero
    cout << "Is it a (1) positive number, (2) negative number, or (3) zero?" << endl;
    cin >> userInput;

    switch (userInput)
    {
    case 1:
        if (randResult > 0)
        {
            cout << "Correct, it is a positive number." << endl;
        }
        else if (randResult < 0)
        {
            cout << "Incorrect, it is a negative number." << endl;
        }
        else
        {
            cout << "Incorrect, the answer is zero." << endl;
        }
        break;
    case 2:
        if (randResult < 0)
        {
            cout << "Correct, it is a negative number." << endl;
        }
        else if (randResult > 0)
        {
            cout << "Incorrect, it is a positive number." << endl;
        }
        else
        {
            cout << "Incorrect, the answer is zero." << endl;
        }
        break;
    case 3:
        if (randResult == 0)
        {
            cout << "Correct, the answer is 0." << endl;
        }
        else if (randResult > 0)
        {
            cout << "Incorrect, the answer is a positive number." << endl;
        }
        else
        {
            cout << "Incorrect, the answer is a negative number." << endl;
        }
        break;
    default:
        cout << "Sorry, you've chosen the wrong number." << endl;
        cout << "Exiting the program, please come back again!" << endl;
        return 0;
    }

    // Check if even or odd
    cout << "Is the number (1) an even number (including zero), or (2) an odd number?" << endl;
    cin >> userInput;

    switch (userInput)
    {
    case 1:
        if (randResult % 2 == 0)
        {
            cout << "Correct, it is an even number." << endl;
        }
        else
        {
            cout << "Incorrect, it is an odd number." << endl;
        }
        break;
    case 2:
        if (randResult % 2 != 0)
        {
            cout << "Correct, the answer is an odd number." << endl;
        }
        else
        {
            cout << "Incorrect, the answer is an even number." << endl;
        }
        break;
    default:
        cout << "Sorry, you've chosen the wrong number." << endl;
        cout << "Exiting the program, please come back again!" << endl;
        return 0;
    }

    return 0;
}