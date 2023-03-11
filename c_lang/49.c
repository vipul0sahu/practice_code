#include<stdio.h>

int main()
{
          FILE *pY = fopen("C:\\Users\\HP\\Desktop\\torrent.txt","r");
          char buffer[400];

          if (pY == NULL)
          {
              printf("File is not present!\n");
          }

          else
          {
              while (fgets(buffer, 400, pY) != NULL )
              {
                  printf("%s", buffer);
              }
              
          }

          fclose(pY);
          
return 0;
}