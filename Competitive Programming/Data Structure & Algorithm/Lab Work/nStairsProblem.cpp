#include <bits/stdc++.h>
using namespace std;
int dp[100];
int stair(int n)
{
    if (n <= 1)
        return 1;
    if (dp[n] != 0)
        return dp[n];
    dp[n] = stair(n - 1) + stair(n - 2); // move j stair from j-1 or j-2.
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << stair(n) << endl;

    return 0;
}