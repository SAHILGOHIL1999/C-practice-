#include <stdio.h>
int main()
{
    float months, years, centuries;
    printf("Enter months: ");
    scanf("%f", &months);
    years = months / 12;
    centuries = years / 100;
    printf("Centuries: %f", centuries);
    return 0;
}
