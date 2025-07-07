#include <stdio.h>
int main()
{
    float weeks, days, hours;
    printf("Enter weeks: ");
    scanf("%f", &weeks);
    days = weeks * 7;
    hours = days * 24;
    printf("Hours: %f", hours);
    return 0;
}