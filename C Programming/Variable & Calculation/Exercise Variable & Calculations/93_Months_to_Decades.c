#include <stdio.h>
int main()
{
    float months, years, decades;
    printf("Enter months: ");
    scanf("%f", &months);
    years = months / 12;
    decades = years / 10;
    printf("Decades: %f", decades);
    return 0;
}
