#include <stdio.h>
int main()
{
    float minutes, hours, days, years, mill;

    printf("Enter Hours : ");
    scanf("%f", &hours);

    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    mill = years / 1000;

    printf("Millennium : %f", mill);
    return 0;
}