#include<stdio.h>
int main()
{
    int num = 0;
    int sum = 0;

    do
    {
        printf("Enter number above 0:");
         scanf("%d",&num);
         
         if (num > 0)
         {
             sum += num;
         }
    } while (num > 0);
    
    {
         
     
    }

    printf("Sum of numbers:%d",sum);

    return 0;
    
}