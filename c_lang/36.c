#include<stdio.h>
#include<string.h>
int main()
{
    char drink1[15] = "lemonade";
    char drink2[15] = "orange";
    char temp[15];

    strcpy(temp,drink1);
    strcpy(drink1,drink2);
    strcpy(drink2,temp);

    printf("1=2 %s\n",drink1);
    printf("2=1 %s\n",drink2);

    return 0;

    
}