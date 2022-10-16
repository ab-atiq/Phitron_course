#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4, col = 4;
    int arr[row][col];

    // input two dimensional array or matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output matrix element
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << "," << j << "=" << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}