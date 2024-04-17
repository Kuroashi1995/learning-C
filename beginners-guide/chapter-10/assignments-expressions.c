/*
Compound assignment: There will be times when a variable must be updated,
not only with constant assignment but also with operands, for example a counter
variable that adds one every time an event takes place
*/

#include <stdio.h>

int main()
{
    int ctr = 0;
    // what the hell is a for loop (?

    ctr = ctr + 1; // increases ctr variable by 1
    printf("The counter value is: %d\n", ctr);
    ctr = ctr + 1; // increases ctr variable by 1
    printf("The counter value is: %d\n", ctr);
    ctr = ctr + 1; // increases ctr variable by 1
    printf("The counter value is: %d\n", ctr);
    ctr = ctr + 1; // increases ctr variable by 1
    printf("The counter value is: %d\n", ctr);
    ctr = ctr + 1; // increases ctr variable by 1
    printf("The counter value is: %d\n", ctr);
    ctr = ctr - 1; // decareases ctr variable by 1
    printf("The counter value is: %d\n", ctr);

    // compound operators makes this kind of operation more easy to write
    ctr += 1; // increase ctr variable by 1
    printf("The counter value is: %d\n", ctr);

    ctr = ctr * 1.40; // multiplies ctr value by 1.40
    printf("The counter value is: %d\n", ctr);
    /*
    I ran into an issue when doing this, in my head, when the ctr is 5
    each 20% should equal 1, so I expected that multiplying it by
    1.40 the result would be 7, instead it printed 6.
    When changing the ctr type to float, it works as expected, so
    I went to the forums to get some answers,
    when multiplying an int with a float, the resutl will be a float,
    even more so, when passed to printf, it gets promoted to double.
    That means one should be very careful when operating with types
    */

    /*
    Typecasting:
    Temporarly changes the type of a variable to another
    (datatype) value
    It is used to cast a type to keep the uniformity of an operation
    */

    return 0;
}