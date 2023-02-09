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
    // bubble sort
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "\nSort array element are: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}