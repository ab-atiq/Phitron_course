// problem link - https://cses.fi/problemset/task/1667/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj_list[N];
int visited[N], level[N];

int parent[N]; // store the parent node of visited node

void bfs(int src)
{
    visited[src] = 1;
    level[src] = 1;

    parent[src] = -1; // set source node parent none

    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                parent[adj_node] = head; // set parent of node 
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src_node = 1;
    bfs(src_node);

    int dest_node = n;

    if (visited[dest_node] == 0)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    cout << level[dest_node] << '\n'; // print level of destination node

    vector<int> path; // store the path src to destination

    int selected_node = dest_node; // first select as selected node is destination node

    while (true)
    {
        path.push_back(selected_node); // push selected node
        if (selected_node == src_node) // if selected node is src node then end the store of path
        {
            break;
        }
        selected_node = parent[selected_node];
    }

    reverse(path.begin(), path.end()); // reverse the path which is store destination to source path

    for (int node : path) // print the path source to destination
    {
        cout << node << " ";
    }
    cout << '\n';
    return 0;
}
