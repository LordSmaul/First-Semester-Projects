/*
    File: main.cpp
    Author: LordSmaul
    Date: 11/07/2021
    Purpose: To pull input from a file into a dynamically allocated array
             and preform various numerical and statistical caluculations
*/
#include <iostream>
#include "fileio.h"
#include "utils.h"
#include "statistics.h"

using namespace std;

int main(int argc, char *argv[])
{
    int size = 0; // Size of the array

    int *items; // Dynamic array used to read through the file
    items = ReadFile(argv[1], &size); // reads through the file and returns a dynmaic array of integers

    if (items == nullptr) // If items is empty
    {
        cerr << "Error! pointer is null." << endl;
        return -1;
    }
    else
    {
        cout << "The summation of all the elements of the array is " << Sum(items, size) << endl;
        CountOddsAndEvens(items, size);
        CountPositivesAndNegatives(items, size);
        SumOfMirrorIndexPairs(items, size);
        DisplayArrayForward(items, size);
        DisplayArrayBackward(items, size);
        cout << "The maximum element is " << MaximumElement(items, size) << endl;
        cout << "The minimum element is " << MinimumElement(items, size) << endl;
        cout << "The mean value of the array is " << Mean(items, size) << endl;
        cout << "The median value of the array is " << Median(items, size) << endl;
    }

    free(items); // frees allocated memory
    return 0;
}