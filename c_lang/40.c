#include<stdio.h>
#include<string.h>

typedef struct data
{
    char name[20];
    float grade;
}data2;


int main()
{
    data2 student1 = {"sumit",3};
    data2 student2 = {"rishab",4};
    data2 student3 = {"anand",2};
    data2 student4 = {"sheril",3};

    data2 students[] = {student1,student2,student3,student4};

    for ( int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
          printf("%-10s\t", students[i].name);
          printf("%.2f\n", students[i].grade);
             
    }
    

  
return 0;
}