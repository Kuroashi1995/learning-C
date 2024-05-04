/*
In this chapter we will be looking at ways to repeat blocks of code
*/
#include <stdio.h>

#define SECRETNUMBER 56
int main()
{
    char decision;
    int try;
    printf("Are you ready to guess the secret number? Y | N : ");
    scanf_s(" %c", &decision);

    if (decision == 'Y')
    {
        printf("Nice, make your guess: ");
        do
        {
            scanf_s(" %d", &try);
            if (try < SECRETNUMBER)
            {
                printf("Ooops, gotta go higher than that: ");
            }
            else if (try > SECRETNUMBER)
            {
                printf("Ooops, gotta go lower than that: ");
            }
            else
            {
                printf("Congratulations! you did it!");
            }
        } while (try != SECRETNUMBER);
    }
    else if (decision == 'N')
    {
        printf("Aww shucks see ya later aligator");
    }
    else
    {
        printf("Simple instructions, yet here we are.");
    }
}