/*
Switch case is a good alternative to chaining multiple if elses
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    printf("Hello! This is your pet assistant!, What would you like to do?:\n");
    printf("1. Feed your cat.\n");
    printf("2. Feed your dog.\n");
    printf("3. Shower your cat.\n");
    printf("4. Shower your cat.\n");
    printf("5. Exit\n");
    do
    {
        printf("MAKE YOUR CHOICE: ");
        scanf_s(" %i", &option);
        switch (option)
        {
        case (1):
            printf("Your cat has been fed.\n");
            break;
        case (2):
            printf("Your dog has been fed.\n");
            break;
        case (3):
            printf("Your cat has been showered.\n");
            break;
        case (4):
            printf("Your dog has been showered.\n");
            break;
        case (5):
            printf("See you later.\n");
            exit(1);
            break;
        default:
            printf("%d is not a valid choice, try again:\n", option);
            break;
        }
    } while ((option < 1) || option > 5);
}
/*
There is an optimization for the switch-case, the further up in the
cases segment is the most common case, the better, so C doesn't
have to go through every other less common cases to check them.
Also it's not a good idea to nest switch-case statements.
*/