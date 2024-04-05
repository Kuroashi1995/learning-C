/*
variable type definitions
char    character data
int     integer data between -2,147,483,648 and 2,147,483,648, the biggest signed 32 bit integer number
float   floating point data
double  holds extremely large or extremely smal floating-point values
*/

#include <stdio.h>

int main()
{
    char grade;
    int quantity;
    float price;
    float total;
    grade = 'A';
    quantity = 12;
    price = 12.25;
    total = quantity * price;
    printf("The price for %d kg of %c quality rice is %.2f, for a toal of %.2f\n", quantity, grade, price, total);

    /* This is a sample program that lists three kids and their school
    supply needs, as well as cost to buy the supplies */
    char firstInitial, middleInitial;
    int number_of_pencils, number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;
    // Info for the first child
    firstInitial = 'J';
    middleInitial = 'R';
    number_of_pencils = 7;
    number_of_notebooks = 4;
    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n",
           firstInitial,
           middleInitial,
           number_of_pencils,
           number_of_notebooks);
    printf("The total cost is $%.2f\n\n",
           number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
}