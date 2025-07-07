#include <stdio.h>

/*Write a program to input basic salary of an employee and calculate its Gross salary
according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

int main()
{
    float hra, da, basic_salary, gross_salary;

    printf("Enter the basic salary = ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000)
    {
        printf("Using 20%% HRA and 80%% DA slab.\n");
        hra = basic_salary * 0.20;
        da = basic_salary * 0.80;
    }

    else if (basic_salary <= 20000)
    {
        printf("Using 25%% HRA and 90%% DA slab.\n");
        hra = basic_salary * 0.25;
        da = basic_salary * 0.90;
    }

    else
    {
        printf("Using 30%% HRA and 95%% DA slab.\n");
        hra = basic_salary * 0.30;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f", gross_salary);

    return 0;
}