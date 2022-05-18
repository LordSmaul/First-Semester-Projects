#include "student.h"

#ifndef UTILS_H
#define UTILS_H

/*
 * This utility function asigns email IDs to each student.
 * The step to build the email is as follows
 * Student Name: John Doe
 * Email: JDoe@gmail.com
 * -> The email will have the first letter and the entire
 * last name as the username following with @tntech.edu
 * The function takes the structure variable pointer array
 * as an arugment and the total number of students.
 */
void AssignTechEmail(Student *, int);

/*
 * This utility function computes the total marks achieved by each
 * student. It will add the quiz marks, midterm marks, and final
 * term marks.
 * 
 * The function takes the structure variable pointer array
 * as an arugment and the total number of students.
 */
void ComputeTotalMarks(Student *, int);

/*
 * This utility function computes the letter gradeto each student.
 * Before this function is invoked, it is important to call
 * "ComputeTotalMarks" function to compute the total marks achieved
 * by each student.
 * This function will see the total marks property of each student
 * and assign letter grade based on that. The distribution is as follows:
 * -> 90 - 100: A
 * -> 80 - 89: B
 * -> 70 - 79: C
 * -> 60 - 69: D
 * -> 50 - 59: E
 * -> Below 50: F (for fail)
 * 
 * The function takes the structure variable pointer array
 * as an arugment and the total number of students.
 */
void ComputeLetterGrade(Student *, int);

#endif