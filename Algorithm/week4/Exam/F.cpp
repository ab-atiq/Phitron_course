#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e8;
void DFS(int u, int sum_cat);

int CAT[MAX];
bool visited[MAX];
vector<vector<int>> G(MAX);
int n, m, ans = 0;
int main()
{
    int x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> CAT[i];
    }

    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    DFS(1, CAT[1]);
    cout << ans;
    return 0;
}

void DFS(int u, int sum_cat)
{
    int sum = 0;
    visited[u] = true;
    if (sum_cat > m)
        return;

    bool ok = false;
    for (int v = 0; v < G[u].size(); v++)
    {
        if (!visited[G[u][v]])
        {
            // cout << u << " " << v << endl;
            CAT[G[u][v]] ? sum = sum_cat + 1 : sum = 0;
            DFS(G[u][v], sum);
            ok = true;
        }
    }
    if (!ok)
        ans++;
}