#include <stdio.h>
int main()
{
    float decades, years, days, hours;
    printf("Enter decades: ");
    scanf("%f", &decades);
    years = decades * 10;
    days = years * 365;
    hours = days * 24;
    printf("Hours: %f", hours);
    return 0;
}