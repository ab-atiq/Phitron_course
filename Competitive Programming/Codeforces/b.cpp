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
        ll n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (ll i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            mp[b] += c; // Add c to the current value at key b
        }

        // Collect values into a vector for sorting
        vector<int> values;
        for (auto &entry : mp)
        {
            values.push_back(entry.second);
        }

        // Sort values in descending order
        sort(values.begin(), values.end(), greater<int>());

        // Calculate sum of the top min(n, k) values
        int sum = 0;
        for (ll i = 0; i < min(n, (ll)values.size()); i++)
        {
            sum += values[i];
        }

        cout << sum << endl;
    }
    return 0;
}
