#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int num_nodes = 101;
    vector<vector<int>> adj_list(num_nodes + 1);
    for (int u = 2; u <= num_nodes; u++) // all nodes visit
    {
        for (int v = u + u; v <= num_nodes; v += u) // set adjacet node of a node which adjacent node multiple of a node.
        {
            adj_list[u].push_back(v);
        }
    }

    // Print the adjacency list
    for (int u = 2; u <= num_nodes; u++)
    {
        cout << u << ": ";
        for (int v : adj_list[u])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
