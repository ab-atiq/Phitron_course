// *** Given an array of integers, find the maximum element using divide and conquer approach.***

#include <iostream>

using namespace std;

int max_element(int arr[], int low, int high)
{
    // Base case.
    if (low == high)
    {
        return arr[low];
    }

    // Find the middle index.
    int mid = (low + high) / 2;

    // Find the maximum element in the left and right subarrays.
    int max_left = max_element(arr, low, mid);
    int max_right = max_element(arr, mid + 1, high);

    // Return the maximum of the maximum elements of the left and right subarrays.
    return max(max_left, max_right);
}

int main()
{
    // Declare an array of integers.
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Find the maximum element in the array.
    int max_el = max_element(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);

    // Print the maximum element.
    cout << "The maximum element is: " << max_el << endl;

    return 0;
}