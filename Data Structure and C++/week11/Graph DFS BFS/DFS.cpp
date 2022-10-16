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
    void BFS(int source)
    {
        vector<bool> visited(V, false);
        queue<int> Q;
        visited[source] = true;
        Q.push(source);
        while (!Q.empty())
        {
            int u = Q.front();
            cout << u << " ";
            Q.pop();
            // iteration from every u adjacency list from begin to end.
            for (auto pairElement : adj[u])
            {
                int v = pairElement.first;
                if (visited[v] == false)
                {
                    visited[v] = true;
                    Q.push(v);
                }
            }
        }
    }
    void DFS(int source)
    {
        static vector<bool> visited(V, false);
        cout << source << " ";
        visited[source] = true;
        for (auto pairElement : adj[source])
        {
            int v = pairElement.first;
            if (visited[v] == false)
                DFS(v);
        }
    }
};

int main()
{
    int V, E, S;
    cin >> V >> E >> S;
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

    cout << endl
         << endl;

    g.BFS(S);

    cout << endl
         << endl;

    g.DFS(S);

    return 0;
}

/*
7 10 4
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

adjacency list:
0: ( 2, 1 )( 1, 7 )( 5, 3 )
1: ( 0, 7 )( 3, 11 )
2: ( 0, 1 )( 3, 3 )( 5, 8 )
3: ( 1, 11 )( 2, 3 )( 6, 1 )
4: ( 5, 6 )( 6, 4 )
5: ( 0, 3 )( 2, 8 )( 4, 6 )( 6, 2 )
6: ( 3, 1 )( 4, 4 )( 5, 2 )

BFS:
source: 0
0 2 1 5 3 4 6
source: 4
4 5 6 0 2 3 1

DFS:
source: 0
0 2 3 1 6 4 5
source: 4
4 5 0 2 3 1 6
*/