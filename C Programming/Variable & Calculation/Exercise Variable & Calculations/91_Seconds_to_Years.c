#include <stdio.h>
int main()
{
    float seconds, minutes, hours, days, years;
    printf("Enter seconds: ");
    scanf("%f", &seconds);
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    printf("Years: %f", years);
    return 0;
}
