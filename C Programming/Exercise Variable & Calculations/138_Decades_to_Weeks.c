#include <stdio.h>
int main()
{
    float decades, years, days, weeks;
    printf("Enter decades: ");
    scanf("%f", &decades);
    years = decades * 10;
    days = years * 365;
    weeks = days / 7;
    printf("Weeks: %f", weeks);
    return 0;
}