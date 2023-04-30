#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
    vector<pair<int, int>> adj[n + 1];
    for (auto edge : times)
    {
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, INF);
    dist[k] = 0;
    pq.push({0, k});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto neighbor : adj[u])
        {
            int v = neighbor.first, w = neighbor.second;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    int maxDist = -1;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
        {
            return -1;
        }
        maxDist = max(maxDist, dist[i]);
    }

    return maxDist;
}

int main()
{
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    vector<vector<int>> times;
    cout << "Enter graph u, v and w: ";
    for (int i = 0; i < n-1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        times.push_back({u, v, w});
    }
    int result = networkDelayTime(times, n, k);
    cout << result << endl;
    return 0;
}
/* 
Enter n and k: 4 2
Enter graph u, v and w: 2 1 1
2 3 1
3 4 1
2

Enter n and k: 2 1
Enter graph u, v and w: 1 2 1
1

Enter n and k: 2 2
Enter graph u, v and w: 1 2 1
-1
*/