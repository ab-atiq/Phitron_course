#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<vector<int>> adj;
int visited[N] = {0};
vector<int> parent;
vector<int> path;

bool bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    parent[start] = -1;
    // bool chk = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v]==0)
            {
                visited[v] = 1;
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
    // chk = false;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
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
            bool chk = bfs(u);
            if (!chk)
            {
                cout << path.size() << endl;
                for (int i = path.size() - 1; i >= 0; i--)
                {
                    cout << path[i] << " ";
                }
                cout << endl;
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