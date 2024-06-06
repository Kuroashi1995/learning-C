#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // floor and ceil transform floating numbers to integers (their type remains as float), floor converts it to the next-lower int and ceil to the next-higher int
    float notInt = 20.25;
    float lowerInt = floor(notInt);
    float upperInt = ceil(notInt);
    printf("Given the number %f, it's next-lower integer is %.f, and it's next-higher is %.f\n", notInt, lowerInt, upperInt);

    // fabs() returns the floating-point absolute value of a  number
    float negative = -123.4;
    float abs = fabs(negative);
    printf("|%.1f| = %.1f\n", negative, abs);

    // pow() raises a value to a power, and sqrt() returns the square root of a value
    int power = 4, number = 3;
    float raised = pow(number, power);
    float root = sqrt(raised);
    printf("3^4 = %.1f, and %.1f^(1/2) = %.1f\n", raised, raised, root);

    // trigonometric functions
    /*
    cos(), sin(), tan(), acos(), asin(), atan() returns the values of a given argument in radians
    */
    /*
    Logarithmic functions:
    exp(), returns the value of the base of the natural logarithm to a power of the argument
    log(), returns the value of the natural logarithm of the argument
    log10(), returns the value of the base 10 logarithm of the argument
    */
    // random
    /*
    the rand() function retuns a random number from 0 to 32767, it needs the stdlib.h header
    you can use the modulus operator to manipulate the outcome.
    */
    float random = (rand() % 6) + 1;
    printf("The random number between 1 and 6 is: %.f\n", random);
    // but this returns always the same number, so there is one more step, the seed
    time_t t;
    srand(time(&t)); // giving the rand a seed with the exact time of the machine
    float realRandom = (rand() % 6) + 1;
    printf("Now, the real random is: %.f", realRandom);
}