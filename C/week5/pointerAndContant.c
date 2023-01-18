#include <stdio.h>
int main()
{
    const int n = 20; // n is variable, where value is fixed. But we can change using pointer.
    int *pn = &n;
    *pn = 10;
    printf("%d", n);
    return 0;
}