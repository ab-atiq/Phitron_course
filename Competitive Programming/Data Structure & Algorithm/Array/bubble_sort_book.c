#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *data, int n)
{
    for (int k = 1; k <= n - 1; k++)
    {
        int ptr = 0, flag = 0;
        while (ptr <= n - k)
        {
            if (data[ptr] > data[ptr + 1])
            {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
                flag = 1;
            }
            ptr = ptr + 1;
            printArray(data, n);
            printf("\n");
        }
        // redundant iteration close
        if (flag == 0)
        {
            break;
        }
        printf("\n");
    }
}

int main()
{
    // int arr[5] = {5, 4, 3, 2, 1};
    int arr[5] = {2, 4, 3, 7, 6};
    bubbleSort(arr, 5);
    printf("Finally, sorted array elements: ");
    printArray(arr, 5);
    return 0;
}