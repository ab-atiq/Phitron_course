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

// when parameter will simple variable that time it can not change in structure.
void canNotChange(struct Student a)
{
    a.mark = 200;
    a.id = 1598753;
    strcpy(a.name, "abul");
}
void canChange(struct Student *a)
{
    // we can dereference use (*a) or a -> in stucture
    a->id = 456987;
    (*a).mark = 101010;
    strcpy((*a).name, "canChange");
}

int main()
{
    struct Student s;
    char nm[20];
    scanf("%s %d %d", &nm, &s.id, &s.mark);
    strcpy(s.name, nm);
    printStucture(s);
    canNotChange(s);
    printStucture(s);
    canChange(&s);
    printStucture(s);
    return 0;
}