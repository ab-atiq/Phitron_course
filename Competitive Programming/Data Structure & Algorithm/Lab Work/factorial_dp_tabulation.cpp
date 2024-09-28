// *** Factorail using Dynamic Programming **

#include <iostream>

using namespace std;

int factorial(int n)
{
    // Create a table to store the factorials of numbers from 0 to n.
    int factorials[n + 1];
    factorials[0] = 1;

    // Iterate over the table and fill in the factorials of numbers from 1 to n.
    for (int i = 1; i <= n; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }

    // Return the factorial of the given number.
    return factorials[n];
}

int main()
{
    // Get the number from the user.
    int n;
    cin >> n;

    // Print the factorial of the given number using dynamic programming.
    cout << "The factorial of " << n << " using dynamic programming is: " << factorial(n) << endl;

    return 0;
}
