#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
/*
State: stone(n) -> cost of reaching n-th stone from 1-st stone.
Base case: stone(1) then cost will be 0.
Recurrence Relation: min(
    stone(n-1)+abs(h[n]-h[n-1]),
    stone(n-2)+abs(h[n]-h[n-2])
    )
*/
int h[N];
int dp[N];

int main()
{
    int n;
    cin >> n;
    // loop will be from 1-n idx
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    // base case
    dp[1] = 0;
    // loop through the states
    for (int i = 2; i <= n; i++)
    {
        // solve from smaller subproblems
        int ans1 = dp[i - 1] + abs(h[i] - h[i - 1]);
        if (n == 2)
        {
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(ans1, ans2);
    }
    cout << dp[n] << endl;
    return 0;
}