#include<stdio.h>
int main()
{
    /* augmented assignment operators = used to replace a statement where an operator
                                        takes a variable as one of its arguments
                                        and then assigns the result back to the same variable
                                        x = x + 1
                                         x+=1
   
   */                                 

    int a = 4;
    int a2 = 4;
    int b = 2;
    int b2 = 2;
    int c = 5;

   
    a/=2;
    a2*=2;
    b+=4;
    b2-=4;
    c%=2;

    printf("%d\n",a);
    printf("%d\n",a2);
    printf("%d\n",b);
    printf("%d\n",b2);
    printf("%d",c);

    return 0;

}