#include <stdio.h>

int binary(int *data, int lb, int ub, int item, int loc)
{
    int beg = lb;
    int end = ub;
    int mid = (int)((beg + end) / 2);
    while (beg <= end && data[mid] != item)
    {
        if (item < data[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (int)((beg + end) / 2);
    }
    if (data[mid] == item)
    {
        loc = mid;
        return 1;
    }
    else
    {
        loc = NULL;
        return 0;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 7, 9};
    int search = 2;
    int result = binary(arr, 0, 4, search, NULL);
    if (result == 1)
    {
        printf("Item found\n");
    }
    else
    {
        printf("Item not found\n");
    }
    return 0;
}