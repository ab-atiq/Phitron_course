#include <bits/stdc++.h>
using namespace std;
const int N = 100000;

vector<int> adj_list[N];
int indegree[N];

void topsort(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int i = 0; i < adj_list[head].size(); i++)
        {
            int adj_node = adj_list[head][i];
            indegree[adj_node]--;
            if (indegree[adj_node] == 0)
            {
                q.push(adj_node);
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
        adj_list[a].push_back(b);
        indegree[b]++;
    }
    topsort(n);
    return 0;
}
/*
Input:
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2
*/