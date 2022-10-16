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
    int a[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // print array element
    cout << "All Array element: ";
    arrayPrint(a, size);

    // deletion
    int pos;
    cout << "Enter deletion position: ";
    cin >> pos;
    if (size < 0 || size - 1 < pos)
    {
        cout << "Invalid Deletion" << endl;
    }
    else
    {
        // last index -> simply delete last position
        if (pos == size - 1)
            size--;
        else
        {
            // first or middle index -> swap from pos to size-1 and set sequentially from 0 index
            for (int i = pos; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
        }
    }
    cout << "Array element after deletion: ";
    arrayPrint(a, size);
    return 0;
}