#include <stdio.h>
int main()
{
    float weeks, days, hours, minutes, seconds;
    printf("Enter weeks: ");
    scanf("%f", &weeks);
    days = weeks * 7;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("Seconds: %f", seconds);
    return 0;
}