#include<stdio.h>

void birthday(int age,char name[])
{
    printf("\nHappy birthday dear %s!",name);
    printf("\nYou are %d years old!",age);
}

int main()
{
    int age = 14;
    char name[] = "iphone";

    birthday(age,name);

    return 0;



}
