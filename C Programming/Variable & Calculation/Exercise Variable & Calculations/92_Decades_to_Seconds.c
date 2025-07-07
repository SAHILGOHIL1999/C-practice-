#include <stdio.h>
int main()
{
    float decades, years, days, hours, minutes, seconds;
    printf("Enter decades: ");
    scanf("%f", &decades);
    years = decades * 10;
    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("Seconds: %f", seconds);
    return 0;
}
