// find max and second max. how much max number present.
#include <stdio.h>
int main()
{
    int n[10];
    printf("Input Element: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    // find maximum number
    int maxNum = n[0], totalMax = 0;
    for (int i = 0; i < 10; i++)
    {
        if (maxNum < n[i])
        {
            maxNum = n[i];
        }
    }
    // find how much max number present
    for (int i = 0; i < 10; i++)
    {
        if (maxNum == n[i])
        {
            totalMax++;
        }
    }
    // find second max
    int secMaxNum = n[0];
    for (int i = 0; i < 10; i++)
    {
        if (maxNum > n[i] && secMaxNum < n[i])
        {
            secMaxNum = n[i];
        }
    }
    printf("Max Number of array : %d\n", maxNum);
    printf("Second Max Number of array : %d\n", secMaxNum);
    printf("Total max number occur of array : %d\n", totalMax);
    return 0;
}
