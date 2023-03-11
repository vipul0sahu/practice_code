#include<stdio.h>
#include<string.h>

   // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)

struct player
{
    int score;
    char name[20];
};

int main()
{
    struct player num1 = {2,"Vishal"};
    struct player num2 = {3,"Rahul"};

    /*
    strcpy(num1.name, "Vishal");
    num1.score = 2;

    strcpy(num2.name, "Rahul");
    num2.score = 3;
    */

    printf("%s\n",num1.name);
    printf("%d\n",num1.score);

    printf("%s\n",num2.name);
    printf("%d\n",num2.score);

    
    
          
return 0;
}