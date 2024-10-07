/*
----------------------
|                    |
| Abul Bashar Atiq   |
|                    |
----------------------
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll i = n - 1; i > 0; i--)
        {
            int tem = floor((v[i] + v[i - 1]) / (double)2);
            v[i - 1] = tem;
        }
        cout << v[0] << endl;
    }
    return 0;
}