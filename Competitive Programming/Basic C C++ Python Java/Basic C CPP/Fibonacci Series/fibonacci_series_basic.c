#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int first = 0, second = 1, count = 0, fibo;

    while (count < n)
    {
        if (count <= 1)
        {
            fibo = count; // 0 and 1
        }
        else
        {
            fibo = first + second; // greater than 1
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        count++;
    }
    return 0;
}

/*
Algorithm:
step-1: set first = 0, second = 1, count = 0, fibo
step-2: read number
step-3: while statement count < n repeat
            if statement count <= 1
                fibo = count
            else statement
                fibo = first + second
                first = second
                second = fibo
        write := fibo
        count++
*/