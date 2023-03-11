#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "UM";
    char string2[] = "um";

    //strlwr(string1);   // converts a string to lowercase
    //strupr(string2);  // converts a string to uppercase
    //strcat(string1,string2);   // appends string2 to end of string1
    //strncat(string1,string2,2);  // appends n characters from string2 to string1
    //strcpy(string1,string2);  // copy string2 to string1
    //strncpy(string1,string2,1);   // copy n characters of string2 to string1


    //strset(string1,'*');  //sets all characters of a string to a given character
    //strnset(string1,'^',2);  //sets first n characters of a string to a given character
    //strrev(string1);    //reverses a string

    //int speak = strlen(string1);  // returns string length as int
    //int speak = strcmp(string1,string2);   // string compare all characters
    //int speak = strncmp(string1,string2,1);  // string compare n characters
    //int speak = strcmpi(string1,string2);  // string compare all (ignore case senstivity)
    int speak = strnicmp(string1,string2,1);
    
    /*
    
    if (speak == 0)
    {
        printf("These str are same:");
    }

    else
    {
        printf("These str are different:");
    }

    */
    



    //printf("%s",string1);
    printf("%d",speak);

    return 0;
}