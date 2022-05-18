#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
    // Full name of a student
    // First Name + " " + Last Name
    string fullName;
    // Tech email of a student
    // First Character of the first name followed by
    // the entire part of the last name and then followed
    // by @tntech.edu
    string techEmail; 
    // Quiz marks obtained by each student
    double quizMarks;
    // Midterm marks obtained by each student
    double midtermMarks;
    // Final term marks obtained by each student
    double finaltermMarks;
    // Total marks obtained by each student
    double totalMarks;
    // Letter grade obtained by each student that is to
    // be computed from the total marks obtained
    string letterGrade;
};

#endif