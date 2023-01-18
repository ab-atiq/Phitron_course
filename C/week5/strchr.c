#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';

    char *ret;
    ret = strchr(str, ch);
    printf("String after |%c| is - |%s|\n", *ret, ret);

    char str2[] = "Hello";
    char *first = str2;
    char *ptr2 = strchr(str2, 'l');
    // l value position find
    printf("%d\n", ptr2 - first);
    // return pointer - str2 first address = 'l' character position.
    printf("%d\n", ptr2 - str2);

    // absent element found result will null.
    char *ptr3 = strchr(str2, 'a');
    printf("%p\n", ptr3);
    if (!ptr3)
    {
        printf("Found null. No occurrence.");
    }

    return (0);
}