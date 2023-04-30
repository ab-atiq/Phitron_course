#include <bits/stdc++.h>
using namespace std;
// 1 + 2 + 3 + -------- + N = N(N+1)/2 simple folmula
// calculate using recursion

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int N;
    cout << "Enter the height value of series: ";
    cin >> N;
    int ret = sum(N);
    cout << "Summision of all number from 1 to N: " << ret << endl;
}