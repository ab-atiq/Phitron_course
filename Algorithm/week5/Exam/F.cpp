#include <bits/stdc++.h>
using namespace std;
const int MaxNum = 100;

vector<int> G[MaxNum + 5];
bool V[MaxNum + 5];

void DFS(int u)
{
    V[u] = true;
    for (int v : G[u])
    {
        if (!V[v])
        {
            DFS(v);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    DFS(1);

    for (int u = 1; u <= n; u++)
    {
        for (int v : G[u])
        {
            if (u < v && V[u] && V[v])
            {
                cout << u << " " << v << "\n";
            }
        }
    }

    return 0;
}
