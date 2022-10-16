#include <bits/stdc++.h>
using namespace std;
void arrayPrint(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // print array element
    cout << "All Array element: ";
    arrayPrint(a, size);

    // insertion sort
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;
        cout << endl
             << "i " << i << " key value: " << key << endl;
        while (a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            arrayPrint(a, size);
            j--;
        }
        a[j + 1] = key;
        arrayPrint(a, size);
    }
    // print array element
    cout << "After insertion sort array element: ";
    arrayPrint(a, size);
    return 0;
}