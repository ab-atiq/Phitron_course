#include <bits/stdc++.h>
using namespace std;
int trim_edges(vector<vector<int>> graph);

int main()
{
    int n, m;
    cout << "Enter nodes and edges: " << endl;
    cin >> n >> m;
    // vertices number not over node number
    vector<vector<int>> graph(n + 1);
    cout << "Enter directed edges: " << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    int removedEdges = trim_edges(graph);
    cout << "Number of edges removed: " << removedEdges << endl;
    return 0;
}

int trim_edges(vector<vector<int>> graph)
{
    int removedEdges = 0;
    for (int u = 0; u < graph.size(); ++u)
    {
        for (int v : graph[u])
        {
            bool hasReverseEdge = false;
            for (int w : graph[v])
            {
                if (w == u)
                {
                    hasReverseEdge = true;
                    break;
                }
            }
            if (!hasReverseEdge)
            {
                graph[u].erase(remove(graph[u].begin(), graph[u].end(), v), graph[u].end());
                removedEdges++;
            }
        }
    }
    return removedEdges;
}

/*
Graph:
0---1----2-----3
    |    |
    |    |
    5----4
Number of nodes and edges = 6 12
List of adj nodes ->
0 1
1 0
1 2
2 1
2 3
3 2
2 4
4 2
1 5
5 1
5 4
4 5
Output:
Number of edges removed: 0
*/