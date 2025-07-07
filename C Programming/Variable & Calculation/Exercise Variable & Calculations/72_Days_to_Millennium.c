#include <stdio.h>
int main()
{
    float days, years, millennium;
    printf("Enter days: ");
    scanf("%f", &days);
    years = days / 365;
    millennium = years / 1000;
    printf("Millennium: %f", millennium);
    return 0;
}