/*
Soooo... Scanf is a way to get user input by reading the keyboard
is a built-in function of the same header file as printf
It is used to fill variables with user input typed by the user
*/
#include <stdio.h>

int main()
{
    char content[64];
    float test;
    printf("This program will ask for user input\n");
    printf("WHAT'S IN THE BOX?:\n");
    // scanf(" %s", content);
    /*
    sooo I ran into an issue here, as I was memeing, and tried to
    save a spaced string, there is an issue with scanf, it can only
    store strings without whitespaces, so looking for solutions,
    I found the fgets function
    #include<stdio.h>
    fgets(char*str, int n, FILE*stream);
    in the file*stream part, you can put stdin, i suppose is a stream
    so it works, will look more into it as i learn more about the language
    when setting the size, one must take in count the null zero character
    */
    fgets(content, 63, stdin);
    printf("IN THE BOX THERE IS: %s", content);
    printf("This is a test for scanf, insert a dollar price as $XX.XX:");
    scanf(" $%f", &test);
    printf("%f", test);
    /*
    so yeah, it seems that scanf kinda uses something like a grep, and
    tries to match the string format passed into the function
    */
    return 0;
}
