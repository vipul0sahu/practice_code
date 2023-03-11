#include<stdio.h>
int main()
{
    double prices[] = {44.3, 44.00, 88.00, 99.00, 22.00, 2, 29};
    //printf("%dBytes",sizeof(prices));
    
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("Rs\n%.2lf",prices[i]);
    }
    

    return 0;
    
}