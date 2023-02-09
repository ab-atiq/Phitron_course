#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row and column number: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter row and column cell value: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // get fixed row element
    int fixed_row;
    cout << "Enter row number: ";
    cin >> fixed_row;
    for (int i = 0; i < col; i++)
    {
        cout << arr[fixed_row][i] << " ";
    }
    cout << endl;

    // get fixed column element
    int fixed_col;
    cout << "Enter column number: ";
    cin >> fixed_col;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][fixed_col] << endl;
    }

    return 0;
}