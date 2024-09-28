// fibonacci, factorial, tower of hanoi
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void tower_of_hanoi(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    tower_of_hanoi(n - 1, from, to, aux);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower_of_hanoi(n - 1, aux, from, to);
}

int main()
{
    printf("%d\n", fibonacci(10));
    printf("%d\n", factorial(10));
    tower_of_hanoi(4, 'A', 'B', 'C');
    return 0;
}