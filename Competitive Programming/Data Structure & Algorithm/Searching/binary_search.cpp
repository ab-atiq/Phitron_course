// *** Binary Search ***

#include <iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int x)
{
    // Base case.
    if (high < low)
    {
        return -1;
    }

    // Find the middle index.
    int mid = (low + high) / 2;

    // If the element at the middle index is equal to the target element, then return the middle index.
    if (arr[mid] == x)
    {
        return mid;
    }

    // If the element at the middle index is less than the target element, then recursively search the right half of the array.
    else if (arr[mid] < x)
    {
        return binary_search(arr, mid + 1, high, x);
    }

    // If the element at the middle index is greater than the target element, then recursively search the left half of the array.
    else
    {
        return binary_search(arr, low, mid - 1, x);
    }
}

int main()
{
    // Declare an array of integers.
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Get the size of the array from the user.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Get the target element from the user.
    int x;
    cout << "Enter the target element: ";
    cin >> x;

    // Print the index of the target element.
    int index = binary_search(arr, 0, n - 1, x);
    if (index != -1)
    {
        cout << "The target element is at index " << index << endl;
    }
    else
    {
        cout << "The target element is not found." << endl;
    }

    return 0;
}