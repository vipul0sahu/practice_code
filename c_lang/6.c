#include <stdio.h>
int main()
{
    //Format specifier : defines and formats a type of data to be displayed.

    //%d = integer
    //%s = string (arry of characters)
    //%f = float
    //%lf = double
    //%c = character
    //%u =
    //%lld =
    //%llu =

    //%.1 = decimal precision
    //%- = left align
    //%1 = field width

    float CGPA1 = 8.9;
    float CGPA2 = 7.78;
    float CGPA3 = 5.722;

    printf("Student 1 got %-8.1f\n",CGPA1);
    printf("Student 2 got %-8.2f\n",CGPA2);
    printf("Student 3 got %-8.3f",CGPA1);
    
    return 0;
}