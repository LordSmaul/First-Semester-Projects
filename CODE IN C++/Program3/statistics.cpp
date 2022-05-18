// Utility function that perfroms a selection sort
// Used to find median value of the array
void SortArray(int* myArray, int arraySize)
{
    for(int i = 0; i < arraySize - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < arraySize; j++)
        {
            if(myArray[j] < myArray[minIndex]) { minIndex = j; }
        }

        // Swapping elements
        int temp = myArray[i];
        myArray[i] = myArray[minIndex];
        myArray[minIndex] = temp;
    }
}

// Determines max number of the array
int MaximumElement(int* array, int size)
{
    int num = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= num) { num = array[i]; }
    }

    return num;
}

// Determines the min number of the array
int MinimumElement(int* array, int size)
{
    int num = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= num) { num = array[i]; }
    }

    return num;
}

// Determines the mean value of the array
double Mean(int* array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return (double)sum / size;
}

// Determines the median value of the array
double Median(int* array, int size)
{
    SortArray(array, size);
    if (size % 2 == 0) { return (double)(array[size / 2 - 1] + array[size / 2]) / 2; }
    else { return array[size / 2]; }
}