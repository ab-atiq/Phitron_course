#include <stdio.h>
#include <stdbool.h>
struct Date
{
    int day, month, year;
};

int getMonth(struct Date date)
{
    return date.month;
}

bool isFirstDay(struct Date date)
{
    return date.day == 1 && date.month == 1;
}

struct Date getFirstDay(int year)
{
    struct Date ans = {1, 1, year};
    return ans;
}

void printDay(struct Date firstDay)
{
    printf("%d-%d-%d", firstDay.day, firstDay.month, firstDay.year);
}

int main()
{
    struct Date d = {1, 1, 2020};
    printf("Month is: %d\n", getMonth(d));

    if (isFirstDay(d))
    {
        printf("Happy New Year!\n");
    }
    else
    {
        printf("This date is not first day of year.");
    }

    // get first date of year
    struct Date firstDay = getFirstDay(2203);
    // printf("%d-%d-%d", firstDay.day, firstDay.month, firstDay.year);
    printDay(firstDay);
    return 0;
}