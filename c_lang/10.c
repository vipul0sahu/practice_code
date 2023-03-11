#include<stdio.h>
int main()
{
    int money;
    char name[20];

    printf("Bete naam batao apna");
    //scanf("%s",&name);
    fgets(name,20,stdin);

    //printf("Price of your laptop");
    //scanf("%d",&money);

    //printf("%d ooo maagu, baap ka paisa main udlo",money);
    printf("Ohoo %s naam baa hum tuhar baap ke janila",name);
    return 0;
}