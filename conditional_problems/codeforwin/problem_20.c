#include <stdio.h>

int main()
{
    float basicSalary, grossSalary;
    printf("Input basic salary of an employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        grossSalary = basicSalary + (basicSalary * 0.20) + (basicSalary * 0.80);
    }
    else if (basicSalary > 10000 && basicSalary <= 20000)  // fixed
    {
        grossSalary = basicSalary + (basicSalary * 0.25) + (basicSalary * 0.90);
    }
    else
    {
        grossSalary = basicSalary + (basicSalary * 0.30) + (basicSalary * 0.95);
    }

    printf("Gross salary = %.2f", grossSalary);  // fixed
    return 0;
}