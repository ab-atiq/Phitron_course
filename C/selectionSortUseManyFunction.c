#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n){
    for(int steps = 0; steps<n; steps++){
        int min_element = a[steps], pos = steps;
        for(int i=steps; i<n; i++){
            if(a[i]<min_element){
                min_element = a[i];
                pos = i;
            }
        }
        swap(&a[steps],&a[pos]);
    }
}

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array in any order: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printf("Array after sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
