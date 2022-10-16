// Print the lexicographically smallest lowercase English letter that does not occur in SS. If every lowercase English letter occurs in SS, print None instead.
#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    
    int alp[26];
    int i, flag = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        alp[s[i] - 'a']++;
    }

    for (i = 0; i <= 26 && flag == 0; i++)
    {
        if (alp[i] == 0)
        {
            flag++;
        }
    }
    i--;

    if (i == 26)
    {
        printf("None\n");
    }
    else
    {
        printf("%c\n", 'a' + i);
    }

    return 0;
}
