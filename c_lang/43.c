#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int min = 1;
    const int max = 100;
    int random;
    int guessess = 0;
    int guess;

    srand(time(0));

    random = (rand() % max) + min;
    // printf("%d" , random);

    do
    {
        printf("Enter the guess:");
        scanf("%d", &guess);

        if (guess < random)
        {
            printf("lower than the hidden no!\n");
        }

        else if (guess > random)
        {
            printf("higher than the hidden no!\n");
        }

        else
        {
            printf("correct!\n");
        }

        guessess++;

    } while (guess != random);

    printf("##############\n");
    printf("correct answer: %d \n", random);
    printf("No of guessess took to reach ans: %d \n", guessess);
    printf("##############\n");
}