#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        // center position
        if (a[mid] == x)
            return mid;
        // left position
        else if (a[mid] > x)
        {
            ub = mid - 1;
            binarySearch(a, x, lb, ub);
        }
        // right position
        else
        {
            lb = mid + 1;
            binarySearch(a, x, lb, ub);
        }
    }
    // not found
    else
    {
        return -1;
    }
};

int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter array element: ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    int searchElement, index;
    cout << "Enter search element: ";
    cin >> searchElement;
    index = binarySearch(arr, searchElement, 0, arrSize);

    if (index == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Find index: " << index << " position: " << index + 1 << endl;
    }
    return 0;
}