#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_corns(vector<vector<int>>& floor) {
    int m = floor.size();
    int n = floor[0].size();

    // initialize dp array
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = floor[0][0];

    // fill in dp array
    for (int i = 1; i < m; i++) {
        dp[i][0] = dp[i-1][0] + floor[i][0];
    }
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j-1] + floor[0][j];
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + floor[i][j];
        }
    }

    return dp[m-1][n-1];
}

int main() {
    vector<vector<int>> floor = {
        {3, 2, 4},
        {1, 5, 1}
    };
    cout << max_corns(floor) << endl;  // output: 12

    return 0;
}
