#include <stdio.h>
int main()
{
    float days, years, centuries;
    printf("Enter days: ");
    scanf("%f", &days);
    years = days / 365;
    centuries = years / 100;
    printf("Centuries: %f", centuries);
    return 0;
}