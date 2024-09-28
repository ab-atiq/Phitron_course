#include <stdio.h>
#include <conio.h>
int main()
{
    int array[50], size;
    printf("Enter array size :");
    scanf("%d", &size);
    printf("Enter array element Here :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array element are");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", &array[i]);
    }
    return 0;
}