#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Print first part
        for(j=2; j<=i; j++)
        {
            printf("%d", j);
        }
        // Print second part
        printf("1");
        // Print third part
        for(j=i+1; j<= N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}