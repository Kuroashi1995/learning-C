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
            if (password[i] == '\r')
            {
                break;
            }
            putch('*');
            if (islower(password[i]))
            {
                lowercase = 1;
            }
            else if (isupper(password[i]))
            {
                uppercase = 1;
            }
            else if (isdigit(password[i]))
            {
                number = 1;
            }
        }
        printf("\ncheck: %i", lowercase && uppercase && number);
    } while (lowercase && uppercase && number);
}