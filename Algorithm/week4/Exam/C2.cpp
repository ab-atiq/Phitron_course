#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int start, vector<int> adj_list[])
{
    vector<int> max_path(102, 0);
    queue<int> q;
    q.push(start);
    max_path[start] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int neighbor : adj_list[node])
        {
            if (max_path[neighbor] < max_path[node] + 1)
            {
                max_path[neighbor] = max_path[node] + 1;
                q.push(neighbor);
            }
        }
    }
    return max_path;
}

int main()
{
    // create the graph
    vector<int> adj_list[102];
    for (int i = 2; i <= 101; i++)
    {
        for (int j = 2 * i; j <= 101; j += i)
        {
            adj_list[i].push_back(j);
        }
    }

    // find the longest path starting from each node using BFS
    vector<int> max_path(102, 0);
    for (int node = 2; node <= 101; node++)
    {
        vector<int> path = bfs(node, adj_list);
        max_path[node] = *max_element(path.begin(), path.end());
    }

    // find the longest path and its length
    int longest_path = *max_element(max_path.begin(), max_path.end());
    vector<int> path;
    for (int node = 2; node <= 101; node++)
    {
        if (max_path[node] == longest_path)
        {
            path.push_back(node);
            longest_path--;
            if (longest_path == 0)
            {
                break;
            }
        }
    }

    // print the longest path and its length
    cout << "Longest path: ";
    for (int node : path)
    {
        cout << node << " ";
    }
    cout << endl;
    cout << "Length: " << path.size() << endl;

    return 0;
}
