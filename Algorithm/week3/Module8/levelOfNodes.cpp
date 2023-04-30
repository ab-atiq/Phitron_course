#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
// int visited[N]; // all element of array default 0
int visited[N] = {0};
vector<int> adj_list[N];
int level[N]; // level calculate

void BFS(int src)
{
    // we will use queue for BFS traversal
    queue<int> q;
    visited[src] = 1;
    level[src] = 0; // set root node level as 0
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1; // level update
                q.push(adj_node);
            }
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
    cout << "Enter source where BFS will start: ";
    cin >> src;
    BFS(src);

    for (int i = 0; i < nodes; i++)
    {
        cout << "Node " << i << " -> level: " << level[i] << endl;
    }

    return 0;
}
/*
Pseudo Code:
BFS(source):
- Initialize an array called "visited" and an empty queue "q"
- mark visited[source] = 1 and q.push(source)
- while the queue is not empty:
    - head = q.front()
    - q.pop()
    - print the node "head"
    - for all "adjacent nodes" of "head":
        - if visited[adj_node] == 0:
            - visited[adj_node] = 1
            - q.push(adj_node)

*/
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
Enter source where BFS will start: 0
Node 0 -> level: 0
Node 1 -> level: 1
Node 2 -> level: 2
Node 3 -> level: 3
Node 4 -> level: 3
Node 5 -> level: 2

Graph:
0---1    2-----3
    |    |
    |    |
    5----4
Enter total nodes and edges: 6 5
0 1
2 3
2 4
1 5
5 4
Enter source where BFS will start: 0
Node 0 -> level: 0
Node 1 -> level: 1
Node 2 -> level: 4
Node 3 -> level: 5
Node 4 -> level: 3
Node 5 -> level: 2

Graph:
1 ----- 2 ----- 5
     /  |     /
   /    |   /
4 ----- 3 ----- 0
Enter total nodes and edges: 6 7
1 2
2 3
2 4
2 5
3 5
3 4
3 0
Enter source where BFS will start: 1
Node 0 -> level: 3
Node 1 -> level: 0
Node 2 -> level: 1
Node 3 -> level: 2
Node 4 -> level: 2
Node 5 -> level: 2
*/
