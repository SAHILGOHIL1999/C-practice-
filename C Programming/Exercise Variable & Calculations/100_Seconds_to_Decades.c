#include <stdio.h>
int main()
{
    float seconds, minutes, hours, days, years, decades;
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    decades = years / 10;
    printf("Decades: %f", decades);
    return 0;
}