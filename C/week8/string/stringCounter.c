// character counter in string 
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf("Enter a string: ");
    scanf("%s", arr);
    int count[26] = {0};
    
    for (int i = 0; i < strlen(arr); i++)
    {
        // here val is ascii value.
        char val = arr[i];
        count[val - 'a']++;
    }

    for (int val = 'a'; val < 'z'; val++)
    {
        if (count[val - 'a'] > 0)
        {
            printf("value-> %c, count-> %d\n", val, count[val - 'a']);
        }
    }
    return 0;
}