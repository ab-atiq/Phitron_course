#include<stdio.h>
int main()
{
    int sub,mark;
    float gpa, total_grade = 0;
    printf("Total Subject: ");
    scanf("%d",&sub);
    for(int i=0; i<sub; i++)
    {
        printf("Enter Mark: ");
        scanf("%d",&mark);
        if(mark>=80)
        {
            total_grade += 5;
        }
        else if(mark>=70)
        {
            total_grade += 4;
        }
        else if(mark>=60)
        {
            total_grade += 3.5;
        }
        else if(mark>=50)
        {
            total_grade += 3;
        }
        else if(mark>=40)
        {
            total_grade += 2;
        }
        else if(mark>=33)
        {
            total_grade += 1;
        }
        else
        {
            total_grade += 0;
        }
    }
    gpa = total_grade/sub;
    printf("GPA IS = %.2f",gpa);
    return 0;
}

