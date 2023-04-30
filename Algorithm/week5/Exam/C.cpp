#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<vector<int>> adj_list(N + 1);

    for (int i = 0; i < K; i++)
    {
        int op, u, v;
        cin >> op;

        if (op == 1)
        {
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        else
        {
            cin >> u;
            for (int j = 0; j < adj_list[u].size(); j++)
            {
                cout << adj_list[u][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
