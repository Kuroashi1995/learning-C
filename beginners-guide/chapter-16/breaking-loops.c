/*
This statements help stop early or bypass some of the code in
loop statements
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STOPPER "STOP\n"
#define STATUS "married\n"
// done this way 'cause fgets ACTUIALLY SAVES THE NEWLINE CHAR AT ENTER
// this is a cheap way to do it, but since the program doesn't actually save values is ok
#define MAXLOOPS 20
// this program will get user input about their family members
int main()
{
    char name[64];
    char partner[64];
    char age[64];
    int ageint;
    char status[64];
    int control;
    printf("Greetings, please enter the name, age and if its married status of your family: \n");
    for (int i = 0; i < MAXLOOPS; i++)
    {
        printf("Please enter the family member name: ");
        fgets(name, 63, stdin);
        if (strcmp(name, STOPPER) == 0)
        {
            break;
        }
        printf("Please enter the family member age: ");
        fgets(age, 63, stdin);
        ageint = atoi(age);
        printf("Please enter the family member status: ");
        fgets(status, 63, stdin);

        if (strcmp(status, STATUS) == 0)
        {
            printf("Please enter the family member partner name: ");
            fgets(partner, 63, stdin);
        }
        else
        {
            continue;
        }
    }
}