#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    
    int randomno1 = (rand() % 10) + 1;
    int randomno2 = (rand() % 10) + 1;
    int randomno3 = (rand() % 10) + 1;
    int randomno4 = (rand() % 10) + 1;
    int randomno5 = (rand() % 10) + 1;

    printf("%d\n",randomno1);
    printf("%d\n",randomno2);
    printf("%d\n",randomno3);
    printf("%d\n",randomno4);
    printf("%d\n",randomno5);
          
return 0;
}