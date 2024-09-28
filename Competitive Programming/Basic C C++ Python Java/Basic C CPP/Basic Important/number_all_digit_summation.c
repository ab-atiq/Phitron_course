#include<stdio.h>
int main()
{
    int num,digitSum=0;
    scanf("%d",&num);
    while(num!=0)
    {
        int digit=num%10;
        digitSum+=digit;
        num/=10;
    }
    printf("%d\n",digitSum);
    return 0;
}
