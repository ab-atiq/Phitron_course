#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int si, int ei)
{
    int pivot = arr[ei];
    int i = si - 1;
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // place pivot in right place
    i++;
    swap(arr[i], arr[ei]);
    return i;
}
void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int parIdx = partition(arr, si, ei);
    quickSort(arr, si, parIdx - 1);
    quickSort(arr, parIdx + 1, ei);
}
int main()
{
    int arr[] = {2, 5, 3, 5, 65, 1, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}