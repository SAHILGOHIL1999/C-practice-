#include <stdio.h>
int main()
{
    float minutes, hours, days, years;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    printf("Years: %f", years);
    return 0;
}
