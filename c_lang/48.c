#include<stdio.h>

int main()
{
          /*
          FILE *pa = fopen("smokey.txt", "a");
          fprintf(pa,"\nDragon Ball Z");
          fclose(pa);
          */

         if (remove("smokey.txt") == 3)
         {
             printf("File got deleted successfully!");
         }
         
         

return 0;
}