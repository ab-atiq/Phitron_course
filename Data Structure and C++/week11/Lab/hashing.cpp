#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> M;
    M[2] = 4;
    M[3] = 6;
    M.insert(make_pair(1, 5));
    cout << "Map = Key | Value" << endl;
    for (auto i : M)
    {
        cout << i.first << " | " << i.second << endl;
    }

    unordered_map<int, int> UM;
    UM[2] = 4;
    UM[3] = 6;
    UM.insert(make_pair(1, 5));
    cout << "Unordered map = Key | Value" << endl;
    for (auto i : UM)
    {
        cout << i.first << " | " << i.second << endl;
    }
    return 0;
}