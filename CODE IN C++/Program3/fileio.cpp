#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int* ReadFile(char* fileName, int* size)
{
    // line variable will scan each line of the text file
    string line;
    // inputFile is the identifier of ifstream class
    ifstream inputFile;

    inputFile.open(fileName);

    if(inputFile.is_open())
    {
        getline(inputFile, line); // gets first line of the file to assign the size of the array

        *size = stoi(line); // Sets size of a dynamic array to the first line of the file

        int* myArray = (int*)malloc(*size * sizeof(int)); // Dynamic array of size *size
        
        int i = 0;
        while(getline(inputFile, line)) // Scans through file and assigns variables to the array
        {
            myArray[i] = stoi(line);
            i++;
        }
        
        inputFile.close();

        return myArray;
    }
    else
    {
        cerr << "Unable to open the file.\n";
        return NULL;
    }
}