// bidirectional weighted graph, make adjacency list, print adjacency list,
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> edgeWeight;

class Graph
{
    int V;
    list<edgeWeight> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<edgeWeight>[V];
    }
    void makeList(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
        // if directed graph this line don't need
        adj[v].push_back(make_pair(u, w));
    }
    void printList(int chk)
    {
        cout << chk << ": ";
        for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            cout << "( " << (*i).first << ", " << (*i).second << " )";
        }
    }
};

int main()
{
    int V, E;
    cin >> V >> E;
    Graph g(V);

    // input all edges two node (u,v) and weight (w)
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.makeList(u, v, w);
    }

    // print adjacency list for all Vertices [V]
    for (int i = 0; i < V; i++)
    {
        g.printList(i);
        cout << endl;
    }
    return 0;
}

/*
7 10
0 2 1
0 1 7
0 5 3
1 3 11
2 3 3
2 5 8
3 6 1
4 5 6
4 6 4
5 6 2
*/