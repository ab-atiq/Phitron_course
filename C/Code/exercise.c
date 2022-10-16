#include <stdio.h>
int main()
{
    long long int n,k;
    int match=0,count = 0;
    scanf("%lld", &n);
    k=n;
    do
    {
        k /= 10;
        count++;
    }
    while (k != 0);

    for(int i=1; i<=count; i++)
    {
        int d=n%10;
        if(d==4 || d==7)
            match++;
        n/=10;
    }
    printf("%d %d\n",match,count);
    if(match==count)
        printf("YES\n");
    else
        printf("NO\n");
}
