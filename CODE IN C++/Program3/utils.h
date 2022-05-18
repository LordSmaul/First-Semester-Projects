#ifndef UTILS_H
#define UTILS_H

// This function will take the array and the size of the array as its argument
// It will compute the sum of all the elements of the the array and return the value to where it's called.
long long Sum(int*, int);

// This function will take the array and the size of the array as its argument
// It will iterate through all the elements of the array and count the number of odd and even values
void CountOddsAndEvens(int*, int);

// This function will take the array and the size of the array as its argument
// It will iterate through all the elements of the array and count the number of positive and negative values
void CountPositivesAndNegatives(int*, int);

// This function will take the array and the size of the array as its argument
// It will compute the sum of the mirror index pairs of the array
// If a lone middle element exists, the program identifies it at the end
void SumOfMirrorIndexPairs(int*, int);

// This function will take the array and the size of the array as its argument
// Displays elements of the array forward
void DisplayArrayForward(int*, int);

// This function will take the array and the size of the array as its argument
// Displays elements of the array backwards
void DisplayArrayBackward(int*, int);

#endif