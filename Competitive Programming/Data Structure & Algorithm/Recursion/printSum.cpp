#include <bits/stdc++.h>
using namespace std;
void printSum(int s, int e, int sum)
{
    if (s == e)
    {
        sum += s;
        cout << "Sum: " << sum << endl;
        return;
    }
    sum += s;
    printSum(s + 1, e, sum);
}
void printSumUsingStatic(int n)
{
    static int sum = 0;
    if (n == 0)
    {
        cout << "Sum: " << sum << endl;
        return;
    }
    sum += n;
    printSumUsingStatic(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printSum(1, n, 0);
    printSumUsingStatic(n);
    return 0;
}
