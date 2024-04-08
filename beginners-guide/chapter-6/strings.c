/*
Sooo as we use printf with strings, we agree that there must be a way to
store those values, but there is no string type as perse in C
*/
/*
String terminator
to determine the end of a string, C adds a zero to the end of it, this is called
 - Null zero
 - Binary zero
 - String Terminator
 - ASCII 0
 - \0
 Character Arrays
 is a list of values of the same type
*/
#include <stdio.h>  //for printf
#include <string.h> // for strcpy

int main()
{
    /*there are some ways to initialize strings:
    - Declare them with the number of elements
        but it will be filled with zeores
        char month[10]
    - Declare them with no elements number, but with a
        initial value, but that will be the upper limit
        char month[] = "January"
    - Declare them with the elements number, and the initial value*/
    char month[10] = "January";
    /*
    to reassign a string, there are two ways, either reassign every
    character one at the time agh ugh what a drag
    */
    month[0] = 'M';
    month[1] = 'a';
    month[2] = 'r';
    month[3] = 'c';
    month[4] = 'h';
    month[5] = '\0'; // always put the null zero as the last character
    /*
    Or use the awfully convenient strcpy (string copy) included
    in the string.h library
    */
    strcpy(month, "April");
    printf(month);
    printf("\n");
}