#include <stdio.h>
int main()
{
    // video 1
    int a = 10;
    printf("Address of a is: %d, value of a is: %d\n", &a, a);
    int *p = &a;
    printf("Address of p is: %d, value of p is: %d\n", &p, p); // value of p is address of a
    printf("Value of pointer is: %d\n", *p);

    // video 2
    int **q = &p;
    printf("Address of q is: %d, value of q is: %d\n", &q, q);
    *p = 1000;
    printf("Value of pointer is: %d\n", a);
    printf("Value of pointer is: %d\n", *p);
    printf("Value of pointer is: %d\n", **q);
    **q = -1010;
    printf("Value of pointer is: %d\n", a);
    printf("Value of pointer is: %d\n", *p);
    printf("Value of pointer is: %d\n", **q);
    return 0;
}