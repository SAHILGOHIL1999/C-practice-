#include <stdio.h>
int main()
{
    float yearly, monthly;
    printf("Enter yearly salary: ");
    scanf("%f", &yearly);
    monthly = yearly / 12;
    printf("Monthly salary: %.2f", monthly);
    return 0;
}