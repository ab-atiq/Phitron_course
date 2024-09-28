#include <stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int i, length;
    printf("%s\n", country);
    length = 10;
  
    // lowercase to uppercase
    for (i = 0; i < length; i++)
    {
        if (country[i] >= 'a' && country[i] <= 'z')
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
  
    // uppercase to lowercase
    for (i = 0; i < length; i++)
    {
        if (country[i] >= 'A' && country[i] <= 'Z')
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
  
    return 0;
}
