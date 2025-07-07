#include <stdio.h>
int main()
{
    float months, years, millennium;
    printf("Enter months: ");
    scanf("%f", &months);
    years = months / 12;
    millennium = years / 1000;
    printf("Millennium: %f", millennium);
    return 0;
}