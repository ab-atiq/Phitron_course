#include <stdio.h>

int main()
{
    int n, operation;
    scanf("%d", &n);
    printf("How much you want to left and right shift operation: ");
    scanf("%d", &operation);
    for (int i = 0; i <= operation; i++)
    {
        printf("Right shift by %d, value is: %d\n", i, n >> i);
    }
    printf("\n");
    for (int i = 0; i <= operation; i++)
    {
        printf("Left shift by %d, value is: %d\n", i, n << i);
    }
    return 0;
}

/*  
    when left shift occurs then value will increase by 2 multiply.
    when right shift occurs then value will decrease by 2 divide.
*/

/*  
Input:
212
How much you want to left and right shift operation: 4

Output:
Right shift by 0, value is: 212
Right shift by 1, value is: 106
Right shift by 2, value is: 53
Right shift by 3, value is: 26
Right shift by 4, value is: 13

Left shift by 0, value is: 212
Left shift by 1, value is: 424
Left shift by 2, value is: 848
Left shift by 3, value is: 1696
Left shift by 4, value is: 3392

*/
