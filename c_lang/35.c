#include<stdio.h>
#include<string.h>
int main()
{
    char cars[][20] = {"Mustang","Rolls royce","Range rover","k","d"};
    strcpy(cars[0],"BMW");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n",cars[i]);
    }

    return 0;
    
}