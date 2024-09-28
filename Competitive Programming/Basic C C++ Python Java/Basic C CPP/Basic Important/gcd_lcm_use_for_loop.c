// identify GCD and LCM use for loop. And here, common divisor identify divide by number one and two. it is time consume when we input big number.
#include <stdio.h>
int main()
{
    int n1, n2, gcd = 1, lcm;
    printf("Enter two number for GCD and LCM count : ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        // printf("%d\n", i);
        if (n1 % i == 0 && n2 % i == 0)
        {
            // printf("Common divisor: %d\n", i);
            gcd = i;
        }
    }
    lcm = (n1 * n2) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
