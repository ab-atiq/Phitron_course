#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj_list[], bool visited[], stack<int> &top_order, int max_path[])
{
    visited[node] = true;
    for (int neighbor : adj_list[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, adj_list, visited, top_order, max_path);
        }
    }
    top_order.push(node);
    if (adj_list[node].empty())
    {
        max_path[node] = 1;
    }
    else
    {
        int max_neighbor_path = 0;
        for (int neighbor : adj_list[node])
        {
            max_neighbor_path = max(max_neighbor_path, max_path[neighbor]);
        }
        max_path[node] = max_neighbor_path + 1;
    }
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

    // perform DFS to compute topological ordering and longest path
    bool visited[102] = {false};
    stack<int> top_order;
    int max_path[102] = {0};
    for (int node = 2; node <= 101; node++)
    {
        if (!visited[node])
        {
            dfs(node, adj_list, visited, top_order, max_path);
        }
    }

    // find the longest path
    int longest_path = 0;
    for (int node = 2; node <= 101; node++)
    {
        longest_path = max(longest_path, max_path[node]);
    }

    // find a path of length longest_path by backtracking from max_path
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
    // reverse(path.begin(), path.end());

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

/*  
Longest path: 2 4 7 13 26 51 
Length: 6
*/