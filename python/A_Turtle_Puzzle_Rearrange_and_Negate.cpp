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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                sum += (-1 * x);
            }
            else
            {
                sum += x;
            }
        }
        cout << sum << endl;
    }

    return 0;
}