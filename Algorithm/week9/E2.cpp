#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> floor(n, vector<int>(m));
    cout << "Enter Values: ";
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> floor[i][j];
        }
    }
    // show floor
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << floor[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> dp(n, vector<int>(m));
    dp[0][0] = floor[0][0];
    // cout << dp[0][0] << endl;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][0] + floor[i][0];
        // cout << dp[i][0] << endl;
    }
    for (int j = 1; j < m; j++)
    {
        dp[0][j] = dp[0][j - 1] + floor[0][j];
        // cout << dp[0][j] << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + floor[i][j];
            // cout << dp[i][j] << endl;
        }
    }

    cout << dp[n - 1][m - 1] << endl;
    return 0;
}
/*
Input:
2 3
3 2 4
1 5 1
output: 12
*/