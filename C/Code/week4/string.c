#include <stdio.h>
int string_length(char str[])
{
    int i, length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    gets(country);
    int length, cs = 1;

    while (cs != 0)
    {
        switch (cs)
        {
        case 1:
            length = string_length(country);
            printf("length: %d\n", length);
            break;

        default:
            break;
        }
        printf("1. Length of string.\n");
        printf("0. Exit.\n");
        scanf("%d", &cs);
    }
    return 0;
}
