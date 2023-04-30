#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    for (int case_num = 1; case_num <= t; case_num++) {
        int n;
        cin >> n; // number of monsters
        vector<int> coins(n);
        for (int i = 0; i < n; i++) {
            cin >> coins[i]; // coins of each monster
        }

        vector<int> dp(n+1, 0); // initialize dp array

        // base cases
        dp[1] = coins[0];

        // calculate dp[i] for i=2 to n
        for (int i = 2; i <= n; i++) {
            dp[i] = max(dp[i-2] + coins[i-1], dp[i-1]);
        }

        // print result for current test case
        cout << "Case " << case_num << ": " << dp[n] << endl;
    }

    return 0;
}
