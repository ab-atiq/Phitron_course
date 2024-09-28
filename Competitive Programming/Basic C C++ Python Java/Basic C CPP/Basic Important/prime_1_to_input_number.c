// prime number from 1 to input number.
#include<stdio.h>
int main()
{
    int num;
    printf("Find all prime number from 1 to input number. Enter a number: ");
    scanf("%d",&num);
    printf("All prime number is: ");

    for(int n=2; n<=num; n++)
    {
        int prime=1;
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                prime=0;
            }
        }
        if(prime==1)
        {
            printf("%d ",n);
        }
    }

    return 0;
}
