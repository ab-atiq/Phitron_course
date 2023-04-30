#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
char M[N][N];
int visited[N][N];
pair<int, int> P[N][N];
pair<int, int> src, des;
int n, m;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool chk_inside(pair<int, int> cord)
{
    int x = cord.first;
    int y = cord.second;
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}
bool chk_safe(pair<int, int> cord)
{
    int x = cord.first;
    int y = cord.second;
    if (M[x][y] == '.' || M[x][y] == '@')
    {
        return true;
    }
    return false;
}
void BFS()
{
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);
    bool possible = false;
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int, int> adj_node = {new_x, new_y};
            if (chk_inside(adj_node) && chk_safe(adj_node) && visited[new_x][new_y] == 0)
            {
                visited[new_x][new_y] = 1;
                P[new_x][new_y] = {x, y};
                if (new_x == des.first && new_y == des.second)
                {
                    possible = true;
                    break;
                }
                q.push(adj_node);
            }
        }
        if (possible)
        {
            cout << "Y" << endl;
            pair<int, int> pr;
            pr = P[des.first][des.second];
            while (true)
            {
                M[pr.first][pr.second] = '+';
                if (pr.first == src.first && pr.second == src.second)
                {
                    break;
                }
                pr = P[pr.first][pr.second];
            }
            for (int v = 0; v < m; v++)
            {
                for (int w = 0; w < m; w++)
                {
                    cout << M[v][w];
                }
                cout << endl;
            }
            return;
        }
    }
    if (!possible)
        cout << "N" << endl;
}
int main()
{
    cin >> n;
    m = n;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            M[i][j] = input[j];
            if (M[i][j] == 'X')
            {
                src = {i, j};
            }
            if (M[i][j] == '@')
            {
                des = {i, j};
            }
        }
    }
    BFS();
    return 0;
}