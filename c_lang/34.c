#include<stdio.h>
int main()
{
    //int matrix[2][2] = {{1,2},{9,8}};

    int matrix[3][3];

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            printf("%d ",matrix[i][j]);
        }

        printf("\n");
        
    }
    
    return 0;
    

    
}