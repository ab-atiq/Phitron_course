#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_case(int case_num, int N, int K, const vector<int>& berries) {
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    for (int j = 1; j <= K; j++) {
        dp[1][j] = (j >= 1) ? berries[1] : 0;
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            dp[i][j] = max(dp[i-1][j], (j >= 1) ? dp[i-2][j-1] + berries[i] : 0);
        }
    }
    int ans = 0;
    for (int j = K; j >= 0; j--) {
        if (dp[N][j] <= K) {
            ans = dp[N][j];
            break;
        }
    }
    cout << "Scenario #" << case_num << ": " << ans << "\n";
}

int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++) {
        int N, K;
        cin >> N >> K;
        vector<int> berries(N+1);
        for (int i = 1; i <= N; i++) {
            cin >> berries[i];
        }
        solve_case(case_num, N, K, berries);
    }
    return 0;
}
