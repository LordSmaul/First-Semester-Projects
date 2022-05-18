/*
    File: functions.cpp
    Author: LordSmaul
    Date: 11/15/2021
    Purpose: Functions for LAB11
*/
#include "pollution.h"

// Used to make individual arrays for pollution data
float* makeArray(int x)
{
    float* arr = (float*)malloc(x * sizeof(float));
    return arr;
}

// Creates factory names
void enterFactoryNames(string *array)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Name of FACTORY " << i + 1 << ": ";
        getline(cin, *(array + i));
    }
}

// Enter Carbon Monoxide (CO) data for factories
void enterCOData(float *array, int x)
{
    cout << "Carbon Monoxide (CO) average level per hour (in parts per million)" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "\tYEAR " << i + 1 << ": ";
        cin >> *(array + i);
    }
}

// Enter Nitrogen Dioxide (NO2) data for factories
void enterNO2Data(float *array, int x)
{
    cout << "Nirogen Dioxide (NO2) average level per hour (in parts per billion)" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "\tYEAR " << i + 1 << ": ";
        cin >> *(array + i);
    }
}

// Enter Ozone (O3) data for factories
void enterO3Data(float *array, int x)
{
    cout << "Ozone (O3) average level per hour (in parts per million)" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "\tYEAR " << i + 1 << ":   ";
        cin >> *(array + i);
    }
}

// Prints out any factory names over the limit assigned limits
void printOverLimit(string *array, float **array1, int x, float y)
{
    int counter;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (*(*(array1 + i) + j) > y)
            {
                cout << *(array + i) << endl;
                break;
            }
            else { counter++; }
        }
    }
    if (counter == x * SIZE) { cout << "Yay! There are no factories over the limit!!" << endl; }
}

// Gets largest output from the factories for each pollution element
void getLargest(string *sArray, float **array, int x, float &l, string &s, int &y)
{
    l = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (*(*(array + i) + j) > l)
            {
                l = *(*(array + i) + j); // Largest pollution amount released
                s = *(sArray + i); // Name of factory 
                y = j; // Year it was released
            }
        }
    }
}