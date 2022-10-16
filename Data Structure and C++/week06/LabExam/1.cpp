#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int repeat = 0;
    for (int i = 0; i < n; i = i + repeat)
    {
        repeat = 0;
        int item = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (item == arr[j])
            {
                repeat++;
            }
        }
        cout << item << " => " << repeat << endl;
    }
    return 0;
}
