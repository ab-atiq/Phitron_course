#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int a, f;
        cin >> a >> f;
        for (int fre = 1; fre <= f; fre++)
        {
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            for (int i = a - 1; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            if ((t == test) && (f == fre))

                break;

            cout << endl;
        }
    }
    return 0;
}