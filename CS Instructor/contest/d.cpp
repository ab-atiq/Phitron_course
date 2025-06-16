// --------------------------------------//
//           A.B Atiqur Rahman           //
// --------------------------------------//
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<list<ll>> adj;

ll countChildren(ll node, ll parent)
{
    ll children = 0;
    for (auto child : adj[node])
    {
        if (child != parent)
        {
            children++;
            children += countChildren(child, node);
        }
    }
    return children;
}

int main()
{
    ll tc;
    cin >> tc;
    for (int tcv = 1; tcv <= tc; tcv++)
    {
        adj.clear();
        ll n, k;
        cin >> n >> k;
        adj.resize(n + 1);
        for (ll i = 0; i < n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll ans = 0;
        for (auto node : adj[k])
        {
            ans = max(ans, countChildren(node, k) + 1);
        }
        cout << "Case " << tcv << ": " << ans << endl;
    }
    return 0;
}
