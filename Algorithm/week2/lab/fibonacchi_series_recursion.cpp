#include <bits/stdc++.h>
using namespace std;
// nth fibonacci number
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int f = fibo(n - 1);
    int s = fibo(n - 2);
    return f + s;
    // else return fibo(n-1)+fibo(n-2);
}
int main()
{
    int fibo_number;
    cout << "Enter N value which show Nth fibo number: ";
    cin >> fibo_number;
    int ret_fib = fibo(fibo_number);
    cout << "Nth fibo number is: " << ret_fib << endl;
    return 0;
}