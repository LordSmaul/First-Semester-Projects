/*
	Title:  	lab_2c.cpp
	Author:		LordSmaul
	Date:		8/30/2021	
	Purpose:	This program gets the name of a student and 
                the test average of 3 grades.
*/

#include <iostream>
using namespace std;

int main()
{
    double test1, test2, test3, testAverage;
    string studentName;

    cout << "Enter the student's name: ";
    getline(cin, studentName);

    cout << "Enter " << studentName << "'s first test grade: ";
    cin >> test1;
    cout << "Enter " << studentName << "'s second test grade: ";
    cin >> test2;
    cout << "Enter " << studentName << "'s third test grade: ";
    cin >> test3;
    
    testAverage = (test1 + test2 + test3) / 3.0;

    cout << studentName << " has a test average of " << testAverage;
    
    return 0;
}