#include <bits/stdc++.h>
using namespace std;
const int MaxNum = 1e5 + 5;
vector<int> adj_lst[MaxNum];
int fired[MaxNum];
int V[MaxNum];
queue<int> q;

void BFS()
{
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj_lst[v])
        {
            if (V[u] == 0)
            {
                V[u] = 1;
                q.push(u);
                fired[u] = fired[v] + 1;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_lst[u].push_back(v);
        adj_lst[v].push_back(u);
    }
    int k;
    cin >> k;
    while (k--)
    {
        int v;
        cin >> v;
        q.push(v);
        V[v] = 1;
        fired[v] = 0;
    }

    BFS();
    int last_time = -1;
    int last_v = -1;
    for (int i = 1; i <= n; i++)
    {
        if (fired[i] > last_time)
        {
            last_time = fired[i];
            last_v = i;
        }
    }

    cout << last_time << endl;
    cout << last_v << endl;

    return 0;
}
