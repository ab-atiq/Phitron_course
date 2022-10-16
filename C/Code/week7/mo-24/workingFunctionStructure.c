#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct Date getNextDate(struct Date start)
{
    struct Date newDate = start;
    if (newDate.day != months[newDate.month - 1])
    {
        newDate.day++;
    }
    else if (newDate.month != 12)
    {
        newDate.day = 1;
        newDate.month++;
    }
    else
    {
        newDate.day = 1;
        newDate.month = 1;
        newDate.year += 1;
    }
    printf("Next Date: %d-%d-%d\n", newDate.day, newDate.month, newDate.year);
    return newDate;
}

// void printDate(struct Date newDate)
// {
//     printf("Next Date: %d-%d-%d\n", newDate.day, newDate.month, newDate.year);
// }

int main()
{
    struct Date start;

    printf("Enter a date: ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    int days;
    printf("How many days: ");
    scanf("%d", &days);

    struct Date newDate = start;
    printf("Current Date: %d-%d-%d\n", newDate.day, newDate.month, newDate.year);
    for (int i = 0; i < days; i++)
    {
        newDate = getNextDate(newDate);
        // printDate(newDate);
    }
    return 0;
}
