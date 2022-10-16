#include<stdio.h>
#include<stdlib.h>
int* makeCopy(int arr[], int n){
    int *newArr = (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        newArr[i]=arr[i];
    }
    return newArr;
}
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    int *newArr = makeCopy(arr,n);
    printf("New array after copy: ");
    for(int i=0; i<n; i++){
        printf("%d ",newArr[i]);
    }
    return 0;
}
