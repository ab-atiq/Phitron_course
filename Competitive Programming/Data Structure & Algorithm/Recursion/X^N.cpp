// complexity O(N)
#include <iostream>
using namespace std;

// complexity O(N)
int calculate(int x, int n)
{
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;
    return x * calculate(x, n - 1);
}

// complexity O(log(N))
int calculate2(int x, int n)
{
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;
    if (n % 2 == 0)
        return calculate2(x, n / 2) * calculate2(x, n / 2);

    else
        return calculate2(x, n / 2) * calculate2(x, n / 2) * x;
}

int main()
{
    int X, N;
    cin >> X >> N;
    int ans = calculate(X, N);
    cout << ans << endl;
    int ans2 = calculate2(X, N);
    cout << ans2 << endl;
    return 0;
}