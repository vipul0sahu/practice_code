#include<stdio.h>
int main()
{
    const double PI = 3.14159;
    double circumference;
    double radius;
    double area;
    
    printf("\nradius:");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\ncircumference of circle:%lf",circumference);
    printf("\narea of circle:%lf",area);

    return 0;
}