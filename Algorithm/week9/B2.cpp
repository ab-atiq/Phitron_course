#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int parent[MAXN], size[MAXN];

int find_set(int v) {
    if(v == parent[v]) {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if(a != b) {
        if(size[a] < size[b]) {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        parent[i] = i;
        size[i] = 1;
    }
    vector<pair<pair<double, double>, double>> circles(n);
    for(int i=0; i<n; i++) {
        double x, y, r;
        cin >> x >> y >> r;
        circles[i] = {{x, y}, r};
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            double dist_sq = pow(circles[i].first.first - circles[j].first.first, 2) + pow(circles[i].first.second - circles[j].first.second, 2);
            double radius_sum = circles[i].second + circles[j].second;
            if(dist_sq <= radius_sum * radius_sum) {
                union_sets(i, j);
            }
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(parent[i] == i) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
