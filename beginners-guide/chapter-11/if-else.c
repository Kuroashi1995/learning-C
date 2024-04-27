/*
If statements work as in any programming language
if (condition) {
    body of the if statement
}
*/

#include <stdio.h>
#define CURRENTYEAR 2024

int main()
{
    int userBirthYear, birthdayPassed, age;
    printf("This is a age calculator, please, enter you birth year: ");
    scanf(" %d", &userBirthYear);
    if (userBirthYear > CURRENTYEAR)
    {
        printf("The introduced year is invalid, please re-enter: ");
        scanf(" %d", &userBirthYear);
        if (userBirthYear > CURRENTYEAR)
        {
            printf("You little silly user, get quacked");
        }
    }
    else
    {
        printf("Have your birthday happened already this year? (yes: 1 | no: 2): ");
        scanf(" %d", &birthdayPassed);
        if (birthdayPassed == 1 || birthdayPassed == 2)
        {
            if (birthdayPassed == 1)
            {
                age = CURRENTYEAR - userBirthYear;
                printf("Your age is %d", age);
            }
            else
            {
                age = CURRENTYEAR - userBirthYear - 1;
                printf("Your age is %d", age);
            }
        }
        else
        {
            printf("Silly little user, get quacked and start over");
        }
    }
    return 0;
}