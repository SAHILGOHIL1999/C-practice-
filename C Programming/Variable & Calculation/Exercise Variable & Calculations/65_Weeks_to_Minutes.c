#include <stdio.h>
int main()
{
    float weeks, days, hours, minutes;
    printf("Enter weeks: ");
    scanf("%f", &weeks);
    days = weeks * 7;
    hours = days * 24;
    minutes = hours * 60;
    printf("Minutes: %f", minutes);
    return 0;
}