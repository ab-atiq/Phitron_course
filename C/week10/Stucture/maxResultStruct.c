#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[20];
    int marks;
};

int main()
{
    struct Student hightMark = {.marks = 0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct Student a;
        scanf("%d %s %d", &a.id, &a.name, &a.marks);
        // printf("%d %s %d", a.id, a.name, a.marks);
        if (hightMark.marks < a.marks)
        {
            hightMark = a;
        }
    }
    printf("%d %s %d\n", hightMark.id, hightMark.name, hightMark.marks);
    return 0;
}