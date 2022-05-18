#ifndef FILEIO_H
#define FILEIO_H

// The funciton will take the name of the file and
// the address of an int variable as arguments.
// The purpose of this function is scan each line of a text
// file (where the name of the file is given as argument)
// Each line will contain an int value (positive / negative but not 0)
// The first line of the file will declare how many numbers are there
// The pointer variable in the argument will be initialized with that value
int* ReadFile(char*, int*);

#endif