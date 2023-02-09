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
    cout << "All Array element: ";
    arrayPrint(a, size);

    // insertion element in array
    int pos, value;
    cout << "Enter index position and value:";
    cin >> pos >> value;
    if (pos < 0 || size < pos)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // i) swap technic: swap element from last to position by previous element
        for (int i = size - 1; i >= pos; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos] = value;
    }
    // array after insertion
    cout << "All Array element: ";
    arrayPrint(a, size + 1);
    // increase size
    size++;

    // insertion only exchange position and size value
    cout << "Enter index position and value:";
    cin >> pos >> value;
    if (pos < 0 || size < pos)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // exchange position: position index value assign in last index then that index position assign input value.
        a[size] = a[pos];
        a[pos] = value;
    }
    // array after insertion
    cout << "All Array element: ";
    arrayPrint(a, size + 1);

    return 0;
}