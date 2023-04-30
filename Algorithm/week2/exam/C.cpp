#include <bits/stdc++.h>
using namespace std;

int countConnectedComponents(vector<vector<int>> graph);

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges in the graph: ";
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    cout << "Enter the edges as pairs of integers:" << endl;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        // undirected graph
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int totalConnectedComponents = countConnectedComponents(graph);
    cout << "Number of connected components: " << totalConnectedComponents << endl;

    return 0;
}

int countConnectedComponents(vector<vector<int>> graph)
{
    int cnt = 0;
    vector<bool> visited(graph.size(), false);
    for (int i = 0; i < graph.size(); ++i)
    {
        if (!visited[i])
        {
            cnt++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                for (int v : graph[u])
                {
                    if (!visited[v])
                    {
                        q.push(v);
                        visited[v] = true;
                    }
                }
            }
        }
    }
    return cnt - 1;
}
/*
Graph:
0---1    2-----3
         |
         |
    5----4
Number of nodes and edges = 6 4
List of adj nodes ->
0 1
2 3
2 4
4 5
Output:
Number of connected components: 2
Graph:
1-----2  4----5
 \   /
   3
input:
5 4
1 2
2 3
3 1
4 5
Output:
Number of connected components: 2
Graph:
1-----2  4----5     6
 \   /
   3
input:
6 4
1 2
2 3
3 1
4 5
Output:
Number of connected components: 3
*/