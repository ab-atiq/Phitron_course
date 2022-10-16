#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[100];
    scanf("%s %s", str1, str2);
    strcpy(str1, str2);
    printf("string 1: %s\n", str1);
    printf("string 2: %s\n", str2);
    return 0;
}