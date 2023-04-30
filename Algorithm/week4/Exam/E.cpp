#include <bits/stdc++.h>
using namespace std;
inline bool CheckValid(const vector<vector<char>> &G, int cur_row, int cur_col);
void FullDFS(const vector<vector<char>> &G, vector<vector<int>> &visited);

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int maxPathLenCount = 0;

void DFS(const vector<vector<char>> &G, vector<vector<int>> &visited, int cur_row, int cur_col, int cur_len = 1)
{
    if (visited[cur_row][cur_col])
        return;
    visited[cur_row][cur_col] = 1;
    maxPathLenCount = max(maxPathLenCount, cur_len);
    // from this cell we can go to 8 neighboring cells
    for (int i = 0; i < 8; ++i)
    {
        int n_x = cur_row + dx[i];
        int n_y = cur_col + dy[i];
        if (CheckValid(G, n_x, n_y))
        {
            if (G[n_x][n_y] - G[cur_row][cur_col] == 1)
            {
                DFS(G, visited, n_x, n_y, cur_len + 1);
            }
        }
    }
}

int main()
{
    int r, c, k = 0;
    while (cin >> r >> c)
    {
        if (!r && !c)
            break;
        vector<vector<char>> G(r, vector<char>(c));
        vector<vector<int>> visited(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cin >> G[i][j];
            }
        }
        FullDFS(G, visited);
        cout << "Case " << ++k << ": " << maxPathLenCount << '\n';
        maxPathLenCount = 0;
    }
    return 0;
}
inline bool CheckValid(const vector<vector<char>> &G, int cur_row, int cur_col)
{
    if (cur_row < 0 || cur_row >= G.size() || cur_col < 0 || cur_col >= G[cur_row].size())
        return false;
    return true;
}

void FullDFS(const vector<vector<char>> &G, vector<vector<int>> &visited)
{
    for (int i = 0; i < G.size(); ++i)
    {
        for (int j = 0; j < G[i].size(); ++j)
        {
            if (G[i][j] == 'A')
            {
                DFS(G, visited, i, j);
            }
        }
    }
}
