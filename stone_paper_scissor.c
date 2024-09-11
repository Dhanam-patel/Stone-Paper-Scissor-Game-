#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    srand(time(0));
    number = (rand() % 3) + 1;
    printf(" Enter 1 to guess ROCK\n Enter 2 to guess PAPER\n Enter 3 to guess SCISSOR\n");
    printf("Make a guess now: ");
    scanf("%d", &guess);
    if (guess == number)
    {
        printf("TIE!!!!!!!!!!!");
    }
    else if (guess == 1)
    {
        if (number == 2)
        {
            printf("The System says %d You lose", number);
        }
        else
        {
            printf("You won");
        }
    }

    else if (guess == 2)
    {
        if (number == 3)
        {
            printf("The System says %d You lose", number);
        }
        else
        {
            printf("You won");
        }
    }

    else if (guess == 3)
    {
        if (number == 1)
        {
            printf("The System says %d You lose", number);
        }
        else
        {
            printf("You won");
        }
    }
    else
    {
        printf("INVALID INPUT !!!!!!!!!!!!!!!!!!!!!!!!");
    }
    return 0;
}