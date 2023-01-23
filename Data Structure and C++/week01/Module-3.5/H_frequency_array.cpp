#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int len = S.length();
    sort(S.begin(), S.end());
    for (int i = 0; i < len - 1; i++)
    {
        // repeated two character or not
        if (S[i] == S[i + 1])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}