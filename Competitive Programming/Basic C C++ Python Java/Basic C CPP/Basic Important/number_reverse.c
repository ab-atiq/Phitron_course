#include<stdio.h>
int main()
{
    int num,reverseNumber=0;
    scanf("%d",&num);
    while(num!=0)
    {
        int digit=num%10;
        reverseNumber=reverseNumber*10+digit;
        num/=10;
    }
    printf("%d\n",reverseNumber);
    return 0;
}
