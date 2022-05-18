#include "student.h" // Including the structure file

// Utility function to process the text file and return
// an array to structure variable
Student *ReadFile(char *fileName, int *size)
{
    // line variable will scan each line of the text file
    string line;
    // inputFile is the identifier of ifstream class
    ifstream inputFile;
    // Open the text file
    inputFile.open(fileName);

    // Check if the file has been successfully open
    if (inputFile.is_open())
    {
        // Gets first line of the file to assign the size of the file
        getline(inputFile, line);

        *size = stoi(line); // Assigns size of the Student array

        Student *students = new Student[*size]; // Allocates new Student array of size *size

        for (int i = 0; i < *size; i++)
        {
            getline(inputFile, (students + i)->fullName);
            getline(inputFile, line);
            (students + i)->quizMarks = stod(line);
            getline(inputFile, line);
            (students + i)->midtermMarks = stod(line);
            getline(inputFile, line);
            (students + i)->finaltermMarks = stod(line);
        }

        inputFile.close();

        return students;
    }
    else // Something went wrong opening the file
    {
        cerr << "Unable to open the file.\n";
        return NULL;
    }
}