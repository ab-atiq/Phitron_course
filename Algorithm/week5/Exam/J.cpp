#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
        }
    }

    vector<int> dist(n, INF);
    vector<int> prev(n, -1);

    dist[0] = 0;

    int last_relax;
    for (int i = 0; i < n; i++)
    {
        last_relax = -1;
        for (int u = 0; u < n; u++)
        {
            for (int v = 0; v < n; v++)
            {
                if (dist[u] != INF && adj[u][v] != 100000 && dist[u] + adj[u][v] < dist[v])
                {
                    dist[v] = dist[u] + adj[u][v];
                    prev[v] = u;
                    last_relax = v;
                }
            }
        }
    }

    if (last_relax == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        vector<bool> in_cycle(n);
        for (int i = 0; i < n; i++)
        {
            last_relax = prev[last_relax];
        }

        int cycle_start = last_relax;
        int cur = cycle_start;
        do
        {
            in_cycle[cur] = true;
            cur = prev[cur];
        } while (cur != cycle_start);

        vector<int> cycle;
        for (int i = 0; i < n; i++)
        {
            if (in_cycle[i])
            {
                cycle.push_back(i);
            }
        }

        cout << cycle.size() << endl;
        for (int v : cycle)
        {
            cout << v + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
