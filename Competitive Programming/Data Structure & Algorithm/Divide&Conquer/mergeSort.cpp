#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    int temp[ei - si + 1];
    int i = si;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] > arr[j])
        {
            temp[k] = arr[j];
            j++;
        }
        else
        {
            temp[k] = arr[i];
            i++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }
    // teporary array insert in main array
    for (int i = 0, j = si; i < (ei - si + 1); i++, j++)
    {
        arr[j] = temp[i];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
}

int main()
{
    int arr[] = {2, 5, 3, 5, 65, 1, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}