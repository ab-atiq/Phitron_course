#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
// typedef long long LL;8
int main()
{
    int N, Q, cas = 0;
    while (cin >> N >> Q)
    {
        if (N == 0 && Q == 0)
        {
            break;
        }

        int s[10005];
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
        }
        sort(s, s + N);

        cout << "CASE# " << ++cas << ":" << endl;
        while (Q--)
        {
            int que, ans;
            cin >> que;
            ans = lower_bound(s, s + N, que) - s;
            if (s[ans] == que)
            {
                cout << que << " found at " << ans + 1 << endl;
            }
            else
            {
                cout << que << " not found" << endl;
            }
        }
    }
    return 0;
}