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

    int roadCnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (M[i][j] == 1)
            {
                roadCnt++;
            }
        }
    }

    cout << roadCnt << endl;
    return 0;
}
