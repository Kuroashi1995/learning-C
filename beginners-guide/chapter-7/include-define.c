/*
#include is used to link external C code to the new code, basically
replaces that line with the code that is in the external file in
precompile process.
#include <compilerIncludedFile>
#include "userDefinedFile"
*/
#include <stdio.h>      //includes the C code that enables the use of the predefined function printf
#include <string.h>     //includes the C code that enables the use of the predefined function strcpy
#include "headerFile.h" //includes the C code in the header file that i made previously

/*
#define is used to well... define constants, these constant are replaced
in the precomplie process with the value that they represent
*/
#define AGELIMIT 21 // anywhere where AGELIMIT is used, will be replaced with the value 21, they are defined in UPPERCASE

int main()
{
    int age;
    char childname[14] = "Thomas";
    printf("\n%s have %d kids. \n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);

    strcpy(childname, "Christopher");
    age = 6;
    printf("The younger one, %s, is %d.\n", childname, age);

    printf("The middle one is a mistery, or mayb I'm just lazy today code it xd");

    return 0;
}