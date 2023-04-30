#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int MaxNum = 100;

vector<pair<int, int>> adjList[MaxNum + 1];
int dist[MaxNum + 1];

void dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto e : adjList[u])
        {
            int v = e.first, w = e.second;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, d, v, r;
    cin >> n >> d >> v >> r;
    for (int i = 1; i <= r; i++)
    {
        int u, t, v, w;
        cin >> u >> t >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    dijkstra(d);
    if (dist[v] == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << dist[v] << "\n";
    }
    return 0;
}
