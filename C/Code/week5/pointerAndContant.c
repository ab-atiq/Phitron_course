#include <stdio.h>
int main()
{
    const int n = 20;
    int *pn = &n;
    *pn = 10;
    printf("%d", n);
    return 0;
}