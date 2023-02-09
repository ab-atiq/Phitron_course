#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;
    int arr[arrSize];
    cout << "Enter array element for " << arrSize << " size: ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
    cout << "Array element are: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    // insertion sort
    for (int step = 1; step < arrSize; step++)
    {
        int key = arr[step];
        int j = step - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    cout << "\nSort array element are: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}