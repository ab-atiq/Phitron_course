#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> path;

bool dfs(int u, int parent, int start)
{
    visited[u] = true;
    path.push_back(u);
    for (int v : adj[u])
    {
        if (v != parent)
        {
            if (visited[v])
            {
                if (v == start && path.size() > 2)
                {
                    path.push_back(start);
                    return true;
                }
            }
            else
            {
                if (dfs(v, u, start))
                {
                    return true;
                }
            }
        }
    }
    path.pop_back();
    visited[u] = false;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int u = 1; u <= n; u++)
    {
        if (!visited[u])
        {
            path.clear();
            if (dfs(u, 0, u))
            {
                cout << path.size() << endl;
                // print the path
                // for (int v : path)
                // {
                //     cout << v << " ";
                // }
                // cout << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
/*  
Graph:
2----1----3
|    |  /
4----5
input:
5 6
1 3
1 2
5 3
1 5
2 4
4 5
output
4
*/