#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    char sample[27];
    scanf("%d", &t);
    scanf("%s", sample);
    while (t--)
    {
        char str1[101], str2[101] = "";
        scanf("%s", str1);
        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] == '.' || str1[i] == ',' || str1[i] == '!' || str1[i] == '?')
            {
                str2[i] = str1[i];
            }
            else if (str1[i] == '_')
            {
                str2[i] = ' ';
            }
            else
            {
                int temp;
                temp = str1[i] - 'A';
                if (temp < 26)
                    str2[i] = sample[temp] - 32;
                else
                    str2[i] = sample[temp - 32];
            }
        }
        cout << str2 << endl;
    }
    return 0;
}