#include <stdio.h>
int main()
{
    float months, days, hours, minutes;
    printf("Enter months: ");
    scanf("%f", &months);
    days = months * 30.44;
    hours = days * 24;
    minutes = hours * 60;
    printf("Minutes: %f", minutes);
    return 0;
}