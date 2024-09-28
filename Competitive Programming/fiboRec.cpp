#include <bits/stdc++.h>
using namespace std;
int dp[100] = {-1};
int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n != -1)
        return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << n << "th Fibonacci Number: " << fib(n);
    return 0;
}
