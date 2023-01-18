#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello Friends";
    printf("%s\n", str);
    printf("%s\n", str + 1);

    // strchr function use
    char *p = strchr(str, 'o');
    // o to '\0' print
    printf("%s\n", p);
    // found 'o' index position
    printf("%d\n", p - str);

    char *p2 = strchr(str, 'g');
    // g not found so it returns null
    printf("%d\n", p2);
    printf("%s\n", p2);
    // found 'g' index position but ans will wrong.
    printf("%d\n", p2 - str);
    // if null then will check this
    // if (p2 == NULL)
    if (!p2)
    {
        printf("Not found!\n\n");
    }
    else
    {
        printf("%d\n\n", p2 - str);
    }

    // strstr function use
    char strStr[] = "Hello, Friends. How Are You?";
    printf("%s\n", strStr);
    printf("%s\n", strStr + 5);
    char *pStr = strstr(strStr, "How");
    // "How" to '\0' print
    printf("%s\n", pStr);
    // found 'How' 16 index position
    printf("%d\n", pStr - strStr);
    
    char found[] = "found";
    char *pStr2 = strstr(strStr, found);
    // grow not found so it returns null
    printf("%d\n", pStr2);
    printf("%s\n", pStr2);
    // found 'grow' index position but ans will wrong.
    printf("%d\n", pStr2 - strStr);
    // if null then will check this
    // if (pStr2 == NULL)
    if (!pStr2)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("%d\n", pStr2 - strStr);
    }
    return 0;
}