#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> M(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> M[i][j];
        }
    }

    // Check diagonal elements
    for (int i = 0; i < N; i++)
    {
        if (M[i][i] != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    // Check symmetry
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (M[i][j] != M[j][i])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    // Check multiple edges
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (M[i][j] > 1)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
