
#include "fileio.h"
#include "reports.h"
#include "utils.h"
#include "student.h"

int main(int argc, char *argv[])
{
    int size = 0;
    Student *students;                   // Dynamic array of Student structures
    students = ReadFile(argv[1], &size); // Reads in information from a file input

    if (students == nullptr) // If no students exist
    {
        cout << "Error! Pointer is null." << endl;
        return -1;
    }
    else
    {
        AssignTechEmail(students, size);            // Assigns tech emails to each student
        ComputeTotalMarks(students, size);          // Computes the total marks for every student
        ComputeLetterGrade(students, size);         // Computes the letter grade for every student
        StudentInformation(students, size);         // Displays all the students' information
        BestPerformanceInQuiz(students, size);      // Displays best performance in quiz
        BestPerformanceInMidterm(students, size);   // Displays best performance in midterm
        BestPerformanceInFinalterm(students, size); // Displays best performance in finals
        BestPerformance(students, size);            // Displays best performance based on total marks obtained
        ClassAverage(students, size);               // Displays the class average for all the marks

        // Deallocate the dynamic memory allocated
        delete[] students;
    }
    return 0;
}