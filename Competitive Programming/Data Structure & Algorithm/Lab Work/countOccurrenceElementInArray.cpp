// *** Write a recursive function to count the number of occurrences of a particular element in an integer array. The function should take three parameters: the array, its size, and the element to be counted. The function should return the number of occurrences of the element in the array.***

#include <iostream>

using namespace std;

int countOccurrences(int arr[], int size, int element)
{
    if (size == 0)
    {
        return 0;
    }

    if (arr[size - 1] == element)
    {
        return 1 + countOccurrences(arr, size - 1, element);
    }
    else
    {
        return countOccurrences(arr, size - 1, element);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 4;

    int count = countOccurrences(arr, size, element);

    cout << "The number of occurrences of " << element << " is: " << count << endl;

    return 0;
}