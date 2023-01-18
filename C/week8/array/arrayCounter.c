#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[10] = {0}; // we will assume that no value is greater than 9 or all input will digit
    for (int i = 0; i < size; i++)
    {
        int val = arr[i];
        count[val]++;
    }
    for (int val = 0; val < 10; val++)
    {
        if (count[val] > 0)
        {
            printf("value-> %d, count-> %d\n", val, count[val]);
        }
    }
    return 0;
}