#include <stdio.h>
int main()
{
    // we can change value of a using pointer
    const int a = 100;
    // if we use const pointer, we cannot change the value of a.
    // const int *ptr = &a;
    // const int *const ptr = &a;
    int *ptr = &a;
    *ptr = 200;
    printf("%d\n", a);

    // if we assign (const int *const ptr) then we can not assign another address.
    int b = 500;
    // *ptr = &b;
    // assign b value in ptr
    *ptr = b;
    printf("%d\n", a);
    return 0;
}