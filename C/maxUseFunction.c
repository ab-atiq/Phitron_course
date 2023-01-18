#include <stdio.h>
int main()
{
    int a[100],a_size,Min_Num,i;
    printf("Enter size of array:");
    scanf("%d",&a_size);
    printf("Enter the elements into array:\n");
    for(i=0; i<a_size; i++)
        scanf("%d",&a[i]);
    Min_Num=findMin(a,a_size);
    printf("Lowest number is: %d\n",Min_Num);
    return 0;
}

int findMin(int a[],int a_size)
{
    int i,Lowest_number;
    Lowest_number=a[0];
    for(i=1; i<a_size; i++)
    {
        if(Lowest_number>a[i])
            Lowest_number=a[i];
    }
    return Lowest_number;
}
