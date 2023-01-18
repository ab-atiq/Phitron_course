#include <stdio.h>
void makeSquare(int a[], int s){
        for(int i=0; i<s; i++){
            // a[i] and *(a+i) indicate same location's value
            // *(a+i) = *(a+i) * *(a+i);
            a[i] = a[i] * a[i];
        }
}
int main() {
    int n;
    int arr[10];
    printf("Enter array length: ");
    scanf("%d",&n);
    printf("Enter array elements for make square: ");
    for(int i=0; i<n; i++){
        // arr and &a[0] location are same
        scanf("%d",arr+i);
    }
    makeSquare(arr,n);
    printf("After square array elements: ");
    for(int i=0; i<n; i++){
        // arr[0] and *arr location's value are same
        // printf("%d ",arr[i]);
        printf("%d ", *(arr+i));
    }
    return 0;
}
