#include <stdio.h>
#include <math.h>

// int getRoot(int a, int b, int c, int *r1, int *r2)
// {
//     int D = (b * b) - (4 * a * c);
//     if (D < 0)
//     {
//         return 0;
//     }
//     else if (D == 0)
//     {
//         *r1 = (-b) / (2 * a);
//         return 1;
//     }
//     else
//     {
//         *r1 = (-b + sqrt(D)) / (2 * a);
//         *r2 = (-b - sqrt(D)) / (2 * a);
//         return 2;
//     }
//     return 0;
// }

int getRoot(double a, double b, double c, double *r1, double *r2)
{
    double D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        return 0;
    }
    else if (D == 0)
    {
        *r1 = (-b) / (2 * a);
        return 1;
    }
    else
    {
        *r1 = (-b + sqrt(D)) / (2 * a);
        *r2 = (-b - sqrt(D)) / (2 * a);
        return 2;
    }
    return 0;
}

// int main()
// {
//     int a, b, c, root1, root2;
//     scanf("%d %d %d", &a, &b, &c);
//     int res = getRoot(a, b, c, &root1, &root2);
//     if (res == 0)
//     {
//         printf("There is no root present in equation.");
//     }
//     else if (res == 1)
//     {
//         printf("Root value is: %d \n", root1);
//     }
//     else
//     {
//         printf("Root 1 value is: %d\n", root1);
//         printf("Root 2 value is: %d\n", root2);
//     }
//     return 0;
// }

int main()
{
    double a, b, c, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    int res = getRoot(a, b, c, &root1, &root2);
    if (res == 0)
    {
        printf("There is no root present in equation.");
    }
    else if (res == 1)
    {
        printf("Root value is: %lf \n", root1);
    }
    else
    {
        printf("Root 1 value is: %lf\n", root1);
        printf("Root 2 value is: %lf\n", root2);
    }
    return 0;
}

/*
Input:
1 -5 6

Output for integer input:
Root 1 value is: 3
Root 2 value is: 2

Output for double input:
Root 1 value is: 3.000000
Root 2 value is: 2.000000

*/