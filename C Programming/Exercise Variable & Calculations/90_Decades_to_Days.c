#include <stdio.h>
int main()
{
    float decades, years, days;
    printf("Enter decades: ");
    scanf("%f", &decades);
    years = decades * 10;
    days = years * 365;
    printf("Days: %f", days);
    return 0;
}