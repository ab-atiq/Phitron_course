// *** 0/1 Knapsack using Dynamic Programming ***
#include <iostream>

using namespace std;

int knapsack(int n, int W, int wt[], int val[])
{
    // Create a table to store the maximum profit.
    int dp[n + 1][W + 1];

    // Initialize the table.
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = 0;
        }
    }

    // Fill in the table.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
            {
                // taking value
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt[i - 1]] + val[i - 1]);
            }
            else
            {
                // does not taking value
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Return the maximum profit.
    return dp[n][W];
}

int main()
{
    // Get the input from the user.
    int n, W;
    cin >> n >> W;

    // Create arrays to store the weights and values of the items.
    int wt[n], val[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    // Print the maximum profit.
    cout << knapsack(n, W, wt, val) << endl;

    return 0;
}