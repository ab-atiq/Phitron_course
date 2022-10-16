#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<char> v;
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            v.push_back(c);
        }
        for (auto &p : v)
        {
            cout << p;
        }
        if (v.begin() == v.begin() + 1)
        {
            v.erase(v.begin());
            v.erase(v.begin() + 1);
        }
        else if (v[auto v.begin()] == 'R' || v[v.begin() + 1] == 'B')
        {
        }
    }
    return 0;
}
