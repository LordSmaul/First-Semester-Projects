#include "student.h"

#ifndef FILEIO_H
#define FILEIO_H

/*
 * This is the utility funciton to scan / read the text file
 * to populate the students' information in an array to structure
 * variable. The function takes the string value of file name
 * and a pointer variable of initialize the size of the array.
 * 
 * The function should return the build array to structure
 * after it is compiled.
 * 
 * The format of the text file is as follows
 * 1st line -> the number of students' information (1 <= n <= 1000)
 * 2nd line -> full name of the 1st student
 * 3rd line -> quiz marks of the 1st student
 * 4th line -> midterm marks of the 1st student
 * 5th line -> final term marks of 1st student
 * ...
 * ...
 */
Student* ReadFile(char *, int *);

#endif