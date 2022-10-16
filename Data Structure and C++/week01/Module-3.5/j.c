#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char o[51], e[51];
    int strsize, i, j = 0, m = 0;

    scanf("%s", o);
    scanf("%s", e);
    strsize = strlen(o) + strlen(e);

    for (i = 0; i < strsize; i++)
    {
        if (i % 2)
        {
            printf("%c", e[m]);
            m++;
        }
        else
        {
            printf("%c", o[j]);
            j++;
        }
    }

    return 0;
}

/*
The original password is xaybzc. Extracting the characters at the odd-numbered positions results in 'xyz', and extracting the characters at the even-numbered positions results in 'abc'.
*/