#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[][100] = {"What year did the C language debut ? :",
                             "Who is credited with creating C ? :",
                             "What is the predecessor of C ?:"};
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[] = {'B', 'A', 'C'};

    int numberofquestions = sizeof(questions) / sizeof(questions[0]);

    char choice;
    int score = 0;

    printf("@@@@@@@@@\n");
    printf("Quiz game\n");
    printf("@@@@@@@@@\n");

    int i = 0;
    
    for ( i ; i < numberofquestions; i++)
    {
        printf("%s \n", questions[i]);
 

    if (i == 0)
    {
        for (int j = 0; j < 4; j++)
        {
                printf("%s \n", options[j]);
        }
    }

    if (i == 1)
    {
        for (int j = 4; j < 7; j++)
        {
                printf("%s \n", options[j]);
        }
    }

    if (i == 2)
    {
        for (int j = 7; j < 11; j++)
        {
                printf("%s \n", options[j]);
        }
    }

    printf("Guess the answer:");
    scanf(" %c", &choice);
    // scanf("%c");                                   // we can use left space ( %c) for skipping

     choice = toupper(choice);
    

      if (choice == answers[i])
    {
        printf("CORRECT!\n");
        score++;
    }

      else
    {
        printf("WRONG!\n");
    }
    
    }

    printf("$$$$$$$$$$$$$$\n");
    printf("FINAL SCORE: %d/%d\n", score, numberofquestions);
    printf("$$$$$$$$$$$$$$\n");

    return 0;
}