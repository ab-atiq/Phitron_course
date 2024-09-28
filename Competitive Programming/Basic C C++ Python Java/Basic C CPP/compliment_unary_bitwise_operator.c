#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int b = ~n;
    printf("%d", b);
    return 0;
}

/*  
compliment of n = -(n+1)
input: 35
output: -36

step-1: first change bit 0 to 1 vice versa
step-2: then compliment that number of bit
calculation:
35 = 00100011
vv = 11011100 = 220
2's compliment of vice versa:
    11011100 = 220
    00100011
    +      1
    --------
    00100100 = (-)36

*/
