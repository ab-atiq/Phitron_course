#include <iostream>
using namespace std;
long long int fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout << "Fibonacci 6 th position value: " << fib(6) << endl;
    cout << "Fibonacci 40 th position value: " << fib(40) << endl; // 102334155
    cout << "Fibonacci 50 th position value: " << fib(50) << endl; // take more time. output = 12586269025
    return 0;
}

/*
fibonacci sequence
1 1 2 3 5 8 13 21 34 55
*/