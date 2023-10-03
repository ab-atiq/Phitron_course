#include <iostream>
using namespace std;
long long int dp[100];

/*
fibonacci sequence
1 1 2 3 5 8 13 21 34 55

dp[3] = 2
dp[4] = 3
dp[5] = 5
dp[6] = 8
dp[7] = 13
dp[8] = 21
dp[9] = 34
dp[10] = 55
*/

/*
DP steps:
- fib(n) -> calculates the nth fibonacci number
- fib(n) = fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1
*/

long long int fib(int n)
{
    // 1. base case
    if (n <= 2)
        return 1;
    // 2. check if current state is already solved
    // if (dp[n] != -1) when, we will use -1 
    if (dp[n] != 0)
        return dp[n];

    // 3. calculate from smaller sub-problems
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    // if we want to work using all value -1 assign
    // for (int i = 1; i <= n; i++)
    // {
    //     dp[i] = -1; // mark all states as unvisited
    // }

    cout << fib(n) << endl;
    cout << "Fibonacci 6 th position value: " << fib(10) << endl;
    cout << "Fibonacci 10 th position value: " << fib(40) << endl;
    cout << "Fibonacci 30 th position value: " << fib(50) << endl; // take more time
    return 0;
}