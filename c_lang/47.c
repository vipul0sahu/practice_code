#include<stdio.h>

void myage(int *psaal)
{
    printf("This is your %dth birthday.\n", *psaal);
}

int main()
{
          int age = 20;
          int *psaal = &age;

          myage(psaal);

          printf("Address of age:%p\n", &age);
          printf("Address of saal:%p\n", psaal);

          printf("Size of age:%d bytes\n", sizeof(age));
          printf("Size of saal:%d bytes\n", sizeof(psaal));

          printf("value of age:%d\n", age);
          printf("value of saal:%d\n", *psaal);



          
return 0;
}