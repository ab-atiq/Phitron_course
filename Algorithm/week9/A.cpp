#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

vector<pair<int, int>> adj[MAXN];
int adj_matrix[MAXN][MAXN];

void adj_list_to_matrix(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (auto edge : adj[i])
        {
            int j = edge.first, w = edge.second;
            adj_matrix[i][j] = w;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    adj_list_to_matrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
