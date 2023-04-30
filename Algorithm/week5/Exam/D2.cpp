#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> k;
    set<int> fired;
    for (int i = 0; i < k; i++)
    {
        int u;
        cin >> u;
        fired.insert(u);
    }
    queue<pair<int, int>> q; // vertex, level
    for (int u : fired)
    {
        q.push({u, 0});
    }
    set<int> visited;
    int last_vertex = 1, last_level = 0;
    while (!q.empty())
    {
        int u = q.front().first, level = q.front().second;
        q.pop();
        visited.insert(u);
        if (level > last_level || (level == last_level && u < last_vertex))
        {
            last_vertex = u;
            last_level = level;
        }
        for (int v : adj[u])
        {
            if (!visited.count(v))
            {
                q.push({v, level + 1});
            }
        }
    }
    cout << last_level << endl;
    cout << last_vertex << endl;
    return 0;
}
