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
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // print array element
    cout << "All Array element: ";
    arrayPrint(a, size);
    // bubble sort
    // first iteration will start from 1 to size-1
    for (int i = 1; i < size; i++)
    {
        int flag = 0;
        cout << "Iteration no: " << i << endl;
        for (int j = 0; j < size - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag++;
            }
            arrayPrint(a, size);
        }
        if (flag == 0)
            break;
    }
    // after sort print array
    cout << "After bubble sort array element: ";
    arrayPrint(a, size);
    return 0;
}