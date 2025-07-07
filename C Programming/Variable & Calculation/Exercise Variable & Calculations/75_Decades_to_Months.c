#include <stdio.h>
int main()
{
    float decades, years, months;
    printf("Enter decades: ");
    scanf("%f", &decades);
    years = decades * 10;
    months = years * 12;
    printf("Months: %f", months);
    return 0;
}