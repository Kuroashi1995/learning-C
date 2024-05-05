/*
For loops are better when you know how many times you would need
to repeat the same block of code.
This is actually interesting, the for loop start and checks actual expressions
    for (startExpression; testExpression; countExpression) {
        code to repeat
    }
    the startExpression runs ONCE before the loop starts, then the code
    then the count expression AND FINALLY the testExpression.
    the expressions use semicolons BECAUSE THEY ARE EXECUTABLE
*/
#include <stdio.h>
#include <string.h>
#define DAYS 7
int main()
{
    float incomes[7];
    float outcomes[7];
    float totalIncome = 0;
    float totalOutcome = 0;
    float financialStatus;
    // this program will help you with your money
    printf("Welcome to your economy helper! Follow the steps!\n");
    printf("Please, enter for each week day your income and outcomes: ");
    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Please, enter the %s for the %d%s day: ", j < 1 ? "income" : "outcome", i + 1, i < 1 ? "st" : "nd");
            scanf_s(" %f", j < 1 ? &incomes[i] : &outcomes[i]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%s: [", i < 1 ? "Incomes" : "Outcomes");
        for (int j = 0; j < 7; j++)
        {
            if (i < 1)
            {
                totalIncome += incomes[j];
            }
            else
            {
                totalOutcome += outcomes[j];
            }
            printf("%.2f%s", i < 1 ? incomes[j] : outcomes[j], j == 6 ? "" : ", ");
        }
        printf("]\n");
    }
    printf("Your total income is: %.2f\n", totalIncome);
    printf("Your total outcome is: %.2f\n", totalOutcome);
    financialStatus = totalIncome - totalOutcome;
    printf("Your %s is %.2f\n", financialStatus < 0 ? "deficit" : "profit", financialStatus < 0 ? financialStatus * -1 : financialStatus);
    printf("Your average income is: %.2f\n", totalIncome / 7);
    printf("Your average outcome is: %.2f\n", totalOutcome / 7);
}