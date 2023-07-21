#include <iostream>
using namespace std;
long long int arr[100];

/*
fibonacci sequence
1 1 2 3 5 8 13 21 34 55

arr[3] = 2
arr[4] = 3
arr[5] = 5
arr[6] = 8
arr[7] = 13
arr[8] = 21
arr[9] = 34
arr[10] = 55
*/

long long int fib(int n)
{
    if (n <= 2)
        return 1;
    // check if fib(n) already calculated
    if (arr[n] != 0)
        return arr[n];
    arr[n] = fib(n - 1) + fib(n - 2);
    return arr[n];
}
int main()
{
    cout << "Fibonacci 6 th position value: " << fib(10) << endl;
    cout << "Fibonacci 10 th position value: " << fib(40) << endl;
    cout << "Fibonacci 30 th position value: " << fib(50) << endl; // take more time
    return 0;
}