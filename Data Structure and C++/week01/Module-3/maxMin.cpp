#include <bits/stdc++.h>
using namespace std;
int main()
{
    // minimum and maximum number find
    int a = 10, b = 20, c = 30, d = 40;
    int minimumNum = min(a, min(b, min(c, d)));
    int maximumNum = max(a, max(b, max(c, d)));
    cout << "Maximum Number: " << maximumNum << " Minimum Number: " << minimumNum << endl;

    // max and min from array element
    int arr[5] = {10, 20, 30, 40, 50};
    int mn = arr[0], mx = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (mn > arr[i])
        {
            mn = arr[i];
        }
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    cout << "Maximum Number: " << mx << " Minimum Number: " << mn << endl;
    return 0;
}