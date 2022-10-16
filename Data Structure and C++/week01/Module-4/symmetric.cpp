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

    // check row and column equal or not. if not equal it will not Diagonal.
    if (row != col)
    {
        cout << "Not Diagonal" << endl;
        return 0;
    }
    // check symmetric or not.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // if arr[row][col] and arr[col][row] not equal then it will not symmetric matrix.
            if (arr[i][j] != arr[j][i])
            {
                cout << "Not symmetric matrix." << endl;
                return 0;
            }
        }
    }
    cout << "Symmetric matrix." << endl;
    return 0;
}