#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            if (arr[i] % 3 == 1)
            {
                flag = true;
            }
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (sum % 3 == 1 && flag == false)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}