// Print the lexicographically smallest lowercase (only one letter) English letter that does not occur in string. If every lowercase English letter occurs in string, print None instead.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    bool app[26];
    for (int i = 0; i < 26; ++i)
    {
        app[i] = false;
    }
    for (int i = 0; S[i] != '\0'; ++i)
    {
        app[S[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (!app[i])
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None";
    return 0;
}
