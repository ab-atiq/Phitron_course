#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int max_points(int n, vector<int>& a) {
    vector<int> dp(n);
    unordered_map<int, vector<int>> indices;
    for (int i = 0; i < n; i++) {
        indices[a[i]].push_back(i);
    }
    function<int(int)> rec = [&](int i) {
        if (i >= n) {
            return 0;
        }
        if (dp[i] > 0) {
            return dp[i];
        }
        int j = i;
        while (j < n && (a[j] == a[i] || a[j] == a[i]+1)) {
            j++;
        }
        if (j < n && a[j] == a[i]+2) {
            j = upper_bound(indices[a[i]+1].begin(), indices[a[i]+1].end(), j) - indices[a[i]+1].begin();
        }
        dp[i] = max(a[i] + rec(j), rec(i+1));
        return dp[i];
    };
    return rec(0);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << max_points(n, a) << endl;
    return 0;
}
