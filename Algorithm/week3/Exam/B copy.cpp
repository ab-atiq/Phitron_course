#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void find_boundary_path(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    // Find starting position and monster positions
    int start_i = -1, start_j = -1;
    vector<pair<int, int>> monsters;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') {
                start_i = i;
                start_j = j;
            }
            else if (grid[i][j] == 'M') {
                monsters.push_back({i, j});
            }
        }
    }

    // Define BFS helper function
    auto bfs = [&](int start_i, int start_j) -> vector<pair<int, int>> {
        // Initialize queue and visited array
        deque<pair<int, int>> q = {{start_i, start_j}};
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        visited[start_i][start_j] = true;
        vector<pair<int, int>> prev;

        // BFS loop
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop_front();

            // Check if current square is on a boundary
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                vector<pair<int, int>> path;
                while (i != start_i || j != start_j) {
                    path.push_back(prev[i*m + j]);
                    int di = -path.back().first;
                    int dj = -path.back().second;
                    i += di;
                    j += dj;
                }
                // reverse(path.begin(), path.end());
                return path;
            }

            // Check neighbors in all directions
            for (auto [di, dj] : vector<pair<int, int>>{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}) {
                int ni = i + di;
                int nj = j + dj;

                // Check if neighbor is valid and unvisited
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && grid[ni][nj] != 'M') {
                    visited[ni][nj] = true;
                    prev.push_back({-di, -dj});
                    q.push_back({ni, nj});
                }
            }
        }

        // If no boundary square found, return empty vector
        return {};
    };

    // Try BFS from each valid starting position
    for (auto [i, j] : vector<pair<int, int>>{{start_i, start_j}, {0, start_j}, {n-1, start_j}, {start_i, 0}, {start_i, m-1}}) {
        auto path = bfs(i, j);
        if (!path.empty()) {
            cout << "YES" << endl;
            cout << path.size() << endl;
            for (auto [di, dj] : path) {
                if (di == 1) cout << "D";
                else if (di == -1) cout << "U";
                else if (dj == 1) cout << "R";
                else cout << "L";
            }
            cout << endl;
            return;
        }
    }

    // If no valid path found
