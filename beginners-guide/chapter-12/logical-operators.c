/*
There are two types of operators:
    Relational operators: ==, >, <, >=, <=, !=
    Logical operators: &&, ||, !
*/

#include <stdio.h>
#define REQUHOURS 6
#define REQTICKETS 3

int main()
{
    int hours, tickets, homeOffice, dailyReport;

    printf("This program checks if you are done for the day!\n");
    printf("How many hours have you logged in your tracker?: ");
    scanf_s(" %d", &hours); // scanf was deemed insecure, so i changed it for the new one

    printf("How many tickets have you finished?: ");
    scanf_s(" %d", &tickets);

    printf("Are you in a home office week? (1: yes | 2: no): ");
    scanf_s(" %d", &homeOffice);

    printf("Is your daily report done? (1: yes | 2: no): ");
    scanf_s(" %d", &dailyReport);

    if (hours >= REQUHOURS || tickets >= REQTICKETS)
    {
        printf("Congratz! You are done for today!");
    }
    else if (homeOffice == 1 && dailyReport == 1)
    {
        printf("Oh home office week huh? Lucky! U are free!");
    }
    else
    {
        printf("Oops, it seems you are not done yet!");
    }
}