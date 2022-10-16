#include <stdio.h>
static int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int findGCD(int a[], int n)
{
    int result = a[0];
    for (int i = 1; i < n; i++)
        result = gcd(a[i], result);

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int GCD = findGCD(a, n);
    printf("The gcd is = %d\n", GCD);
}
/*
5
8 12 16 9 4
The gcd is = 1
*/