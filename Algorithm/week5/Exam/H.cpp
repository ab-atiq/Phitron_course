#include <bits/stdc++.h>
using namespace std;
const int MaxNum = 100;

vector<pair<int, int>> adjList[MaxNum + 1];
int gas[MaxNum + 1];
int dist[MaxNum + 1];

void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d > dist[u])
        {
            continue;
        }
        for (auto &p : adjList[u])
        {
            int v = p.first;
            int w = p.second;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> gas[i];
        dist[i] = INT_MAX;
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back({v, gas[u]});
        adjList[v].push_back({u, gas[v]});
    }
    dijkstra(1);
    if (dist[n] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dist[n] << endl;
    }
    return 0;
}
