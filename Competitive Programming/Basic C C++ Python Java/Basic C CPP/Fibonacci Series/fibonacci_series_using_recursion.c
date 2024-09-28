#include <stdio.h>

// fibonacci function will return nth fibonacci number.
int fibonacci(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Fibonacci Series using Recursion: ");
    for (int i = 0; i < n; i++)
    {
        // find fibonacci nth number for single number i
        printf("%d ", fibonacci(i));
    }

    return 0;
}