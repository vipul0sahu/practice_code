#include<stdio.h>
#include<ctype.h>
int main()
{
    char unit;
    float temp;

    printf("Write temprature in (F) or (C):");
    scanf("%c",&unit);

    unit = toupper(unit);

    if (unit == 'F')
    {
        printf("Write temprature in farenheit:");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("Celsius convertion is:%.1f", temp);
    }

    else if (unit == 'C')
    {
        printf("Write temprature in celsius:");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Farenheit convertion is:%.1f", temp);

    }
    
    else 
    {
        printf("What heck are you typing:%c", unit);
    }

    return 0;
    
    
}