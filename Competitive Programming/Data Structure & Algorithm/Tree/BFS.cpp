#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
// int visited[N]; // all element of array default 0
int visited[N] = {0};
vector<int> adj_list[N];

void BFS(int src)
{
    // we will use queue for BFS traversal
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        cout << head << " ";
        q.pop();

        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
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
Number of nodes = 6
Number of edges = 6
List of adj nodes ->
0 1
1 2
2 3
2 4
1 5
5 4
Output: 0 1 2 5 3 4

Graph:
0---1    2-----3
    |    |
    |    |
    5----4
Number of nodes = 6
Number of edges = 5
List of adj nodes ->
0 1
2 3
2 4
1 5
5 4
Output: 0 1 5 4 2 3

Graph:
1 ----- 2 ----- 5
     /  |     /
   /    |   /
4 ----- 3 ----- 6
input:
6 7
1 2
2 3
2 4
2 5
3 5
3 4
3 6
src = 1
output: 1 2 3 4 5 6

input:
6 7
1 2
2 3
2 4
2 5
3 5
3 4
3 6
src = 3
output: 3 2 5 4 6 1
*/


