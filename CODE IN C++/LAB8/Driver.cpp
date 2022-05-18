/*
    File Name: Driver.cpp
    Author: LordSmaul
    Date: 10/25/2021
    Purpose: To record the name, date, and number of EVPs of investigators at a haunted location.
*/

#include "Paranormal.h"

int main()
{
    //Declare variables
    int total = 0, index = 0;
    float average = 0;
    char location[100];
    int evp[INVESTIGATORS];
    string name[INVESTIGATORS], date[INVESTIGATORS];
    string horizontalLine(100, '-');

    cout << "Hello! What haunted location are you investigating?" << endl;
    cin.getline(location, 100);

    getParanormalData(evp, name, date);
    getStats(evp, total, index, average);

    cout << horizontalLine << endl;
    cout << "\nThe total amount of EVPs recorded by all " << INVESTIGATORS << " investigators at " << location << " is "<< total << " recordings." << "\n\n";
    cout << "The average amount of EVPs recorded at " << location << " is " << average << " recordings." << "\n\n\n\n";
    cout << "The investigator who recorded the most (" << evp[index] << " recordings) is " << name[index] << " on " << date[index] << "!!" << endl;
    cout << horizontalLine << endl;

    return 0;
}