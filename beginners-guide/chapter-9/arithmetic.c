/*
Basic math operators:
    (-) Substracts
    (+) Addtitions
    (*) Multiplication
    (/) Division
    (%) Reminder
*/
#include <stdio.h>

int main()
{
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals  %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y;
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y;
    printf("%d modulus %d equals %d\n", x, y, intAnswer);

    int seasons, episodes, minutes, days, seriesHours, seriesMinutes;
    float hoursPerDay;

    printf("This program calculates how many hours you spent in a series per day:\n");
    printf("How many seasons does the series have?:");
    scanf(" %d", &seasons);
    printf("How many episodes does each season have?:");
    scanf(" %d", &episodes);
    printf("How many minutes does each episode have?:");
    scanf(" %d", &minutes);
    printf("How many days did it take you to finish the series?:");
    scanf(" %d", &days);

    seriesHours = (seasons * episodes * minutes) / 60;
    seriesMinutes = (seasons * episodes * minutes) % 60;
    hoursPerDay = seriesHours / days;

    printf("You spent a total of %d hours and %d minutes watching the series, with a media of %.2f hours per day\n", seriesHours, seriesMinutes, hoursPerDay);

    /*
    There is an interesting thing that C does, the assignment operator also have an assosiation direction,
    it goes from right to left, so, the next expression is valid:
    */
    int i, h;
    i = 5 * (h = 2);

    printf("i equals %d, h equals %d", i, h);

    return 0;
}
