#include<stdio.h>

// return = returns a value back to a calling function.

double calculate(double z)
{
    double result = z * z;
    return result;
}

int main()
{
    double z = calculate(4);
    printf("Square of z:%.2lf",z);
    return 0;
}