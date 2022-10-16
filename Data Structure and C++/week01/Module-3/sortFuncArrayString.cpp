#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sorting array
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // sorting string
    char arr2[6] = "batul";
    sort(arr2, arr2 + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}