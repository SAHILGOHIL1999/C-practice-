#include <stdio.h>
int main()
{
    float minutes, hours, days, years, cen;

    printf("Enter Hours : ");
    scanf("%f", &hours);

    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;
    cen = years / 100;

    printf("Centuries : %f", cen);
    return 0;
}