#include <bits/stdc++.h>
using namespace std;
void dijkstra(int source, const vector<vector<int>> &adj, const vector<vector<int>> &cost, vector<int> &dis);

const int INF = numeric_limits<int>::max();

int main()
{
    int TC;
    cin >> TC;
    for (int cs = 1; cs <= TC; cs++)
    {
        int n, e;
        cin >> n >> e;
        vector<vector<int>> adj(n), cost(n);
        while (e--)
        {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int m;
        cin >> m;
        vector<int> dis;
        dijkstra(m, adj, cost, dis);
        cout << "Case " << cs << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (dis[i] == INF)
            {
                cout << "Impossible" << endl;
            }
            else
            {
                cout << dis[i] << endl;
            }
        }
    }
    return 0;
}
void dijkstra(int source, const vector<vector<int>> &adj, const vector<vector<int>> &cost, vector<int> &dis)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, std::greater<pair<int, int>>> q;
    dis.assign(adj.size(), INF);
    dis[source] = 0;
    q.push(std::make_pair(0, source));
    while (!q.empty())
    {
        pair<int, int> top = q.top();
        q.pop();
        int u = top.second;
        for (size_t i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            int temp = std::max(dis[u], cost[u][i]);
            if (temp < dis[v])
            {
                dis[v] = temp;
                q.push(std::make_pair(dis[v], v));
            }
        }
    }
}
