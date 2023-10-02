#include <iostream>
using namespace std;
const int N = 101;
long long int dp[N] = {-1};
int main()
{
    int n;
    cin >> n;
    // 1. base case
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
    return 0;
}