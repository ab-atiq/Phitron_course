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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // primary diagonal cell element
            if (i == j)
            {
                continue;
            }
            // outside element without primary diagonal element
            if (arr[i][j] != 0)
            {
                cout << "Not Diagonal" << endl;
                return 0;
            }
        }
    }
    cout << "Diagonal Matrix" << endl;

    int scalarValue;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // check primary diagonal cell
            if (i == j)
            {
                // assign 0,0 cell value first. Then check other diagonal cell value
                if (i == 0 && j == 0)
                    scalarValue = arr[i][j];
                else
                {
                    // if previous scalar value and diagonal cell value not equal. it will not scalar.
                    if (scalarValue != arr[i][j])
                    {
                        cout << "Not Scalar" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Scalar Matrix. Primary diagonal value is: " << scalarValue << endl;
    // if scalar value is 1. then it will identity matrix.
    if (scalarValue == 1)
    {
        cout << "Identity matrix" << endl;
    }
    return 0;
}