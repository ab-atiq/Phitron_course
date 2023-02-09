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
    // mid row element sum
    for (int col = 0; col < rowAndCol; col++)
    {
        sum += matrix_2D[rowAndCol / 2][col];
    }
    // mid column element sum
    for (int row = 0; row < rowAndCol; row++)
    {
        sum += matrix_2D[row][rowAndCol / 2];
    }
    // repeat mid diagonal substract
    sum -= matrix_2D[rowAndCol / 2][rowAndCol / 2];

    // top left top part sum
    for (int col = 0; col < (rowAndCol / 2); col++)
    {
        sum += matrix_2D[0][col];
    }
    // top right right part sum
    for (int row = 0; row < (rowAndCol / 2); row++)
    {
        sum += matrix_2D[row][rowAndCol-1];
    }
    // left bottom left part sum
    for (int row = (rowAndCol / 2)+1; row < rowAndCol; row++)
    {
        sum += matrix_2D[row][0];
    }
    // bottom right bottom part sum
    for (int col = (rowAndCol/2)+1; col < rowAndCol; col++)
    {
        sum += matrix_2D[rowAndCol-1][col];
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}

/*
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate the sum of the integers based on the following position pattern (consider only the boxed position during the sum). Please see the input-output.

Sample input
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
Sample output
71

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
25


 */