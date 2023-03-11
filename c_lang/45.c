#include<stdio.h>

int main()
{
          int a = 6;           //00000110
          int b = 12;          //00001100
          int c = 0;           //00011000
          int d = 0;

        //   c = a & b;
        //   printf("%d", c);          //  both digits needs to be 1 to assign 1 to c

        // c = a | b;
        // printf("%d", c);               // one of them needs to be 1 to assign 1 to c

        // c = a ^ b;
        // printf("%d", c);            // mandatory only one of them needs to be 1

        c = b << 1;
        printf("%d\n", c);             // left shift the digit

        d = c >> 1;
        printf("%d", d);                // right shift the digit



return 0;
}   