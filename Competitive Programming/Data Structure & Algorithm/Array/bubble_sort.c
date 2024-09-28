#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your entered array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // using while loop
    int i = 0;
    while (i < n - 1)
    {
        int j = 0, flag = 0;
        while (j < n - 1 - i)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                flag++;
            }
            j++;
            printArray(arr, n);
            printf("\n");
        }
        // redundant iteration reduce
        if (flag == 0)
        {
            break;
        }
        printf("\n");
        i++;
    }

    // using for loop
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int flag = 0;
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int swap = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = swap;
    //             flag++;
    //         }
    //         printArray(arr, n);
    //         printf("\n");
    //     }
    //     // redundant iteration reduce
    //     if (flag == 0)
    //     {
    //         break;
    //     }
    //     printf("\n");
    // }

    printf("Finally, sorted array elements: ");
    printArray(arr, n);
    return 0;
}