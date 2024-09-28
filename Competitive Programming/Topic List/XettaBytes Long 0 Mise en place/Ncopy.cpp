#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define N 102

char map[N][N];
int m, n;
int dir[8][2] = {-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
void dfs(int i, int j)
{
    int x, y;
    map[i][j] = '*';
    for (int k = 0; k < 8; k++)
    {
        x = i + dir[k][0];
        y = j + dir[k][1];
        if (x < 0 || x >= m || y < 0 || y >= n || map[x][y] == '*')
            continue;
        dfs(x, y);
    }
}

int main()
{
    int cnt;
    while (scanf("%d %d", &m, &n), m || m)
    {
        int i, j;
        cnt = 0;
        for (i = 0; i < m; i++)
            cin >> map[i];
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                if (map[i][j] == '@')
                {
                    cnt++;
                    dfs(i, j);
                }
            }
        cout << cnt << endl;
    }

    return 0;
}