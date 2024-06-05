#include <stdio.h>
#include <string.h>

/*
This code is made to test getchar and putchar functionality
*/

int main()
{
    int i;
    char msg[25];
    char firstChar = getchar();
    printf("%c\n", firstChar);
    /*
    Okokok this was interesting, the getchar function for what i believe and researched
    reads from a buffer, that starts with the getchar call and gives back control after an
    enter key press, the thing is, getchar gets only one character at the time, and that
    buffer is still on standby for future getchar calls untill it reaches the end of the
    buffer, which is the \n character
    */
    printf("Type up to 25 characters and then press Enter:\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar();
        printf("%c\n", msg[i]);
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    /*
    If my hypothesis is correct, then this getchar should trigger a new buffer:
    */

    putchar('\n');
    printf("Triggering second buffer mayb");
    char secondChar = getchar();
    printf("%c\n", secondChar);

    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');
    return 0;
}