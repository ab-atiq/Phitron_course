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
    // struct Student a = {1905004, "Atiqur Rahman", 85}; // ordered assign in structure
    struct Student a = {.marks = 43, .id = 13, .name = "Atik Khan"}; // unordered assign
    // input or manually assign
    // struct Student a;
    // a.name = "Abul Bashar";
    // strcpy(a.name, "Abul Bashar");
    // a.id = 16;
    // a.marks = 56;
    printf("%d %s %d", a.id, a.name, a.marks);
    return 0;
}