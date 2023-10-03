#include <bits/stdc++.h>
using namespace std;
#define N int(1e5)
// const int N = 1e5;
int visited[N];
vector<int> Adj_list[N]; // adjacent list vector create
/*
adj_list[1]=2, 3, 4 [1---2, 1---2, 1---4, --- means connected]
*/

void DFS(int node)
{
    cout << node << " ";
    visited[node] = 1; // visited array element of node will make true
    for (int adj_node : Adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            DFS(adj_node);
        }
    }
}

int main()
{
    int nodes, edges;
    cout << "Enter the number of Nodes and Edges: ";
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        // undirected graph
        Adj_list[u].push_back(v);
        Adj_list[v].push_back(u);
    }
    int src;
    cout << "Enter src where traversal will start: ";
    cin >> src;
    DFS(src);
    return 0;
}
/*  
Pseudo Code: using recursion
DFS(node):
- print node and visited[node] = 1
- for all "adjacent node" of "node":
    - if visited[adj_node] == 0:
        - DFS(node)
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
Output: 0 1 2 3 4 5

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
src = 3
Output: 3 2 1 4 5 6
*/