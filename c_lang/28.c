#include<stdio.h>
#include<string.h>
int main()
{
    // while loop = repeats a section of code possibly unlimited times. 
   // WHILE some condition remains true
   // a while loop might not execute at all

   char name[25];

   printf("Write your name:");
   fgets(name,25,stdin);
   
   name[strlen(name) - 1] = '\0';

    while (strlen(name )== 0)
    {
         printf("what the fuck did you enter ?\n");
         printf("write your name:");
         fgets(name,25,stdin);
         name[strlen(name) - 1] = '\0';
     }

     printf("hello %s",name);

   return 0;
   
}