// reversing an array
#include <stdio.h>
int main()
{
    // first way
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < sz / 2; i++)
    for (int i = 0, j = sz - 1; i < sz / 2; i++, j--)
    {
        // int temp = arr[i];
        // arr[i] = arr[sz - i - 1];
        // arr[sz - i - 1] = temp;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    // second way
    int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int j = 9; j >= 0; j--)
    {
        printf("%d ", arr2[j]);
    }
    printf("\n");
    // third way => push reverse index in new array
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz2 = sizeof(arr3) / sizeof(arr3[0]);
    int arr3copy[sz];
    for (int i = 0; i < sz2; i++)
    {
        arr3copy[sz2 - i - 1] = arr3[i];
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", arr3copy[j]);
    }
    printf("\n");
    // four way => copy arr3copy array to in arr3 array
    for (int i = 0; i < sz2; i++)
    {
        arr3[i] = arr3copy[i];
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", arr3[j]);
    }
    printf("\n");
    return 0;
}
