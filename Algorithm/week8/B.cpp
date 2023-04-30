#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> moves = {{2, 1}, {1, 2}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-1, 2}, {-2, 1}};

int min_moves_knight(pair<int, int> src, pair<int, int> dest)
{
    vector<vector<bool>> visited(8, vector<bool>(8, false));
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(src, 0));
    visited[src.first][src.second] = true;

    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int steps = q.front().second;
        q.pop();

        if (x == dest.first && y == dest.second)
        {
            return steps;
        }

        for (auto move : moves)
        {
            int new_x = x + move.first;
            int new_y = y + move.second;

            if (new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8 && !visited[new_x][new_y])
            {
                visited[new_x][new_y] = true;
                q.push(make_pair(make_pair(new_x, new_y), steps + 1));
            }
        }
    }

    return -1; // destination not reachable
}

int main()
{
    pair<int, int> src = make_pair(0, 0);
    pair<int, int> dest = make_pair(3, 3);
    int min_moves = min_moves_knight(src, dest);
    cout << min_moves << endl; // Output: 2
    return 0;
}
