#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    cout << "Array sort ascending order: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    sort(arr, arr + n, greater<int>()); // descending order sort using greater<>().
    cout << endl
         << "Array sort descending order: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    // sorting character array
    char arr2[6] = "batul";
    sort(arr2, arr2 + 6);
    cout << "\nAscending character array sort: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
    sort(arr2, arr2 + 6, greater<char>());
    cout << "\nDescending character array sort: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }

    // sorting string
    string str = "batul";
    sort(str.begin(), str.end());
    cout << "\nAscending sort in string: ";
    for (char c : str)
    {
        cout << c << " ";
    }
    sort(str.begin(), str.end(), greater<char>());
    cout << "\nDescending sort in string: ";
    for (char c : str)
    {
        cout << c << " ";
    }
    return 0;
}
