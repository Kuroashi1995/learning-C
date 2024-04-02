#include <stdio.h>

int main()
{
    // lets print just a string
    printf("This is just a string\n");
    /*
    The following are escape sequences:
    \n new line
    \a alarm, rings the computers bell
    \b backspace
    \t tab
    \\ backslash
    \' single quote mark
    \" double quote mark
    */
    // lets try some of them
    printf("Column A\t Column B\t Column C");
    printf("\nMy computer's beep sounds like this: \a!\n");
    printf("Letz\bs fix that typo and then show the backslash ");
    printf("character \\\" she said \n");

    /*
    conversion characters:
    %d (decimal) integer
    %f floating-point
    %c character
    %s string
    */
    printf("%d %s cost %.2f per %d\n", 24, "roses", 19.95, 12);
    return 0;
}