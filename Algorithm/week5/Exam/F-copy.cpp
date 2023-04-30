#include <bits/stdc++.h>
using namespace std;
const int MaxNum = 100;
vector<int> G[MaxNum + 5];
bool V[MaxNum + 5] = {0};
int n, m;
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    V[u] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int node : G[f])
        {
            if (!V[node])
            {
                V[node] = true;
                cout << f << " " << node << endl;
                q.push(node);
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    BFS(1);

    return 0;
}
