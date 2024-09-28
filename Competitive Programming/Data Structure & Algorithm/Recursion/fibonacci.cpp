#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    // Base cases
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    // Recursive case
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // Get the number from the user.
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Print the Fibonacci number.
    cout << "The Fibonacci number for " << n << " is " << fibo(n) << endl;
    return 0;
}