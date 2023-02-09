#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int matrix[n][n];
    if (n % 2 != 1)
    {
        cout << "N must be odd" << endl;
    }
    else
    {
        // input matrix elements
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        // if row and column is 1
        if (n == 1)
        {
            cout << matrix[0][0] << endl;
        }
        else
        {
            int sum = 0;
            // top left top part sum
            for (int i = 0; i < n / 2; i++)
            {
                sum = sum + matrix[0][i];
            }
            // right bottom bottom part sum
            int m = (n / 2) + 1;
            for (int i = m; i < n; i++)
            {
                sum = sum + matrix[n - 1][i];
            }
            // right top right part sum
            for (int i = 0; i < n / 2; i++)
            {
                sum = sum + matrix[i][n - 1];
            }
            // left bottom left part sum
            for (int i = m; i < n; i++)
            {
                sum = sum + matrix[i][0];
            }
            for (int i = 0; i < n; i++)
            {
                sum = sum + matrix[i][m - 1]; // mid column sum
                sum = sum + matrix[m - 1][i]; // mid row sum
            }
            sum = sum - matrix[m - 1][m - 1]; // duplicate row and column mid point substract
            cout << sum << endl;
        }
    }

    return 0;
}