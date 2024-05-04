/*
 The conditional operator is basically a compressed form of if...else
 it looks like this:
    relation ? trueStatement : falseStatement
 The relation is any type of relational or logical test,
 whereas the statements are valid C statements that run in the cases
 that corresponds with the result of the relation.
 There are also the small change operators: ++, -- which adds or decreases
 the variable by 1.
*/
#include <stdio.h>

int main()
{
    float number = 15.5;
    number *= (number < 16) ? (1.10) : (1.5); // it is quite efficient going into places where an if...else couldn't
    printf("The number is %f. \n", number);

    int i, t, j = 5, before, after;
    i = t = 2;
    /*
    Okok this gets freaky, watch this:
    */
    before = ++i * j;
    after = t++ * j;
    /*
    The order in which the small change operator is places changes the outcome
    if the operator is on the left of the variable, it excecutes before anything else
    in that line of code,
    otherwise, if it's on the right, it excecutes after everything else is done in that
    line of code
    */

    printf("The before value is %d, the after value is %d", before, after);

    /*
    To check how much memory a value is taking, we can use sizeof()
    */

       return 0;
}