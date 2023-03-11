#include<stdio.h>

int Rmax(int a, int b)
{
  /*  if (a > b)
    {
        return a + b;
    }

    else
    {
        return a * b;
    }
  */

 return (a > b) ? a + b : a * b;   

}

int main()
{
    int max = Rmax(7,6);
    printf("Maximum of values:%d",max);
    return 0;
}