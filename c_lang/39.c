#include<stdio.h>

//typedef char user[25];
// typedef = reserved keyword that gives an existing datatype a "nickname"

typedef struct 
{
    int id;
    char name[20]; 
}user;


int main()
{
    user account1 = {183283,"goot"};
    user account2 = {383659,"boot"};

    printf("%d\n",account1.id);
    printf("%s\n",account1.name);

    printf("%d\n",account2.id);
    printf("%s\n",account2.name);
          
return 0;
}