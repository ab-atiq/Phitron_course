#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int id;
    int mark;
};

void printStucture(struct Student a)
{
    printf("Name -> %s Id -> %d Mark -> %d\n", a.name, a.id, a.mark);
}

void changeFirstArrayMark(struct Student *a)
{
    a[0].mark = 200;
};

int main()
{
    struct Student s[10];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d%s", &s[i].id, &s[i].mark, &s[i].name);
    }
    changeFirstArrayMark(s);
    for (int i = 0; i < 3; i++)
    {
        printStucture(s[i]);
    }
    return 0;
}