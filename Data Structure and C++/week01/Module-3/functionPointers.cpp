#include <bits/stdc++.h>
using namespace std;

void change(int **x)
{
    **x = 3700;
}

int main()
{
    int n = 20;
    int *ptr = &n;
    int **ptr2 = &ptr;
    change(ptr2);
    cout << n << endl;
    return 0;
}