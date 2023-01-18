#include <stdio.h>
#include <string.h>

unsigned int binaryToDecimal(char s[])
{
    int len = strlen(s);
    unsigned int ans = 0;
    // for (int i = 0, p2 = 1; i < len; i++, p2 *= 2) // fault
    // for (int i = len - 1, p2 = 1; i >= 0; i--, p2 *= 2)
    // {
    //     int bit = s[i] - '0'; // '0' ascii value 48. '1' ascii value 49.
    //     // printf("2^%d %d %d\n", i, p2, bit);
    //     if (bit == 1)
    //     {
    //         ans += p2;
    //     }
    // }
    for (int i = 0; i < len; i++)
    {
        int bit = s[i] - '0';
        ans = ans * 2 + bit; // it just like decimal
                             // 1000 = 0*2+1=1;
                             // = 1*2 + 0 = 2;
                             // = 2*2 + 0 = 4;
                             // = 4*2 + 0 = 8;
        printf("%d ", ans);
    }
    return ans;
};

void toBinary()
{
    // next work
}

int main()
{
    char str[100];
    printf("Enter a binary number: ");
    scanf("%s", str);
    printf("%d\n", binaryToDecimal(str));
    return 0;
};