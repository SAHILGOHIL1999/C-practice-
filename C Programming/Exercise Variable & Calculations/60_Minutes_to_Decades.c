#include <stdio.h>
int main()
{
    float minutes, hours, days, years, decades;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    decades = years / 10;
    printf("Decades: %f", decades);
    return 0;
}