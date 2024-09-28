#include <bits/stdc++.h>
using namespace std;

char str1[100010], str2[100010];

int main()
{
    while (~scanf("%s %s", str1, str2))
    {
        int len_str1, len_str2, mem = 0, mark = 0;

        len_str1 = strlen(str1);
        len_str2 = strlen(str2);
        
        for (int i = 0; i < len_str1; i++)
        {
            for (int j = mem; j < len_str2; j++)
            {
                if (str1[i] == str2[j])
                {
                    mem = j + 1;
                    mark++;
                    break;
                }
            }
        }
        if (mark == len_str1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

/*  
step-1: 
*/