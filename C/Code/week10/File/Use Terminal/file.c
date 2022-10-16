#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10], sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", sum);
    return 0;
}