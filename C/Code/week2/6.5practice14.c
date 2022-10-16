#include <stdio.h> // this cgpa basis on school class
int main()
{
    int term;
    float t_gpa = 0, cgpa;
    printf("Enter number of terms: ");
    scanf("%d", &term);
    for (int i = 1; i <= term; i++)
    {
        int sub, mark;
        float gpa, total_grade = 0;
        printf("\nTerm %d:\n", i);
        printf("Enter number of Subjects: ");
        scanf("%d", &sub);
        for (int i = 1; i <= sub; i++)
        {
            printf("Enter Marks of subject %d: ", i);
            scanf("%d", &mark);
            if (mark >= 80)
            {
                printf("Grade = A+, Points = 5.00\n");
                total_grade += 5;
            }
            else if (mark >= 70)
            {
                printf("Grade = A, Points = 4.00\n");
                total_grade += 4;
            }
            else if (mark >= 60)
            {
                printf("Grade = A-, Points = 3.50\n");
                total_grade += 3.5;
            }
            else if (mark >= 50)
            {
                printf("Grade = B, Points = 3.00\n");
                total_grade += 3;
            }
            else if (mark >= 40)
            {
                printf("Grade = C, Points = 2.00\n");
                total_grade += 2;
            }
            else if (mark >= 33)
            {
                printf("Grade = D, Points = 1.00\n");
                total_grade += 1;
            }
            else
            {
                printf("Grade = Fail, Points = 0.00\n");
                total_grade += 0;
            }
        }
        gpa = total_grade / sub;
        printf("Term GPA = %.2f", gpa);
        t_gpa += gpa;
    }
    cgpa = t_gpa / term;
    printf("\nOverall CGPA = %.2f", cgpa);
    return 0;
}
