#include <stdio.h>
int main()
{
    float months, years;
    printf("Enter months: ");
    scanf("%f", &months);
    years = months / 12;
    printf("Years: %f", years);
    return 0;
}