#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> M;

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        M[arr[i]]++;
    }

    // print way 1
    cout << "Print way 1: " << endl;
    for (auto i : M)
    {
        cout << i.first << " | " << i.second << endl;
    }

    // print way 2
    map<int, int>::iterator it;
    cout << "Print way 2: " << endl;
    for (it = M.begin(); it != M.end(); it++)
    {
        cout << it->first << " | " << it->second << endl;
    }

    return 0;
}
/*
input:
10
1 3 1 8 8 1 3 8 9 8

output:
Print way 1: 
1 | 3
3 | 2
8 | 4
9 | 1
Print way 2:
1 | 3
3 | 2
8 | 4
9 | 1

*/