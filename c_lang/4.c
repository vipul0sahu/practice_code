#include<stdio.h>
int main()
{
    int age = 20; //int defines no. (%d)
    float gpa = 8.3; //float defines decimal no. (%f)
    char grade = 'B'; // char defines single charecter. (%c)
    char name[] = "Raji"; // char with box bracket defines multiple charecter. (%s)
    
    printf("%s is a good student \n",name);
    printf("She got %c in computer \n",grade);
    printf("Her age is only %d \n",age);
    printf("And her overall gpa is %f",gpa);
    return 0;
}