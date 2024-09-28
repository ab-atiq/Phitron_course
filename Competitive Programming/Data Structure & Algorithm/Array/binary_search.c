#include <stdio.h>
int main()
{
    int n, find_element, pos = -1;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter find number in array: ");
    scanf("%d", &find_element);
    int left = 0, right = n - 1, mid;
    //    while(left<=right)
    for (; left <= right;) // we can use for loop instead of while loop like this
    {
        mid = (left + right) / 2;
        if (arr[mid] == find_element)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] < find_element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (pos == -1)
    {
        printf("Your find number is not present in array.");
    }
    else
    {
        printf("Successfully find your number in position: %d", pos + 1);
    }
    return 0;
}
