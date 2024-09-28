#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, r;
    cin >> n >> d >> r;
    while (1)
    {
        int mor[n], eve[n], total_sum = 0;
        for (int i = 0; i < n; i++)
            cin >> mor[i];
        for (int i = 0; i < n; i++)
            cin >> eve[i];

        // sort is built in function in cpp
        sort(mor, mor + n);
        sort(eve, eve + n);

        for (int j = 0; j < n; j++)
        {
            int sum;
            sum = mor[j] + eve[n - 1 - j];
            if (sum > d)
            {
                total_sum += ((sum - d) * r);
            }
        }

        cout << total_sum << endl;
        cin >> n >> d >> r;
        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }
    }
    return 0;
}