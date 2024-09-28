#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // if (n<=1) return 1
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    // Get the number from the user.
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Print the factorial of the number.
    cout << "The factorial of " << n << " is " << fact(n) << endl;
}