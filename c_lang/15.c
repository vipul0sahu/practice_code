#include<stdio.h>
#include<ctype.h>
int main()
{
    /* switch = A more efficient alternative to using many "else if" statements
                    allows a value to be tested for equality against many cases
    */

    char grade;
    printf("How much you got (grade):");
    scanf("%c",&grade);
    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        printf("Bhai tum to top mar diya");
        break;

    case 'B':
        printf("Thik hai chalo second hai");
        break;

    case 'C':
        printf("Koi nahi third hai saale");
        break;

    case 'D':
        printf("kisi tharah pass ho gaya");
        break;           
    
    case 'E':
        printf("Fail tho nahi hai kam se kam");
        break; 

    case 'F':
        printf("Bhosidi ke fail hai tu");
        break;

    default:
        printf("Gaandu grade tho sahi daal le");
        break;
    }

    return 0;
}