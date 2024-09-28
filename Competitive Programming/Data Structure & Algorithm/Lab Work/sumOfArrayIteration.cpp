// *** Iterative Summation of Array Elements ***
#include <iostream>

using namespace std;

int main()
{
    // Declare an array of integers.
    int arr[10];

    // Get the size of the array from the user.
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Get the elements of the array from the user.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    // Calculate the sum of the array elements.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Print the sum of the array elements.
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
