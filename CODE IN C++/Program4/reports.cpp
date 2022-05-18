#include "student.h"    // Including the structure file

// The function to display all the students' information
// Details -> in the header file
void StudentInformation(Student *s, int totalStudents)
{
    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nName: " << (s + i)->fullName << endl;
        cout << "Email: " << (s + i)->techEmail << endl;
        cout << "Quiz: " << (s + i)->quizMarks << endl;
        cout << "Midterm: " << (s + i)->midtermMarks << endl;
        cout << "Final Term: " << (s + i)->finaltermMarks << endl;
        cout << "Total: " << (s + i)->totalMarks << endl;
        cout << "Grade: " << (s + i)->letterGrade << endl;
    }
}

// The function to display one student information who achieved
// the best score in quiz
// Details -> in the header file 
void BestPerformanceInQuiz(Student *s, int totalStudents)
{
    double test = (s + 0)->quizMarks;
    int index = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        if ((s + i)->quizMarks >= test)
        {
            test = (s + i)->quizMarks;
            index = i;
        }
    }
    cout << "\nBest performance in Quiz" << endl;
    cout << "Name: " << (s + index)->fullName << endl;
    cout << "Email: " << (s + index)->techEmail << endl;
    cout << "Quiz Marks: " << test << endl;
}

// The function to display one student information who achieved
// the best score in midterm
// Details -> in the header file
void BestPerformanceInMidterm(Student *s, int totalStudents)
{
    double test = (s + 0)->midtermMarks;
    int index = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        if ((s + i)->midtermMarks >= test)
        {
            test = (s + i)->midtermMarks;
            index = i;
        }
    }
    cout << "\nBest performance in Midterm" << endl;
    cout << "Name: " << (s + index)->fullName << endl;
    cout << "Email: " << (s + index)->techEmail << endl;
    cout << "Midterm Marks: " << test << endl;
}

// The function to display one student information who achieved
// the best score in final term
// Details -> in the header file
void BestPerformanceInFinalterm(Student *s, int totalStudents)
{
    double test = (s + 0)->finaltermMarks;
    int index = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        if ((s + i)->finaltermMarks >= test)
        {
            test = (s + i)->finaltermMarks;
            index = i;
        }
    }
    cout << "\nBest performance in Final Term" << endl;
    cout << "Name: " << (s + index)->fullName << endl;
    cout << "Email: " << (s + index)->techEmail << endl;
    cout << "Final Term Marks: " << test << endl;
}

// The function to display one student information who achieved
// the best score based on total marks
// Details -> in the header file
void BestPerformance(Student *s, int totalStudents)
{
    double test = (s + 0)->totalMarks;
    int index = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        if ((s + i)->totalMarks >= test)
        {
            test = (s + i)->totalMarks;
            index = i;
        }
    }
    cout << "\nBest performance in Total Marks" << endl;
    cout << "Name: " << (s + index)->fullName << endl;
    cout << "Email: " << (s + index)->techEmail << endl;
    cout << "Total Marks: " << test << endl;
}


// The function to display the class average of quizzes, midterm,
// final term, and total marks.
// Details -> in the header file
void ClassAverage(Student *s, int totalStudents)
{
    double totalQuiz = 0, totalMidterm = 0, totalFinal = 0, totalAvg = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        totalQuiz += (s + i)->quizMarks;
        totalMidterm += (s + i)->midtermMarks;
        totalFinal += (s + i)->finaltermMarks;
    }
    totalAvg = (totalQuiz + totalMidterm + totalFinal) / totalStudents;
    totalQuiz /= totalStudents;
    totalMidterm /= totalStudents;
    totalFinal /= totalStudents;

    cout << "\nClass Average" << endl;
    cout << "Quiz Avg: " << (int)totalQuiz << endl;
    cout << "Midterm Avg: " << (int)totalMidterm << endl;
    cout << "Final Term Avg: " << (int)totalFinal << endl;
    cout << "Total Avg: " << (int)totalAvg << endl;
}