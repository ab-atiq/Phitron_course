#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    *(arr + 2) = -100;
    arr[2] = -200;
    printf("Array address: %p, First index address: %p\n", arr, &arr[0]);
    printf("Array value: %d, First index value: %d\n", *arr, *&arr[0]);
    printf("Array value: %d, First index value: %d\n", *(arr + 4), *&arr[4]);

    // new thing
    printf("New thing: %d %d %d %d\n", arr[2], *(arr + 2), 2 [arr], arr + 2);

    // int a = 25;
    // int *p = &a;
    // long long int a = 25;
    // long long int *p = &a;
    char a = 'a';
    char *p = &a;
    printf("a variable address: %d, next variable address: %d\n", a, (a + 1));
    printf("p variable address: %d, next variable address: %d\n", p, (p + 1));
    printf("p variable value: %d, next variable value: %d\n", *p, *(p + 1)); // next value will be garbage

    // array print
    printf("Array element: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
        // array is constant pointer so we can not assign like below
        // arr=arr+1;
    }
    int *ptr = arr;
    printf("\nArray element: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr));
        // array is constant pointer so we can not assign like below
        // arr=arr+1;
        ptr++;
    }
    return 0;
}