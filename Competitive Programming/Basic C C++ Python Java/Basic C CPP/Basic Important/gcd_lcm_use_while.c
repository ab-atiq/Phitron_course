// euclidean algorithm use for gcd and lcm.
// GCD, LCM identify using while loop. it is applicable for small and big number in input.
#include <stdio.h>
int main()
{
    int n1, n2, gcd, lcm, num1, num2, rem;
    scanf("%d %d", &n1, &n2);
    // n1,n2 assign in num1,num2 so that n1,n2 will not change. we will identify lcm using n1,n2.
    num1 = n1;
    num2 = n2;
    // when num2 is divisor
    // while (num2 != 0)
    // {
    //     rem = num1 % num2;
    //     num1 = num2;
    //     num2 = rem;
    // }
    // gcd = num1;

    // when num1 is divisor
    while (num1 != 0)
    {
        rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    gcd = num2;
    
    lcm = (n1 * n2) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
