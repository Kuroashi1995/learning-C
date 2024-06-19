#include <stdio.h>

int main()
{
    /*
    This program looks for data in linked arrays
    */
    int arrMark, employee;
    int found = 0;
    int employeeIDs[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int salary[10] = {1000, 2000, 5000, 1000, 20000, 6000, 7000, 2000, 1500, 1000000};
    printf("Salary searcher! Type the employee ID number: ");
    scanf_s(" %d", &employee);

    for (arrMark = 0; arrMark < 10; arrMark++)
    {
        if (employeeIDs[arrMark] == employee)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("The salary of the employee with ID: %d is %d", employee, salary[arrMark]);
    }
    else
    {
        printf("There must be an error, there is no user with ID: %d", employee);
    }
}