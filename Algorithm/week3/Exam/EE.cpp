#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> path;
vector<int> parent;
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
bool bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    parent[start] = -1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
            else if (v != parent[u])
            {
                int x = u;
                while (x != v)
                {
                    path.push_back(x);
                    x = parent[x];
                }
                path.push_back(v);
                path.push_back(u);
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    parent.resize(n + 1);
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
                for (int v : path)
                {
                    cout << v << " ";
                }
                cout << endl;
                return 0;
            }
        }
    }
    // for (int u = 1; u <= n; u++)
    // {
    //     if (!visited[u])
    //     {
    //         path.clear();
    //         if (bfs(u))
    //         {
    //             cout << path.size() << endl;
    //             for (int i = path.size() - 1; i >= 0; i--)
    //             {
    //                 cout << path[i] << " ";
    //             }
    //             cout << endl;
    //             return 0;
    //         }
    //     }
    // }
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