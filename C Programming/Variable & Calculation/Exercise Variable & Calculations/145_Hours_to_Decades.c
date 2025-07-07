#include <stdio.h>
int main()
{
    float hours, days, years, decades;
    printf("Enter hours: ");
    scanf("%f", &hours);
    days = hours / 24;
    years = days / 365;
    decades = years / 10;
    printf("Decades: %f", decades);
    return 0;
}