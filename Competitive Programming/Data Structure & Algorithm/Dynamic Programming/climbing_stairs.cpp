#include <iostream>
using namespace std;
class Solution
{
public:
    int dp[50] = {0};
    int climbStairs(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        if (dp[n] != 0)
        {
            return dp[n];
        }
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    int t = sol.climbStairs(n);
    cout << t << endl;
    return 0;
}