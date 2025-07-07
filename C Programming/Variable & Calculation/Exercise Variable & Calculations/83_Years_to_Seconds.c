#include <stdio.h>
int main()
{
    float years, days, hours, minutes, seconds;
    printf("Enter years: ");
    scanf("%f", &years);
    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("Seconds: %f", seconds);
    return 0;
}
