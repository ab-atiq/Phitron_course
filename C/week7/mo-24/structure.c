#include <stdio.h>
struct Date
{
    int day, month, year;
};
int main()
{
    struct Date today = {23, 4, 2005};
    // today.day = 23;
    // today.month = 4;
    // today.year = 2005;
    // today.year = today.year + 5;
    // today.year += 5;
    today = (struct Date){2, 6, 2022};
    printf("%d-%d-%d\n", today.day, today.month, today.year);

    // two date equal or not
    struct Date person1, person2;
    printf("Enter person 1 birth date: ");
    scanf("%d %d %d", &person1.day, &person1.month, &person1.year);
    printf("Enter person 2 birth date: ");
    scanf("%d %d %d", &person2.day, &person2.month, &person2.year);
    if (person1.day == person2.day && person1.month == person2.month && person1.year == person2.year)
    {
        printf("Both person birthday is same.");
    }
    else
    {
        printf("Both person birthday is different.");
    }
    return 0;
}