#ifndef STATISTICS_H
#define STATISTICS_H

// This function will take the array and the size of the array as its argument
// It will return the maximum element or value of the array
int MaximumElement(int*, int);

// This function will take the array and the size of the array as its argument
// It will return the minimum element or value of the array
int MinimumElement(int*, int);

// This function will take the array and the size of the array as its argument
// It will compute and return the mean of all the elements of the array
double Mean(int*, int);

// This function will take the array and the size of the array as its argument
// It will compute and return the median of the array
// To compute the median, you need to first utilize the SortArray function to sort the array
double Median(int*, int);

// Utility function used in Median() function
// Perfroms selection sort on array
void SortArray(int*, int);

#endif