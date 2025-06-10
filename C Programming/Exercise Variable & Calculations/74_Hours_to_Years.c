#include <stdio.h>
int main()
{
    float hours, days, years;
    printf("Enter hours: ");
    scanf("%f", &hours);
    days = hours / 24;
    years = days / 365;
    printf("Years: %f", years);
    return 0;
}