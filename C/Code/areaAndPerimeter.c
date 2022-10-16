#include<stdio.h>
int main()
{
    double r,area,perimeter;
    const double PI = 3.1416;
    printf("Enter a Radius of circle: ");
    scanf("%lf",&r);
    area = PI * r * r;
    perimeter = 2*PI * r;
    printf("Area of Circle : %.2lf\n",area);
    printf("Perimeter of Circle : %.2lf\n",perimeter);
    return 0;
}
