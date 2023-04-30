#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N] = {0};
vector<int> adj_list[N];
int level[N] = {0};

void DFS(int node, int depth)
{
    visited[node] = 1;
    level[node] = depth;
    for (int adj_node : adj_list[node])
    {
        if (!visited[adj_node])
        {
            DFS(adj_node, depth + 1);
        }
    }
}

int main()
{
    int nodes, edges;
    cout << "Enter total nodes and edges: ";
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        // undirected graph
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src;
    cout << "Enter source where DFS will start: ";
    cin >> src;
    DFS(src, 0);

    for (int i = 0; i < nodes; i++)
    {
        cout << "Node " << i << " -> level: " << level[i] << endl;
    }

    return 0;
}
/*
Graph:
0---1----2-----3
    |    |
    |    |
    5----4
Enter total nodes and edges: 6 6
0 1
1 2
2 3
2 4
1 5
5 4
Enter source where DFS will start: 0
Node 0 -> level: 0
Node 1 -> level: 1
Node 2 -> level: 2
Node 3 -> level: 3
Node 4 -> level: 3
Node 5 -> level: 4
*/