#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;


bool isValid(int i, int j, int rows, int cols)
{
    return (i >= 0 && i < rows && j >= 0 && j < cols);
}


void bfs(vector<vector<char>> &grid, int i, int j, int rows, int cols)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    grid[i][j] = '.'; 
    int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    while (!q.empty())
    {
        pair<int, int> curr = q.front();
        q.pop();
        for (int k = 0; k < 8; k++)
        {
            int x = curr.first + rowNbr[k];
            int y = curr.second + colNbr[k];
            if (isValid(x, y, rows, cols) && grid[x][y] == '#')
            {
                grid[x][y] = '.';
                q.push({x, y});
            }
        }
    }
}


int countIslands(vector<vector<char>> &grid)
{
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == '#')
            {
                bfs(grid, i, j, rows, cols);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    cout << "Enter the grid:\n";
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            grid[i][j] = str[j];
        }
    }
    int numIslands = countIslands(grid);
    cout << "Number of islands: " << numIslands << endl;
    return 0;
}
/*  
Enter the number of rows and columns: 4 5
Enter the grid:
##...
##...
..#..
...##
Number of islands: 1

Enter the number of rows and columns: 4 5
Enter the grid:
##...
##...
.....
...##
Number of islands: 2
*/