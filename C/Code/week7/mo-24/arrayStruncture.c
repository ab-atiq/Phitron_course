#include <stdio.h>
#include <string.h>
struct Date
{
    int day, month, year;
};

struct Student
{
    char name[100];
    int class;
    int roll;
    struct Date DOB;
};

void printDate(struct Date newDate)
{
    printf("Next Date: %d-%d-%d\n", newDate.day, newDate.month, newDate.year);
}

void printStudent(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Class: %d\n", s.class);
    printf("Roll: %d\n", s.roll);
    printf("Date of Birth: ");
    printDate(s.DOB);
}

int main()
{
    struct Student st1 =
        {
            .class = 9, .roll = 2, .DOB = {20, 8, 2000}};

    char name[] = "Atiqur Rahman";
    // st1.name = name; // we can not assign string directly
    strcpy(st1.name, name);
    printStudent(st1);
};