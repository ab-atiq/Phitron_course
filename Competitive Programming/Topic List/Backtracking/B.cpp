#include <bits/stdc++.h>
using namespace std;
const int N = 30000 + 2;
int n, k, t;
string s;
bool vis[1005];
void backtrack(int length)
{
    if (k == 0)
        return;
    if (length == 0)
    {
        cout << s << endl;
        k--;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])continue;
        vis[i] = 1;
        s.push_back('A' + i - 1);
        backtrack(length - 1);
        s.pop_back();
        vis[i] = 0;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        cout << "Case " << i << ":\n";
        backtrack(n);
        s.clear();
        memset(vis, 0, sizeof(vis));
    }
    return 0;
}
