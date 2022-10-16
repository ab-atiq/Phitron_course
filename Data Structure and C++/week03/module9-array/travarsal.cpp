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
    return 0;
}