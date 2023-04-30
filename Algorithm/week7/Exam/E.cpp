#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> graph[100001];
vector<int> topoSort;
int dp[100001];

void topological_sort()
{
    queue<int> q;
    int indegree[n+1];
    memset(indegree,0,sizeof(indegree));
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
            int v = graph[i][j];
            indegree[v]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        topoSort.push_back(u);
        for(int j=0;j<graph[u].size();j++)
        {
            int v = graph[u][j];
            indegree[v]--;
            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }

    topological_sort();

    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int u = topoSort[i];
        dp[u] = 1;
        for(int j=0;j<graph[u].size();j++)
        {
            int v = graph[u][j];
            dp[v] = max(dp[v], dp[u]+1);
            ans = max(ans, dp[v]);
        }
    }

    cout<<ans<<"\n";
    return 0;
}
