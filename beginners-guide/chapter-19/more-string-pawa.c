#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char password[25];
    int lowercase = 0, uppercase = 0, number = 0;
    do
    {
        printf("Input a password that contains lowercase, uppercase and a number: ");
        for (int i = 0; i < 25; i++)
        {
            password[i] = getch();
            if (password[i] == '\r') // important, getch works with return character, not the newline, also, getch eats ctrl + key inputs, so it may cause trouble when trying to use ctrl + c and shit
            {
                break;
            }
            putch(password[i]);
            if (!lowercase && islower(password[i]))
            {
                lowercase = 1;
            }
            else if (!uppercase && isupper(password[i]))
            {
                uppercase = 1;
            }
            else if (!number && isdigit(password[i]))
            {
                number = 1;
            }
        }
        putch('\n');

    } while (!(lowercase && uppercase && number));

    char name[25] = "Andrew";
    char lastName[25] = " Halley, ";

    // This function declared in string.h lets us concatenate a string next to the first one

    strcat(name, lastName);
    // the compiler suggest changing strcat to strlcat, sooo lets see
    // strlcat uses a defined length buffer char array to store the concatenated strings

    // now some functions included in stdio to get and put strings
    char job[25];
    printf("What's your job title? ");
    gets(job);
    char presentation[60];
    strcpy(presentation, strcat(name, job));
    printf("So you are: %s", presentation);
}