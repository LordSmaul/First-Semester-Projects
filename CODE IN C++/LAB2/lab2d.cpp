/*
	Title:  	lab_2d.cpp
	Author:		LordSmaul
	Date:		8/30/2021	
	Purpose:	This program calculates the number of days and years that a dog must serve in
                in prison based on the number of bones they stole.
*/

#include <iostream>
using namespace std;

int main()
{
    const double DAYS_IN_YEAR = 365.0;
    const int DAY_SENTENCE = 83;
    double yearsInPrison;
    int bonesStolen, daysInPrison;

    cout << "How many bones have you stolen?  ";
    cin >> bonesStolen;

    daysInPrison = bonesStolen * DAY_SENTENCE;
    yearsInPrison = daysInPrison / DAYS_IN_YEAR;

    cout << "You must go to prison for " << daysInPrison << " days, which is " << yearsInPrison << " years.";

    return 0;
}