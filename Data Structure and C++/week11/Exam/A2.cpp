#include <bits/stdc++.h>
using namespace std;

void printLevels(vector<int> graph[], int V, int x, int L)
{
    // array to store level of each node
    int level[V];
    bool marked[V];

    queue<int> que;
    que.push(x);

    level[x] = 0;
    marked[x] = true;

    // do until queue is empty
    while (!que.empty())
    {

        // get the first element of queue
        x = que.front();

        // dequeue element
        que.pop();

        // traverse neighbors of node x
        for (int i = 0; i < graph[x].size(); i++)
        {
            // b is neighbor of node x
            int b = graph[x][i];

            // if b is not marked already
            if (!marked[b])
            {

                // enqueue b in queue
                que.push(b);

                // level of b is level of x + 1
                level[b] = level[x] + 1;

                // mark b
                marked[b] = true;
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        if (i == L)
            cout << " " << i << " --> " << level[i] << endl;
    }
}

// Driver Code
int main()
{
    // adjacency graph for tree
    // int V = 8;
    int N, E, L;
    cin >> N >> E;
    vector<int> graph[N];
    for (int i = 0; i < N; i++)
    {
        int A, B;
        cin >> A >> B;
        graph[i].push_back(A);
        graph[i].push_back(B);
    }
    // graph[0].push_back(1);
    // graph[0].push_back(2);
    // graph[1].push_back(3);
    // graph[1].push_back(4);
    // graph[1].push_back(5);
    // graph[2].push_back(5);
    // graph[2].push_back(6);
    // graph[6].push_back(7);

    // call levels function with source as 0
    printLevels(graph, N, 0, 1);

    return 0;
}
