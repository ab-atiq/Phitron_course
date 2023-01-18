#include <stdio.h>
int main()
{
    // char str[5]="abcd";
    // scanf("%s",str);
    char str[10];
    // gets(str); // input with space
    fgets(str, 8, stdin); // input with space
    printf("%s", str);
    return 0;
}