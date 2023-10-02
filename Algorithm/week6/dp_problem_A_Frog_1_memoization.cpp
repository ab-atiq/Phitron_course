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
int stone(int n)
{
    // Base case
    if (n == 1)
        return 0;
    // if sub-problem already solved
    if (dp[n] != 0)
    {
        return dp[n];
    }
    // recurrence
    int ans1 = stone(n - 1) + abs(h[n] - h[n - 1]);
    // corner case for n=2
    if (n == 2)
    {
        dp[n] = ans1;
        return ans1;
    }
    int ans2 = stone(n - 2) + abs(h[n] - h[n - 2]);
    int ans = min(ans1, ans2);
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    // loop will be from 1-n idx
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    cout << stone(n) << endl;
    return 0;
}