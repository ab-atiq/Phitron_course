#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowAndCol;
    cout << "Enter row and column number: ";
    cin >> rowAndCol;
    int matrix_2D[rowAndCol][rowAndCol];
    for (int i = 0; i < rowAndCol; i++)
    {
        for (int j = 0; j < rowAndCol; j++)
        {
            cin >> matrix_2D[i][j];
        }
    }
    int sum = 0;
    // first row element sum
    for (int col = 0; col < rowAndCol; col++)
    {
        sum += matrix_2D[0][col];
    }
    // diagonals element sum without first and last row element
    for (int i = 1; i < rowAndCol - 1; i++)
    {
        for (int j = 0; j < rowAndCol; j++)
        {
            if (i == j)
            {
                // cout<<matrix_2D[i][j]<<" ";
                sum += matrix_2D[i][j];
            }
            else if (i != j && (rowAndCol - 1) == i + j)
            {
                // cout<<matrix_2D[i][j]<<" ";
                sum += matrix_2D[i][j];
            }
        }
    }

    // last row element sum
    for (int col = 0; col < rowAndCol; col++)
    {
        sum += matrix_2D[rowAndCol - 1][col];
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}

/*
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers at first row, last row and two diagonals without overlap. Please see the sample input-output.
Sample input
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
Sample output
52

Sample input
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
Sample output
23


 */