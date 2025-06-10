#include <stdio.h>
int main()
{
    float days, hours;
    printf("Enter days: ");
    scanf("%f", &days);
    hours = days * 24;
    printf("Hours: %f", hours);
    return 0;
}