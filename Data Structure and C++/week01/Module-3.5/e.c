#include <stdio.h>

int divide(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        n = n / 2;
        cnt++;
    }

    return cnt;
}

int main(void)
{
    int n;
    int r[101];

    (void)scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        r[i] = divide(i);
        // printf("%d ", r[i]);
    }

    int max = -1;
    int idx;
    for (int i = 1; i <= n; i++)
    {
        if (max < r[i])
        {
            max = r[i];
            idx = i;
        }
    }

    printf("%d\n", idx);

    return 0;
}
