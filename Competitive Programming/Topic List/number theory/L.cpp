#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t, i, p, l, j, n;
    cin >> t;
    while (t--)
    {
        cin >> p >> l;
        vector<long long> v;
        n = p - 1;
        for (j = 2; j <= sqrt(n); j++)
        {
            if (n % j == 0)
            {
                if (j * j == n)
                {
                    v.push_back(j);
                }
                else
                {
                    v.push_back(j);
                    v.push_back(n / j);
                }
            }
        }

        if (n <= 1)
        {
            v.push_back(n);
        }
        else
        {
            v.push_back(1);
            v.push_back(n);
        }
        sort(v.begin(), v.end());
        int z = 0;
        cout << "Case " << i << ":";
        for (j = 0; j < v.size(); j++)
            if (v[j] > 1)
            {
                z = 1;
                cout << " " << v[j];
            }
        if (z == 0)
        {
            cout << " impossible";
        }
        cout << endl;
    }
    return 0;
}