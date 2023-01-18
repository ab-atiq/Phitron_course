#include <stdio.h>
void printCall(void)
{
    static int count = 0;
    printf("Called %d times.\n", ++count);
}
int main()
{
    printCall();
    printCall();
    printCall();
    printCall();
    return 0;
}