#include <bits/stdc++.h>
using namespace std;
const int MaxNum = 100005;
vector<int> parent(MaxNum);

bool isParent(int a, int b)
{
    if (a == b)
        return true;
    while (b != 0)
    {
        if (b == a)
            return true;
        b = parent[b];
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> parent[i];
    }
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        cout << isParent(a, b) << endl;
    }
    return 0;
}
