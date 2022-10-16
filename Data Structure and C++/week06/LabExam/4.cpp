#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row and column: ";
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int item = arr[i][j];
            for (int m = 0; m < r; m++)
            {
                for (int n = 0; n < c; n++)
                {
                    if (i == m && j == n)
                    {
                        continue;
                    }
                    else
                    {
                        if (arr[i][j] == arr[m][n])
                        {
                            arr[m][n] = -1;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
