#include<stdio.h>
void sortFunction(int a[], int n){
    int index_min,temp;
    for(int i=0; i<n-1; i++)
    {
        index_min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = a[i];
            a[i]=a[index_min];
            a[index_min]=temp;
        }
    }
}
int main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter element of array any order: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sortFunction(a,n);

    printf("Array after sort: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
