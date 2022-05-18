#include "Paranormal.h"

// Gets user input for data entry
void getParanormalData(int a1[], string s1[], string s2[])
{
    cout << "\nEnter the investigator's name, the day of their investigation, and the number of EVP's they recorded on their voice recorder." << endl;
    for (int i = 0; i < INVESTIGATORS; i++)
    {
        cout << "INVESTIGATOR " << (i + 1) << ":" << endl;
        cout << "\tNAME - ";
        getline(cin, s1[i]); //Name of investigator array
        cout << "\tDAY (ex: 10-22-2021) - ";
        getline(cin, s2[i]); //Date recorded array
        cout << "\tNUMBER OF EVPs - ";
        cin >> a1[i]; // EVP # recordings
        cin.ignore();
    }
}

// Processes data and stores variables for total recordings #, average recording #, and index of highest recorded #
void getStats(int a1[], int& t, int& in, float& a)
{
    int test = a1[0];
    for (int i = 0; i < INVESTIGATORS; i++) 
    {
        if (a1[i] >= test)
        {
            test = a1[i];
            in = i;
        }
        t += a1[i];
    }
    a = float(t) / INVESTIGATORS;
}