#include<stdio.h>

enum days {sun = 1 , mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

int main()
{
    enum days today = sat;

    if (today==sun || today==sat)
    {
        printf("Party day");
    }

    else
    {
         printf("I've to go for work");
    }
    
          
return 0;
}