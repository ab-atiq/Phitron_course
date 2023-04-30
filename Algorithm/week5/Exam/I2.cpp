#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, dep_time, arr_time;
};

struct Node {
    int id, time;
    bool operator>(const Node& other) const {
        return time > other.time;
    }
};

const int INF = numeric_limits<int>::max();

int main() {
    int n, d, v, r;
    cin >> n >> d >> v >> r;
    vector<vector<Edge>> adj(n + 1);
    for (int i = 0; i < r; i++) {
        int u, t1, v, t2;
        cin >> u >> t1 >> v >> t2;
        adj[u].push_back({v, t1, t2});
        adj[v].push_back({u, t2, t1});
    }
    vector<int> dist(n + 1, INF);
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    dist[d] = 0;
    pq.push({d, 0});
    while (!pq.empty()) {
        Node node = pq.top();
        pq.pop();
        int u = node.id, time = node.time;
        if (u == v) {
            cout << time << endl;
            return 0;
        }
        if (dist[u] < time) {
            continue;
        }
        for (const Edge& edge : adj[u]) {
            int v = edge.to, dep_time = edge.dep_time, arr_time = edge.arr_time;
            int next_time = arr_time + (time <= arr_time ? 0 : (time - arr_time + dep_time - 1) / dep_time * dep_time);
            if (dist[v] > next_time) {
                dist[v] = next_time;
                pq.push({v, next_time});
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
