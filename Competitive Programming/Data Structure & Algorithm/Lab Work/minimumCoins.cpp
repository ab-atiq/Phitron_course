// *** find the minimum number of coins needed to make change for a given amount using greedy algo ***
// https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/
// https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/
#include <iostream>

using namespace std;

int main()
{
    // Create an array to store the coins.
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    // length of coins
    int len = sizeof(coins) / sizeof(coins[0]);
    // Get the input from the user.
    int amount;
    cin >> amount;

    // Initialize the result.
    int result = 0;

    // Iterate over the coins.
    for (int i = len-1; i >= 0; i--)
    {
        // While the amount is greater than or equal to the coin value.
        while (amount >= coins[i])
        {
            // Subtract the coin value from the amount.
            amount -= coins[i];

            // Increment the result.
            result++;
        }
    }

    // Print the result.
    cout << result << endl;

    return 0;
}