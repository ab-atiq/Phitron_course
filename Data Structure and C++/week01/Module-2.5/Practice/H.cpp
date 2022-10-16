#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, d, cost, back, remainCost;
    x = 800;
    y = 200;
    cin >> n;
    cost = n * x;
    d = n / 15;
    back = y * d;
    remainCost = cost - back;
    cout << remainCost << endl;
    return 0;
}