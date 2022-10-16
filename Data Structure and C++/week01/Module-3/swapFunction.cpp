#include <bits/stdc++.h>
using namespace std;
int main()
{
    // swap two number use swap function
    int a = 10, b = 34;
    swap(a, b);
    cout << a << " " << b << endl;

    // sorting use swap function
    int arr[5] = {3, 2, 5, 4, 1};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                // create swapping
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                // build in swap function
                swap(arr[i], arr[j]);
            }
        }
    }

    
    // traversing array element
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}