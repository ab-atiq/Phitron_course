// *** Quick Sort ***

#include <iostream>

using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);

        // Recursively sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// This function takes last element as pivot, places the pivot element at
// its correct position in sorted array, and places all smaller (smaller than
// pivot) elements before pivot and all greater elements after pivot
int partition(int arr[], int low, int high)
{

    // pivot
    int pivot = arr[high];

    // Index of smaller element than pivot
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {

        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {

            // Increment index of smaller element
            i++;

            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with the greater element at index i
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 2, 9, 7, 8, 3, 5, 4, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array in ascending order: ";
    printArray(arr, n);

    return 0;
}
