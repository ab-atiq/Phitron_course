#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int dist[MAXN], parent[MAXN];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    parent[start] = -1;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        for (int next : adj[curr])
        {
            if (dist[next] == -1)
            {
                dist[next] = dist[curr] + 1;
                parent[next] = curr;
                q.push(next);
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
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(dist, -1, sizeof(dist));

    // run BFS from every node
    for (int i = 1; i <= n; i++)
    {
        bfs(i);

        // check if we found a valid round trip
        for (int j = 1; j <= n; j++)
        {
            if (dist[j] >= 2 && parent[j] != -1)
            {
                int curr = j;
                vector<int> path;
                while (curr != -1)
                {
                    path.push_back(curr);
                    curr = parent[curr];
                }

                // print the path in reverse order
                cout << path.size() << endl;
                for (int k = path.size() - 1; k >= 0; k--)
                {
                    cout << path[k] << " ";
                }
                cout << endl;
                return 0;
            }
        }

        // reset the BFS state
        memset(dist, -1, sizeof(dist));
        memset(parent, -1, sizeof(parent));
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
