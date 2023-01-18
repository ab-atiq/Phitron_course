// found occurrence a character in string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "I am a programmer";
    char *ptr = str;
    while (ptr)
    {
        char *pos = strchr(ptr, 'a');
        // printf("%s", pos + 1);
        if (pos == NULL)
            break;
        printf("Found index: %d\n", pos - str);
        ptr = (pos + 1);
    }

    return 0;
}