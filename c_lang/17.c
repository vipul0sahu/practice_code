#include<stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("Select the operator (+,-,*,/):");
    scanf("%c",&operator);

    printf("Enter num1:");
    scanf("%lf",&num1);

    printf("Enter num2:");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Addtion of num1 and num2:%.2lf",result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("Substraction of num1 and num2:%.2lf",result);
        break;

    case '*':
        result = num1 * num2;
        printf("Multiplication of num1 and num2:%.2lf",result);
        break;

    case '/':
        result = num1 / num2;
        printf("Divison of num1 and num2:%.2lf",result);
        break;
    
    default:
        printf("\nNigga watch your fucking finger:%c",operator);
        break;
    }

    return 0;
}