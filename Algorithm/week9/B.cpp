#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int parent[MAXN], sz[MAXN];

void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, pair<double, double>>> circles(n);
    for (int i = 0; i < n; i++)
    {
        double x, y, r;
        cin >> x >> y >> r;
        circles[i] = {i, {x, y}};
        make_set(i);
        for (int j = 0; j < i; j++)
        {
            double dx = circles[i].second.first - circles[j].second.first;
            double dy = circles[i].second.second - circles[j].second.second;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist <= circles[i].first + circles[j].first)
                union_sets(i, j);
        }
    }

    int groups = 0;
    for (int i = 0; i < n; i++)
    {
        if (parent[i] == i)
            groups++;
    }
    cout << groups << endl;

    return 0;
}
