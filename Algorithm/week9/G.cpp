#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[n + 1][2];
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[2][0] = 2;
    dp[2][1] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][1] + dp[i - 2][1];
        dp[i][1] = dp[i - 1][0] + dp[i - 2][0];
    }
    cout << dp[n][0] + dp[n][1] << endl;
    return 0;
}
