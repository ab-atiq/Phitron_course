#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[], int n)
{
    for(int steps = 0; steps<n; steps++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(&a[i],&a[i+1]);
            }
        }
        printf("Steps: %d: ",steps+1);
        for(int i=0; i<n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
//        if(is_sorted(n,a)); // if first step complete sort then it will not work again.
    }
}
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array in any order: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printf("Array after sorting: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
