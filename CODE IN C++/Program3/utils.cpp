#include <iostream>
using namespace std;

// Finds the sum of the elements of the array
long long Sum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

// Finds, counts, and displays the count of the even and odd numbers in the array
void CountOddsAndEvens(int *array, int size)
{
    int evens = 0, odds = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0) { evens++; }
        else { odds++; }
    }

    cout << "Count of even number(s): " << evens << endl;
    cout << "Count of odd number(s): " << odds << endl;
}

// Finds, counts, and displays the count of the positive and negative numbers in the array
void CountPositivesAndNegatives(int *array, int size)
{
    int positives = 0, negatives = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0) { positives++; }
        else { negatives++; }
    }

    cout << "Count of positive number(s): " << positives << endl;
    cout << "Count of negative number(s): " << negatives << endl;
}

// Finds the sum of the mirror index pairs of the array
void SumOfMirrorIndexPairs(int *array, int size)
{
    for (int i = 0, j = size; i < size, j > 0; i++, j--)
    {
        // If array contains odd number of elements and thus a lone middle item
        // Checked first so that is isn't printed
        if (size % 2 != 0 && i == j - 1)
        {
            cout << "Lone item: " << array[i] << endl;
            break;
        }

        cout << "The sum of " << array[i] << " and " << array[j - 1] << " is " << array[i] + array[j - 1] << endl;

        // If array contains an even number of elements
        // Checked last so that it is printed
        if (size % 2 == 0 && i + 1 == size / 2 && j == size / 2 + 1) { break; }
    }
}

// Displays the elements of the array forward
void DisplayArrayForward(int *array, int size)
{
    cout << "Forward traversal of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Displays the elements of the array backward
void DisplayArrayBackward(int *array, int size)
{
    cout << "Backward traversal of the array:" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}