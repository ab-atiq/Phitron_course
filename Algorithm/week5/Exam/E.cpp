#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int n;
vector<vector<char>> a;

int bfs(int sx, int sy, int ex, int ey)
{
    vector<vector<int>> d(n, vector<int>(n, INF));
    queue<pair<int, int>> q;

    d[sx][sy] = 0;
    q.push({sx, sy});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;
            if (a[nx][ny] != '.' || d[nx][ny] < INF)
                continue;

            d[nx][ny] = d[x][y] + 1;
            q.push({nx, ny});
        }
    }

    if (d[ex][ey] == INF)
        return -1;

    int x = ex, y = ey;
    while (x != sx || y != sy)
    {
        int p = d[x][y];
        a[x][y] = '+';
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;
            if (d[nx][ny] == p - 1)
            {
                x = nx, y = ny;
                break;
            }
        }
    }
    return d[ex][ey];
}

int main()
{
    cin >> n;
    a.resize(n, vector<char>(n));

    int sx = -1, sy = -1, ex = -1, ey = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
                sx = i, sy = j;
            if (a[i][j] == 'X')
                ex = i, ey = j;
        }
    }

    int d = bfs(sx, sy, ex, ey);
    if (d == -1)
    {
        cout << "N\n";
    }
    else
    {
        cout << "Y\n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (a[i][j] == '+' || a[i][j] == 'X')
                    cout << '+';
                else
                    cout << a[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}
