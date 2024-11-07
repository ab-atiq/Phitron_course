/*
----------------------
|                    |
| Abul Bashar Atiq   |
|                    |
----------------------
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to check if "1100" starts at position idx in the string
bool is1100(const string &s, int idx)
{
    if (idx < 0 || idx + 3 >= s.size())
        return false;
    return (s[idx] == '1' && s[idx + 1] == '1' && s[idx + 2] == '0' && s[idx + 3] == '0');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        ll q;
        cin >> q;

        // Precompute the initial number of "1100" substrings
        int count = 0;
        for (int i = 0; i <= (int)str.size() - 4; ++i)
        {
            if (is1100(str, i))
            {
                count++;
            }
        }

        while (q--)
        {
            ll i;
            char v;
            cin >> i >> v;
            i--; // Convert to 0-based index

            // Positions that could be affected: i-3 to i
            // Check these positions before the update
            for (int pos = i - 3; pos <= i; ++pos)
            {
                if (is1100(str, pos))
                {
                    count--;
                }
            }

            // Update the character
            str[i] = v;

            // Check the affected positions after the update
            for (int pos = i - 3; pos <= i; ++pos)
            {
                if (is1100(str, pos))
                {
                    count++;
                }
            }

            // Output the result based on the count
            if (count > 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
