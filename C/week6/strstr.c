// found occurrence a character in string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "I am as a programmer. so, as soon as possible respect me.";
    char *ptr = str;
    while (ptr != NULL)
    {
        char *pos = strstr(ptr, "as");
        if (pos == NULL)
            break;
        printf("Found index: %d\n", pos - str);
        ptr = pos + 1;
    }

    return 0;
}