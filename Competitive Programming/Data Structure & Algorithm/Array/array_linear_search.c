#include <stdio.h>
int main()
{
    int size, find_element, pos = -1;
    printf("Enter array size: ");
    scanf("%d", &size); // array size input
    int arr[size];      // create array from user input size
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // find item
    printf("Enter find number in array: ");
    scanf("%d", &find_element);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find_element)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Your find number is not present in array.");
    }
    else
    {
        // here p indicate index and p+1 indicate position of array.
        printf("Successfully find your number in position: %d", pos + 1);
    }
    return 0;
}
