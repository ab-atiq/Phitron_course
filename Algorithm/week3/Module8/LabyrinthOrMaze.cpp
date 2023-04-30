/*
https://cses.fi/problemset/task/1193
5 8
########
#.A#...#
#.##.#B#
#......#
########
output:
9

(x, y) -> right -> (x+1,y)
(x, y) -> left -> (x-1,y)
(x, y) -> up -> (x,y+1)
(x, y) -> down -> (x,y-1)


1. is the cell within the maze ?
2. is the cell forbidden / wall ?
3. is the cell visited ?
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int maze[N][N], visited[N][N], level[N][N];
int n, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool is_inside(pair<int, int> cordinate)
{
    int x = cordinate.first;
    int y = cordinate.second;
    if (x < n && x >= 0 && y < m && y >= 0)
    {
        return true;
    }
    return false;
}
bool is_safe(pair<int, int> cordinate)
{
    int x = cordinate.first;
    int y = cordinate.second;
    if (maze[x][y] == -1)
    {
        return false;
    }
    return true;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    q.push(src);
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
            if (is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
            {
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}
int main()
{
    pair<int, int> src, des;
    cin >> n >> m;
    // set level of all element -1 as initially
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            level[i][j] = -1;
        }
    }
    // get input
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == '#')
                maze[i][j] = -1;
            else if (str[j] == 'A')
                src = {i, j};
            else if (str[j] == 'B')
                des = {i, j};
        }
    }
    // display input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << maze[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // bfs operation
    bfs(src);
    if (level[des.first][des.second] == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << level[des.first][des.second] << endl;
    }
    return 0;
}