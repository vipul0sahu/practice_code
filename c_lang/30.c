#include<stdio.h>
int main()
{
    int rows;
    int columns;
    char symbol;
    
    printf("Enter symbol:");
    scanf("%c",&symbol);

    printf("Enter number of rows:");
    scanf("%d",&rows);

    printf("Enter number of columns:");
    scanf("%d",&columns);

    

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%d",j);
            
        }
        printf("\n");
    }

    return 0;
    
}