// array sort and insert an element.
#include <stdio.h>
int main()
{
    int n, a[100], i, j, m, tem, insert, pos;
    printf("How much you will enter number: ");
    scanf("%d", &n);
    printf("Please, enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("All number: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    // array sorting using bubble sort
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    // sorted list
    printf("\nSorted list: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // inset element
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &insert);
    // find position
    for (i = 0; i < n; i++)
    {
        if (insert < a[i])
        {
            pos = i;
            break;
        }
        if (insert > a[n - 1])
        {
            pos = n;
            break;
        }
    }
    printf("position = %d\n", pos + 1);

    // transform all element after position in upper position.
    if (pos != n)
    {
        m = n - pos + 1;
        printf("m position = %d\n", m);
        for (i = 0; i < m; i++)
        {
            // printf("\n%d %d", a[n - i + 2], a[n - i + 1]);
            a[n - i + 2] = a[n - i + 1];
        }
    }
    // finally insert at index of position.
    a[pos] = insert;

    printf("Final list: ");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
