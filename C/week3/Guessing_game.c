#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1; // random number generate 0-100
    printf("%d\n", randomNumber);

    while (true)
    {
        int guessNumber;
        printf("Enter guess number: ");
        scanf("%d", &guessNumber);
        if (guessNumber == randomNumber)
        {
            printf("Your guess number is right.\n");
            break;
        }
        else if (guessNumber > randomNumber)
        {
            printf("Please, enter smaller number\n");
        }
        else
        {
            printf("Please, enter greater number\n");
        }
    }

    return 0;
}