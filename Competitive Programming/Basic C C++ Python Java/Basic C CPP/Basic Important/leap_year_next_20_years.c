// prints next 20 leap year
#include<stdio.h>
int main()
{
    int year,count=1;
    printf("Enter a year: ");
    scanf("%d",&year);
    // this loop will continue until count over 20.
    for(int i=year; count<=20; i++)
    {
        if(i%400==0)
        {
            printf("%d ",i);
            count++;
        }
        else if(i%100!=0&&i%4==0)
        {
            printf("%d ",i);
            count++;
        }
    }

    return 0;
}
