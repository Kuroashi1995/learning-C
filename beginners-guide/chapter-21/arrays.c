#include <stdio.h>
#include <string.h>

int main()
{
    /*
    Arrays have already been used along the course, so it's no different from the char arrays I've been using all along
    */
    int scores[] = {10, 9, 8};       // defining the array without specifying the ammount of elements, but giving them in the initialization
    int scoresAsWell[7];             // defining the array with the ammount of elements but no idea what will C fill into it untill we give the elements values
    int scoresAgain[10] = {0};       // a shortcut to tell C to fill the array with zeroes
    int scoresAgainAgain[10] = {10}; // in theory the firs element should be 10, but then it should be filled with zeroes

    printf("The values in the surprise array are: [");
    for (int i = 0; i < 7; i++)
    {
        if (i == 6)
        {
            printf(" %i]\n", scoresAsWell[i]);
            continue;
        }
        printf(" %i, ", scoresAsWell[i]);
    }
    printf("The values in the empty array are: [");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf(" %i]\n", scoresAgain[i]);
            continue;
        }
        printf(" %i, ", scoresAgain[i]);
    }
    printf("The values in the first initialized valued array are: [");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf(" %i]\n", scoresAgainAgain[i]);
            continue;
        }
        printf(" %i, ", scoresAgainAgain[i]);
    }
}