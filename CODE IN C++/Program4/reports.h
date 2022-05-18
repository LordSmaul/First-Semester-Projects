#include "student.h"    // Including the structure file

#ifndef REPORTS_H
#define REPORTS_H

/*
 * This reporting function prints all the pieces of
 * students' information in a certain way and takes
 * the structure variable pointer array as an arugment
 * and the total number of students.
 * Printing the following details per student:
 * - Name
 * - Email
 * - Quiz
 * - Midterm
 * - Final Term
 * - Total
 * - Grade
 */ 
void StudentInformation(Student *, int);

/*
 * This reporting function prints the details of one student
 * who has achieved the best score in quiz. It takes the structure
 * variable pointer array as an arugment and the total number
 * of students.
 * Printing the following details of the student:
 * - Name
 * - Email
 * - Quiz
 */ 
void BestPerformanceInQuiz(Student *, int);

/*
 * This reporting function prints the details of one student
 * who has achieved the best score in midterm. It takes the structure
 * variable pointer array as an arugment and the total number
 * of students.
 * Printing the following details of the student:
 * - Name
 * - Email
 * - Midterm
 */ 
void BestPerformanceInMidterm(Student *, int);

/*
 * This reporting function prints the details of one student
 * who has achieved the best score in final term. It takes the
 * structure variable pointer array as an arugment and the
 * total number of students.
 * Printing the following details of the student:
 * - Name
 * - Email
 * - Final Term
 */ 
void BestPerformanceInFinalterm(Student *, int);

/*
 * This reporting function prints the details of one student
 * who has achieved the best score in total marks obtained.
 * It takes the structure variable pointer array as an arugment
 * and the total number of students.
 * Printing the following details of the student:
 * - Name
 * - Email
 * - Total Marks
 */ 
void BestPerformance(Student *, int);

/*
 * This reporting function prints the details of the class average
 * in terms of quiz, midterm, final term, and total marks.
 * It takes the structure variable pointer array as an arugment
 * and the total number of students.
 * Printing the following details of the student:
 * - Quiz Avg:
 * - Midterm Avg:
 * - Final Term Avg:
 * - Total Marks Avg:
 */ 
void ClassAverage(Student *, int);

#endif