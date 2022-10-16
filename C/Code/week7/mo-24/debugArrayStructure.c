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

struct Date inputDate()
{
    struct Date d;
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    return d;
}

struct Student inputStudent()
{
    struct Student st;
    printf("Enter Name: ");
    gets(st.name);
    gets(st.name);
    printf("Enter Class: ");
    scanf("%d", &st.class);
    printf("Enter Roll: ");
    scanf("%d", &st.roll);
    printf("Enter Birth Date: ");
    st.DOB = inputDate();

    return st;
}

int main()
{
    int n;
    printf("Enter total students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d info\n", i+1);
        students[i] = inputStudent();
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d info\n", i+1);
        printStudent(students[i]);
    }

    return 0;
};