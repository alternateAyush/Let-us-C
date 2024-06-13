#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int giveRandomNumber(int low, int high)
{
    return (rand() % (high - low + 1)) + low;
}

void quizProgram()
{
    int total = 5;
    int correct = 0;
    printf("Welcome to the KPIT Quiz Competition:\n\n");
    for (int i = 0; i < 5; i++)
    {
        int x = giveRandomNumber(1, 50);
        int y = giveRandomNumber(1, 50);
        if (i < 3)
        {
            int sum = x + y;
            int answer = 0;
            printf("What is %d + %d?\n> ", x, y);
            scanf("%d", &answer);
            if (answer == sum)
            {
                correct++;
            }
        }
        else
        {
            int sum = x - y;
            int answer = 0;
            printf("What is %d - %d?\n> ", x, y);
            scanf("%d", &answer);
            if (answer == sum)
            {
                correct++;
            }
        }
        fflush(stdin);
    }
    char per = '%';
    printf("Stats:\n");
    printf("Total    : %d\n", total);
    printf("Correct  : %d\n", correct);
    printf("Incorrect: %d\n", total - correct);
    printf("Score    : %d%c\n", correct * 20, per);
}

int main()
{
    srand(time(NULL));
    quizProgram();
    return 0;
}