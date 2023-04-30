#include <bits/stdc++.h>
using namespace std;

bool chkCycle(const vector<vector<int>> &graph);

int main()
{
    int num_nodes, num_edges;
    cin >> num_nodes >> num_edges;
    vector<vector<int>> graph(num_nodes);
    for (int i = 0; i < num_edges; ++i)
    {
        int src, dest;
        cin >> src >> dest;
        // directed graph
        graph[src].push_back(dest);
    }
    bool hasCycle = chkCycle(graph);
    if (hasCycle)
    {
        cout << "The graph contains a cycle." << endl;
    }
    else
    {
        cout << "The graph does not contain a cycle." << endl;
    }
    return 0;
}

bool chkCycle(const vector<vector<int>> &graph)
{
    const int n = graph.size();
    vector<int> inDegree(n);
    for (int i = 0; i < n; ++i)
    {
        for (const int neighbor : graph[i])
        {
            ++inDegree[neighbor];
        }
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        const int current_node = q.front();
        q.pop();
        for (const int neighbor : graph[current_node])
        {
            --inDegree[neighbor];
            if (inDegree[neighbor] == 0)
            {
                q.push(neighbor);
            }
        }
    }
    return any_of(inDegree.begin(), inDegree.end(), [](int d)
                  { return d != 0; });
}

/*
Graph:
0 -----> 1 ------> 2 --------> 3 -------> 4
                   |                      |
                    <---------------------
Input:
5 5
0 1
1 2
2 3
3 4
4 2
Output:
The graph contains a cycle.
*/