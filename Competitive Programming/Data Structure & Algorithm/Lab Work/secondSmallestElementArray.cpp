// *** Write a C++ function that takes an integer array as input and returns the second smallest element in the array. If the array has less than two elements, the function should return -1. ***

#include <iostream>
using namespace std;

int second_smallest(int arr[], int n)
{
    // Check if the array has less than two elements.
    if (n < 2)
    {
        return -1;
    }

    // Initialize the smallest and second smallest elements.
    int smallest = arr[0];
    int second_smallest = arr[1];

    // Iterate over the array.
    for (int i = 2; i < n; i++)
    {
        // If the current element is smaller than the smallest element, then update the smallest element.
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }

    // Return the second smallest element.
    return second_smallest;
}

int main()
{
    // Declare an array of integers.
    int arr[] = {1, 2, 3, 4, 5};

    // Get the size of the array from the user.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the second smallest element in the array.
    cout << "The second smallest element in the array is: " << second_smallest(arr, n) << endl;

    return 0;
}