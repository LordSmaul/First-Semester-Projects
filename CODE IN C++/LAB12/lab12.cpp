/*
    File: lab12.cpp
    Author: LordSmaul
    Date: 11/29/2021
    Purpose: To build a structure of eSports players and print out the players
             with the most and least total hours played
*/
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    struct esportsPlayer
    {
        int age;
        int numGames;
        int totalHours;
        string name;
        string hometown;
    };

    int numPlayers, testMin = 0, testMax = 0;
    string highestHourPlayer, lowestHourPlayer;

    cout << "How many eSports players are there at TTU who major in CSC?" << endl;
    cin >> numPlayers;
    while (!cin)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error! Please enter an integer: ";
        cin >> numPlayers;
    }

    cin.ignore();

    esportsPlayer *esportPtr = new esportsPlayer[numPlayers];
    int** playerHours = new int*[numPlayers];

    cout << "Enter the information about each player:";
    for (int i = 0; i < numPlayers; i++)
    {
        cout << "\n\nPLAYER " << (i + 1) << ":" << endl;
        cout << "\tNAME:  ";
        getline(cin, esportPtr[i].name);
        cout << "\tHOMETOWN:  ";
        getline(cin, esportPtr[i].hometown);
        cout << "\tAGE:  ";
        cin >> esportPtr[i].age;
        cout << "\tHOW MANY GAMES DOES " << esportPtr[i].name << " PLAY?  ";
        cin >> esportPtr[i].numGames;
        cin.ignore();
        
        *(playerHours + i) = new int[esportPtr[i].numGames];

        for (int j = 0; j < esportPtr[i].numGames; j++)
        {
            cout << "\t\tNUMBER OF HOURS " << esportPtr[i].name << " PLAYED GAME " << (j + 1) << "  ";
            cin >> *(*(playerHours + i) + j);
            esportPtr[i].totalHours += *(*(playerHours + i) + j);
        }
        cin.ignore();
    }

    testMax = esportPtr[0].totalHours;
    testMin = esportPtr[0].totalHours;
    for (int i = 0; i < numPlayers; i++)
    {
        if (esportPtr[i].totalHours >= testMax)
        {
            testMax = esportPtr[i].totalHours;
            highestHourPlayer = esportPtr[i].name;
        }
        if (esportPtr[i].totalHours <= testMin)
        {
            testMin = esportPtr[i].totalHours;
            lowestHourPlayer = esportPtr[i].name;
        }
    }

    cout << "\nThe player who played the most hours (" << testMax << ") is " << highestHourPlayer << endl;
    cout << "\nThe player who played the least hours (" << testMin << ") is " << lowestHourPlayer << endl;

    for (int i = 0; i < numPlayers; i++)
    {
        delete [] *(playerHours + i);
    }
    delete [] playerHours;

    return 0;
}