#include "student.h"    // Including the structure file

// Assigns an email to each student
// Email is the first letter of the first name + last name + "@gmail.com"
void AssignTechEmail(Student *s, int totalStudents)
{
    for (int i = 0; i < totalStudents; i++)
    {
        (s + i)->techEmail = (s + i)->fullName[0] + (s + i)->fullName.substr((s + i)->fullName.rfind(" ") + 1) + "@gmail.com";
    }
}

// Computes total marks for each student based on quiz, midterm, and final marks
void ComputeTotalMarks(Student *s, int totalStudents)
{
    for (int i = 0; i < totalStudents; i++)
    {
        (s + i)->totalMarks = (s + i)->quizMarks + (s + i)->midtermMarks + (s + i)->finaltermMarks;
    }
}

// Assigns letter grade based on total marks received
void ComputeLetterGrade(Student *s, int totalStudents)
{
    for (int i = 0; i < totalStudents; i++)
    {
        double test = (s + i)->totalMarks;
        if (test >= 90) { (s + i)->letterGrade = "A"; }
        else if (test >= 80 && test <= 89) { (s + i)->letterGrade = "B"; }
        else if (test >= 70 && test <= 79) { (s + i)->letterGrade = "C"; }
        else if (test >= 60 && test <= 69) { (s + i)->letterGrade = "D"; }
        else if (test >= 50 && test <= 59) { (s + i)->letterGrade = "E"; }
        else { (s + i)->letterGrade = "F"; }
    }
}