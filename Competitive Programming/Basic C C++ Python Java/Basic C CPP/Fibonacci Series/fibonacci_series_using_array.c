#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // create an array
    int arr[n];

    // array first and second index set 0 and 1 respectively
    arr[0] = 0;
    arr[1] = 1;
    
    // set fibonacci number in array from third index to last index
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // traverse the array
    printf("Fibonacci Series using array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Algorithm:
step-1: read number
step-2: create array base on number
step-3: set arr[0] = 0, arr[1] = 1, count = 2
step-4: while statement count<n repeat
            arr[count] = arr[count-1] + arr[count-2]
step-5: traverse the array elements
 */