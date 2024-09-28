#include <stdio.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    printf("%d\n", randomNumber);

    int guessTime = 0;
    while (guessTime < 10)
    {
        int guessNumber;
        scanf("%d", &guessNumber);
        if (guessNumber == randomNumber)
        {
            printf("Match\n");
            // break;
            // return;
        }
        else if (guessNumber < randomNumber)
        {
            printf("Inter big number\n");
        }
        else
        {
            printf("inter small number\n");
        }
        guessTime++;
    }
    if (guessTime == 10)
    {
        printf("You are failed to find number!!!");
    }
    else
    {
        printf("Congratulations!! You successfully find random number");
    }
    return 0;
}
