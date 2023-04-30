#include <bits/stdc++.h>
using namespace std;
const int Size = 1e5 + 10;
vector<pair<int, int>> cont;
bool visited[Size];
vector<int> adj[Size];
void dfs(int x)
{
    visited[x] = 1;
    for (int y : adj[x])
    {
        if (!visited[y])
        {
            dfs(y);
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
    int res = -1;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            if (res != -1)
            {
                cont.emplace_back(i, res);
            }
            res = i;
        }
    }
    cout << cont.size() << endl;
    for (auto &x : cont)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}

/*  
Input:
4 2
1 2
3 4

Output:
1
3 1
*/