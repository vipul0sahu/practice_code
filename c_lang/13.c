#include<stdio.h>
#include<math.h>
int main()
{
    double a; 
    double b;
    double c;

    printf("Side a:");
    scanf("%lf",&a);

    printf("Side b:");
    scanf("%lf",&b);
    
    c = sqrt(a*a + b*b);
    printf("Hypotenuse:%lf",c);

    return 0;



}
