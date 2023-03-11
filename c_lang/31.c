#include<stdio.h>
int main()
 // continue = skips rest of code & forces the next iteration of the loop
   // break = exits a loop/switch
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
        {
            break;
        }
        
        printf("\n%d",i);

    }

    return 0;
        

        
    
    
}