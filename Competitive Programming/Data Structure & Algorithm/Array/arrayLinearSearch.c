#include <stdio.h>
int main()
{
    int Item, Loc = 0, Pos = -1, Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter search item: ");
    scanf("%d", &Item);
    // array size count
    int size = sizeof(Arr) / sizeof(Arr[0]);
    printf("Size of array: %d\n", size);
    // check find item
    while (Loc < size)
    {
        if (Arr[Loc] == Item)
        {
            Pos = Loc + 1;
            break;
        }
        Loc++;
        // printf("%d ",Loc);
    }
    // found
    if (Pos != -1)
    {
        printf("Position of Item: %d", Pos);
    }
    // not found
    else
    {
        printf("Item does not found.");
    }
    return 0;
}