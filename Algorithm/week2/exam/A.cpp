#include <bits/stdc++.h>
using namespace std;
bool CheckBidirectional(const vector<vector<int>> &graph);

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
    if (CheckBidirectional(graph))
    {
        cout << "Given graph is bi-directional" << endl;
    }
    else
    {
        cout << "Given graph is not bi-directional" << endl;
    }
    return 0;
}

bool CheckBidirectional(const vector<vector<int>> &graph)
{
    unordered_set<int> visited;
    for (int u = 0; u < graph.size(); ++u)
    {
        if (visited.find(u) == visited.end())
        {
            visited.insert(u);
            unordered_set<int> to_check;
            for (int v : graph[u])
            {
                to_check.insert(v);
            }
            for (int v : graph[u])
            {
                if (find(graph[v].begin(), graph[v].end(), u) == graph[v].end())
                {
                    return false;
                }
                to_check.erase(v);
            }
            while (!to_check.empty())
            {
                int v = *to_check.begin();
                to_check.erase(to_check.begin());
                visited.insert(v);
                for (int w : graph[v])
                {
                    if (visited.find(w) == visited.end())
                    {
                        if (find(graph[w].begin(), graph[w].end(), u) == graph[w].end())
                        {
                            return false;
                        }
                        to_check.insert(w);
                    }
                }
            }
        }
    }
    return true;
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
*/